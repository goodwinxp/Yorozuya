#include "stdafx.h"

#include "PlayerMoveSystem.h"
#include "../PlayerEx/PlayerEx.h"

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            using namespace GameServer::Extension;
        }

        void CPlayerMoveSystem::load()
        {
            enable_hook(&ATF::CPlayer::pc_MoveNext, &CPlayerMoveSystem::pc_MoveNext);
            enable_hook(&ATF::CPlayer::pc_RealMovPos, &CPlayerMoveSystem::pc_RealMovPos);
            enable_hook(&ATF::CPlayer::pc_MoveStop, &CPlayerMoveSystem::pc_MoveStop);
        }

        void CPlayerMoveSystem::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerMoveSystem::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.move_system";
            return name;
        }

        void WINAPIV CPlayerMoveSystem::pc_MoveNext(
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

        void WINAPIV CPlayerMoveSystem::pc_RealMovPos(
            ATF::CPlayer * pPlayer,
            float * pfCur,
            ATF::Info::CPlayerpc_RealMovPos1879_ptr next)
        {
            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            if (PlayerEx.CheckMove(pfCur))
                next(pPlayer, pfCur);
        }

        void WINAPIV CPlayerMoveSystem::pc_MoveStop(
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
