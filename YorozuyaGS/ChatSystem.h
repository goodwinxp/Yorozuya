#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CChatSystem : public IModule, CModuleRegister<CChatSystem>
        {
        public:
            CChatSystem() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV pc_ChatFarRequest(
                ATF::CPlayer *pPlayer,
                char *pwszName,
                char *pwszChatData,
                ATF::info::CPlayerpc_ChatFarRequest1635_ptr next);
        };
    };
};
