#include "stdafx.h"

#include "ETypes.h"
#include "Player.h"
#include "PlayerEx.h"
#include <ATF/global.hpp>
#include <ATF/_buy_store_failure_zocl.hpp>

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            using namespace ATF;
            using namespace GameServer::Extension;
        }

        void WINAPIV CPlayer::Loop(
            ATF::CPlayer* pPlayer,
            ATF::Info::CPlayerLoop368_ptr next)
        {
            next(pPlayer);

            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            PlayerEx.Loop();
        }

        bool WINAPIV CPlayer::Load(
            ATF::CPlayer * pObj,
            ATF::CUserDB * pUser,
            bool bFirstStart,
            ATF::Info::CPlayerLoad366_ptr next)
        {
            pObj->m_bPostLoad = false;
            bool bResult = next(pObj, pUser, bFirstStart);
            if (bResult)
            {
                if (!pObj->m_Param.m_pGuild)
                {
                    auto dwDestroyerSerial = ATF::Global::g_HolySys->GetDestroyerSerial();
                    if (pObj->m_Param.GetCharSerial() != dwDestroyerSerial)
                    {
                        pObj->SetLastAttBuff(false);
                    }
                }

                auto& player_ex = CPlayerEx::get_instance();
                player_ex->Load(pObj);
            }

            return bResult;
        }

        void WINAPIV CPlayer::NetClose(
            ATF::CPlayer *pObj,
            bool bMoveOutLobby,
            ATF::Info::CPlayerNetClose370_ptr next)
        {
            next(pObj, bMoveOutLobby);
            pObj->m_bPostLoad = false;

            auto& player_ex = CPlayerEx::get_instance();
            player_ex->NetClose(pObj);
        }

        void WINAPIV CPlayer::SendMsg_Alter_Action_Point(
            ATF::CPlayer * pPlayer,
            char byActCode,
            unsigned int dwActPoint,
            ATF::Info::CPlayerSendMsg_Alter_Action_Point560_ptr next)
        {
            if (byActCode == 1)
            {
                _buy_store_failure_zocl szMsg;
                szMsg.byRetCode = 19;
                szMsg.dwDalant = pPlayer->m_Param.GetDalant();
                szMsg.dwGold = pPlayer->m_Param.GetGold();
                szMsg.dPoint = pPlayer->m_kPvpOrderView.GetPvpCash();
                for (int j = 0; j < 3; ++j)
                    szMsg.dwActPoint[j] = pPlayer->m_pUserDB->GetActPoint(j);

                char pbyType[] = { 12, 3 };
                ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pPlayer->m_ObjID.m_wIndex, pbyType, (char *)&szMsg, sizeof(szMsg));
            }
            else
            {
                next(pPlayer, byActCode, dwActPoint);
            }
        }
    }
}