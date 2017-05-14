#include "stdafx.h"

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
            static const ModuleName_t name = "fix_miningore";
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
            ATF::info::CPlayerpc_MineStart1789_ptr next)
        {
            // todo : remove hardcoded max count
            if (byOreIndex > 14)
            {
                pPlayer->SendMsg_MineStartResult(9);
                return;
            }

            next(pPlayer, byMineIndex, byOreIndex, wBatterySerial);
        }
    }
}