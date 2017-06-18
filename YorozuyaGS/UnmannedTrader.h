#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"


namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CUnmannedTrader : public IModule, CModuleRegister<CUnmannedTrader>
        {
        public:
            CUnmannedTrader() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        };
    };
};
