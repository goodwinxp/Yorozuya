#include "stdafx.h"

#include "ETypes.h"
#include "Animus.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CAnimus::load()
        {
            enable_hook(&ATF::CAnimus::AlterExp, &CAnimus::AlterExp);
        }

        void CAnimus::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CAnimus::get_name()
        {
            static const ModuleName_t name = "fix_Animus";
            return name;
        }

        void WINAPIV CAnimus::AlterExp(
            ATF::CAnimus * pObj,
            int64_t nAddExp,
            ATF::Info::CAnimusAlterExp6_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            do
            {
                if (!pObj->m_pMaster)
                    break;

                if (!pObj->m_pMaster->m_bOper)
                    break;

                if (pObj->GetLevel() >= pObj->GetMaxLevel())
                    break;

                double dPenalty = ATF::Global::g_TimerLimitMgr->GetPlayerPenalty(pObj->m_pMaster->m_id.wIndex);

                int64_t nAlterExpa = nAddExp;
                if (pObj->m_pMaster->IsApplyPcbangPrimium())
                    nAlterExpa += nAddExp * (*ATF::Global::pPCBANG_PRIMIUM_FAVOR__ANIMUS_EXP_RATE - 1.0);
                else
                    nAlterExpa += nAddExp * (*ATF::Global::pANIMUS_EXP_RATE - 1.0);

                nAlterExpa *= dPenalty;

                if (nAlterExpa <= 0)
                {
                    if (nAlterExpa < 0 && pObj->m_dwExp < -nAlterExpa)
                        nAlterExpa = -pObj->m_dwExp;
                }
                else if (pObj->m_pRecord->m_nForLvUpExp - pObj->m_dwExp < nAlterExpa)
                {
                    if (pObj->m_pRecord->m_nForLvUpExp - pObj->m_dwExp <= INT64_MAX)
                    {
                        nAlterExpa = pObj->m_pRecord->m_nForLvUpExp - pObj->m_dwExp;
                    }
                    else
                    {
                        nAlterExpa = INT64_MAX;
                    }
                    if (-1i64 - pObj->m_dwExp < nAlterExpa)
                    {
                        if (-1i64 - pObj->m_dwExp <= INT64_MAX)
                        {
                            nAlterExpa = -1i64 - pObj->m_dwExp;
                        }
                        else
                        {
                            nAlterExpa = INT64_MAX;
                        }
                    }
                }

                if (nAlterExpa == 0)
                    break;

                uint64_t dwExp = nAlterExpa + pObj->m_dwExp;
                auto pAnimusFld = ATF::Global::GetAnimusFldFromExp(pObj->m_byClassCode, dwExp);
                if (!pAnimusFld)
                    break;

                if (pAnimusFld == pObj->m_pRecord)
                {
                    pObj->m_dwExp = dwExp;
                    pObj->AlterExp_MasterReport(nAlterExpa);
                }
                else
                {
                    pAnimusFld = ATF::Global::GetAnimusFldFromLv(pObj->m_byClassCode, pObj->m_pRecord->m_nLevel + 1);
                    if (!pAnimusFld)
                        break;

                    auto master_level = pObj->m_pMaster->GetLevel();
                    if ((master_level >= 50 || pAnimusFld->m_nLevel > 50) &&
                        (master_level < 50 || (pAnimusFld->m_nLevel > master_level + 1)))
                    {
                        pObj->m_dwExp = dwExp - 1;
                        pObj->AlterExp_MasterReport(nAlterExpa - 1);
                    }
                    else
                    {
                        pObj->m_dwExp = dwExp;
                        pObj->AlterExp_MasterReport(nAlterExpa);
                        pObj->m_pRecord = pAnimusFld;
                        pObj->SendMsg_LevelUp();
                        pObj->m_nMaxHP = pObj->m_pRecord->m_nMaxHP;
                        pObj->m_nMaxFP = pObj->m_pRecord->m_nMaxFP;
                    }
                }
            } while (false);
        }
    }
}