#include "stdafx.h"

#include "UnmannedTrader.h"
#include "ETypes.h"
#include <ATF/global.hpp>
#include <ATF/_qry_case_unmandtrader_buy_get_info.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CUnmannedTrader::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CUnmannedTraderUserInfoTable::CompleteBuy, &CUnmannedTrader::CompleteBuy);
        }

        void CUnmannedTrader::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CUnmannedTraderUserInfoTable::CompleteBuy);
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

        void WINAPIV CUnmannedTrader::CompleteBuy(
            ATF::CUnmannedTraderUserInfoTable * pObj, 
            char byRet,
            char * pLoadData, 
            ATF::CUnmannedTraderTradeInfo * pkTaradInfo, 
            ATF::info::CUnmannedTraderUserInfoTableCompleteBuy16_ptr next)
        {
            ATF::CUnmannedTraderUserInfo* ppkBuyUser = nullptr;
            ATF::CPlayer* ppkBuyPlayer = nullptr;

            do
            {
                _qry_case_unmandtrader_buy_update_wait *pkQuery = (_qry_case_unmandtrader_buy_update_wait*)pLoadData;
                if (!pObj->SubCompleteBuyFindBuyer(pkQuery, &ppkBuyUser, &ppkBuyPlayer))
                    break;

                if (!ppkBuyUser)
                    break;

                if (!ppkBuyPlayer)
                    break;

                ppkBuyUser->ClearRequest();

                _unmannedtrader_buy_item_result_zocl Dst;
                _qry_case_unmandtrader_buy_update_complete pQryData;

                memset(&Dst, 0, sizeof(Dst));
                memset(&pQryData, 0, sizeof(pQryData));

                Dst.byRetCode = 0;
                Dst.byNum = pkQuery->byNum;

                pQryData.wInx = ppkBuyPlayer->m_ObjID.m_wIndex;
                pQryData.dwBuyer = pkQuery->dwBuyer;
                pQryData.byRace = ppkBuyPlayer->m_Param.GetRaceCode();
                pQryData.byType = pkQuery->byType;

                int nSucceeded = 0, nFailed = 0;
                for (int j = 0; j < pkQuery->byNum; ++j)
                {
                    int indx = pQryData.byNum;
                    if (pObj->SubCompleteBuyProcBuy(
                        ppkBuyPlayer,
                        ppkBuyUser,
                        pkQuery->tResultTime,
                        &pkQuery->List[j],
                        &Dst.List[j],
                        &pQryData.List[indx],
                        &pQryData.byNum,
                        &Dst.dwPayDalant,
                        pkTaradInfo))
                    {
                        ++nSucceeded;
                    }
                    else if (pQryData.List[indx].byUpdateState == 8)
                    {
                        ++nFailed;
                    }
                }

                if (nFailed > 0 || nSucceeded > 0)
                    pObj->SubCompleteBuyIncreaseVesion(pkQuery->byDivision, pkQuery->byClass);

                if (pQryData.byNum > 0)
                    ATF::global::g_MainThread->PushDQSData(0xFFFFFFFF, 0i64, 68, (char *)&pQryData, sizeof(pQryData));

                if (nSucceeded < Dst.byNum)
                    Dst.byRetCode = -1;

                Dst.dwLeftDalant = ppkBuyPlayer->m_Param.GetDalant();
                char pbyType[] = { 30, 31 };
                ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(ppkBuyPlayer->m_ObjID.m_wIndex, pbyType, (char *)&Dst, Dst.size());
            } while (false);
        }
    }
}