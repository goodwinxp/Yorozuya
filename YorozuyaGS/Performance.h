#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/Global__GlobalInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Extension
    {
        class CPerformance : public IModule, CModuleRegister<CPerformance>
        {
        public:
            CPerformance() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

        private:
            static float WINAPIV GetSqrt(
                float* fPos,
                float* fTar,
                ATF::Global::Info::GetSqrt667_ptr next);
        };
    };
};
