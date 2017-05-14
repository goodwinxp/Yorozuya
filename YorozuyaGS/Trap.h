#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CTrap_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CTrap : public IModule, CModuleRegister<CTrap>
        {
        public:
            CTrap() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV RecvKillMessage(
                ATF::CTrap* pObj,
                ATF::CCharacter* pDier,
                ATF::info::CTrapRecvKillMessage70_ptr next);
        };
    };
};
