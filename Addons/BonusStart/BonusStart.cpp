#include "stdafx.h"

#include "BonusStart.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
		bool CBonusStart::m_bActivated = false;
		int32_t CBonusStart::m_nStartLvl = 1;
		uint32_t CBonusStart::m_nStartDalant = 0;
		uint32_t CBonusStart::m_nStartGold = 0;

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
            static const Yorozuya::Module::ModuleName_t name = "addons.bonus_start";
            return name;
        }

        void CBonusStart::configure(const rapidjson::Value & nodeConfig)
        {
		    m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
		    m_nStartLvl = RapidHelper::GetValueOrDefault(nodeConfig, "start_lvl", 1);
		    m_nStartDalant = RapidHelper::GetValueOrDefault(nodeConfig, "start_dalant", 0);
		    m_nStartGold = RapidHelper::GetValueOrDefault(nodeConfig, "start_gold", 0);
        }

		void WINAPIV CBonusStart::CreateComplete(ATF::CPlayer *_this, ATF::Info::CPlayerCreateComplete102_ptr next)
		{
			if (m_bActivated) {
				if (_this->m_bFirstStart)
				{
				    _this->dev_lv(m_nStartLvl);
				    _this->dev_dalant(m_nStartDalant);
				    _this->dev_gold(m_nStartGold);
				}
			}
			next(_this);
		}
    }
}
