#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CUnit : public IModule, CModuleRegister<CUnit>
        {
        public:
            CUnit() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
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
