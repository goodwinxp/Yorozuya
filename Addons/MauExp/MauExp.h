#pragma once

#include <ATF/CPlayerInfo.hpp>
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

namespace GameServer
{
    namespace Addon
    {
        class CMauExp
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CMauExp() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            static bool m_bActivated;

        private:
            static void WINAPIV CalcExp(
                ATF::CPlayer* pObj,
                ATF::CCharacter* pDst,
                int nDam,
                ATF::CPartyModeKillMonsterExpNotify* kPartyExpNotify,
                ATF::Info::CPlayerCalcExp72_ptr next);
        };
    };
};
