#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CNetworkEXInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CNetworkEX
            : public Yorozuya::Module::IModule
            , CModuleRegister<CNetworkEX>
        {
        public:
            CNetworkEX() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static bool WINAPIV DTradeAskRequest(
                ATF::CNetworkEX* pObj, 
                int n, 
                char* pBuf, 
                ATF::Info::CNetworkEXDTradeAskRequest200_ptr next);

            static bool WINAPIV Apex_R(
                ATF::CNetworkEX* pObj, 
                int n, 
                uint16_t wSize, 
                char* pBuf,
                ATF::Info::CNetworkEXApex_R48_ptr next);

            static bool WINAPIV Apex_T(
                ATF::CNetworkEX* pObj, 
                int n, 
                uint16_t wSize, 
                char* pBuf,
                ATF::Info::CNetworkEXApex_T50_ptr next);

            static bool WINAPIV SetItemCheckRequest(
                ATF::CNetworkEX *pNetwork,
                int n,
                char *pBuf,
                ATF::Info::CNetworkEXSetItemCheckRequest512_ptr next);

            static bool WINAPIV DataAnalysis(
                ATF::CNetworkEX *pNetwork,
                unsigned int dwProID,
                unsigned int dwClientIndex,
                ATF::_MSG_HEADER *pMsgHeader,
                char *pMsg,
                ATF::Info::CNetworkEXDataAnalysis222_ptr next);
        };
    };
};
