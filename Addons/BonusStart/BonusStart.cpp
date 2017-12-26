#include "stdafx.h"

#include "BonusStart.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            const int32_t default_start_lv = 1;
            const uint32_t default_start_dalant = 0;
            const uint32_t default_start_gold = 0;
        }

        bool CBonusStart::m_bActivated = false;
        int32_t CBonusStart::m_nStartLvl = default_start_lv;
        uint32_t CBonusStart::m_nStartDalant = default_start_dalant;
        uint32_t CBonusStart::m_nStartGold = default_start_gold;

        void CBonusStart::load()
        {
            enable_hook(&ATF::CPlayer::CreateComplete, &CBonusStart::CreateComplete);
        }

        void CBonusStart::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CBonusStart::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.bonus_start";
            return name;
        }

        void CBonusStart::configure(const rapidjson::Value & nodeConfig)
        {
            CBonusStart::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            CBonusStart::m_nStartLvl = RapidHelper::GetValueOrDefault(nodeConfig, "start_lvl", default_start_lv);
            CBonusStart::m_nStartDalant = RapidHelper::GetValueOrDefault(nodeConfig, "start_dalant", default_start_dalant);
            CBonusStart::m_nStartGold = RapidHelper::GetValueOrDefault(nodeConfig, "start_gold", default_start_gold);
        }

        void WINAPIV CBonusStart::CreateComplete(
            ATF::CPlayer *_this,
            ATF::Info::CPlayerCreateComplete102_ptr next)
        {
            if (_this->m_bLive && !_this->m_bCreateComplete)
            {
                next(_this);
                if (CBonusStart::m_bActivated && _this->m_bFirstStart)
                {
                    _this->dev_lv(m_nStartLvl);
                    _this->dev_dalant(m_nStartDalant);
                    _this->dev_gold(m_nStartGold);
                }
            }
        }
    }
}
