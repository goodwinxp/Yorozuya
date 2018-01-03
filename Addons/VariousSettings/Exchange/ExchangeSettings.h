#pragma once

#include "../ISettings.h"
#include "../../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CExchangeSettings
            : public Yorozuya::Module::IModule
        {
        public:
            CExchangeSettings(CModuleHook* pParent);

            virtual void load() override;

            virtual void unload() override { };

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            CModuleHook* m_pParent;
            static bool m_bActivated;

        private:
            static void WINAPIV pc_ExchangeDalantForGold(
                ATF::CPlayer* pObj,
                unsigned int dwDalant,
                ATF::Info::CPlayerpc_ExchangeDalantForGold1705_ptr next);

            static void WINAPIV pc_ExchangeGoldForDalant(
                ATF::CPlayer* pObj,
                unsigned int dwGold,
                ATF::Info::CPlayerpc_ExchangeGoldForDalant1707_ptr next);
        };
    };
};
