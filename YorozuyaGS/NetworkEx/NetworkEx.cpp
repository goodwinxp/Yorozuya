#include "stdafx.h"

#include "NetworkEx.h"
#include "../../Common/ETypes.h"

#include <ATF/global.hpp>
#include <ATF/_d_trade_ask_request_clzo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CNetworkEX::load()
        {
            enable_hook(&ATF::CNetworkEX::SetItemCheckRequest, &CNetworkEX::SetItemCheckRequest);
            enable_hook(&ATF::CNetworkEX::DTradeAskRequest, &CNetworkEX::DTradeAskRequest);
            enable_hook(&ATF::CNetworkEX::Apex_R, &CNetworkEX::Apex_R);
            enable_hook(&ATF::CNetworkEX::Apex_T, &CNetworkEX::Apex_T);
            enable_hook(&ATF::CNetworkEX::DataAnalysis, &CNetworkEX::DataAnalysis);
        }

        void CNetworkEX::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CNetworkEX::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.network_ex";
            return name;
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

                if (pMsg->wDstIndex >= ATF::Global::max_player)
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
        bool WINAPIV CNetworkEX::SetItemCheckRequest(
            ATF::CNetworkEX * pNetwork, int n, char * pBuf,
            ATF::Info::CNetworkEXSetItemCheckRequest512_ptr next)
        {
            UNREFERENCED_PARAMETER(pNetwork);
            UNREFERENCED_PARAMETER(n);
            UNREFERENCED_PARAMETER(pBuf);
            UNREFERENCED_PARAMETER(next);
            return true;
        }

        bool WINAPIV CNetworkEX::DataAnalysis(
            ATF::CNetworkEX * pNetwork,
            unsigned int dwProID,
            unsigned int dwClientIndex,
            ATF::_MSG_HEADER * pMsgHeader,
            char * pMsg,
            ATF::Info::CNetworkEXDataAnalysis222_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            bool result = false;
            if (dwClientIndex >= 0 && dwClientIndex < ATF::Global::max_player)
            {
                switch (dwProID)
                {
                case 0:
                    pNetwork->ClientLineAnalysis(dwClientIndex, pMsgHeader, pMsg);
                    result = true;
                    break;
                case 1:
                    result = pNetwork->AccountLineAnalysis(dwClientIndex, pMsgHeader, pMsg);
                    break;
                case 3:
                    result = pNetwork->BillingLineAnalysis(dwClientIndex, pMsgHeader, pMsg);
                    break;
                case 2:
                    result = pNetwork->WebAgentLineAnalysis(dwClientIndex, pMsgHeader, pMsg);
                    break;
                default:
                    result = false;
                    break;
                }
            }

            return result;
        }
    }
}