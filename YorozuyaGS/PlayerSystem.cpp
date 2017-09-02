#include "stdafx.h"

#include "ETypes.h"
#include "Player.h"
#include "PlayerEx.h"
#include <ATF/global.hpp>

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
            PlayerEx.loop();
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
    }
}