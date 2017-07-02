#include "stdafx.h"

#include <cmath>
#include "ETypes.h"
#include "ViewInvisible.h"
#include <ATF/global.hpp>
#include <ATF/_player_fixpositon_zocl.hpp>
#include <ATF/_player_real_move_zocl.hpp>
#include <ATF/CGameObject_detail.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CViewInvisible::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(
                (void(CGameObject::*)(char*, char*, int, bool))&CGameObject::CircleReport, 
                &CViewInvisible::CGameObject__CircleReport);

            core.set_hook(&CPlayer::SendMsg_StateInform, &CViewInvisible::CPlayer__SendMsg_StateInform);
            core.set_hook(&CPlayer::SendMsg_FixPosition, &CViewInvisible::CPlayer__SendMsg_FixPosition);
            core.set_hook(&CPlayer::SendMsg_RealMovePoint, &CViewInvisible::CPlayer__SendMsg_RealMovePoint);
            core.set_hook(&CPlayer::SendMsg_OtherShapePart, &CViewInvisible::CPlayer__SendMsg_OtherShapePart);
            core.set_hook(&CPlayer::SendMsg_OtherShapeAll, &CViewInvisible::CPlayer__SendMsg_OtherShapeAll);
        }

        void CViewInvisible::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook((void(CGameObject::*)(char*, char*, int, bool))&CGameObject::CircleReport);
            core.unset_hook(&CPlayer::SendMsg_StateInform);
            core.unset_hook(&CPlayer::SendMsg_FixPosition);
            core.unset_hook(&CPlayer::SendMsg_RealMovePoint);
            core.unset_hook(&CPlayer::SendMsg_OtherShapePart);
            core.unset_hook(&CPlayer::SendMsg_OtherShapeAll);
        }

        void CViewInvisible::loop()
        {
        }

        ModuleVersion_t CViewInvisible::get_version()
        {
            return usVersion;
        }

        ModuleName_t CViewInvisible::get_name()
        {
            static const ModuleName_t name = "fix_ViewInvisible";
            return name;
        }

        void CViewInvisible::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_StateInform(
            ATF::CPlayer * pPlayer, 
            uint64_t dwStateFlag, 
            ATF::info::CPlayerSendMsg_StateInform1074_ptr next)
        {
            next(pPlayer, dwStateFlag);
            pPlayer->NewViewCircleObject();
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

        void WINAPIV CViewInvisible::CGameObject__CircleReport(
            ATF::CGameObject * pObj,
            char * pbyType,
            char * szMsg,
            int nMsgSize,
            bool bToOne,
            ATF::info::CGameObjectCircleReport24_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            if (pObj->m_bPlayerCircleList)
            {
                for (int dwClientIndex = 0; dwClientIndex < MAX_PLAYER; ++dwClientIndex)
                {
                    if (!pObj->m_bPlayerCircleList[dwClientIndex])
                        continue;

                    ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, szMsg, nMsgSize);
                }
                return;
            }

            if (bToOne && !pObj->m_ObjID.m_byKind && !pObj->m_ObjID.m_byID)
                ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pObj->m_ObjID.m_wIndex, pbyType, szMsg, nMsgSize);

            if (!(pObj->m_pCurMap && pObj->m_dwCurSec != -1))
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
                        CPlayer* pDst = (CPlayer *)pCurr->m_pItem;
                        pCurr = pCurr->m_pNext;

                        if (pDst == pObj)
                            continue;

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
                        if (!pObj->m_ObjID.m_byKind)
                        {
                            if (!check_conditions((ATF::CPlayer*)pObj, pDst))
                                continue;
                        }
                        else if (pObj->m_bObserver && !pDst->m_byUserDgr)
                        {
                            continue;
                        }

                        ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pDst->m_ObjID.m_wIndex, pbyType, szMsg, nMsgSize);
                    }
                }
            }
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_FixPosition(
            ATF::CPlayer* pPlayer,
            int dwClientIndex,
            ATF::info::CPlayerSendMsg_FixPosition752_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            CPlayer* pDstPlayer = &global::g_Player[dwClientIndex];
            if (!check_conditions(pPlayer, pDstPlayer))
                return;

            char pbyType[2]{ 4, 9 };
            ATF::_player_fixpositon_zocl szMsg;

            szMsg.wIndex = pPlayer->m_ObjID.m_wIndex;
            szMsg.dwSerial = pPlayer->m_dwObjSerial;
            szMsg.wEquipVer = pPlayer->GetVisualVer();
            ATF::global::FloatToShort(pPlayer->m_fCurPos, szMsg.zCur, 3);
            szMsg.byRaceCode = pPlayer->m_Param.GetRaceSexCode();
            szMsg.dwStateFlag = pPlayer->GetStateFlag();
            szMsg.wLastEffectCode = pPlayer->m_wLastContEffect;
            szMsg.byColor = pPlayer->m_byGuildBattleColorInx;
            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, (char *)&szMsg, sizeof(szMsg));
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_RealMovePoint(
            ATF::CPlayer * pPlayer,
            int dwClientIndex,
            ATF::info::CPlayerSendMsg_RealMovePoint1000_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            CPlayer* pDstPlayer = &global::g_Player[dwClientIndex];
            if (!check_conditions(pPlayer, pDstPlayer))
                return;

            char pbyType[2]{ 4, 21 };
            ATF::_player_real_move_zocl szMsg;

            szMsg.byRaceCode = pPlayer->m_Param.GetRaceSexCode();
            szMsg.wIndex = pPlayer->m_ObjID.m_wIndex;
            szMsg.dwSerial = pPlayer->m_dwObjSerial;
            szMsg.dwEquipVer = pPlayer->GetVisualVer();

            ATF::global::FloatToShort(pPlayer->m_fCurPos, szMsg.zCur, 3);

            szMsg.zTar[0] = (signed int)_STD floor(pPlayer->m_fTarPos[0]);
            szMsg.zTar[1] = (signed int)_STD floor(pPlayer->m_fTarPos[2]);
            szMsg.wLastEffectCode = pPlayer->m_wLastContEffect;
            szMsg.dwStateFlag = pPlayer->GetStateFlag();
            szMsg.nAddSpeed = (signed int)_STD floor(pPlayer->GetAddSpeed());
            szMsg.byDirect = pPlayer->m_byMoveDirect;
            szMsg.byColor = pPlayer->m_byGuildBattleColorInx;

            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, (char *)&szMsg, sizeof(szMsg));
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_OtherShapePart(
            ATF::CPlayer * pPlayer,
            ATF::CPlayer * pDst,
            ATF::info::CPlayerSendMsg_OtherShapePart914_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (!check_conditions(pPlayer, pDst))
                return;

            if (!pPlayer->m_bLive)
            {
                pPlayer->SendMsg_OtherShapeError(pDst, 0);
                return;
            }

            char pbyType[2]{ 3, 0x20 };

            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pDst->m_ObjID.m_wIndex, pbyType, (char *)&pPlayer->m_bufSpapePart, pPlayer->m_bufSpapePart.size());
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_OtherShapeAll(
            ATF::CPlayer * pPlayer,
            ATF::CPlayer * pDst,
            ATF::info::CPlayerSendMsg_OtherShapeAll910_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (!check_conditions(pPlayer, pDst))
                return;

            if (!pPlayer->m_bLive)
            {
                pPlayer->SendMsg_OtherShapeError(pDst, 0);
                return;
            }

            char pbyType[2]{ 3, 0x1f };
            auto const test = sizeof(ATF::CGameObject);

            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pDst->m_ObjID.m_wIndex, pbyType, (char *)&pPlayer->m_bufShapeAll, pPlayer->m_bufShapeAll.size());
        }
    }
}