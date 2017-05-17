#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"
#include <ATF/Voter_info.hpp>


namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CVote : public IModule, CModuleRegister<CVote>
        {
        public:
            CVote() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

            bool score_show() const { return m_bScoreShow; }
            bool check_conditions(ATF::CPlayer* pOne);

        private:
            auto get_level() const {
                return m_nLv;
            }

            auto get_play_time() const {
                return m_nPlayTime;
            }

            auto get_pvp_point() const {
                return m_dPvpPoint;
            }

            auto get_pvp_cash_bag() const {
                return m_dPvpCashBag;
            }
        private:
            bool m_bScoreShow = false;
            int32_t m_nLv = 0;
            uint32_t m_nPlayTime = 0;
            long double m_dPvpPoint = 0.f;
            long double m_dPvpCashBag = 0.f;

        private:
            static int WINAPIV _SendVotePaper(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                ATF::info::Voter_SendVotePaper12_ptr next);

            static void WINAPIV _SendVotePaperAll(
                ATF::Voter* pObj,
                ATF::info::Voter_SendVotePaperAll14_ptr next);

            static void WINAPIV _SendVoteScore(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                ATF::info::Voter_SendVoteScore16_ptr next);

            static void WINAPIV _SendVoteScoreAll(
                ATF::Voter* pObj, 
                char byRace,
                ATF::info::Voter_SendVoteScoreAll18_ptr next);

            static int WINAPIV _Vote(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                char* pdata, 
                ATF::info::Voter_Vote22_ptr next);
        };
    };
};
