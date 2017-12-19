#include "stdafx.h"

#include "PlayerChatSystem.h"
#include <ATF/Global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerChatSystem::load()
        {
            enable_hook(&ATF::CPlayer::pc_ChatFarRequest, &CPlayerChatSystem::pc_ChatFarRequest);
        }

        void CPlayerChatSystem::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerChatSystem::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.chat_system";
            return name;
        }
        
        void WINAPIV CPlayerChatSystem::pc_ChatFarRequest(
            ATF::CPlayer *pPlayer, 
            char *pwszName, 
            char *pwszChatData,
            ATF::Info::CPlayerpc_ChatFarRequest1635_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            do
            {
                if (pPlayer->IsPunished(0, true))
                    break;

                if (pPlayer->m_pUserDB && pPlayer->m_pUserDB->m_bChatLock)
                    break;

                auto pDst = pPlayer->FindFarChatPlayerWithTemp(pwszName);
                if (pDst == nullptr)
                {
                    pPlayer->SendMsg_ChatFarFailure(false);
                    break;
                }
                
                if (pPlayer->m_byUserDgr != 2 && pDst->m_bBlockWhisper)
                {
                    pPlayer->SendMsg_ChatFarFailure(true);
                    break;
                }

                bool bFilter = false;
                char byChatType = 2;
                if (pPlayer->m_byUserDgr == 2)
                {
                    byChatType = 12;
                }
                else
                {
                    int dstRaceCode = pDst->m_Param.GetRaceCode();
                    int playerRaceCode = pPlayer->m_Param.GetRaceCode();
                    if (dstRaceCode != playerRaceCode && pDst->m_byUserDgr < 2 &&
                        pDst->m_EP.GetEff_Have(ATF::_EFF_HAVE::Chat_All_Race) == 0.0)
                    {
                        auto RankingInstance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                        auto dwSerial = RankingInstance->GetCurrentRaceBossSerial(dstRaceCode, 0);
                        if (dwSerial != pDst->m_dwObjSerial)
                            bFilter = true;
                    }
                }

                int byRaceCode = pPlayer->m_Param.GetRaceCode();
                int byPvpGrade = pPlayer->m_Param.m_byPvPGrade;

                pDst->SendData_ChatTrans(
                    byChatType,
                    pPlayer->m_dwObjSerial,
                    byRaceCode,
                    bFilter,
                    pwszChatData,
                    byPvpGrade,
                    pPlayer->m_Param.GetCharNameW());

                pPlayer->SendData_ChatTrans(
                    byChatType,
                    pPlayer->m_dwObjSerial,
                    byRaceCode,
                    false,
                    pwszChatData,
                    byPvpGrade,
                    pDst->m_Param.GetCharNameW());

                auto StealSystem = ATF::CChatStealSystem::Instance();
                StealSystem->StealChatMsg(pPlayer, byChatType, pwszChatData);
            } while (false);
        }
    }
}