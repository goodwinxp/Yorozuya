#include "stdafx.h"

#include "ETypes.h"
#include "NetworkEx.h"
#include <ATF/global.hpp>
#include <ATF/_d_trade_ask_request_clzo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CNetworkEX::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CNetworkEX::DTradeAskRequest, &CNetworkEX::DTradeAskRequest);
            core.set_hook(&ATF::CNetworkEX::Apex_R, &CNetworkEX::Apex_R);
            core.set_hook(&ATF::CNetworkEX::Apex_T, &CNetworkEX::Apex_T);
        }

        void CNetworkEX::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CNetworkEX::DTradeAskRequest);
            core.unset_hook(&ATF::CNetworkEX::Apex_R);
            core.unset_hook(&ATF::CNetworkEX::Apex_T);
        }

        void CNetworkEX::loop()
        {
        }

        ModuleVersion_t CNetworkEX::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CNetworkEX::get_name()
        {
            static const ModuleName_t name = "fix_NetworkEx";
            return name;
        }

        void CNetworkEX::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CNetworkEX::DTradeAskRequest(
            ATF::CNetworkEX * pObj, 
            int n, 
            char * pBuf, 
            ATF::Info::CNetworkEXDTradeAskRequest200_ptr next)
        {
            bool result = false;

            do
            {
                ATF::_d_trade_ask_request_clzo* pMsg = (ATF::_d_trade_ask_request_clzo*)pBuf;

                if (pMsg->wDstIndex >= MAX_PLAYER)
                    break;

                result = next(pObj, n, pBuf);
            } while (false);
            
            return result;
        }

        bool WINAPIV CNetworkEX::Apex_R(
            ATF::CNetworkEX * pObj, 
            int n, 
            uint16_t wSize, 
            char * pBuf, 
            ATF::Info::CNetworkEXApex_R48_ptr next)
        {
            UNREFERENCED_PARAMETER(pObj);
            UNREFERENCED_PARAMETER(n);
            UNREFERENCED_PARAMETER(wSize);
            UNREFERENCED_PARAMETER(pBuf);
            UNREFERENCED_PARAMETER(next);

            return true;
        }

        bool WINAPIV CNetworkEX::Apex_T(
            ATF::CNetworkEX * pObj, 
            int n, 
            uint16_t wSize, 
            char * pBuf, 
            ATF::Info::CNetworkEXApex_T50_ptr next)
        {
            UNREFERENCED_PARAMETER(pObj);
            UNREFERENCED_PARAMETER(n);
            UNREFERENCED_PARAMETER(wSize);
            UNREFERENCED_PARAMETER(pBuf);
            UNREFERENCED_PARAMETER(next);

            return true;
        }
    }
}