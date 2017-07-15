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
            auto& core = CATFCore::get_instance();
            core.set_hook(&CPlayer::pc_MineStart, &CMiningOre::pc_MineStart);
        }

        void CMiningOre::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::pc_MineStart);
        }

        void CMiningOre::loop()
        {
        }

        ModuleVersion_t CMiningOre::get_version()
        {
            return usVersion;
        }

        ModuleName_t CMiningOre::get_name()
        {
            static const ModuleName_t name = "fix_MiningOre";
            return name;
        }

        void CMiningOre::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

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

            next(pPlayer, byMineIndex, byOreIndex, wBatterySerial);
        }
    }
}