#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CGuildInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CGuild : public IModule, CModuleRegister<CGuild>
        {
        public:
            CGuild() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static char WINAPIV ManageAcceptORRefuseGuildBattle(
                ATF::CGuild* pObj, 
                bool bAccept, 
                ATF::Info::CGuildManageAcceptORRefuseGuildBattle80_ptr next);

            static void WINAPIV pc_GuildRoomEnterRequest(
                ATF::CPlayer *pPlayer,
                ATF::_guildroom_enter_request_clzo* pProtocol,
                ATF::Info::CPlayerpc_GuildRoomEnterRequest1755_ptr next);

            static void WINAPIV pc_GuildRoomOutRequest(
                ATF::CPlayer *pPlayer,
                ATF::_guildroom_out_request_clzo* pProtocol,
                ATF::Info::CPlayerpc_GuildRoomOutRequest1757_ptr next);
        };
    };
};
