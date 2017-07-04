#include "stdafx.h"

#include "Vote.h"
#include "ETypes.h"
#include <ATF/global.hpp>
#include <ATF/PatriarchElectProcessor.hpp>
#include <ATF/CandidateMgr.hpp>
#include <ATF/_pt_notify_vote_score_zocl.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CVote::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::Voter::_Vote, &CVote::_Vote);
            core.set_hook(&ATF::Voter::_SendVotePaper, &CVote::_SendVotePaper);
            core.set_hook(&ATF::Voter::_SendVotePaperAll, &CVote::_SendVotePaperAll);
            core.set_hook(&ATF::Voter::_SendVoteScore, &CVote::_SendVoteScore);
            core.set_hook(&ATF::Voter::_SendVoteScoreAll, &CVote::_SendVoteScoreAll);
        }

        void CVote::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::Voter::_Vote);
            core.unset_hook(&ATF::Voter::_SendVotePaper);
            core.unset_hook(&ATF::Voter::_SendVotePaperAll);
            core.unset_hook(&ATF::Voter::_SendVoteScore);
            core.unset_hook(&ATF::Voter::_SendVoteScoreAll);
        }

        void CVote::loop()
        {
        }

        ModuleVersion_t CVote::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CVote::get_name()
        {
            static const ModuleName_t name = "fix_Vote";
            return name;
        }

        void CVote::configure(
            const rapidjson::Value & nodeConfig)
        {
            m_nLv = nodeConfig["level"].GetInt();
            m_nPlayTime = nodeConfig["play_time"].GetInt();
            m_dPvpPoint = nodeConfig["pvp_point"].GetDouble();
            m_dPvpCashBag = nodeConfig["pvp_cash_bag"].GetDouble();
            m_nClassGrade = nodeConfig["class_grade"].GetInt();
            m_bScoreListShow = nodeConfig["score_list_show"].GetBool();
            m_bScoreHide = nodeConfig["score_hide"].GetBool();
        }

        bool CVote::check_conditions(
            ATF::CPlayer * pOne)
        {
            bool result = false;

            do
            {
                if (!pOne || !pOne->m_bOper)
                    break;

                if (!pOne->m_pUserDB->m_AvatorData.dbSupplement.VoteEnable)
                    break;

                if (get_class_grade() > pOne->m_pUserDB->m_AvatorData.dbAvator.m_byLastClassGrade)
                    break;

                if (get_level() > pOne->GetLevel())
                    break;

                if (get_pvp_cash_bag() > pOne->GetPvpOrderView()->GetPvpCash())
                    break;

                if (get_pvp_point() > pOne->m_Param.GetPvPPoint())
                    break;

                if (get_play_time() > pOne->m_pUserDB->m_AvatorData.dbSupplement.dwAccumPlayTime)
                    break;

                result = true;
            } while (false);

            return result;
        }

        int WINAPIV CVote::_SendVotePaper(
            ATF::Voter * pObj, 
            ATF::CPlayer * pOne, 
            ATF::info::Voter_SendVotePaper12_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            auto spModule = GetModule<CVote>();
            int result = 0;

            do
            {
                if (!pOne)
                    break;

                if (!pOne->m_bOper)
                    break;

                if (pObj->_kCandidateInfo[pOne->m_Param.GetRaceCode()].byCnt < 2)
                {
                    auto instance = ATF::PatriarchElectProcessor::Instance();
                    instance->SendMsg_ResultCode(pOne->m_id.wIndex, 8);
                    result = 9;
                    break;
                }

                if (pOne->m_pUserDB->m_AvatorData.dbAvator.m_bOverlapVote)
                {
                    result = 10;
                    break;
                }

                if (!spModule->check_conditions(pOne))
                {
                    result = 11;
                    break;
                }

                auto instance = ATF::CandidateMgr::Instance();
                if (instance->IsRegistedAvator_2(pOne->m_Param.GetRaceCode(), pOne->m_Param.GetCharSerial()))
                {
                    result = 11;
                    break;
                }

                char pbyType[2]{ 56, 5 };
                auto msg = &pObj->_kCandidateInfo[pOne->m_Param.GetRaceCode()];
                ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pOne->m_ObjID.m_wIndex, pbyType, (char *)msg, msg->size());
            } while (false);

            return result;
        }

        void WINAPIV CVote::_SendVotePaperAll(
            ATF::Voter * pObj, 
            ATF::info::Voter_SendVotePaperAll14_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            for (auto& player : ATF::global::g_Player)
            {
                _SendVotePaper(pObj, &player, nullptr);
            }
        }

        void WINAPIV CVote::_SendVoteScore(
            ATF::Voter * pObj, 
            ATF::CPlayer * pOne, 
            ATF::info::Voter_SendVoteScore16_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            auto instance = GetModule<CVote>();
            if (!instance->score_list_show())
                return;

            if (pObj->_kCandidateInfo[pOne->m_Param.GetRaceCode()].byCnt < 2)
                return;

            char pbyType[2]{ 56, 6 };
            ATF::_pt_notify_vote_score_zocl info;
            memcpy_s(
                &info, sizeof(info), 
                &pObj->_kVoteScoreInfo[pOne->m_Param.GetRaceCode()], 
                sizeof(&pObj->_kVoteScoreInfo[pOne->m_Param.GetRaceCode()]));

            if (!instance->score_hide())
            {
                info.byVoteRate = 0;
                info.byNonvoteRate = 0;
                for (auto& b : info.body)
                    b.byScoreRate = 0;
            }
            
            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pOne->m_ObjID.m_wIndex, pbyType, (char *)&info, info.size());
        }

        void WINAPIV CVote::_SendVoteScoreAll(
            ATF::Voter * pObj, 
            char byRace, 
            ATF::info::Voter_SendVoteScoreAll18_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            auto instance = GetModule<CVote>();
            if (!instance->score_list_show())
                return;

            if (pObj->_kCandidateInfo[byRace].byCnt < 2)
                return;

            char pbyType[2]{ 56, 6 };
            ATF::_pt_notify_vote_score_zocl info;
            memcpy_s(
                &info, sizeof(info),
                &pObj->_kVoteScoreInfo[byRace], sizeof(&pObj->_kVoteScoreInfo[byRace]));

            if (!instance->score_hide())
            {
                info.byVoteRate = 0;
                info.byNonvoteRate = 0;
                for (auto& b : info.body)
                    b.byScoreRate = 0;
            }

            for (int i = 0; i < MAX_PLAYER; ++i)
            {
                auto& player = ATF::global::g_Player[i];
                if (!player.m_bOper)
                    continue;

                if (player.m_Param.GetRaceCode() != byRace)
                    continue;

                ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(i, pbyType, (char *)&info, info.size());
            }
        }

        int WINAPIV CVote::_Vote(
            ATF::Voter * pObj, 
            ATF::CPlayer * pOne, 
            char * pdata, 
            ATF::info::Voter_Vote22_ptr next)
        {
            auto instance = GetModule<CVote>();
            if (instance->check_conditions(pOne))
                return next(pObj, pOne, pdata);
            else
                return 10;
        }
    }
}