#include "stdafx.h"

#include "ExchangeSettings.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>
#include "ExchangeSettings.h"

namespace GameServer
{
    namespace Addon
    {
        bool CExchangeSettings::m_bActivated = false;

        CExchangeSettings::CExchangeSettings(
            CModuleHook* pParent)
            : m_pParent(pParent)
        {
        }

        void CExchangeSettings::load()
        {
            m_pParent->enable_hook(&ATF::CPlayer::pc_ExchangeDalantForGold, &CExchangeSettings::pc_ExchangeDalantForGold);
            m_pParent->enable_hook(&ATF::CPlayer::pc_ExchangeGoldForDalant, &CExchangeSettings::pc_ExchangeGoldForDalant);
        }

        Yorozuya::Module::ModuleName_t CExchangeSettings::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "exchange";
            return name;
        }

        void CExchangeSettings::configure(
            const rapidjson::Value& nodeConfig)
        {
            CExchangeSettings::m_bActivated =
                RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
        }

        void WINAPIV CExchangeSettings::pc_ExchangeDalantForGold(
            ATF::CPlayer* pObj,
            unsigned int dwDalant,
            ATF::Info::CPlayerpc_ExchangeDalantForGold1705_ptr next)
        {
            if (CExchangeSettings::m_bActivated)
            {
                pObj->SendMsg_ExchangeMoneyResult(1);
                return;
            }

            next(pObj, dwDalant);
        }

        void WINAPIV CExchangeSettings::pc_ExchangeGoldForDalant(
            ATF::CPlayer* pObj,
            unsigned int dwGold,
            ATF::Info::CPlayerpc_ExchangeGoldForDalant1707_ptr next)
        {
            if (CExchangeSettings::m_bActivated)
            {
                pObj->SendMsg_ExchangeMoneyResult(1);
                return;
            }

            next(pObj, dwGold);
        }
    }
}
