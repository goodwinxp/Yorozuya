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

            virtual ModuleName_t get_name();

        private:
            static float WINAPIV GetSqrt(
                float* fPos,
                float* fTar,
                ATF::Global::Info::GetSqrt667_ptr next);

            static float WINAPIV Get3DSqrt(
                float* fPos,
                float* fTar,
                ATF::Global::Info::Get3DSqrt435_ptr next);

            static float WINAPIV GetYAngle(
                float* fPos,
                float* fTar,
                ATF::Global::Info::GetYAngle700_ptr next);

            static float WINAPIV GetDist(
                const float *fPos,
                const float *fTar,
                ATF::Global::Info::GetDist498_ptr next);
        };
    };
};
