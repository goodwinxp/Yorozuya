#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CMainThreadInfo.hpp>
#include <ATF/CExchangeEvent.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CMainThread
            : public Yorozuya::Module::IModule
            , CModuleRegister<CMainThread>
        {
        public:
            CMainThread() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void zone_start() override;

        private:
            ::std::thread m_thRuleThread;

        private:
            static void WINAPIV CheckForceClose(
                ATF::CMainThread* pObj,
                ATF::Info::CMainThreadCheckForceClose24_ptr next);

            static void WINAPIV OnRun(
                ATF::CMainThread* pObj,
                ATF::Info::CMainThreadOnRun130_ptr next);

            void WINAPIV MyRuleThread();

            void WINAPIV MyOnRun();
        };
    };
};
