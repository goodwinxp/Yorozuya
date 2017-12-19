#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerGuild
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerGuild>
        {
        public:
            CPlayerGuild() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV pc_GuildRoomEnterRequest(
                ATF::CPlayer *pPlayer,
                ATF::_guildroom_enter_request_clzo* pProtocol,
                ATF::Info::CPlayerpc_GuildRoomEnterRequest1755_ptr next);

            static void WINAPIV pc_GuildRoomOutRequest(
                ATF::CPlayer *pPlayer,
                ATF::_guildroom_out_request_clzo* pProtocol,
                ATF::Info::CPlayerpc_GuildRoomOutRequest1757_ptr next);

            static void WINAPIV pc_GuildManageRequest(
                ATF::CPlayer *pPlayer,
                char byType,
                unsigned int dwDst,
                unsigned int dwObj1,
                unsigned int dwObj2,
                unsigned int dwObj3,
                ATF::Info::CPlayerpc_GuildManageRequest1745_ptr next);
        };
    };
};
