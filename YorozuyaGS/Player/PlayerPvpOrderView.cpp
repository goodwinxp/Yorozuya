#include "stdafx.h"

#include "PlayerPvpOrderView.h"
#include "../../Common/ETypes.h"
#include "../PlayerEx/PlayerEx.h"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        namespace
        {
            using namespace GameServer::Extension;
        }

        void CPlayerPvpOrderView::load()
        {
            enable_hook(&ATF::CPlayer::CalcPvP, &CPlayerPvpOrderView::CalcPvP);
            enable_hook(&ATF::CPlayer::CalPvpTempCash, &CPlayerPvpOrderView::CalPvpTempCash);
            enable_hook(&ATF::CPlayer::UpdatePvpOrderView, &CPlayerPvpOrderView::UpdatePvpOrderView);
            enable_hook(&ATF::CMainThread::CheckDayChangedPvpPointClear, &CPlayerPvpOrderView::CheckDayChangedPvpPointClear);
            enable_hook(&ATF::CPvpCashPoint::CheckPvpLoseCondition, &CPlayerPvpOrderView::CheckPvpLoseCondition);
            enable_hook(&ATF::CPvpCashPoint::CheckPvpHaveCondition, &CPlayerPvpOrderView::CheckPvpHaveCondition);
        }

        void CPlayerPvpOrderView::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerPvpOrderView::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.pvp_order_view";
            return name;
        }

        void WINAPIV CPlayerPvpOrderView::CalcPvP(
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

        void WINAPIV CPlayerPvpOrderView::UpdatePvpOrderView(
            ATF::CPlayer* pPlayer,
            int64_t tCurTime,
            ATF::Info::CPlayerUpdatePvpOrderView1288_ptr next)
        {
            next(pPlayer, tCurTime);

            auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pPlayer);
            PlayerEx.CleanSerialKillerList();
        }

        void WINAPIV CPlayerPvpOrderView::CalPvpTempCash(
            ATF::CPlayer* pObj,
            ATF::CPlayer* pDier,
            char byKillerObjID,
            ATF::Info::CPlayerCalPvpTempCash52_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            do
            {
                if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
                    break;

                if (pObj->IsChaosMode() || pDier->IsChaosMode())
                    break;

                if (pObj->IsPunished(1, false) || pDier->IsPunished(1, false))
                    break;

                if (pObj->m_bInGuildBattle || pDier->m_bInGuildBattle)
                    break;

                double dAlterPvpCashPoint = pObj->m_kPvpCashPoint.CalPvpCashPoint(
                    pDier->GetLevel(), pObj->GetLevel(),
                    pObj->m_Param.m_pClassData->m_strCode, 1);

                bool bLoosed = false;
                if (pDier->m_kPvpCashPoint.CheckPvpLoseCondition(pObj, pDier))
                {
                    int nMinTempPoint = pDier->m_kPvpCashPoint.GetMinTempPoint(pDier->m_Param.GetLevel());
                    double dCurrPvpTempCash = pDier->m_kPvpOrderView.GetPvpTempCash();

                    double dNewTempPvpCash = 0;
                    if (nMinTempPoint <= dCurrPvpTempCash - dAlterPvpCashPoint)
                    {
                        dNewTempPvpCash = dAlterPvpCashPoint * -1;
                    }
                    else
                    {
                        dNewTempPvpCash = nMinTempPoint - dCurrPvpTempCash;
                    }

                    pDier->m_kPvpOrderView.Update_PvpTempCash(pDier->m_ObjID.m_wIndex, dNewTempPvpCash);
                    pDier->m_kPvpCashPoint.SetContPvpLose(pDier->m_kPvpCashPoint.GetContPvpLose() + 1);
                    pDier->m_kPvpOrderView.Update_ContLoseCash(pDier->m_kPvpCashPoint.GetContPvpLose());
                    bLoosed = true;
                }

                pDier->m_kPvpCashPoint.SetContPvpHave(0);
                pDier->m_kPvpOrderView.Update_ContHaveCash(0);

                bool bHaved = false;
                if (pDier->m_kPvpCashPoint.CheckPvpHaveCondition(pObj, pDier, pDier->m_kPvpOrderView.GetPvpTempCash()))
                {
                    double dCurrPvpCash = pDier->m_kPvpOrderView.GetPvpCash();
                    int nMinTempPoint = pDier->m_kPvpCashPoint.GetMinTempPoint(
                        pDier->m_Param.GetLevel());

                    if (nMinTempPoint * 10 <= dCurrPvpCash)
                    {
                        int nMaxTempPoint = pObj->m_kPvpCashPoint.GetMaxTempPoint(
                            pObj->m_Param.GetLevel(), 
                            pObj->IsApplyPcbangPrimium());

                        if (pObj->IsApplyPcbangPrimium())
                            dAlterPvpCashPoint *= ATF::Global::g_MainThread->m_ServerRateLoad.m_IniData.PremiumPvpPointRate;

                        double dNewTempPvpCash = 0;
                        double dCurrPvpTempCash = pObj->m_kPvpOrderView.GetPvpTempCash();
                        if (dAlterPvpCashPoint + dCurrPvpTempCash <= nMaxTempPoint)
                        {
                            dNewTempPvpCash = dAlterPvpCashPoint;
                        }
                        else
                        {
                            dNewTempPvpCash = nMaxTempPoint - dCurrPvpTempCash;
                        }

                        pObj->m_kPvpOrderView.Update_PvpTempCash(pObj->m_ObjID.m_wIndex, dNewTempPvpCash);
                        pObj->m_kPvpCashPoint.SetContPvpHave(pObj->m_kPvpCashPoint.GetContPvpHave() + 1);
                        pObj->m_kPvpOrderView.Update_ContHaveCash(pObj->m_kPvpCashPoint.GetContPvpHave());

                        bHaved = true;
                    }
                }

                pObj->m_kPvpCashPoint.SetContPvpLose(0);
                pObj->m_kPvpOrderView.Update_ContLoseCash(0);
                if (bLoosed || bHaved)
                {
                    auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pObj);
                    PlayerEx.PushSerialKiller(pDier->m_pUserDB->m_dwSerial);
                }
            } while (false);
        }

        void WINAPIV CPlayerPvpOrderView::CheckDayChangedPvpPointClear(
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

        bool WINAPIV CPlayerPvpOrderView::CheckPvpLoseCondition(
            ATF::CPvpCashPoint * pObj,
            ATF::CPlayer * pKiller,
            ATF::CPlayer * pDier,
            ATF::Info::CPvpCashPointCheckPvpLoseCondition8_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            bool result = false;

            do
            {
                if (!pKiller || !pDier)
                    break;

                if (pKiller->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
                    break;

                if (!pObj->IsPvpMap(pKiller))
                {
                    pObj->SendMsg_PvpCashInform(pKiller->m_ObjID.m_wIndex, 9);
                    break;
                }

                auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pKiller);
                if (PlayerEx.AlreadyKilled(pDier->m_pUserDB->m_dwSerial))
                {
                    pObj->SendMsg_PvpCashInform(pKiller->m_ObjID.m_wIndex, 3);
                    break;
                }

                double dCurrTempPvpCash = pKiller->GetPvpOrderView()->GetPvpTempCash();
                int nMaxTempPoint = pKiller->m_kPvpCashPoint.GetMaxTempPoint(
                    pKiller->GetLevel(), pKiller->IsApplyPcbangPrimium());

                result = dCurrTempPvpCash < nMaxTempPoint;
            } while (false);

            return result;
        }

        bool WINAPIV CPlayerPvpOrderView::CheckPvpHaveCondition(
            ATF::CPvpCashPoint * pObj,
            ATF::CPlayer * pKiller,
            ATF::CPlayer * pDier,
            long double dOldTempPoint,
            ATF::Info::CPvpCashPointCheckPvpHaveCondition6_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            bool result = false;

            do
            {
                if (!pKiller || !pDier)
                    break;

                if (pKiller->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
                    break;

                if (!pObj->IsPvpMap(pKiller))
                {
                    pObj->SendMsg_PvpCashInform(pKiller->m_ObjID.m_wIndex, 9);
                    break;
                }

                auto& PlayerEx = CPlayerEx::get_instance()->GetPlayerEx(pKiller);
                if (PlayerEx.AlreadyKilled(pDier->m_pUserDB->m_dwSerial))
                {
                    pObj->SendMsg_PvpCashInform(pKiller->m_ObjID.m_wIndex, 4);
                    break;
                }

                result = pDier->m_kPvpCashPoint.GetMinTempPoint(pDier->GetLevel()) < dOldTempPoint;
            } while (false);

            return result;
        }
    }
}