#include "stdafx.h"

#include <process.h>
#include <fstream>
#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>

#include <ATF/global.hpp>

#include "Yorozuya.h"
#include "../../Common/Helpers/RapidHelper.hpp"

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
                return ATF::Global::g_MainThread->m_bWorldOpen || m_bStop.load();
            }));
        }

        m_spModuleRegistry->zone_start();

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
        if (GlobalConfig.ParseStream(isw).HasParseError())
        {
            ATF::Global::MyMessageBox("CYorozuya::configure", "Configuration file - corrupted");
            throw std::runtime_error("Configuration file - corrupted");
        }

        const auto&  cfgIntervals = GlobalConfig["intervals"];
        m_timeWaitOpenWorld = std::chrono::milliseconds(
            RapidHelper::GetValue<uint64_t>(cfgIntervals, "open_world_wait"));

        m_timeStepDelay = std::chrono::milliseconds(
            RapidHelper::GetValue<uint64_t>(cfgIntervals, "step_delay"));
        
        m_spModuleRegistry->configure(GlobalConfig["registry"]);
    }

    #define DllExport __declspec(dllexport)
    extern "C" DllExport void YorozuyaGS()
    {
    }
}
