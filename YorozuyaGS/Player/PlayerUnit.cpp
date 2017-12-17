#include "stdafx.h"

#include "PlayerUnit.h"

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerUnit::load()
        {
            enable_hook(&ATF::CPlayer::pc_UnitDeliveryRequest, &CPlayerUnit::pc_UnitDeliveryRequest);
        }

        void CPlayerUnit::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerUnit::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.unit";
            return name;
        }

        void WINAPIV CPlayerUnit::pc_UnitDeliveryRequest(
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
