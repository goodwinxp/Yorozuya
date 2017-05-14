#include "stdafx.h"

#include <ATF/global.hpp>
#include <ATF/$FE149BD64943A35FB471F74C3D3B2245.hpp>

#include "Trade.h"
#include "ItemCheckHelper.h"

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CTrade::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&CPlayer::pc_DTradeOKRequest, &CTrade::pc_DTradeOKRequest);
        }

        void CTrade::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::pc_DTradeOKRequest);
        }

        void CTrade::loop()
        {
        }

        ModuleVersion_t CTrade::get_version()
        {
            return usVersion;
        }

        ModuleName_t CTrade::get_name()
        {
            static const ModuleName_t name = "fix_trade";
            return name;
        }

        void CTrade::configure(const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CTrade::pc_DTradeOKRequest(
            ATF::CPlayer* pObj,
            unsigned int* pdwKey,
            ATF::info::CPlayerpc_DTradeOKRequest1687_ptr next)
        {
            bool bCheckPassed = false;
            CPlayer* pDst = &global::g_Player[pObj->m_pmTrd.wDTradeDstIndex];

            auto fnCheckExchange = [](CPlayer* pPlayer) -> bool
            {
                bool result = true;
                for (int i = 0; i < pPlayer->m_pmTrd.bySellItemNum; ++i)
                {
                    if (pPlayer->m_pmTrd.DItemNode[i].byStorageCode >= STORAGE_POS::STORAGE_NUM)
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

                if (fnCheckExchange(pObj))
                    break;

                if (fnCheckExchange(pDst))
                    break;

                bCheckPassed = true;
            } while (false);

            if (bCheckPassed)
                next(pObj, pdwKey);
        }
    }
}
