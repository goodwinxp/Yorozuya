#include "stdafx.h"

#include "MainThread.h"
#include <process.h>

namespace GameServer
{
    namespace Fixes
    {
        void CMainThread::load()
        {
            enable_hook(&ATF::CMainThread::CheckForceClose, &CMainThread::CheckForceClose);
            enable_hook(&ATF::CMainThread::OnRun, &CMainThread::OnRun);
        }

        void CMainThread::unload()
        {
            if (m_thRuleThread.joinable())
                m_thRuleThread.join();

            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CMainThread::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.main_thread";
            return name;
        }

        void CMainThread::zone_start()
        {
            m_thRuleThread = std::move(std::thread([&]() {
                CMainThread::MyRuleThread();
            }));
        }

        void WINAPIV CMainThread::CheckForceClose(
            ATF::CMainThread * pObj,
            ATF::Info::CMainThreadCheckForceClose24_ptr next)
        {
            UNREFERENCED_PARAMETER(pObj);
            UNREFERENCED_PARAMETER(next);
        }

        void WINAPIV CMainThread::OnRun(
            ATF::CMainThread* pObj,
            ATF::Info::CMainThreadOnRun130_ptr next)
        {
            ATF::Global::g_Network->OnLoop();
            pObj->DQSCompleteProcess();
            ATF::CCashDBWorkManager::Instance()->CompleteWork();
        }

        void WINAPIV CMainThread::MyRuleThread()
        {
            ::srand(::time(nullptr));
            int nTickCount = 0;
            while (ATF::Global::g_MainThread->m_bRuleThread)
            {
                *ATF::Global::g_dwCurTime = timeGetTime();
                ATF::Global::g_MainThread->m_MainFrameRate.CalcSpeedPerFrame();
                CMainThread::MyOnRun();
                if (!ATF::Global::g_MainThread->m_nSleepIgnore && ++nTickCount > ATF::Global::g_MainThread->m_nSleepTerm)
                {
                    Sleep(ATF::Global::g_MainThread->m_nSleepValue);
                    nTickCount = 0;
                }
            }
        }

        void WINAPIV CMainThread::MyOnRun()
        {
            //ATF::CMapDisplay::DrawDisplay(&ATF::Global::g_MapDisplay);
            ATF::Global::g_MapOper->OnLoop();
            ATF::Global::g_HolySys->OnLoop();
            /*
            //CNetWorking::OnLoop(&g_Network.vfptr);
            //CMainThread::DQSCompleteProcess(this);
            //v4 = CTSingleton<CCashDBWorkManager>::Instance();
            //CCashDBWorkManager::CompleteWork(v4);
            */
            ATF::Global::g_MainThread->CheckAvatorState();
            ATF::Global::g_MainThread->CheckAccountLineState();
            ATF::Global::g_MainThread->ForceCloseUserInTiming();
            bool pbChangeDay = 0;
            ATF::Global::eUpdateEconomySystem(&pbChangeDay);
            if ( pbChangeDay )
                ATF::Global::g_GameStatistics->ConvertDay(
                    ATF::Global::g_MainThread->m_szWorldName);

            ATF::CMoneySupplyMgr::Instance()->LoopMoneySupply();
            ATF::Global::g_MainThread->CheckConnNumLog();
            ATF::Global::g_MainThread->m_GameMsg.PumpMsgList();
            ATF::CPvpUserAndGuildRankingSystem::Instance()->Loop();
            ATF::Global::g_MainThread->ContUserSaveJobCheck();
            ATF::Global::OnLoop_VoteSystem();
            ATF::Global::OnLoop_GuildSystem(pbChangeDay);
            ATF::Global::g_DarkHoleQuest->CheckQuestOnLoop();
            ATF::CRaceBossMsgController::Instance()->OnLoop();
            ATF::CReturnGateController::Instance()->OnLoop();
            ATF::CRecallEffectController::Instance()->OnLoop();
            ATF::Global::g_WorldSch->Loop();
            for (int j = 0; j < 3; ++j)
                ATF::Global::g_TransportShip[j].Loop();

            ATF::CGuildBattleController::Instance()->Loop();
            ATF::CTotalGuildRankManager::Instance()->Loop();
            ATF::CWeeklyGuildRankManager::Instance()->Loop();
            ATF::AutoMineMachineMng::Instance()->Loop();
            
            if (*ATF::Global::g_dwCurTime - *ATF::Global::dwTime_AliveMonNum > 60000 )
            {
                *ATF::Global::dwTime_AliveMonNum = *ATF::Global::g_dwCurTime;
                int nDiedMonster = 0;
                for (int k = 0; k < 30000; ++k )
                {
                    if ( !ATF::Global::g_Monster[k].m_bLive )
                        ++nDiedMonster;
                }

                if (*ATF::Global::dwMaxMonNum < nDiedMonster)
                {
                    *ATF::Global::dwMaxMonNum = nDiedMonster;
                }
            }

            ATF::CUnmannedTraderController::Instance()->Loop();
            ATF::CLogTypeDBTaskManager::Instance()->Loop();
            ATF::Global::g_MainThread->CheckDayChangedPvpPointClear();
            ATF::CGuildRoomSystem::GetInstance()->RentRoomTimer();
            ATF::Global::g_MainThread->CheckRadarItemDelay();
            ATF::CPostSystemManager::Instace()->Loop();
            ATF::CItemStoreManager::Instance()->Loop();
            ATF::PatriarchElectProcessor::Instance()->Loop();
            ATF::CMoveMapLimitManager::Instance()->Loop();
            ATF::CRaceBuffManager::Instance()->Loop();
            ATF::CAsyncLogger::Instance()->Loop();

            ATF::CNuclearBombMgr::Instance()->vfptr->Loop(ATF::CNuclearBombMgr::Instance());
            ATF::CHonorGuild::Instance()->Loop();
            ATF::COreAmountMgr::Instance()->Loop();
            ATF::CExchangeEvent::Instance()->vfptr->Loop(ATF::CExchangeEvent::Instance());
            ATF::Global::g_MainThread->m_GuildCreateEventInfo.Loop();
            ATF::Global::g_MainThread->m_pRFEvent_ClassRefine->vfptr->Loop(
                ATF::Global::g_MainThread->m_pRFEvent_ClassRefine);

            ATF::CNationSettingManager::Instance()->Loop();
            ATF::CLuaScriptMgr::Instance()->Loop();
            ATF::Global::g_MainThread->CheckServerRateINIFile();
            ATF::CashItemRemoteStore::Instance()->Loop_TatalCashEvent();
            ATF::TimeLimitMgr::Instance()->Chack_Time();
            ATF::CActionPointSystemMgr::Instance()->Check_Loop();
            ATF::CGoldenBoxItemMgr::Instance()->Loop_Event();
        }
    }
}