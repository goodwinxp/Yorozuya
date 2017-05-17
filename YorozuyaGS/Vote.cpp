#include "stdafx.h"

#include "Vote.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CVote::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CVoteSystem::SendMsg_StartedVoteInform, &CVote::SendMsg_StartedVoteInform);
            core.set_hook(&ATF::Voter::_Vote, &CVote::_Vote);
        }

        void CVote::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CVoteSystem::SendMsg_StartedVoteInform);
            core.unset_hook(&ATF::Voter::_Vote);
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
            static const ModuleName_t name = "fix_vote";
            return name;
        }

        void CVote::configure(
            const rapidjson::Value & nodeConfig)
        {
            m_nLv = nodeConfig["level"].GetInt();
            m_nPlayTime = nodeConfig["play_time"].GetInt();
            m_dPvpPoint = nodeConfig["pvp_point"].GetDouble();
            m_dPvpCashBag = nodeConfig["pvp_cash_bag"].GetDouble();
        }

        bool CVote::check_conditions(
            ATF::CPlayer * pOne)
        {
            bool result = false;

            do
            {
                if (get_level() > pOne->GetLevel())
                    break;

                if (get_pvp_cash_bag() > pOne->GetPvpOrderView()->GetPvpCash())
                    break;

                if (get_pvp_point() > pOne->m_Param.GetPvPPoint())
                    break;

                if (get_play_time() > pOne->m_pUserDB->m_dwTotalPlayMin)
                    break;

                result = true;
            } while (false);

            return result;
        }

        void WINAPIV CVote::SendMsg_StartedVoteInform(
            ATF::CVoteSystem * pObj, 
            int n, 
            unsigned int dwAvatorSerial, 
            bool bPunish, 
            ATF::info::CVoteSystemSendMsg_StartedVoteInform12_ptr next)
        {
            auto instance = GetModule<CVote>();
            if (instance->check_conditions(&ATF::global::g_Player[n]))
                next(pObj, n, dwAvatorSerial, bPunish);
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