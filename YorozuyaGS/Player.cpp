#include "stdafx.h"

#include "Player.h"
#include "ETypes.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayer::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::CalcPvP, &CPlayer::CalcPvP);
            core.set_hook(&ATF::CPlayer::CalPvpTempCash, &CPlayer::CalPvpTempCash);
            core.set_hook(&ATF::CPlayer::pc_MakeTrapRequest, &CPlayer::pc_MakeTrapRequest);
            core.set_hook(&ATF::CPlayer::pc_MakeTowerRequest, &CPlayer::pc_MakeTowerRequest);
            core.set_hook(&ATF::CPlayer::pc_GestureRequest, &CPlayer::pc_GestureRequest);
            core.set_hook(&ATF::CPlayer::pc_GuildManageRequest, &CPlayer::pc_GuildManageRequest);
            core.set_hook(&ATF::CPlayer::pc_CharacterRenameCheck, &CPlayer::pc_CharacterRenameCheck);
            core.set_hook(&ATF::CPlayer::pc_GotoBasePortalRequest, &CPlayer::pc_GotoBasePortalRequest);
        }

        void CPlayer::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::CalcPvP);
            core.unset_hook(&ATF::CPlayer::CalPvpTempCash);
            core.unset_hook(&ATF::CPlayer::pc_MakeTrapRequest);
            core.unset_hook(&ATF::CPlayer::pc_MakeTowerRequest);
            core.unset_hook(&ATF::CPlayer::pc_GestureRequest);
            core.unset_hook(&ATF::CPlayer::pc_GuildManageRequest);
            core.unset_hook(&ATF::CPlayer::pc_CharacterRenameCheck);
            core.unset_hook(&ATF::CPlayer::pc_GotoBasePortalRequest);
        }

        void CPlayer::loop()
        {
        }

        ModuleVersion_t CPlayer::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CPlayer::get_name()
        {
            static const ModuleName_t name = "fix_Player";
            return name;
        }

        void CPlayer::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CPlayer::Load(
            ATF::CPlayer * pObj, 
            ATF::CUserDB * pUser, 
            bool bFirstStart, 
            ATF::info::CPlayerLoad366_ptr next)
        {
            bool bResult = next(pObj, pUser, bFirstStart);
            if (bResult && !pObj->m_Param.m_pGuild)
            {
                auto dwDestroyerSerial = ATF::global::g_HolySys->GetDestroyerSerial();
                if (pObj->m_Param.GetCharSerial() != dwDestroyerSerial)
                {
                    pObj->SetLastAttBuff(false);
                }
            }
            return bResult;
        }

        void WINAPIV CPlayer::CalcPvP(
            ATF::CPlayer * pObj, 
            ATF::CPlayer * pDier, 
            char byKillerObjID,
            ATF::info::CPlayerCalcPvP74_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::CalPvpTempCash(
            ATF::CPlayer * pObj, 
            ATF::CPlayer * pDier, 
            char byKillerObjID,
            ATF::info::CPlayerCalPvpTempCash52_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
                return;

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::pc_MakeTrapRequest(
            ATF::CPlayer * pObj,
            uint16_t wSkillIndex,
            uint16_t wTrapItemSerial,
            float * pfPos,
            uint16_t * pConsumeSerial,
            ATF::info::CPlayerpc_MakeTrapRequest1783_ptr next)
        {
            do
            {
                if (pObj->IsMapLoading())
                    break;

                auto pTrapItem = pObj->m_Param.m_dbInven.GetPtrFromSerial(wTrapItemSerial);
                if (!pTrapItem)
                    break;

                if (pTrapItem->m_byTableCode != (BYTE)e_code_item_table::tbl_code_trap)
                    break;

                if (!pObj->IsEffectableEquip(pTrapItem))
                    break;

                next(pObj, wSkillIndex, wTrapItemSerial, pfPos, pConsumeSerial);
            } while (false);
        }

        void WINAPIV CPlayer::pc_MakeTowerRequest(
            ATF::CPlayer * pObj, 
            uint16_t wSkillIndex, 
            uint16_t wTowerItemSerial, 
            char byMaterialNum, 
            ATF::_make_tower_request_clzo::__material * pMaterial, 
            float * pfPos, 
            uint16_t * pConsumeSerial,
            ATF::info::CPlayerpc_MakeTowerRequest1781_ptr next)
        {
            do
            {
                if (pObj->IsMapLoading())
                    break;

                auto pTrapItem = pObj->m_Param.m_dbInven.GetPtrFromSerial(wTowerItemSerial);
                if (!pTrapItem)
                    break;

                if (pTrapItem->m_byTableCode != (BYTE)e_code_item_table::tbl_code_tower)
                    break;

                if (!pObj->IsEffectableEquip(pTrapItem))
                    break;

                next(pObj, wSkillIndex, wTowerItemSerial, byMaterialNum, pMaterial, pfPos, pConsumeSerial);
            } while (false);
        }

        void WINAPIV CPlayer::pc_GestureRequest(
            ATF::CPlayer * pObj, 
            char byGestureType, 
            ATF::info::CPlayerpc_GestureRequest1719_ptr next)
        {
            if (pObj->IsMineMode())
                return;

            if (pObj->IsActingSiegeMode() || pObj->IsSiegeMode())
                return;

            if (pObj->IsRidingUnit())
                return;

            next(pObj, byGestureType);
        }

        void WINAPIV CPlayer::pc_GuildManageRequest(
            ATF::CPlayer * pObj, 
            char byType, 
            unsigned int dwDst, 
            unsigned int dwObj1, 
            unsigned int dwObj2, 
            unsigned int dwObj3, 
            ATF::info::CPlayerpc_GuildManageRequest1745_ptr next)
        {
            if (!pObj->m_Param.m_pGuild)
            {
                pObj->SendMsg_GuildManageResult(202);
                return;
            }

            next(pObj, byType, dwDst, dwObj1, dwObj2, dwObj3);
        }
        
        void WINAPIV CPlayer::pc_MovePortal(
            ATF::CPlayer * pObj, 
            int nPortalIndex, 
            uint16_t * pConsumeSerial, 
            ATF::info::CPlayerpc_MovePortal1795_ptr next)
        {
            if (pObj->Is_Battle_Mode())
            {
                float pNewPos[3]{ 0.0f };
                char byMapIndx = -1;
                char byPortalIndx = -1;

                pObj->SendMsg_MovePortal(4, byMapIndx, byPortalIndx, pNewPos, true);
                return;
            }

            next(pObj, nPortalIndex, pConsumeSerial);;
        }

        char WINAPIV CPlayer::pc_CharacterRenameCheck(
            ATF::CPlayer * pObj, 
            char * strCharacterName, 
            ATF::info::CPlayerpc_CharacterRenameCheck1629_ptr next)
        {
            if (ATF::global::IsSQLValidString(strCharacterName))
                return next(pObj, strCharacterName);

            return 6;
        }

        void WINAPIV CPlayer::pc_GotoBasePortalRequest(
            ATF::CPlayer * pObj, 
            unsigned __int16 wItemSerial, 
            ATF::info::CPlayerpc_GotoBasePortalRequest1725_ptr next)
        {
            if (pObj->Is_Battle_Mode() && pObj->m_byUserDgr == 0)
            {
                pObj->SendMsg_GotoBasePortalResult(8);
                return;
            }

            next(pObj, wItemSerial);
        }
    }
}