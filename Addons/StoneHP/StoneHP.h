#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/CHolyStoneSystemInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CStoneHP
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CStoneHP() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            static bool m_bActivated;
            static int m_nMinLv;

        private:
            static bool check_lv(int nLv);

        private:
            static void WINAPIV SendNotifyHolyStoneDestroyedToRaceBoss(
                ATF::CHolyStoneSystem* pObj,
                ATF::Info::CHolyStoneSystemSendNotifyHolyStoneDestroyedToRaceBoss150_ptr next);

            static void WINAPIV SendHolyStoneHPToRaceBoss(
                ATF::CHolyStoneSystem* pObj,
                ATF::Info::CHolyStoneSystemSendHolyStoneHPToRaceBoss118_ptr next);

            static void WINAPIV SendHolyStoneHP(
                ATF::CHolyStoneSystem* pObj,
                ATF::CPlayer* pkPlayer,
                ATF::Info::CHolyStoneSystemSendHolyStoneHP116_ptr next);
        };
    };
};
