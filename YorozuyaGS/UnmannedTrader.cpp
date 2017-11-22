#include "stdafx.h"

#include "UnmannedTrader.h"
#include "UnmannedTraderEx.h"

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
            enable_hook(&ATF::CUnmannedTraderUserInfoTable::CompleteBuy, &CUnmannedTrader::CompleteBuy);
            enable_hook(&ATF::CUnmannedTraderUserInfoTable::CompleteReRegist, &CUnmannedTrader::CompleteReRegist);
            enable_hook(&ATF::CUnmannedTraderUserInfo::ReRegist, &CUnmannedTrader::ReRegist);
            enable_hook(&ATF::CUnmannedTraderController::UpdateReRegist, &CUnmannedTrader::UpdateReRegist);
            enable_hook(&ATF::CUnmannedTraderUserInfo::NotifyRegistItem, &CUnmannedTrader::NotifyRegistItem);
        }

        void CUnmannedTrader::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CUnmannedTrader::get_name()
        {
            static const ModuleName_t name = "fix_UnmannedTrader";
            return name;
        }

        void WINAPIV CUnmannedTrader::CompleteBuy(
            ATF::CUnmannedTraderUserInfoTable * pObj, 
            char byRet,
            char * pLoadData, 
            ATF::CUnmannedTraderTradeInfo * pkTaradInfo, 
            ATF::Info::CUnmannedTraderUserInfoTableCompleteBuy16_ptr next)
        {
            UNREFERENCED_PARAMETER(byRet);
            UNREFERENCED_PARAMETER(next);

            do
            {
                ATF::CPlayer* ppkBuyPlayer = nullptr;
                ATF::CUnmannedTraderUserInfo* ppkBuyUser = nullptr;

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
                    ATF::Global::g_MainThread->PushDQSData(0xFFFFFFFF, 0i64, 68, (char *)&pQryData, sizeof(pQryData));

                if (nSucceeded < Dst.byNum)
                    Dst.byRetCode = -1;

                Dst.dwLeftDalant = ppkBuyPlayer->m_Param.GetDalant();
                char pbyType[] = { 30, 31 };
                ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(ppkBuyPlayer->m_ObjID.m_wIndex, pbyType, (char *)&Dst, Dst.size());
            } while (false);
        }

        void WINAPIV CUnmannedTrader::ReRegist(
            ATF::CUnmannedTraderUserInfo *pObj,
            char byType,
            ATF::_unmannedtrader_re_regist_request_clzo *pRequest,
            ATF::CLogFile *pkLogger,
            ATF::Info::CUnmannedTraderUserInfoReRegist110_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            do
            {
                if (byType >= 2)
                    break;

                if (pRequest->byRegedNum == 0)
                    break;

                DWORD dwSub = 0;
                pObj->CountRegistItem();
                    
                _qry_case_unmandtrader_re_registsingleitem_ex Dst;
                memset(&Dst, 0, sizeof(Dst));

                Dst.byType = 0;
                Dst.byNum = pRequest->byRegedNum;
                Dst.wInx = pObj->m_wInx;
                Dst.dwOwnerSerial = pObj->m_dwUserSerial;

                for (int j = 0; j < pRequest->byRegedNum; ++j)
                {
                    Dst.List[j].byUpdateState = 11;
                    Dst.List[j].bRegist = pRequest->List[j].bRegist;
                    Dst.List[j].wItemSerial = pRequest->List[j].wItemSerial;
                    Dst.List[j].byAmount = pRequest->List[j].byAmount;
                    Dst.List[j].dwPrice = pRequest->List[j].dwPrice;
                    Dst.List[j].dwRegistSerial = pRequest->List[j].dwRegistSerial;

                    if (!Dst.List[j].bRegist)
                        continue;

                    Dst.List[j].byProcRet = pObj->CheckReRegist(
                        byType,
                        pkLogger,
                        pRequest->List[j].wItemSerial,
                        pRequest->List[j].byAmount,
                        pRequest->List[j].byItemTableCode,
                        pRequest->List[j].wItemIndex,
                        pRequest->List[j].dwRegistSerial,
                        pRequest->List[j].dwPrice,
                        &Dst.List[j].byClass1,
                        &Dst.List[j].byClass2,
                        &Dst.List[j].byClass3,
                        &Dst.List[j].dwTax,
                        &Dst.List[j].dwListIndex);

                    if (!Dst.List[j].byProcRet)
                    {
                        Dst.List[j].byUpdateState = 1;
                        dwSub += Dst.List[j].dwTax;
                    }
                }

                if (dwSub)
                {
                    ATF::Global::g_Player[pObj->m_wInx].SubDalant(dwSub);

                    int nLv = ATF::Global::g_Player[pObj->m_wInx].m_Param.GetLevel();
                    if (nLv == 30 || nLv == 40 || nLv == 50 || nLv == 60)
                    {
                        ATF::CMoneySupplyMgr::Instance()->UpdateFeeMoneyData(
                            ATF::Global::g_Player[pObj->m_wInx].m_Param.GetRaceCode(),
                            nLv, 
                            dwSub);
                    }
                }

                pObj->m_kRequestState.SetRequest(5);
                ATF::Global::g_MainThread->PushDQSData(0xFFFFFFFF, 0, static_cast<unsigned char>(140), (char *)&Dst, sizeof(Dst));
            } while (false);
        }

        bool WINAPIV CUnmannedTrader::UpdateReRegist(
            ATF::CUnmannedTraderController * pObj, 
            char * pData, 
            ATF::Info::CUnmannedTraderControllerUpdateReRegist108_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            bool result = false;

            do
            {
                _qry_case_unmandtrader_re_registsingleitem_ex* pQryData = (_qry_case_unmandtrader_re_registsingleitem_ex*)pData;

                SYSTEMTIME Dst;
                memset(&Dst, 0, sizeof(Dst));
                GetLocalTime(&Dst);

                bool bState = false;
                for (int j = 0; j < pQryData->byNum; ++j)
                {
                    char byState = -1;
                    char byProcRet = 0;
                    pObj->CheckDBItemState(pQryData->byType, pQryData->List[j].dwRegistSerial, &byState, &byProcRet);

                    if (byProcRet == 8 || byProcRet == 38)
                    {
                        pQryData->List[j].byProcRet = byProcRet;
                        continue;
                    }

                    if (byState != 6 && byState != 13)
                    {
                        pQryData->List[j].byProcRet = -53;
                        continue;
                    }
                    
                    if (!pQryData->List[j].bRegist)
                    {
                        bState = (*ATF::Global::pkDB)->Update_UnmannedTraderItemState(
                            pQryData->byType,
                            pQryData->List[j].dwRegistSerial,
                            pQryData->List[j].byUpdateState,
                            (ATF::_SYSTEMTIME*)&Dst);
                        if (!bState)
                        {
                            pQryData->List[j].byProcRet = 30;
                        }
                        continue;
                    }

                    if (pQryData->List[j].byProcRet)
                    {
                        bState = (*ATF::Global::pkDB)->Update_UnmannedTraderItemState(
                            pQryData->byType,
                            pQryData->List[j].dwRegistSerial,
                            5,
                            (ATF::_SYSTEMTIME*)&Dst);
                        if (!bState)
                        {
                            pQryData->List[j].byProcRet = 30;
                        }
                        continue;
                    }

                    unsigned int pdwRegister = 0;
                    char byResult = (*ATF::Global::pkDB)->Select_UnmannedTraderRegister(
                        pQryData->byType,
                        pQryData->List[j].dwRegistSerial,
                        &pdwRegister);

                    if (byResult)
                    {
                        pQryData->List[j].byProcRet = 24;
                        continue;
                    }

                    if (pdwRegister != pQryData->dwOwnerSerial)
                    {
                        pQryData->List[j].byProcRet = -54;
                        continue;
                    }

                    bState = Update_UnmannedTraderSingleItemInfo(
                        *ATF::Global::pkDB,
                        pQryData->List[j].dwRegistSerial,
                        pQryData->List[j].byAmount);
                    if (!bState)
                    {
                        pQryData->List[j].byProcRet = 24;
                        continue;
                    }

                    bState = (*ATF::Global::pkDB)->Update_UnmannedTraderReRegist(
                        pQryData->byType,
                        pQryData->List[j].dwRegistSerial,
                        pQryData->List[j].byUpdateState,
                        pQryData->List[j].dwPrice,
                        pQryData->List[j].dwTax,
                        (ATF::_SYSTEMTIME*)&Dst);

                    if (!bState)
                    {
                        pQryData->List[j].byProcRet = 24;
                        continue;
                    }
                }
            } while (false);

            return result;
        }

        void WINAPIV CUnmannedTrader::CompleteReRegist(
            ATF::CUnmannedTraderUserInfoTable * pObj, 
            char * pData, 
            ATF::Info::CUnmannedTraderUserInfoTableCompleteReRegist22_ptr next)
        {
            do
            {
                _qry_case_unmandtrader_re_registsingleitem_ex* pQryData = (_qry_case_unmandtrader_re_registsingleitem_ex*)pData;

                _qry_case_unmandtrader_re_registsingleitem origQryData;
                memset(&origQryData, 0, sizeof(origQryData));

                origQryData.byNum = pQryData->byNum;
                origQryData.byType = pQryData->byType;
                origQryData.dwOwnerSerial = pQryData->dwOwnerSerial;
                origQryData.wInx = pQryData->wInx;

                for (int i = 0; i < pQryData->byNum; ++i)
                {
                    origQryData.List[i].bRegist = pQryData->List[i].bRegist;
                    origQryData.List[i].byClass1 = pQryData->List[i].byClass1;
                    origQryData.List[i].byClass2 = pQryData->List[i].byClass2;
                    origQryData.List[i].byClass3 = pQryData->List[i].byClass3;
                    origQryData.List[i].byProcRet = pQryData->List[i].byProcRet;
                    origQryData.List[i].byUpdateState = pQryData->List[i].byUpdateState;
                    origQryData.List[i].dwListIndex = pQryData->List[i].dwListIndex;
                    origQryData.List[i].dwPrice = pQryData->List[i].dwPrice;
                    origQryData.List[i].dwRegistSerial = pQryData->List[i].dwRegistSerial;
                    origQryData.List[i].dwTax = pQryData->List[i].dwTax;
                    origQryData.List[i].wItemSerial = pQryData->List[i].wItemSerial;
                }

                next(pObj, (char *)&origQryData);
            } while (false);
        }

        void WINAPIV CUnmannedTrader::NotifyRegistItem(
            ATF::CUnmannedTraderUserInfo* pObj, 
            ATF::Info::CUnmannedTraderUserInfoNotifyRegistItem104_ptr next)
        {
            UNREFERENCED_PARAMETER(pObj);

            _unmannedtrader_Regist_item_inform_zocl Msg;
            for (int j = 0; j < pObj->m_byMaxRegistCnt; ++j)
            {
                auto& Info = pObj->m_vecRegistItemInfo[j];
                if (!Info.IsRegist())
                    continue;

                Msg.List[Msg.byNum].bUnknown = false;
                Msg.List[Msg.byNum].wItemSerial = Info.GetItemSerial();
                Msg.List[Msg.byNum].dwRegistSerial = Info.GetRegistSerial();
                Msg.List[Msg.byNum].dwPrice = Info.GetPrice();
                Msg.List[Msg.byNum].dwLeftSec = Info.GetLeftSec();
                Msg.List[Msg.byNum].dwListIndex = 0;

                auto Instance = ATF::CUnmannedTraderGroupItemInfoTable::Instance();

                char byDivision = -1;
                char byClass = -1;
                char bySubClass = -1;
                Instance->GetGroupID(
                    Info.GetTableCode(),
                    Info.GetItemIndex(),
                    &byDivision, 
                    &byClass,
                    &bySubClass,
                    &Msg.List[Msg.byNum].dwListIndex);

                ++Msg.byNum;
            }

            char pbyType[2]{ 30, 25 };
            ATF::Global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pObj->m_wInx, pbyType, (char *)&Msg, Msg.size());
        }

        bool WINAPIV CUnmannedTrader::Update_UnmannedTraderSingleItemInfo(
            ATF::CRFWorldDatabase * pObj, 
            unsigned int dwRegistSerial, 
            char byAmount)
        {
            static const char szTemplateQuery[] =
                "update [dbo].[tbl_utsingleiteminfo] "
                "set [d] = %u "
                "where [serial] = %u ";

            bool result = false;
            do
            {
                char szQuery[1024];
                memset(szQuery, 0, sizeof(szQuery));

                sprintf_s(
                    szQuery,
                    szTemplateQuery,
                    byAmount,
                    dwRegistSerial);

                pObj->SetAutoCommitMode(false);
                if (!pObj->ExecUpdateQuery(szQuery, true))
                {
                    pObj->RollbackTransaction();
                    break;
                }

                pObj->CommitTransaction();
                
                result = true;
            } while (false);

            pObj->SetAutoCommitMode(true);
            return result;
        }
    }
}
