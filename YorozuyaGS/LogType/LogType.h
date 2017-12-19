#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <atomic>
#include <ATF/CLogTypeDBTaskManagerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CLogType
            : public Yorozuya::Module::IModule
            , CModuleRegister<CLogType>
        {
        public:
            CLogType() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

        private:
            static std::atomic<bool> m_bDBProcDestroy;
            static std::mutex m_mtxDestroy;

        private:
            static void WINAPIV ProcThread(
                void* pParam,
                ATF::Info::CLogTypeDBTaskManagerProcThread32_ptr next);

            static void WINAPIV dtor_CLogTypeDBTaskManager(
                ATF::CLogTypeDBTaskManager* pObj,
                ATF::Info::CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_ptr next);
        };
    };
};
