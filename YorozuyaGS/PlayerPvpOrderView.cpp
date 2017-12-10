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
            PlayerEx.CleanSerialKillerList();
        }

        void WINAPIV CPlayer::CalPvpTempCash(
            ATF::CPlayer* pObj,
            ATF::CPlayer* pDier,
            char byKillerObjID,
            ATF::Info::CPlayerCalPvpTempCash52_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
                return;

            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pObj);
            if (!PlayerEx.PushSerialKiller(pDier->m_pUserDB->m_dwSerial))
            {
                pDier->m_kPvpCashPoint.SendMsg_PvpCashInform(pDier->m_ObjID.m_wIndex, 3);
                pObj->m_kPvpCashPoint.SendMsg_PvpCashInform(pObj->m_ObjID.m_wIndex, 4);
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::CheckDayChangedPvpPointClear(
            ATF::CMainThread * pObj,
            ATF::Info::CMainThreadCheckDayChangedPvpPointClear20_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (ATF::Global::IsDayChanged(&pObj->m_iOldDay))
            {
                CPlayerEx::CheckDayChangedPvpPointClear();

                ::std::time_t tmCurrentTime;
                ::std::time(&tmCurrentTime);

                for (auto& player : ATF::Global::g_Player)
                {
                    if (player.m_bOper)
                    {
                        player.UpdatePvpPointLimiter(tmCurrentTime);
                        player.UpdatePvpOrderView(tmCurrentTime);
                    }
                }
            }
        }
    }
}