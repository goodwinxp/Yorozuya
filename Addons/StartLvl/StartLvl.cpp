#include "stdafx.h"

#include "StartLvl.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>


namespace GameServer
{
	namespace Addon
	{
		bool CStartLvl::m_bActivated = false;
		int32_t m_nStartLvl = 1;

		void CStartLvl::load()
		{
			enable_hook(&ATF::CPlayer::SendMsg_BuyCashItemMode, &CStartLvl::SendMsg_BuyCashItemMode); //Start lvl(need to pass 50, 56 quest)
		}

		void CStartLvl::unload()
		{
			cleanup_all_hook();
		}

		Yorozuya::Module::ModuleName_t CStartLvl::get_name()
		{
			static const Yorozuya::Module::ModuleName_t name = "addons.StartLvl";
			return name;
		}

		void CStartLvl::configure(
			const rapidjson::Value& nodeConfig)
		{
			m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
			m_nStartLvl = RapidHelper::GetValueOrDefault(nodeConfig, "StartLvL", 1);
		}

		void WINAPIV CStartLvl::SendMsg_BuyCashItemMode(
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

