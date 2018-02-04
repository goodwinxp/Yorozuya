#include "stdafx.h"

#include "MainThread.h"
#include "../../Common/Helpers/RapidHelper.hpp"

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
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CMainThread::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.main_thread";
            
            return name;
        }

        void CMainThread::configure(const rapidjson::Value & nodeConfig)
        {
            using namespace detail;
            using namespace ::std::chrono;

            PriorityTimer_t PriorityTimerValue{
                { priority_task::one,  100ms },
                { priority_task::two,  500ms },
                { priority_task::three,1000ms },
                { priority_task::four, 2000ms },
                { priority_task::five, 5000ms }
            };

            PriorityTimerValue[priority_task::one] = milliseconds(
                RapidHelper::GetValueOrDefault(nodeConfig, "priority_1", 100));

            PriorityTimerValue[priority_task::two] = milliseconds(
                RapidHelper::GetValueOrDefault(nodeConfig, "priority_2", 500));

            PriorityTimerValue[priority_task::three] = milliseconds(
                RapidHelper::GetValueOrDefault(nodeConfig, "priority_3", 1000));

            PriorityTimerValue[priority_task::four] = milliseconds(
                RapidHelper::GetValueOrDefault(nodeConfig, "priority_4", 2000));

            PriorityTimerValue[priority_task::five] = milliseconds(
                RapidHelper::GetValueOrDefault(nodeConfig, "priority_5", 5000));

            auto asdsad = PriorityTimerValue[priority_task::five];

            make_tasks(PriorityTimerValue);
        }

        void CMainThread::make_tasks(
            const detail::PriorityTimer_t & PriorityTimerValue)
        {
            using namespace detail;
            
            m_Tasks.push_back(CTask{ [] { ATF::Global::g_MapOper->OnLoop(); } });

            m_Tasks.push_back(CTask{ [] { ATF::Global::g_Network->OnLoop(); } });

            m_Tasks.push_back(CTask{ [] { ATF::Global::g_MainThread->DQSCompleteProcess(); } });

            m_Tasks.push_back(CTask{ [] { ATF::CCashDBWorkManager::Instance()->CompleteWork(); } });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(detail::priority_task::two) },
                [] { ATF::Global::g_HolySys->OnLoop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::five) },
                [] { ATF::Global::g_MainThread->CheckAccountLineState(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::Global::g_MainThread->CheckAvatorState(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::Global::g_MainThread->ContUserSaveJobCheck(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::Global::g_MainThread->CheckDayChangedPvpPointClear(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_MainThread->CheckRadarItemDelay(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_MainThread->m_GuildCreateEventInfo.Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::Global::g_MainThread->m_pRFEvent_ClassRefine->vfptr->Loop(ATF::Global::g_MainThread->m_pRFEvent_ClassRefine); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_DarkHoleQuest->CheckQuestOnLoop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_WorldSch->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                []
                {
                    for (int j = 0; j < 3; ++j)
                        ATF::Global::g_TransportShip[j].Loop();
                }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::five) },
                []
                {
                    bool pbChangeDay = false;
                    ATF::Global::eUpdateEconomySystem(&pbChangeDay);
                    if (pbChangeDay)
                        ATF::Global::g_GameStatistics->ConvertDay(ATF::Global::g_MainThread->m_szWorldName);
                    ATF::Global::OnLoop_GuildSystem(pbChangeDay);
                }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::five) },
                [] { ATF::Global::OnLoop_VoteSystem(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CPvpUserAndGuildRankingSystem::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CRaceBossMsgController::Instance()->OnLoop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CReturnGateController::Instance()->OnLoop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CRecallEffectController::Instance()->OnLoop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::two) },
                [] { ATF::CGuildBattleController::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::AutoMineMachineMng::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::two) },
                [] { ATF::CUnmannedTraderController::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CLogTypeDBTaskManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CGuildRoomSystem::GetInstance()->RentRoomTimer(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CPostSystemManager::Instace()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CItemStoreManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::PatriarchElectProcessor::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CMoveMapLimitManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CRaceBuffManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::one) },
                [] { ATF::CNuclearBombMgr::Instance()->vfptr->Loop(ATF::CNuclearBombMgr::Instance()); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CHonorGuild::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::COreAmountMgr::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CExchangeEvent::Instance()->vfptr->Loop(ATF::CExchangeEvent::Instance()); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CNationSettingManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CLuaScriptMgr::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::CashItemRemoteStore::Instance()->Loop_TatalCashEvent(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::TimeLimitMgr::Instance()->Chack_Time(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CActionPointSystemMgr::Instance()->Check_Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CGoldenBoxItemMgr::Instance()->Loop_Event(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CMoneySupplyMgr::Instance()->LoopMoneySupply(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CTotalGuildRankManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CWeeklyGuildRankManager::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::four) },
                [] { ATF::CAsyncLogger::Instance()->Loop(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_MainThread->CheckConnNumLog(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_MainThread->m_GameMsg.PumpMsgList(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_MainThread->CheckServerRateINIFile(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] { ATF::Global::g_MainThread->ForceCloseUserInTiming(); }
                });

            m_Tasks.push_back(CTask{
                CRunRule{ PriorityTimerValue.at(priority_task::three) },
                [] {
                    if (ATF::Global::GetLoopTime() - *ATF::Global::dwTime_AliveMonNum > 60000)
                    {
                        *ATF::Global::dwTime_AliveMonNum = ATF::Global::GetLoopTime();
                        int nDiedMonster = 0;
                        for (int k = 0; k < 30000; ++k)
                        {
                            if (!ATF::Global::g_Monster[k].m_bLive)
                                ++nDiedMonster;
                        }

                        if (*ATF::Global::dwMaxMonNum < nDiedMonster)
                        {
                            *ATF::Global::dwMaxMonNum = nDiedMonster;
                        }
                    }
                }
                });
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
            UNREFERENCED_PARAMETER(next);
            auto spModule = GetModule<CMainThread>();

            for (const auto& t : spModule->m_Tasks)
                t.run();
        }
    }
}