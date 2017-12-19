#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerMiningOre
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerMiningOre>
        {
        public:
            CPlayerMiningOre() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV pc_MineStart(
                ATF::CPlayer* pPlayer, 
                char byMineIndex, 
                char byOreIndex, 
                uint16_t wBatterySerial, 
                ATF::Info::CPlayerpc_MineStart1789_ptr);
        };
    };
};
