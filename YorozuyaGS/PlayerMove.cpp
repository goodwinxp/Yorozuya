#include "stdafx.h"

#include "Player.h"
#include "PlayerEx.h"

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            
            using namespace GameServer::Extension;
        }
        void WINAPIV CPlayer::pc_MoveNext(
            ATF::CPlayer* pPlayer,
            char byMoveType,
            float * pfCur,
            float * pfTar,
            char byDirect,
            ATF::Info::CPlayerpc_MoveNext1793_ptr next)
        {
            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            if (PlayerEx.CheckMove(pfCur))
                next(pPlayer, byMoveType, pfCur, pfTar, byDirect);
        }
        void WINAPIV CPlayer::pc_RealMovPos(
            ATF::CPlayer * pPlayer,
            float * pfCur,
            ATF::Info::CPlayerpc_RealMovPos1879_ptr next)
        {
            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            if (PlayerEx.CheckMove(pfCur))
                next(pPlayer, pfCur);
        }
        void WINAPIV CPlayer::pc_MoveStop(
            ATF::CPlayer * pPlayer,
            float * pfCur,
            ATF::Info::CPlayerpc_MoveStop1797_ptr next)
        {
            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            if (PlayerEx.CheckMove(pfCur))
                next(pPlayer, pfCur);
        }
    }
}
