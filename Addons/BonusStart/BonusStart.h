#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"
#include "ATF/CPlayerInfo.hpp"

namespace GameServer
{
    namespace Addon
    {
        class CBonusStart
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CBonusStart() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;
        private:
            static bool m_bActivated;
            static int32_t m_nStartLvl;
            static uint32_t m_nStartDalant;
            static uint32_t m_nStartGold;

        private:
            static void WINAPIV CreateComplete(
                ATF::CPlayer *_this,
                ATF::Info::CPlayerCreateComplete102_ptr next);
        };
    };
};
