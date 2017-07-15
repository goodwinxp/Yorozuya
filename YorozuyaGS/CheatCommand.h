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

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

        private:
            static bool WINAPIV AuthorityFilter(
                ATF::CHEAT_COMMAND* pCmd, 
                ATF::CPlayer* pOne,
                ATF::Global::Info::AuthorityFilter25_ptr next);
        };
    };
};
