#include "stdafx.h"

#include "UnmannedTrader.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CUnmannedTrader::load()
        {
            auto& core = CATFCore::get_instance();
        }

        void CUnmannedTrader::unload()
        {
            auto& core = CATFCore::get_instance();
        }

        void CUnmannedTrader::loop()
        {
        }

        ModuleVersion_t CUnmannedTrader::get_version()
        {
            return usVersion;
        }

        ModuleName_t CUnmannedTrader::get_name()
        {
            static const ModuleName_t name = "fix_UnmannedTrader";
            return name;
        }

        void CUnmannedTrader::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }
    }
}