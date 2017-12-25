#include "stdafx.h"

#include "PvpPotion.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        #define CheckEffLimType(x, y) \
            (x == y && x != -1 && y != -1)

        bool CPvpPotion::m_bActivated = false;
        CPvpPotion::TempEffectFunc_Cont CPvpPotion::g_TempEffectFunc;

        void CPvpPotion::load()
        {
            TempEffectFunc_Ptr* origTempEffectFunc = (TempEffectFunc_Ptr*)0x14096CDF0L;
            for (int i = 0; i < detail::count_orig_effect_func; ++i)
            {
                g_TempEffectFunc[i] = origTempEffectFunc[i];
            }

            ::std::vector<::std::pair<int, TempEffectFunc_Ptr>> vecNewFunc{
                { 182, &AlterMoneyPotion<e_money_type::cp> },
                { 183, &AlterMoneyPotion<e_money_type::gold> },
                { 184, &AlterMoneyPotion<e_money_type::pvp_point> },
                { 185, &AlterMoneyPotion<e_money_type::pvp_point_2> },
                { 186, &AlterMoneyPotion<e_money_type::processing_point> },
                { 187, &AlterMoneyPotion<e_money_type::hunter_point> },
                { 188, &AlterMoneyPotion<e_money_type::gold_point> }
            };

            for (auto& kv : vecNewFunc)
            {
                g_TempEffectFunc[kv.first] = kv.second;
            }

            enable_hook(&ATF::CPotionMgr::ApplyPotion, &CPvpPotion::ApplyPotion);
        }

        void CPvpPotion::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPvpPotion::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addons.pvp_potion";
            return name;
        }

        void CPvpPotion::configure(const rapidjson::Value & nodeConfig)
        {
            CPvpPotion::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
        }

        int CPvpPotion::ApplyPotion(
            ATF::CPotionMgr* pObj,
            ATF::CPlayer* pUsePlayer,
            ATF::CPlayer* pApplyPlayer,
            ATF::_skill_fld* pEffecFld,
            ATF::_CheckPotion_fld* pCheckFld,
            ATF::_PotionItem_fld* pfB,
            bool bCommonPotion,
            ATF::Info::CPotionMgrApplyPotion2_ptr next)
        {
            if (!CPvpPotion::m_bActivated)
                return next(pObj, pUsePlayer, pApplyPlayer, pEffecFld, pCheckFld, pfB, bCommonPotion);

            if (!pUsePlayer || !pApplyPlayer || !pEffecFld)
                return -1;

            if (pCheckFld)
            {
                for (auto& i : pCheckFld->m_CheckEffectCode)
                {
                    if (!ATF::Global::_CheckPotionData(&i, pApplyPlayer))
                        return 19;
                }
            }

            int nContEffectResult = -1;
            int nResult = -1;

            if (pEffecFld->m_nContEffectType != -1 && bCommonPotion)
            {
                int indxDelBuff = 0;
                bool bExpiresBuff = false;
                for (int k = 0; k < _countof(pUsePlayer->m_PotionParam.m_ContCommonPotionData); ++k)
                {
                    int n = pUsePlayer->m_PotionParam.m_ContCommonPotionData[k].GetEffectIndex();
                    auto pPotionFld = (ATF::_PotionItem_fld*)ATF::Global::g_MainThread
                        ->m_tblItemData[(int)e_code_item_table::tbl_code_potion].GetRecord(n);
                    auto pCurrFld = (ATF::_skill_fld*)pObj->m_tblPotionEffectData.GetRecord(n);

                    if (!pCurrFld)
                        continue;

                    if (CheckEffLimType(pCurrFld->m_nEffLimType, pEffecFld->m_nEffLimType) ||
                        CheckEffLimType(pCurrFld->m_nEffLimType, pEffecFld->m_nEffLimType2) ||
                        CheckEffLimType(pCurrFld->m_nEffLimType2, pEffecFld->m_nEffLimType) ||
                        CheckEffLimType(pCurrFld->m_nEffLimType2, pEffecFld->m_nEffLimType2))
                    {
                        if (pPotionFld)
                        {
                            if (pPotionFld->m_nPotionCheck <= pfB->m_nPotionCheck)
                            {
                                bExpiresBuff = true;
                                indxDelBuff = k;
                            }
                        }
                    }
                }

                if (pApplyPlayer->m_PotionBufUse.IsExtPotionUse())
                {
                    if (!bExpiresBuff)
                        indxDelBuff = pObj->SelectDeleteBuf(pApplyPlayer, true, false);
                }
                else
                {
                    indxDelBuff = pObj->SelectDeleteBuf(pApplyPlayer, false, false);
                }

                if (indxDelBuff > _countof(pUsePlayer->m_PotionParam.m_ContCommonPotionData))
                    return 25;

                nContEffectResult = pObj->InsertPotionContEffect(
                    pApplyPlayer,
                    &pUsePlayer->m_PotionParam.m_ContCommonPotionData[indxDelBuff],
                    pEffecFld,
                    pEffecFld->m_nContEffectSec[0]);
            }

            if (pEffecFld->m_nTempEffectType != -1)
            {
                if (pEffecFld->m_nTempEffectType >= 150 &&
                    pEffecFld->m_nTempEffectType < 182)
                {
                    nResult = -1;
                }
                else
                {
                    float fValue = 0.0;
                    if (ATF::Global::_GetTempEffectValue(pEffecFld, pEffecFld->m_nTempEffectType, &fValue))
                    {
                        char nRet = -1;
                        auto fnEffect = CPvpPotion::g_TempEffectFunc[pEffecFld->m_nTempEffectType];
                        if (fnEffect && fnEffect(pUsePlayer, pApplyPlayer, fValue, &nRet))
                            nResult = 0;
                        else
                            nResult = nRet;
                    }
                    else
                    {
                        nResult = -1;
                    }
                }
            }

            int result;
            if (nContEffectResult && nResult)
                result = nContEffectResult;
            else
                result = 0;
            return result;
        }
    }
}
