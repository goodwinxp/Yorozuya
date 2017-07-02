#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CNetworkEX_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CNetworkEX : public IModule, CModuleRegister<CNetworkEX>
        {
        public:
            CNetworkEX() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV DTradeAskRequest(
                ATF::CNetworkEX* pObj, 
                int n, 
                char* pBuf, 
                ATF::info::CNetworkEXDTradeAskRequest200_ptr next);

            static bool WINAPIV Apex_R(
                ATF::CNetworkEX* pObj, 
                int n, 
                uint16_t wSize, 
                char* pBuf,
                ATF::info::CNetworkEXApex_R48_ptr next);

            static bool WINAPIV Apex_T(
                ATF::CNetworkEX* pObj, 
                int n, 
                uint16_t wSize, 
                char* pBuf,
                ATF::info::CNetworkEXApex_T50_ptr next);
        };
    };
};
