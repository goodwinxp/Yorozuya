#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerUnit
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerUnit>
        {
        public:
            CPlayerUnit() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

        private:
            static void WINAPIV pc_UnitDeliveryRequest(
                ATF::CPlayer* pPlayer,
                char bySlotIndex,
                struct ATF::CItemStore* pStore,
                bool bPayFee,
                float* pfNewPos,
                int bUseNPCLinkIntem,
                ATF::Info::CPlayerpc_UnitDeliveryRequest1995_ptr next);
        };
    };
};
