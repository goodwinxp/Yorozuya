#include "stdafx.h"

#include "Performance.h"
#include <fvec.h>

namespace GameServer
{
    namespace Extension
    {
        using namespace ATF;

        void CPerformance::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::Global::GetSqrt, &CPerformance::GetSqrt);
        }

        void CPerformance::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::Global::GetSqrt);
        }

        ModuleName_t CPerformance::get_name()
        {
            static const ModuleName_t name = "system_Performance";
            return name;
        }

        float WINAPIV CPerformance::GetSqrt(
            float* fPos,
            float* fTar,
            ATF::Global::Info::GetSqrt667_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            const F32vec4 vecTar = F32vec4(fTar[0], fTar[2], 0.f, 0.f);
            const F32vec4 vecPos = F32vec4(fPos[0], fPos[2], 0.f, 0.f);
            const F32vec4 diff = vecTar - vecPos;
            const F32vec4 diff_pow = diff * diff;

            return sqrt(F32vec4(add_horizontal(diff_pow)))[0];
        }
    }
}