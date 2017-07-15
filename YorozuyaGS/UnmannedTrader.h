#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"
#include <ATF/CUnmannedTraderControllerInfo.hpp>


namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CUnmannedTrader : public IModule, CModuleRegister<CUnmannedTrader>
        {
        public:
            CUnmannedTrader() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV CompleteBuy(
                ATF::CUnmannedTraderUserInfoTable *pObj,
                char byRet, 
                char *pLoadData, 
                ATF::CUnmannedTraderTradeInfo *pkTaradInfo,
                ATF::Info::CUnmannedTraderUserInfoTableCompleteBuy16_ptr next);

            static void WINAPIV ReRegist(
                ATF::CUnmannedTraderUserInfo *pObj,
                char byType,
                ATF::_unmannedtrader_re_regist_request_clzo *pRequest,
                ATF::CLogFile *pkLogger,
                ATF::Info::CUnmannedTraderUserInfoReRegist110_ptr next);

            static bool WINAPIV UpdateReRegist(
                ATF::CUnmannedTraderController *pObj,
                char *pData,
                ATF::Info::CUnmannedTraderControllerUpdateReRegist108_ptr next);

            static void WINAPIV CompleteReRegist(
                ATF::CUnmannedTraderUserInfoTable *pObj,
                char *pData,
                ATF::Info::CUnmannedTraderUserInfoTableCompleteReRegist22_ptr next);

        private:
            static bool WINAPIV Update_UnmannedTraderSingleItemInfo(
                ATF::CRFWorldDatabase * pObj,
                unsigned int dwRegistSerial,
                char byAmount);
        };
    };
};
