#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/Global__GlobalInfo.hpp>
#include <ATF/CMainThreadInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CCheatCommand 
            : public Yorozuya::Module::IModule
            , CModuleRegister<CCheatCommand>
        {
        public:
            CCheatCommand() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

        private:
            static bool WINAPIV AuthorityFilter(
                ATF::CHEAT_COMMAND* pCmd, 
                ATF::CPlayer* pOne,
                ATF::Global::Info::AuthorityFilter25_ptr next);

            static bool WINAPIV Init(
                ATF::CMainThread* pObj,
                ATF::Info::CMainThreadInit88_ptr next);
        };
    };
};
