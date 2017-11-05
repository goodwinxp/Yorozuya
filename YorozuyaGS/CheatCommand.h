#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/Global__GlobalInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CCheatCommand : public IModule, CModuleRegister<CCheatCommand>
        {
        public:
            CCheatCommand() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static bool WINAPIV AuthorityFilter(
                ATF::CHEAT_COMMAND* pCmd, 
                ATF::CPlayer* pOne,
                ATF::Global::Info::AuthorityFilter25_ptr next);
        };
    };
};
