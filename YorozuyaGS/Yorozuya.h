#pragma once

#include <chrono>
#include <atomic>
#include <thread>
#include <mutex>

#include "ModuleRegistry.h"
#include "../Common/Helpers/SingletonHelper.hpp"


namespace GameServer
{
    using namespace SingletonHelper;
    class CYorozuya : public CSingleton<CYorozuya>
    {
    public:
        CYorozuya();

        void start();

        void stop();

    private:
        static void s_routine(void *pObj);

        void routine();

        void configure();

    private:
        std::chrono::milliseconds m_timeStepDelay;
        std::chrono::milliseconds m_timeWaitOpenWorld;

        std::once_flag m_ofStart;
        std::once_flag m_ofStop;

        std::atomic<bool> m_bStop = false;
        std::mutex m_mtxCondition;
        std::mutex m_mtxRoutine;
        std::condition_variable m_cvCondition;

        ATF::CATFCoreRegistry& m_AtfCoreRegistry;
        CModuleRegistry::InstancePtr m_spModuleRegistry;
    };
}
