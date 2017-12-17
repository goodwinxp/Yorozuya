#include "stdafx.h"

#include "PlayerQuestMng.h"
#include "../Common/ETypes.h"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerQuestMng::load()
        {
            enable_hook(&ATF::CPlayer::Emb_CreateNPCQuest, &CPlayerQuestMng::Emb_CreateNPCQuest);
        }

        void CPlayerQuestMng::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerQuestMng::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.quest_mng";
            return name;
        }

        bool WINAPIV CPlayerQuestMng::Emb_CreateNPCQuest(
            ATF::CPlayer * pPlayer, 
            char * pszEventCode, 
            unsigned int dwNPCQuestIndex, 
            ATF::Info::CPlayerEmb_CreateNPCQuest128_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            bool bResult = false;

            do
            {
                ATF::_happen_event_cont* pHappenEvent = nullptr;
                for (auto& quest : pPlayer->m_NPCQuestIndexTempData.IndexData)
                {
                    if (quest.dwQuestIndex != dwNPCQuestIndex)
                        continue;

                    pHappenEvent = pPlayer->m_QuestMgr.CheckNPCQuestStartable(
                        pszEventCode, 
                        pPlayer->m_Param.GetRaceCode(),
                        dwNPCQuestIndex, 
                        quest.dwQuestHappenIndex);
                    break;
                }

                if (!pHappenEvent)
                    break;

                for (auto& quest : pPlayer->m_QuestMgr.m_pQuestData->m_List)
                {
                    if (quest.byQuestType != ATF::QUEST_HAPPEN::quest_happen_type_npc)
                        continue;

                    if (quest.wIndex == dwNPCQuestIndex)
                        return false;
                }

                auto pQuestFld = (ATF::_Quest_fld *)(*ATF::Global::s_tblQuest)->GetRecord(dwNPCQuestIndex);
                if (!pQuestFld)
                    break;

                for (unsigned int k = 0; k < pPlayer->m_pUserDB->m_AvatorData.dbQuest.dwListCnt; ++k)
                {
                    if (strcmp(pPlayer->m_pUserDB->m_AvatorData.dbQuest.m_StartHistory[k].szQuestCode, pQuestFld->m_strCode))
                        continue;

                    if (pQuestFld->m_bQuestRepeat)
                        break;

                    return false;
                }
                
                ATF::_happen_event_cont Dst;
                memcpy(&Dst, pHappenEvent, sizeof(Dst));
                if (!pPlayer->Emb_StartQuest(-1, &Dst))
                    break;

                if (pQuestFld->m_bQuestRepeat)
                {
                    bResult = true;
                    break;
                }

                ATF::_QUEST_DB_BASE::_START_NPC_QUEST_HISTORY pHisData;
                strcpy(pHisData.szQuestCode, pQuestFld->m_strCode);

                pHisData.byLevel = pPlayer->m_Param.GetLevel();

                time_t _Time = 0i64;
                time(&_Time);

                pHisData.nEndTime = static_cast<__int64>(floor(_Time + pQuestFld->m_dRepeatTime));

                bResult = pPlayer->m_pUserDB->Update_StartNPCQuestHistory(pPlayer->m_pUserDB->m_AvatorData.dbQuest.dwListCnt, &pHisData);
            } while (false);

            return bResult;
        }

    }
}