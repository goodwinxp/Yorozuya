#include "stdafx.h"

#include "PlayerChatSystem.h"
#include <ATF/Global.hpp>
#include "../../Common/Helpers/Memory.hpp"

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerChatSystem::load()
        {
            Memory::WriteMemory(0x14009181DL, 0x90909090);
            Memory::WriteMemory(0x14009181FL, 0x90909090);
        }

        void CPlayerChatSystem::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerChatSystem::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.chat_system";
            return name;
        }
    }
}