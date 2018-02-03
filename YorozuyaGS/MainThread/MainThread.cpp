#include "stdafx.h"

#include "MainThread.h"
#include <process.h>

namespace GameServer
{
    namespace Fixes
    {
        CMainThread::CMainThread()
        {
            using namespace detail;

            m_Tasks.push_back(CTask{ [] { ATF::Global::g_MapOper->OnLoop(); } });

            m_Tasks.push_back(CTask{ [] { ATF::Global::g_Network->OnLoop(); } });

            m_Tasks.push_back(CTask{ [] { ATF::Global::g_MainThread->DQSCompleteProcess(); } });

            m_Tasks.push_back(CTask{ [] { ATF::CCashDBWorkManager::Instance()->CompleteWork(); } });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(500) },
                [] { ATF::Global::g_HolySys->OnLoop(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(5000) },
                [] { ATF::Global::g_MainThread->CheckAccountLineState(); } 
                });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_MainThread->CheckAvatorState(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_MainThread->ContUserSaveJobCheck(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_MainThread->CheckDayChangedPvpPointClear(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_MainThread->CheckRadarItemDelay(); } 
            });
            
            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_MainThread->m_GuildCreateEventInfo.Loop(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_MainThread->m_pRFEvent_ClassRefine->vfptr->Loop(ATF::Global::g_MainThread->m_pRFEvent_ClassRefine); } 
            });
            
            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::Global::g_DarkHoleQuest->CheckQuestOnLoop(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::g_WorldSch->Loop(); } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                []
                {
                    for (int j = 0; j < 3; ++j)
                        ATF::Global::g_TransportShip[j].Loop();
                } 
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
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
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::Global::OnLoop_VoteSystem(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CPvpUserAndGuildRankingSystem::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CRaceBossMsgController::Instance()->OnLoop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CReturnGateController::Instance()->OnLoop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CRecallEffectController::Instance()->OnLoop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(500) },
                [] { ATF::CGuildBattleController::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::AutoMineMachineMng::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(500) },
                [] { ATF::CUnmannedTraderController::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CLogTypeDBTaskManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CGuildRoomSystem::GetInstance()->RentRoomTimer(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CGuildRoomSystem::GetInstance()->RentRoomTimer(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::CPostSystemManager::Instace()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CItemStoreManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::PatriarchElectProcessor::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CMoveMapLimitManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CRaceBuffManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::CNuclearBombMgr::Instance()->vfptr->Loop(ATF::CNuclearBombMgr::Instance()); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CHonorGuild::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::COreAmountMgr::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CExchangeEvent::Instance()->vfptr->Loop(ATF::CExchangeEvent::Instance()); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CNationSettingManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::CLuaScriptMgr::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::CashItemRemoteStore::Instance()->Loop_TatalCashEvent(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::TimeLimitMgr::Instance()->Chack_Time(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CActionPointSystemMgr::Instance()->Check_Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CGoldenBoxItemMgr::Instance()->Loop_Event(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CMoneySupplyMgr::Instance()->LoopMoneySupply(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CTotalGuildRankManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CWeeklyGuildRankManager::Instance()->Loop(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(2000) },
                [] { ATF::CAsyncLogger::Instance()->Loop(); }
            });
            
            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::Global::g_MainThread->CheckConnNumLog(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::Global::g_MainThread->m_GameMsg.PumpMsgList(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::Global::g_MainThread->CheckServerRateINIFile(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
                [] { ATF::Global::g_MainThread->ForceCloseUserInTiming(); }
            });

            m_Tasks.push_back(CTask{
                CRunRule{ ::std::chrono::milliseconds(1000) },
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