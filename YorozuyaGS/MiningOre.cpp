#include "stdafx.h"

#include "ETypes.h"
#include "MiningOre.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CMiningOre::load()
        {
            enable_hook(&CPlayer::pc_MineStart, &CMiningOre::pc_MineStart);
        }

        void CMiningOre::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CMiningOre::get_name()
        {
            static const ModuleName_t name = "fix_MiningOre";
            return name;
        }

        static const char* const ItemsOre[] = {
            "ioblu04",
            "iored04",
            "ioyel04",
            "iogre04",
            "iobla04"
        };

        void WINAPIV CMiningOre::pc_MineStart(
            ATF::CPlayer* pPlayer,
            char byMineIndex,
            char byOreIndex,
            uint16_t wBatterySerial,
            ATF::Info::CPlayerpc_MineStart1789_ptr next)
        {
            auto pOreFld = ATF::Global::g_MainThread->m_tblItemData[(int)e_code_item_table::tbl_code_ore].GetRecord(byOreIndex);
            if (pOreFld == nullptr)
            {
                pPlayer->SendMsg_MineStartResult(9);
                return;
            }

            for (const auto& item : ItemsOre)
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