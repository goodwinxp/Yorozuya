#include "stdafx.h"

#include "PlayerMiningOre.h"
#include "../Common/ETypes.h"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerMiningOre::load()
        {
            enable_hook(&ATF::CPlayer::pc_MineStart, &CPlayerMiningOre::pc_MineStart);
        }

        void CPlayerMiningOre::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerMiningOre::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.mining_ore";
            return name;
        }

        void WINAPIV CPlayerMiningOre::pc_MineStart(
            ATF::CPlayer* pPlayer,
            char byMineIndex,
            char byOreIndex,
            uint16_t wBatterySerial,
            ATF::Info::CPlayerpc_MineStart1789_ptr next)
        {
            static const char* const szDeprecatedItemsOre[] =
            {
                "ioblu04",
                "iored04",
                "ioyel04",
                "iogre04",
                "iobla04"
            };

            auto pOreFld = ATF::Global::g_MainThread->m_tblItemData[(int)e_code_item_table::tbl_code_ore].GetRecord(byOreIndex);
            if (pOreFld == nullptr)
            {
                pPlayer->SendMsg_MineStartResult(9);
                return;
            }

            for (const auto& item : szDeprecatedItemsOre)
            {
                if (*(uint64_t*)pOreFld->m_strCode == *(uint64_t*)item)
                {
                    pPlayer->SendMsg_MineStartResult(9);
                    return;
                }
            }
            
            next(pPlayer, byMineIndex, byOreIndex, wBatterySerial);
        }
    }
}