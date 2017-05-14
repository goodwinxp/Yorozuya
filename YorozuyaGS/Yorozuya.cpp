#include "stdafx.h"

#include <process.h>
#include <fstream>
#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>

#include "Yorozuya.h"


namespace GameServer
{
    CYorozuya::CYorozuya()
        : m_AtfCoreRegistry(ATF::CATFCoreRegistry::get_instance())
        , m_ModuleRegistry(CModuleRegistry::get_instance())
    {
        m_AtfCoreRegistry.registry();
    }

    void CYorozuya::start()
    {
        std::call_once(m_ofStart, [this] {
            configure();

            m_ModuleRegistry.load();

            ::_beginthread(&CYorozuya::s_routine, 0, (void *)this);
        });
    }

    void CYorozuya::stop()
    {
        std::call_once(m_ofStop, [this] {
            m_ModuleRegistry.unload();

            m_bStop.store(true);
            m_cvCondition.notify_all();
            std::unique_lock<std::mutex> RoutineLock(m_mtxRoutine);
        });
    }

    void CYorozuya::s_routine(void* pObj)
    {
        ((CYorozuya*)(pObj))->routine();
    }

    void CYorozuya::routine()
    {
        using namespace std::chrono;
        std::unique_lock<std::mutex> RoutineLock(m_mtxRoutine);
        
        { // prewait
            std::unique_lock<std::mutex> lock(m_mtxCondition);
            while(!m_cvCondition.wait_for(lock, 10s, [] {
                return ATF::global::g_MainThread->m_bWorldOpen;
            }));
        }

        for (;!m_bStop.load();)
        {
            m_ModuleRegistry.loop();

            std::unique_lock<std::mutex> lock(m_mtxCondition);
            if (m_cvCondition.wait_for(lock, 5s, [this] { return m_bStop.load(); }))
                break;
        }
        RoutineLock.unlock();

        ::_endthreadex(0);
    }

    void CYorozuya::configure()
    {
        std::ifstream ifs(L"./YorozuyaGS/global.json");

        rapidjson::IStreamWrapper isw(ifs);
        rapidjson::Document GlobalConfig;
        if (GlobalConfig.ParseStream(isw).HasParseError())
        {
            // todo : logging
        }
        
        m_ModuleRegistry.configure(GlobalConfig["registry"]);
    }

    #define DllExport __declspec(dllexport)
    extern "C" DllExport void YorozuyaGS()
    {
    }
}
