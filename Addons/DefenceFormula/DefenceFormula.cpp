#include "stdafx.h"

#include "DefenceFormula.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>
#include <ATF/_ItemUpgrade_fld.hpp>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            enum class eTolType
            {
                fire = 0,
                water,
                soil,
                wind,
                num,
                nothing = -1
            };

            const float base_resist_coeff = 0.1f;
            const float support_resist_coeff = 0.9f;
        }

        bool CDefenceFormula::m_bActivated = false;
        float CDefenceFormula::m_fBaseCoeffResist = base_resist_coeff;
        float CDefenceFormula::m_fSupportCoeffResist = support_resist_coeff;

        void CDefenceFormula::load()
        {
            enable_hook(&ATF::CCharacter::GetTotalTol, &CDefenceFormula::GetTotalTol);
            enable_hook(&ATF::CCharacter::GetAttackDamPoint, &CDefenceFormula::GetAttackDamPoint);
        }

        void CDefenceFormula::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CDefenceFormula::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.defence_formula";
            return name;
        }

        void CDefenceFormula::configure(const rapidjson::Value & nodeConfig)
        {
            CDefenceFormula::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            if (!CDefenceFormula::m_bActivated)
                return;

            CDefenceFormula::m_fBaseCoeffResist = RapidHelper::GetValueOrDefault(
                nodeConfig, "base_resist_coeff", base_resist_coeff);

            CDefenceFormula::m_fSupportCoeffResist = RapidHelper::GetValueOrDefault(
                nodeConfig, "support_resist_coeff", support_resist_coeff);
        }

        float CDefenceFormula::CalcDefPlus(ATF::CPlayer * pObj)
        {
            float fDefPlus = 0.f;
            if (pObj->IsRidingUnit())
                return fDefPlus;

            if (ATF::Global::g_HolySys->GetDestroyerSerial() == pObj->m_dwObjSerial ||
                pObj->IsLastAttBuff())
                fDefPlus += 1.3f;

            fDefPlus += pObj->m_EP.GetEff_Rate(ATF::_EFF_RATE::DefFc);
            if (!pObj->m_bInGuildBattle)
            {
                auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                char byBossType = instance->GetBossType(pObj->m_Param.GetRaceCode(), pObj->m_Param.GetCharSerial());
                switch (byBossType)
                {
                case 0:
                    fDefPlus += 1.3f;
                    break;
                case 1: case 5:
                    fDefPlus += 1.5f;
                    break;
                case 3: case 7:
                    fDefPlus += 1.2f;
                    break;
                default:
                    break;
                }
            }

            fDefPlus += pObj->m_EP.GetEff_Rate(ATF::_EFF_RATE::Potion_Dec_Def);
            if (pObj->IsSiegeMode())
            {
                fDefPlus += pObj->m_EP.GetEff_Rate(ATF::_EFF_RATE::DEF_SiegeMode);
            }

            return fDefPlus;
        }

        float CDefenceFormula::GetDefPlusFromItem(ATF::CPlayer * pObj, int nAttPart)
        {
            static const int indxDefTalik = 5;
            if (nAttPart < 0 || nAttPart >= 8)
                return 0.f;

            auto& item = pObj->m_Param.m_dbEquip.m_List[nAttPart];
            int nCnt = 0;
            BYTE byLv = ATF::Global::GetItemUpgedLv(item.m_dwLv);
            for (int i = 0; i < byLv; ++i)
            {
                BYTE idx = ATF::Global::GetTalikFromSocket(item.m_dwLv, i);
                if (idx == indxDefTalik)
                    nCnt++;
            }

            ATF::_ItemUpgrade_fld* pFld = ATF::Global::g_MainThread->m_tblItemUpgrade.GetRecord(indxDefTalik);
            if (pFld == nullptr)
                return 0.f;

            return pFld->m_fUp[nCnt];
        }

        float CDefenceFormula::SecDstFcCoeff(ATF::CCharacter * pObj, int nAttPart)
        {
            if (pObj->m_ObjID.m_byKind != 0)
                return 1.f;

            if (pObj->m_ObjID.m_byID != (int)e_obj_id::obj_id_player)
                return 1.f;

            ATF::CPlayer* pPlayer = (ATF::CPlayer*)pObj;
            float result = 1.f;
            result += GetDefPlusFromItem(pPlayer, nAttPart);
            result += CalcDefPlus(pPlayer) / 20.f;
            return result;
        }

        int CDefenceFormula::GetTotalTol(
            ATF::CCharacter* pObj,
            char byAttTolType,
            int nDamPoint,
            ATF::Info::CCharacterGetTotalTol42_ptr next)
        {
            if (!CDefenceFormula::m_bActivated)
                return next(pObj, byAttTolType, nDamPoint);

            const float fTol[(size_t)eTolType::num] = {
                (float)pObj->vfptr->GetFireTol(pObj) / 100.f,
                (float)pObj->vfptr->GetWaterTol(pObj) / 100.f,
                (float)pObj->vfptr->GetSoilTol(pObj) / 100.f,
                (float)pObj->vfptr->GetWindTol(pObj) / 100.f
            };

            float fTotalTol = 0.;
            switch ((eTolType)byAttTolType)
            {
                case eTolType::fire:
                {
                    fTotalTol -= CDefenceFormula::m_fBaseCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::fire];
                    fTotalTol -= CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::water];
                    fTotalTol += CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::soil];
                    break;
                }
                case eTolType::water:
                {
                    fTotalTol -= CDefenceFormula::m_fBaseCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::water];
                    fTotalTol -= CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::wind];
                    fTotalTol += CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::fire];
                    break;
                }
                case eTolType::soil:
                {
                    fTotalTol -= CDefenceFormula::m_fBaseCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::soil];
                    fTotalTol -= CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::fire];
                    fTotalTol += CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::wind];
                    break;
                }
                case eTolType::wind:
                {
                    fTotalTol -= CDefenceFormula::m_fBaseCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::wind];
                    fTotalTol -= CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::soil];
                    fTotalTol += CDefenceFormula::m_fSupportCoeffResist * (float)nDamPoint * fTol[(size_t)eTolType::water];
                    break;
                }
                default:
                    break;
            }
            return (int)fTotalTol;
        }

        int CDefenceFormula::GetAttackDamPoint(
            ATF::CCharacter* pObj,
            int nAttPnt,
            int nAttPart,
            int nTolType,
            ATF::CCharacter* pDst,
            bool bBackAttack,
            ATF::Info::CCharacterGetAttackDamPoint28_ptr next)
        {
            int nDamPoint = next(pObj, nAttPnt, nAttPart, nTolType, pDst, bBackAttack);
            do
            {
                if (!CDefenceFormula::m_bActivated)
                    break;

                float fDefPnt = 0.f;
                int nTolFc = pDst->GetTotalTol(nTolType, nAttPnt);
                if (pDst->m_EP.GetEff_State(ATF::_EFF_STATE::Dst_No_Def))
                {
                    pDst->vfptr->SetAttackPart(pDst, nAttPart);
                }
                else
                {
                    fDefPnt = pDst->vfptr->GetDefFC(pDst, nAttPart, pObj, &nAttPart);
                    if (pDst->m_ObjID.m_byID == (int)e_obj_id::obj_id_monster)
                    {
                        ATF::CMonster* pMonster = (ATF::CMonster*)pDst;
                        int nOutValue = -1;
                        if (pMonster->GetViewAngleCap(1, &nOutValue))
                        {
                            if (nOutValue > 0)
                            {
                                nOutValue = nOutValue / 100.f;
                                if (nOutValue <= 1.f)
                                    fDefPnt = fDefPnt * (1.f - nOutValue);
                            }
                        }
                    }
                }

                if (fDefPnt == -2.0)
                {
                    nDamPoint = -2;
                    break;
                }
                
                float fDefFacing = pDst->vfptr->GetDefFacing(pDst, nAttPart);
                float fDefGap = pDst->vfptr->GetDefGap(pDst, nAttPart);
                if (nAttPart == 5)
                {
                    if (fDefFacing > -2.f)
                    {
                        fDefFacing = -2.f;
                    }
                    if (fDefGap < -2.f)
                    {
                        fDefGap = -2.f;
                    }
                }

                float fAveAdj = (pObj->vfptr->GetWeaponAdjust(pObj) + fDefGap) / 2.f;

                float fStdAttFc = 0.f;
                float fDono1 = fDefFacing - 1.f;
                if (fDono1 != 0.f)
                {
                    fStdAttFc = (fDefFacing * fDefPnt * fDefGap - fDefPnt) / fDono1;
                }

                float fSecDstFc = 0.f;
                float fDono2 = fStdAttFc - (fDefPnt * fAveAdj);
                if (fDono2 != 0.f)
                {
                    fSecDstFc = (fStdAttFc - fDefPnt) / fDono2;
                }

                float fProp = 1.2f;
                if (nTolType == -1)
                    fProp = 1.f;

                nDamPoint = (((nAttPnt * fProp) + nTolFc) - (fDefPnt * fAveAdj)) * (fSecDstFc / SecDstFcCoeff(pDst, nAttPart));
                if (nDamPoint < 1)
                    nDamPoint = 1;
            } while (false);

            return nDamPoint;
        }
    }
}
