#include "stdafx.h"

#include "PlayerTrade.h"
#include "../Common/ItemCheckHelper.h"

#include <ATF/global.hpp>
#include <ATF/$FE149BD64943A35FB471F74C3D3B2245.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerTrade::load()
        {
            enable_hook(&ATF::CPlayer::pc_DTradeOKRequest, &CPlayerTrade::pc_DTradeOKRequest);
        }

        void CPlayerTrade::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerTrade::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.trade";
            return name;
        }

        void WINAPIV CPlayerTrade::pc_DTradeOKRequest(
            ATF::CPlayer* pObj,
            unsigned int* pdwKey,
            ATF::Info::CPlayerpc_DTradeOKRequest1687_ptr next)
        {
            bool bCheckPassed = false;
            ATF::CPlayer* pDst = nullptr;

            auto fnCheckExchange = [](ATF::CPlayer* pPlayer) -> bool
            {
                bool result = true;
                for (int i = 0; i < pPlayer->m_pmTrd.bySellItemNum; ++i)
                {
                    if (pPlayer->m_pmTrd.DItemNode[i].byStorageCode >= ATF::STORAGE_POS::STORAGE_NUM)
                    {
                        result = false;
                        break;
                    }

                    auto pStoragePtr = pPlayer->m_Param.m_pStoragePtr[pPlayer->m_pmTrd.DItemNode[i].byStorageCode];
                    auto pItem = pStoragePtr->GetPtrFromSerial(pPlayer->m_pmTrd.DItemNode[i].dwSerial);
                    if (!ItemCheckHelper::IsExchangable(pItem))
                    {
                        result = false;
                        break;
                    }
                }

                return result;
            };

            do
            {
                if (!ATF::Global::DTradeEqualPerson(pObj, &pDst))
                {
                    bCheckPassed = true;
                    break;
                }

                if (!pDst)
                    break;

                if (pObj->m_byUserDgr && pDst->m_byUserDgr == 0)
                    break;

                if (pDst->m_byUserDgr && pObj->m_byUserDgr == 0)
                    break;

                if (pObj->m_Param.GetRaceCode() != pDst->m_Param.GetRaceCode())
                    break;

                if (!pObj->m_pmTrd.bDTradeMode || !pObj->m_pmTrd.bDTradeLock)
                {
                    bCheckPassed = true;
                    break;
                }

                if (!pDst->m_pmTrd.bDTradeMode || !pDst->m_pmTrd.bDTradeOK || !pDst->m_pmTrd.bDTradeLock)
                {
                    bCheckPassed = true;
                    break;
                }

                if (pObj->m_pmTrd.bySellItemNum > pDst->m_Param.m_dbInven.GetNumEmptyCon())
                    break;

                if (pDst->m_pmTrd.bySellItemNum > pObj->m_Param.m_dbInven.GetNumEmptyCon())
                    break;

                if (pObj->m_pmTrd.dwDTrade_Dalant > pObj->m_Param.GetDalant() ||
                    pDst->m_pmTrd.dwDTrade_Dalant > pDst->m_Param.GetDalant())
                    break;

                if (pObj->m_pmTrd.dwDTrade_Gold > pObj->m_Param.GetGold() ||
                    pDst->m_pmTrd.dwDTrade_Gold > pDst->m_Param.GetGold())
                    break;

                if (!fnCheckExchange(pObj))
                    break;

                if (!fnCheckExchange(pDst))
                    break;

                bCheckPassed = true;
            } while (false);

            if (bCheckPassed)
                next(pObj, pdwKey);
            else
            {
                pObj->m_pmTrd.Init();
                pObj->SendMsg_DTradeCloseInform(0);
                if (pDst)
                {
                    pDst->m_pmTrd.Init();
                    pDst->SendMsg_DTradeCloseInform(0);
                }
            }
        }
    }
}
