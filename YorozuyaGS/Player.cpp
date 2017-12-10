#include "stdafx.h"

#include "ETypes.h"
#include "Player.h"
#include "PlayerEx.h"
#include "PlayerEx_PvpOrderViewDB.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            using namespace GameServer::Extension;
        }

        void CPlayer::load()
        {
            init_player_ex();
            init_db_connection();

            enable_hook(&ATF::CPlayer::Load, &CPlayer::Load);
            enable_hook(&ATF::CPlayer::Loop, &CPlayer::Loop);
            enable_hook(&ATF::CPlayer::NetClose, &CPlayer::NetClose);
            enable_hook(&ATF::CPlayer::CalcPvP, &CPlayer::CalcPvP);
            enable_hook(&ATF::CPlayer::CalPvpTempCash, &CPlayer::CalPvpTempCash);
            enable_hook(&ATF::CPlayer::UpdatePvpOrderView, &CPlayer::UpdatePvpOrderView);
            enable_hook(&ATF::CPlayer::pc_MovePortal, &CPlayer::pc_MovePortal);
            enable_hook(&ATF::CPlayer::pc_MakeTrapRequest, &CPlayer::pc_MakeTrapRequest);
            enable_hook(&ATF::CPlayer::pc_MakeTowerRequest, &CPlayer::pc_MakeTowerRequest);
            enable_hook(&ATF::CPlayer::pc_GestureRequest, &CPlayer::pc_GestureRequest);
            enable_hook(&ATF::CPlayer::pc_CharacterRenameCheck, &CPlayer::pc_CharacterRenameCheck);
            enable_hook(&ATF::CPlayer::pc_GotoBasePortalRequest, &CPlayer::pc_GotoBasePortalRequest);
            enable_hook(&ATF::CPlayer::pc_ThrowStorageItem, &CPlayer::pc_ThrowStorageItem);
            enable_hook(&ATF::CPlayer::pc_ExchangeItem, &CPlayer::pc_ExchangeItem);

            enable_hook(&ATF::CPlayer::pc_MoveNext, &CPlayer::pc_MoveNext);
            enable_hook(&ATF::CPlayer::pc_RealMovPos, &CPlayer::pc_RealMovPos);
            enable_hook(&ATF::CPlayer::pc_MoveStop, &CPlayer::pc_MoveStop);

            enable_hook(&ATF::CMainThread::CheckDayChangedPvpPointClear, &CPlayer::CheckDayChangedPvpPointClear);
        }

        void CPlayer::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CPlayer::get_name()
        {
            static const ModuleName_t name = "fix_Player";
            return name;
        }

        void CPlayer::init_player_ex()
        {
            auto& player_ex = CPlayerEx::get_instance();
            for (size_t i = 0; i < ATF::Global::max_player; ++i)
            {
                player_ex->init_player(i, &ATF::Global::g_Player[i]);
            }
        }

        void CPlayer::init_db_connection()
        {
            CPvpOrderViewDB::get_instance()->AdjustTable();
        }

        void WINAPIV CPlayer::pc_MakeTrapRequest(
            ATF::CPlayer * pObj,
            uint16_t wSkillIndex,
            uint16_t wTrapItemSerial,
            float * pfPos,
            uint16_t * pConsumeSerial,
            ATF::Info::CPlayerpc_MakeTrapRequest1783_ptr next)
        {
            UNREFERENCED_PARAMETER(pfPos);
            uint8_t byErrCode = 0;
            do
            {
                if (pObj->IsMapLoading())
                {
                    byErrCode = 1;
                    break;
                }

                auto pTrapItem = pObj->m_Param.m_dbInven.GetPtrFromSerial(wTrapItemSerial);
                if (!pTrapItem)
                {
                    byErrCode = 1;
                    break;
                }

                if (pTrapItem->m_byTableCode != (BYTE)e_code_item_table::tbl_code_trap)
                {
                    byErrCode = 1;
                    break;
                }

                if (!pObj->IsEffectableEquip(pTrapItem))
                {
                    byErrCode = 1;
                    break;
                }

                next(pObj, wSkillIndex, wTrapItemSerial, pObj->m_fCurPos, pConsumeSerial);
            } while (false);


            if (byErrCode != 0)
                pObj->SendMsg_CreateTowerResult(byErrCode, -1);
        }

        void WINAPIV CPlayer::pc_MakeTowerRequest(
            ATF::CPlayer * pObj, 
            uint16_t wSkillIndex, 
            uint16_t wTowerItemSerial, 
            char byMaterialNum, 
            ATF::_make_tower_request_clzo::__material * pMaterial, 
            float * pfPos, 
            uint16_t * pConsumeSerial,
            ATF::Info::CPlayerpc_MakeTowerRequest1781_ptr next)
        {
            UNREFERENCED_PARAMETER(pfPos);
            uint8_t byErrCode = 0;
            do
            {
                if (pObj->IsMapLoading())
                {
                    byErrCode = 1;
                    break;
                }

                auto pTrapItem = pObj->m_Param.m_dbInven.GetPtrFromSerial(wTowerItemSerial);
                if (!pTrapItem)
                {
                    byErrCode = 1;
                    break;
                }

                if (pTrapItem->m_byTableCode != (BYTE)e_code_item_table::tbl_code_tower)
                {
                    byErrCode = 1;
                    break;
                }

                if (!pObj->IsEffectableEquip(pTrapItem))
                {
                    byErrCode = 1;
                    break;
                }

                next(pObj, wSkillIndex, wTowerItemSerial, byMaterialNum, pMaterial, pObj->m_fCurPos, pConsumeSerial);
            } while (false);

            if (byErrCode != 0)
                pObj->SendMsg_CreateTowerResult(byErrCode, -1);
        }

        void WINAPIV CPlayer::pc_GestureRequest(
            ATF::CPlayer * pObj, 
            char byGestureType, 
            ATF::Info::CPlayerpc_GestureRequest1719_ptr next)
        {
            if (pObj->IsMineMode())
                return;

            if (pObj->IsActingSiegeMode() || pObj->IsSiegeMode())
                return;

            if (pObj->IsRidingUnit())
                return;

            next(pObj, byGestureType);
        }
        
        void WINAPIV CPlayer::pc_MovePortal(
            ATF::CPlayer * pObj, 
            int nPortalIndex, 
            uint16_t * pConsumeSerial, 
            ATF::Info::CPlayerpc_MovePortal1795_ptr next)
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
            ATF::Info::CPlayerpc_CharacterRenameCheck1629_ptr next)
        {
            if (ATF::Global::IsSQLValidString(strCharacterName))
                return next(pObj, strCharacterName);

            return 6;
        }

        void WINAPIV CPlayer::pc_GotoBasePortalRequest(
            ATF::CPlayer * pObj, 
            unsigned __int16 wItemSerial, 
            ATF::Info::CPlayerpc_GotoBasePortalRequest1725_ptr next)
        {
            if (pObj->m_byUserDgr == 0)
            {
                if (pObj->Is_Battle_Mode())
                {
                    pObj->SendMsg_GotoBasePortalResult(8);
                    return;
                }

                if (wItemSerial == 0xffff)
                {
                    pObj->SendMsg_GotoBasePortalResult(8);
                    return;
                }
            }

            next(pObj, wItemSerial);
        }

        void WINAPIV CPlayer::pc_ThrowStorageItem(
            ATF::CPlayer * pObj, 
            ATF::_STORAGE_POS_INDIV* pItem,
            ATF::Info::CPlayerpc_ThrowStorageItem1953_ptr next)
        {
            if (!pObj->m_pUserDB)
                return;

            char byResult = 0;

            do
            {
                auto pStoragePtr = pObj->m_Param.m_pStoragePtr[pItem->byStorageCode];
                if (pObj->m_EP.GetEff_State(ATF::_EFF_STATE::Stone_Lck))
                {
                    byResult = 5;
                    break;
                }

                if (pObj->m_EP.GetEff_State(ATF::_EFF_STATE::Invincible))
                {
                    byResult = 5;
                    break;
                }

                auto pSrc = pStoragePtr->GetPtrFromSerial(pItem->wItemSerial);
                if (!pSrc)
                {
                    byResult = 2;
                    break;
                }

                if (pSrc->m_bLock)
                {
                    byResult = 9;
                    break;
                }

                if (ATF::Global::IsOverLapItem(pSrc->m_byTableCode))
                {
                    if (pItem->byNum <= 0 || pItem->byNum > pSrc->m_dwDur)
                    {
                        pObj->SendMsg_AdjustAmountInform(pItem->byStorageCode, pItem->wItemSerial, static_cast<unsigned int>(pSrc->m_dwDur));
                        byResult = 3;
                        break;
                    }
                }

                next(pObj, pItem);
            } while (false);

            pObj->SendMsg_ThrowStorageResult(byResult);
        }

        void WINAPIV CPlayer::pc_ExchangeItem(
            ATF::CPlayer * pPlayer, 
            unsigned __int16 wManualIndex, 
            unsigned __int16 wItemSerial, 
            ATF::Info::CPlayerpc_ExchangeItem1711_ptr next)
        {
            uint8_t byResult = 0;
            do
            {
                auto pCon = pPlayer->m_Param.m_dbInven.GetPtrFromSerial(wItemSerial);
                if (!pCon)
                {
                    byResult = 4;
                    break;
                }

                if (pCon->m_bLock)
                {
                    byResult = 4;
                    break;
                }

                if (pCon->m_byTableCode != (uint8_t)e_code_item_table::tbl_code_box)
                {
                    byResult = 12;
                    break;
                }

                if (pCon->m_dwDur <= 0 || pCon->m_dwDur > 99)
                {
                    byResult = 4;
                    break;
                }

                next(pPlayer, wManualIndex, wItemSerial);
                return;
            } while (false);

            ATF::_STORAGE_LIST::_db_con pNewItem;
            pPlayer->SendMsg_ExchangeItemResult(byResult, &pNewItem);
        }

    }
}