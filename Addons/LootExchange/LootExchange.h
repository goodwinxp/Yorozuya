#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CLootExchange
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CLootExchange() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            static int GetMoneyType(
                ATF::_base_fld* pRec, char byTableCode);

            static int GetMoneyValue(
                ATF::_base_fld * pRec,
                char byTableCode,
                uint32_t nMoneyType,
                int nRace);

            static bool AddMoney(ATF::CPlayer* pObj, uint32_t nMoneyType, int nMoneyValue);

        private:
            static bool m_bActivated;
            static bool m_bExchangeAll;

        private:
            static void WINAPIV pc_TakeGroundingItem(
                ATF::CPlayer* pObj,
                ATF::CItemBox* pBox,
                uint16_t wAddSerial,
                ATF::Info::CPlayerpc_TakeGroundingItem1947_ptr next);
        };
    };
};
