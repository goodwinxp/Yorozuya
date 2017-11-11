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
            enable_hook(&ATF::CItemStore::IsSell, &CStore::IsSell);
        }

        void CStore::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CStore::get_name()
        {
            static const ModuleName_t name = "fix_Store";
            return name;
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
            ATF::Info::CItemStoreIsSell36_ptr next)
        {
            _STD array<uint64_t, (size_t)e_money_type::num> uuSummaryPrice{0};

            for (int i = 0; i < byOfferNum; ++i)
            {
                char nTableCode = pObj->m_pStorageItem[pOffer[i].byGoodIndex].byItemTableCode;
                if (pOffer[i].byGoodAmount > 1 && 
                    ATF::Global::IsOverLapItem(nTableCode) == FALSE)
                    return 100;
            }

            float fR = ATF::Global::eGetTex(byRace) + 1.0f;
            for (int i = 0; i < byOfferNum; ++i)
            {
                char byMoneyUnit = 0;
                uint64_t cur_summ = pObj->CalcSellPrice(pOffer[i].byGoodIndex, &byMoneyUnit);
                if (byMoneyUnit >= uuSummaryPrice.size() || byMoneyUnit < 0)
                    continue;

                uuSummaryPrice[byMoneyUnit] += static_cast<uint64_t>(cur_summ * pOffer[i].byGoodAmount * fR);
            }

            if (fDiscountRate > 0.0f)
            {
                if (fDiscountRate > 1.0f)
                    fDiscountRate = 1.0f;

                for (auto &TradePrice : uuSummaryPrice)
                    TradePrice = static_cast<uint64_t>(TradePrice * (1.0f - fDiscountRate));
            }

            for (const auto &TradePrice : uuSummaryPrice)
            {
                if (TradePrice >= UINT32_MAX)
                {
                    return 100;
                }
            }

            return next(pObj, byOfferNum, pOffer, dwHasDalant, dwHasGold, dHasPoint, dwHasActPoint, pbyActCode, fDiscountRate, byRace, byGrade);
        }
    }
}