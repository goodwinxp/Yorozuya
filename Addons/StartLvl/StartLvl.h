#pragma once


#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"


#include <ATF/CUserDBInfo.hpp>

namespace GameServer
{
	namespace Addon
	{
		class CStartLvl
			: public Yorozuya::Module::IModule
			, CModuleHook
		{
		public:
			CStartLvl() { };

			virtual void load() override;

			virtual void unload() override;

			virtual Yorozuya::Module::ModuleName_t get_name() override;

			virtual void configure(const rapidjson::Value& nodeConfig) override;

		private:
			static bool m_bActivated;
			static int32_t m_bStartLvl;

			static void WINAPIV SendMsg_BuyCashItemMode(
				ATF::CPlayer *_this,
				ATF::Info::CPlayerSendMsg_BuyCashItemMode632_ptr next);
		};
	};
};
