#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/VoterInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CVote
            : public Yorozuya::Module::IModule
            , CModuleRegister<CVote>
        {
        public:
            CVote() { };

            virtual void load();

            virtual void unload();

            virtual Yorozuya::Module::ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

            bool score_list_show() const { return m_bScoreListShow; }

            bool score_hide() const { return m_bScoreHide; }

            bool check_conditions(ATF::CPlayer* pOne, bool bView = false);

        private:
            bool check_level(int32_t nLv) const;
            bool check_class_grade(int32_t nClassGrade) const;
            bool check_play_time(uint32_t nPlayTime) const;
            bool check_pvp_point(double dPvpPoint) const;
            bool check_pvp_cash_bag(double dPvpCashBag) const;
        private:
            bool m_bScoreHide = true;
            bool m_bScoreListShow = false;
            int32_t m_nLv = 0;
            int32_t m_nClassGrade = 0;
            uint32_t m_nPlayTime = 0;
            long double m_dPvpPoint = 0.f;
            long double m_dPvpCashBag = 0.f;

        private:
            static int WINAPIV _SendVotePaper(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                ATF::Info::Voter_SendVotePaper12_ptr next);

            static void WINAPIV _SendVotePaperAll(
                ATF::Voter* pObj,
                ATF::Info::Voter_SendVotePaperAll14_ptr next);

            static void WINAPIV _SendVoteScore(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                ATF::Info::Voter_SendVoteScore16_ptr next);

            static void WINAPIV _SendVoteScoreAll(
                ATF::Voter* pObj, 
                char byRace,
                ATF::Info::Voter_SendVoteScoreAll18_ptr next);

            static int WINAPIV _Vote(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                char* pdata, 
                ATF::Info::Voter_Vote22_ptr next);
        };
    };
};
