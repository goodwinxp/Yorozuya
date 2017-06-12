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
            core.set_hook(&CPlayer::pc_UnitDeliveryRequest, &CUnit::pc_UnitDeliveryRequest);
        }

        void CUnit::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::pc_UnitDeliveryRequest);
        }

        void CUnit::loop()
        {
        }

        ModuleVersion_t CUnit::get_version()
        {
            return usVersion;
        }

        ModuleName_t CUnit::get_name()
        {
            static const ModuleName_t name = "fix_Unit";
            return name;
        }

        void CUnit::configure(const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CUnit::pc_UnitDeliveryRequest(
            CPlayer* pPlayer,
            char bySlotIndex, 
            CItemStore * pStore, 
            bool bPayFee, 
            float * pfNewPos, 
            int bUseNPCLinkIntem, 
            info::CPlayerpc_UnitDeliveryRequest1995_ptr next)
        {
            UNREFERENCED_PARAMETER(pfNewPos);
            next(pPlayer, bySlotIndex, pStore, bPayFee, pPlayer->m_fCurPos, bUseNPCLinkIntem);
        }
    }
}
