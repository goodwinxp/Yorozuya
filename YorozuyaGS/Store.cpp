#include "stdafx.h"

#include "ETypes.h"
#include "Store.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CStore::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CItemStore::IsSell, &CStore::IsSell);
        }

        void CStore::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CItemStore::IsSell);
        }

        void CStore::loop()
        {
        }

        ModuleVersion_t CStore::get_version()
        {
            return usVersion;
        }

        ModuleName_t CStore::get_name()
        {
            static const ModuleName_t name = "fix_store";
            return name;
        }

        void CStore::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        char WINAPIV CStore::IsSell(
            ATF::CItemStore * pObj, 
            char byOfferNum, 
            ATF::_buy_offer * pOffer, 
            unsigned int dwHasDalant, 
            unsigned int dwHasGold, 
            long double dHasPoint, 
            unsigned int * dwHasActPoint, 
            char * pbyActCode, 
            float fDiscountRate, 
            char byRace, 
            char byGrade, 
            ATF::info::CItemStoreIsSell36_ptr next)
        {
            static const uint64_t MaxPrice = 0xffffffff;
            uint64_t uuSummaryPrice[(size_t)e_money_type::num] = { 0 };

            for (int i = 0; i < byOfferNum; ++i)
            {
                char nTableCode = pObj->m_pStorageItem[pOffer[i].byGoodIndex].byItemTableCode;
                if (pOffer[i].byGoodAmount > 1 && 
                    ATF::global::IsOverLapItem(nTableCode) == FALSE)
                    return 100;
            }

            float fR = ATF::global::eGetTex(byRace) + 1.0;
            for (int i = 0; i < byOfferNum; ++i)
            {
                char byMoneyUnit = 0;
                uint64_t cur_summ = pObj->CalcSellPrice(pOffer[i].byGoodIndex, &byMoneyUnit);
                if (byMoneyUnit >= _ARRAYSIZE(uuSummaryPrice) || byMoneyUnit < 0)
                    continue;

                uuSummaryPrice[byMoneyUnit] += cur_summ * pOffer[i].byGoodAmount * fR;
            }

            if (fDiscountRate > 0.0f)
            {
                if (fDiscountRate > 1.0f)
                    fDiscountRate = 1.0f;

                for (auto &TradePrice : uuSummaryPrice)
                    TradePrice *= 1.0 - fDiscountRate;
            }

            for (auto &TradePrice : uuSummaryPrice)
            {
                if (TradePrice >= MaxPrice)
                {
                    return 100;
                }
            }

            return next(pObj, byOfferNum, pOffer, dwHasDalant, dwHasGold, dHasPoint, dwHasActPoint, pbyActCode, fDiscountRate, byRace, byGrade);
        }
    }
}