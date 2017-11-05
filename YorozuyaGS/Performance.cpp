#include "stdafx.h"

#include "Performance.h"
#include <fvec.h>

namespace GameServer
{
    namespace Extension
    {
        using namespace ATF;

        constexpr double PiToAngle(float value)
        {
            return ((double)(value)*65535.0) / (2.0 * 3.1415926535);
        }

        void CPerformance::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::Global::GetSqrt, &CPerformance::GetSqrt);
            core.set_hook(&ATF::Global::Get3DSqrt, &CPerformance::Get3DSqrt);
            core.set_hook((float(*)(float* Pos, float* Tar))&ATF::Global::GetYAngle, &CPerformance::GetYAngle);
            core.set_hook(&ATF::Global::GetDist, &CPerformance::GetDist);
        }

        void CPerformance::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::Global::GetSqrt);
            core.unset_hook(&ATF::Global::Get3DSqrt);
            core.unset_hook((float(*)(float* Pos, float* Tar))&ATF::Global::GetYAngle);
            core.unset_hook(&ATF::Global::GetDist);
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
            const F32vec4 vecTar = F32vec4(0.f, fTar[2], 0.f, fTar[0]);
            const F32vec4 vecPos = F32vec4(0.f, fPos[2], 0.f, fPos[0]);
            const F32vec4 diff = vecTar - vecPos;
            const F32vec4 diff_pow = diff * diff;

            return sqrt(F32vec4(add_horizontal(diff_pow)))[0];
        }
        float WINAPIV CPerformance::Get3DSqrt(
            float * fPos,
            float * fTar,
            ATF::Global::Info::Get3DSqrt435_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            const F32vec4 vecTar = F32vec4(0.f, fTar[2], fTar[1], fTar[0]);
            const F32vec4 vecPos = F32vec4(0.f, fPos[2], fPos[1], fPos[0]);
            const F32vec4 diff = vecTar - vecPos;
            const F32vec4 diff_pow = diff * diff;

            return sqrt(F32vec4(add_horizontal(diff_pow)))[0];
        }

        float WINAPIV CPerformance::GetYAngle(
            float * fPos,
            float * fTar,
            ATF::Global::Info::GetYAngle700_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            const F32vec4 vecTar = F32vec4(0.f, fTar[2], 0.f, fTar[0]);
            const F32vec4 vecPos = F32vec4(0.f, fPos[2], 0.f, fPos[0]);
            const F32vec4 diff = vecTar - vecPos;
            const F32vec4 diff_pow = diff * diff;

            const double Sqrt = sqrt(F32vec4(add_horizontal(diff_pow)))[0];
            if (Sqrt == 0.f)
                return 0.f;

            const double Acos = acos(diff[2] / Sqrt);

            if (diff[0] > 0.f)
                return (float)(PiToAngle(Acos) + 32768);
            else
                return (float)(PiToAngle(-Acos) + 32768);
        }

        float WINAPIV CPerformance::GetDist(
            const float* fPos,
            const float* fTar,
            ATF::Global::Info::GetDist498_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            const F32vec4 vecTar = F32vec4(0.f, fTar[2], fTar[1], fTar[0]);
            const F32vec4 vecPos = F32vec4(0.f, fPos[2], fPos[1], fPos[0]);
            const F32vec4 diff = vecTar - vecPos;
            const F32vec4 diff_pow = diff * diff;

            return sqrt(F32vec4(add_horizontal(diff_pow)))[0];
        }
    }
}