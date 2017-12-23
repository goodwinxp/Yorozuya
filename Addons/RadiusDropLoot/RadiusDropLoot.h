#pragma once

#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

#include <ATF/Global__GlobalInfo.hpp>

namespace GameServer
{
    namespace Addon
    {
        class CRadiusDropLoot
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CRadiusDropLoot() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;
        private:
            static bool m_bActivated;
            static bool m_bOnlyPitboss;
            static int m_nRange;

        private:
            static ATF::CItemBox* WINAPIV CreateItemBox(
                ATF::_STORAGE_LIST::_db_con* pItem,
                ATF::CPlayer* pOwner,
                unsigned int dwPartyBossSerial,
                bool bPartyShare,
                ATF::CCharacter* pThrower,
                char byCreateCode,
                ATF::CMapData* pMap,
                uint16_t wLayerIndex,
                float* pStdPos,
                bool bHide,
                ATF::Global::Info::CreateItemBox111_ptr next);
        };
    };
};
