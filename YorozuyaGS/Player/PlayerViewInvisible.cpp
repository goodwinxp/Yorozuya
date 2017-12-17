#include "stdafx.h"

#include "PlayerViewInvisible.h"
#include "../Common/ETypes.h"

#include <cmath>
#include <bitset>
#include <ATF/global.hpp>
#include <ATF/_player_fixpositon_zocl.hpp>
#include <ATF/_player_real_move_zocl.hpp>
#include <ATF/CGameObjectInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerViewInvisible::load()
        {
            enable_hook(
                (void(ATF::CGameObject::*)(char*, char*, int, bool))&ATF::CGameObject::CircleReport,
                &CPlayerViewInvisible::CGameObject__CircleReport);
            enable_hook(&ATF::CPlayer::SenseState, &CPlayerViewInvisible::SenseState);
            enable_hook(&ATF::CPlayer::SendMsg_FixPosition, &CPlayerViewInvisible::SendMsg_FixPosition);
            enable_hook(&ATF::CPlayer::SendMsg_RealMovePoint, &CPlayerViewInvisible::SendMsg_RealMovePoint);
            enable_hook(&ATF::CPlayer::SendMsg_OtherShapePart, &CPlayerViewInvisible::SendMsg_OtherShapePart);
            enable_hook(&ATF::CPlayer::SendMsg_OtherShapeAll, &CPlayerViewInvisible::SendMsg_OtherShapeAll);
        }

        void CPlayerViewInvisible::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerViewInvisible::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.view_invisible";
            return name;
        }

        void WINAPIV CPlayerViewInvisible::SendMsg_StateInform(
            ATF::CPlayer * pPlayer,
            uint64_t dwStateFlag,
            bool bBreakTransparant)
        {
            if (bBreakTransparant)
                pPlayer->SendMsg_NewViewOther(3);

            pPlayer->SendMsg_StateInform(dwStateFlag);
        }

        void WINAPIV CPlayerViewInvisible::SenseState(
            ATF::CPlayer * pPlayer,
            ATF::Info::CPlayerSenseState1188_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            ::std::bitset<64> oldStateFlag(pPlayer->GetStateFlag());
            pPlayer->SetStateFlag();
            ::std::bitset<64> newStateFlag(pPlayer->GetStateFlag());

            if (oldStateFlag != newStateFlag)
            {
                bool bBreakTransparant = false;
                for (int indx : {2, 9, 51, 52})
                {
                    if (!bBreakTransparant)
                        bBreakTransparant = oldStateFlag.test(indx) ? !newStateFlag.test(indx) : false;
                }

                CPlayerViewInvisible::SendMsg_StateInform(pPlayer, pPlayer->GetStateFlag(), bBreakTransparant);
            }
        }

        bool check_conditions(ATF::CPlayer *pPlayer, ATF::CPlayer *pDst)
        {
            bool bPassed = false;
            do
            {
                if (pPlayer->m_ObjID.m_byKind != (int)e_obj_id::obj_id_player ||
                    pDst->m_ObjID.m_byKind != (int)e_obj_id::obj_id_player)
                {
                    bPassed = true;
                    break;
                }
                
                if (pPlayer->m_bObserver && !pDst->m_byUserDgr)
                    break;

                if (pPlayer->GetStealth(true))
                {
                    if (pDst->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Detect) != 1.0f)
                    {
                        break;
                    }
                }

                bPassed = true;
            } while (false);

            return bPassed;
        }

        void WINAPIV CPlayerViewInvisible::CGameObject__CircleReport(
            ATF::CGameObject * pObj,
            char * pbyType,
            char * szMsg,
            int nMsgSize,
            bool bToOne,
            ATF::Info::CGameObjectCircleReport24_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            if (pObj->m_bPlayerCircleList)
            {
                for (int dwClientIndex = 0; dwClientIndex < ATF::Global::max_player; ++dwClientIndex)
                {
                    if (pObj->m_bPlayerCircleList[dwClientIndex])
                        ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, szMsg, nMsgSize);
                }
                return;
            }

            if (bToOne && !pObj->m_ObjID.m_byKind && !pObj->m_ObjID.m_byID)
                ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pObj->m_ObjID.m_wIndex, pbyType, szMsg, nMsgSize);

            if (!pObj->m_pCurMap || pObj->m_dwCurSec == -1)
                return;

            int nRadius = pObj->GetUseSectorRange();
            ATF::_sec_info* pSecInfo = pObj->m_pCurMap->GetSecInfo();

            ATF::_pnt_rect pRect;
            pObj->m_pCurMap->GetRectInRadius(&pRect, nRadius, pObj->m_dwCurSec);

            for (int j = pRect.nStarty; j <= pRect.nEndy; ++j)
            {
                for (int k = pRect.nStartx; k <= pRect.nEndx; ++k)
                {
                    int dwSecIndex = pSecInfo->m_nSecNumW * j + k;
                    ATF::CObjectList* pSector = pObj->m_pCurMap->GetSectorListPlayer(pObj->m_wMapLayerIndex, dwSecIndex);
                    if (!pSector)
                        continue;

                    ATF::_object_list_point* pCurr = pSector->m_Head.m_pNext;
                    while (pCurr != &pSector->m_Tail)
                    {
                        ATF::CPlayer* pDst = (ATF::CPlayer *)pCurr->m_pItem;
                        pCurr = pCurr->m_pNext;

                        if (pDst == pObj)
                            continue;

                        if (!pObj->m_ObjID.m_byKind)
                        {
                            if (pObj->m_ObjID.m_byID == 0)
                            {
                                if (!check_conditions((ATF::CPlayer*)pObj, pDst))
                                    continue;
                            }

                            if (pObj->m_ObjID.m_byID == 7)
                            {
                                ATF::CTrap* pTrap = (ATF::CTrap*)pObj;
                                if (pTrap->m_dwMasterSerial != pDst->m_Param.GetCharSerial())
                                {
                                    if (!(nMsgSize == 5 && !bToOne))
                                    {
                                        if (!pDst->m_EP.GetEff_State((int)ATF::_EFF_STATE::Find_Trap))
                                        {
                                            continue;
                                        }
                                    }
                                }
                            }
                        }

                        if (pObj->m_bObserver && !pDst->m_byUserDgr)
                        {
                            continue;
                        }

                        ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pDst->m_ObjID.m_wIndex, pbyType, szMsg, nMsgSize);
                    }
                }
            }
        }

        void WINAPIV CPlayerViewInvisible::SendMsg_FixPosition(
            ATF::CPlayer* pPlayer,
            int dwClientIndex,
            ATF::Info::CPlayerSendMsg_FixPosition752_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            ATF::CPlayer* pDstPlayer = &ATF::Global::g_Player[dwClientIndex];
            if (!check_conditions(pPlayer, pDstPlayer))
                return;

            char pbyType[2]{ 4, 9 };
            ATF::_player_fixpositon_zocl szMsg;

            szMsg.wIndex = pPlayer->m_ObjID.m_wIndex;
            szMsg.dwSerial = pPlayer->m_dwObjSerial;
            szMsg.wEquipVer = pPlayer->GetVisualVer();
            ATF::Global::FloatToShort(pPlayer->m_fCurPos, szMsg.zCur, 3);
            szMsg.byRaceCode = pPlayer->m_Param.GetRaceSexCode();
            szMsg.dwStateFlag = pPlayer->GetStateFlag();
            szMsg.wLastEffectCode = pPlayer->m_wLastContEffect;
            szMsg.byColor = pPlayer->m_byGuildBattleColorInx;
            ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, (char *)&szMsg, sizeof(szMsg));

            SendMsg_OtherShapeAllImpl(pPlayer, pDstPlayer);
        }

        void WINAPIV CPlayerViewInvisible::SendMsg_RealMovePoint(
            ATF::CPlayer * pPlayer,
            int dwClientIndex,
            ATF::Info::CPlayerSendMsg_RealMovePoint1000_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            ATF::CPlayer* pDstPlayer = &ATF::Global::g_Player[dwClientIndex];
            if (!check_conditions(pPlayer, pDstPlayer))
                return;

            char pbyType[2]{ 4, 21 };
            ATF::_player_real_move_zocl szMsg;

            szMsg.byRaceCode = pPlayer->m_Param.GetRaceSexCode();
            szMsg.wIndex = pPlayer->m_ObjID.m_wIndex;
            szMsg.dwSerial = pPlayer->m_dwObjSerial;
            szMsg.dwEquipVer = pPlayer->GetVisualVer();

            ATF::Global::FloatToShort(pPlayer->m_fCurPos, szMsg.zCur, 3);

            szMsg.zTar[0] = (signed int)::std::floor(pPlayer->m_fTarPos[0]);
            szMsg.zTar[1] = (signed int)::std::floor(pPlayer->m_fTarPos[2]);
            szMsg.wLastEffectCode = pPlayer->m_wLastContEffect;
            szMsg.dwStateFlag = pPlayer->GetStateFlag();
            szMsg.nAddSpeed = (signed int)::std::floor(pPlayer->GetAddSpeed());
            szMsg.byDirect = pPlayer->m_byMoveDirect;
            szMsg.byColor = pPlayer->m_byGuildBattleColorInx;

            ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, (char *)&szMsg, sizeof(szMsg));

            SendMsg_OtherShapeAllImpl(pPlayer, pDstPlayer);
        }

        void WINAPIV CPlayerViewInvisible::SendMsg_OtherShapePart(
            ATF::CPlayer * pPlayer,
            ATF::CPlayer * pDst,
            ATF::Info::CPlayerSendMsg_OtherShapePart914_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            pPlayer->SendMsg_OtherShapeAll(pDst);
        }

        void WINAPIV CPlayerViewInvisible::SendMsg_OtherShapeAll(
            ATF::CPlayer * pPlayer,
            ATF::CPlayer * pDst,
            ATF::Info::CPlayerSendMsg_OtherShapeAll910_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (!check_conditions(pPlayer, pDst))
                return;

            pPlayer->NewViewCircleObject();
            
            SendMsg_OtherShapeAllImpl(pPlayer, pDst);
        }

        void CPlayerViewInvisible::SendMsg_OtherShapeAllImpl(
            ATF::CPlayer * pPlayer, 
            ATF::CPlayer * pDst)
        {
            if (!pPlayer->m_bLive)
            {
                pPlayer->SendMsg_OtherShapeError(pDst, 0);
                return;
            }

            char pbyType[2]{ 3, 31 };

            ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(
                pDst->m_ObjID.m_wIndex,
                pbyType,
                (char *)&pPlayer->m_bufShapeAll,
                pPlayer->m_bufShapeAll.size());
        }
    }
}