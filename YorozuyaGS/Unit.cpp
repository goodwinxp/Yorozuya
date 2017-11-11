#include "stdafx.h"

#include "Unit.h"

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CUnit::load()
        {
            auto& core = CATFCore::get_instance();
            enable_hook(&CPlayer::pc_UnitDeliveryRequest, &CUnit::pc_UnitDeliveryRequest);
        }

        void CUnit::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::pc_UnitDeliveryRequest);
        }

        ModuleName_t CUnit::get_name()
        {
            static const ModuleName_t name = "fix_Unit";
            return name;
        }

        void WINAPIV CUnit::pc_UnitDeliveryRequest(
            CPlayer* pPlayer,
            char bySlotIndex, 
            CItemStore * pStore, 
            bool bPayFee, 
            float * pfNewPos, 
            int bUseNPCLinkIntem, 
            ATF::Info::CPlayerpc_UnitDeliveryRequest1995_ptr next)
        {
            UNREFERENCED_PARAMETER(pfNewPos);
            next(pPlayer, bySlotIndex, pStore, bPayFee, pPlayer->m_fCurPos, bUseNPCLinkIntem);
        }
    }
}
