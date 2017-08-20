#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CCheckEquip : public IModule, CModuleRegister<CCheckEquip>
        {
        public:
            CCheckEquip() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV IsEffectableEquip(
                ATF::CPlayer *pPlayer, 
                ATF::_STORAGE_LIST::_storage_con* pCon,
                ATF::Info::CPlayerIsEffectableEquip308_ptr next);
        };
    };
};
