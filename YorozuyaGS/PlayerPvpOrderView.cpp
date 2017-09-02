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

        void WINAPIV CPlayer::CalcPvP(
            ATF::CPlayer * pObj,
            ATF::CPlayer * pDier,
            char byKillerObjID,
            ATF::Info::CPlayerCalcPvP74_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::UpdatePvpOrderView(
            ATF::CPlayer* pPlayer,
            int64_t tCurTime,
            ATF::Info::CPlayerUpdatePvpOrderView1288_ptr next)
        {
            next(pPlayer, tCurTime);

            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            PlayerEx.CleanSerialList();
        }

        void WINAPIV CPlayer::CalPvpTempCash(
            ATF::CPlayer* pObj,
            ATF::CPlayer* pDier,
            char byKillerObjID,
            ATF::Info::CPlayerCalPvpTempCash52_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
                return;

            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pDier);
            if (!PlayerEx.PushSerialKiller(pObj->m_pUserDB->m_dwSerial))
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }
    }
}