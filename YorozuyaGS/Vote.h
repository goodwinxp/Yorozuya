#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"
#include <ATF/Voter_info.hpp>
#include <ATF/CVoteSystem_info.hpp>


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
            int32_t m_nLv = 0;
            uint32_t m_nPlayTime = 0;
            long double m_dPvpPoint = 0.f;
            long double m_dPvpCashBag = 0.f;

        private:
            static void WINAPIV SendMsg_StartedVoteInform(
                ATF::CVoteSystem* pObj, 
                int n, 
                unsigned int dwAvatorSerial, 
                bool bPunish, 
                ATF::info::CVoteSystemSendMsg_StartedVoteInform12_ptr next);

            static int WINAPIV _Vote(
                ATF::Voter* pObj, 
                ATF::CPlayer* pOne,
                char* pdata, 
                ATF::info::Voter_Vote22_ptr next);
        };
    };
};
