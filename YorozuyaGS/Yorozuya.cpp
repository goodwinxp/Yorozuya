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
        , m_spModuleRegistry(CModuleRegistry::get_instance())
    {
        m_AtfCoreRegistry.registry();
    }

    void CYorozuya::start()
    {
        std::call_once(m_ofStart, [this] {
            configure();

            m_spModuleRegistry->load();

            ::_beginthread(&CYorozuya::s_routine, 0, (void *)this);
        });
    }

    void CYorozuya::stop()
    {
        std::call_once(m_ofStop, [this] {
            m_spModuleRegistry->unload();

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
        std::unique_lock<std::mutex> RoutineLock(m_mtxRoutine);
        
        {
            std::unique_lock<std::mutex> lock(m_mtxCondition);
            while(!m_cvCondition.wait_for(lock, m_timeWaitOpenWorld, [this] {
                return ATF::global::g_MainThread->m_bWorldOpen || m_bStop.load();
            }));
        }

        for (;!m_bStop.load(); std::this_thread::sleep_for(m_timeStepDelay))
        {
            m_spModuleRegistry->loop();
        }

        RoutineLock.unlock();

        ::_endthreadex(0);
    }

    void CYorozuya::configure()
    {
        std::ifstream ifs(L"./YorozuyaGS/global.json");

        rapidjson::IStreamWrapper isw(ifs);
        rapidjson::Document GlobalConfig;
        if (GlobalConfig.ParseStream(isw).HasParseError()); // todo logging

        const auto&  cfgIntervals = GlobalConfig["intervals"];
        m_timeWaitOpenWorld = std::chrono::milliseconds(cfgIntervals["open_world_wait"].GetUint64());
        m_timeStepDelay = std::chrono::milliseconds(cfgIntervals["step_delay"].GetUint64());
        
        m_spModuleRegistry->configure(GlobalConfig["registry"]);
    }

    #define DllExport __declspec(dllexport)
    extern "C" DllExport void YorozuyaGS()
    {
    }
}
