#include "stdafx.h"

#include "BonusStart.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace BonusStart
    {
		bool CBonusStart::m_bActivated = false;
		int32_t m_nStartLvl = 1;

        void CBonusStart::load()
        {
			enable_hook(&ATF::CPlayer::SendMsg_BuyCashItemMode, &CBonusStart::SendMsg_BuyCashItemMode);
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
			m_nStartLvl = RapidHelper::GetValueOrDefault(nodeConfig, "startlvl", 1);
        }

		void WINAPIV CBonusStart::SendMsg_BuyCashItemMode(
			ATF::CPlayer *_this,
			ATF::Info::CPlayerSendMsg_BuyCashItemMode632_ptr next)
		{
			if (_this->m_bFirstStart)
			{
				for (int i = 0; i < m_nStartLvl - 1; i++)
				{
					_this->AlterExp_Potion(LDBL_MAX);
				}
			}
			return next(_this);
		}
    }
}
