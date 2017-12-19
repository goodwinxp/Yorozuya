#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/Global__GlobalInfo.hpp>

namespace GameServer
{
    namespace Extension
    {
        class CPerformance 
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPerformance>
        {
        public:
            CPerformance() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

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
