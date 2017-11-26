#include "stdafx.h"

#include "Unit.h"

namespace GameServer
{
    namespace Fixes
    {
        void CUnit::load()
        {
            enable_hook(&ATF::CPlayer::pc_UnitDeliveryRequest, &CUnit::pc_UnitDeliveryRequest);
        }

        void CUnit::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CUnit::get_name()
        {
            static const ModuleName_t name = "fix_Unit";
            return name;
        }

        void WINAPIV CUnit::pc_UnitDeliveryRequest(
            ATF::CPlayer* pPlayer,
            char bySlotIndex, 
            ATF::CItemStore * pStore,
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
