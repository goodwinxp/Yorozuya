#include "stdafx.h"

#include "UnitDelivery.h"

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CUnitDelivery::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&CPlayer::pc_UnitDeliveryRequest, &CUnitDelivery::pc_UnitDeliveryRequest);
        }

        void CUnitDelivery::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::pc_UnitDeliveryRequest);
        }

        void CUnitDelivery::loop()
        {
        }

        ModuleVersion_t CUnitDelivery::get_version()
        {
            return usVersion;
        }

        ModuleName_t CUnitDelivery::get_name()
        {
            static const ModuleName_t name = "fix_unitdelivery";
            return name;
        }

        void CUnitDelivery::configure(const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CUnitDelivery::pc_UnitDeliveryRequest(
            CPlayer* pPlayer,
            char bySlotIndex, 
            CItemStore * pStore, 
            bool bPayFee, 
            float * pfNewPos, 
            int bUseNPCLinkIntem, 
            info::CPlayerpc_UnitDeliveryRequest1995_ptr next)
        {
            next(pPlayer, bySlotIndex, pStore, bPayFee, pPlayer->m_fCurPos, bUseNPCLinkIntem);
        }
    }
}
