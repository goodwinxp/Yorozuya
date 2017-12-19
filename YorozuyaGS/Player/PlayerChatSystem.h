#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerChatSystem
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerChatSystem>
        {
        public:
            CPlayerChatSystem() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV pc_ChatFarRequest(
                ATF::CPlayer *pPlayer,
                char *pwszName,
                char *pwszChatData,
                ATF::Info::CPlayerpc_ChatFarRequest1635_ptr next);
        };
    };
};
