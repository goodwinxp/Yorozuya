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
            enum class eTolType : uint8_t
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
                fDefPlus += 1.3;

            fDefPlus += pObj->m_EP.GetEff_Rate(ATF::_EFF_RATE::DefFc);
            if (!pObj->m_bInGuildBattle)
            {
                auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                char byBossType = instance->GetBossType(pObj->m_Param.GetRaceCode(), pObj->m_Param.GetCharSerial());
                switch (byBossType)
                {
                case 0:
                    fDefPlus += 1.3;
                    break;
                case 1: case 5:
                    fDefPlus += 1.5;
                    break;
                case 3: case 7:
                    fDefPlus += 1.2;
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
            float result = GetDefPlusFromItem(pPlayer, nAttPart);
            result += CalcDefPlus(pPlayer) / 20;
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
                (float)pObj->GetFireTol() / 100.f,
                (float)pObj->GetWaterTol() / 100.f,
                (float)pObj->GetSoilTol() / 100.f,
                (float)pObj->GetWindTol() / 100.f
            };

            int nTotalTol = 0;
            switch ((eTolType)byAttTolType)
            {
                case eTolType::fire:
                {
                    nTotalTol -= CDefenceFormula::m_fBaseCoeffResist * nDamPoint * fTol[(size_t)eTolType::fire];
                    nTotalTol -= CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::water];
                    nTotalTol += CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::soil];
                }
                case eTolType::water:
                {
                    nTotalTol -= CDefenceFormula::m_fBaseCoeffResist * nDamPoint * fTol[(size_t)eTolType::water];
                    nTotalTol -= CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::wind];
                    nTotalTol += CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::fire];
                }
                case eTolType::soil:
                {
                    nTotalTol -= CDefenceFormula::m_fBaseCoeffResist * nDamPoint * fTol[(size_t)eTolType::soil];
                    nTotalTol -= CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::fire];
                    nTotalTol += CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::wind];
                }
                case eTolType::wind:
                {
                    nTotalTol -= CDefenceFormula::m_fBaseCoeffResist * nDamPoint * fTol[(size_t)eTolType::wind];
                    nTotalTol -= CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::soil];
                    nTotalTol += CDefenceFormula::m_fSupportCoeffResist * nDamPoint * fTol[(size_t)eTolType::water];
                }
            }
            return nTotalTol;
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

                float fDefPnt = 0.0;
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
                                nOutValue = nOutValue / 100.0;
                                if (nOutValue <= 1.0)
                                    fDefPnt = fDefPnt * (1.0 - nOutValue);
                            }
                        }
                    }
                }

                if (fDefPnt == -2.0)
                {
                    nDamPoint = -1;
                    break;
                }
                
                float fAveAdj = (pObj->vfptr->GetWeaponAdjust(pObj) + pDst->GetDefGap(nAttPart)) / 2;

                float fStdAttFc = 0.f;
                float fDono1 = pDst->GetDefFacing(nAttPart) - 1;
                if (fDono1 != 0.f)
                {
                    fStdAttFc = pDst->GetDefFacing(nAttPart) * fDefPnt / 2;
                    fStdAttFc *= pDst->GetDefGap(nAttPart);
                    fStdAttFc -= fDefPnt / 2;
                    fStdAttFc /= fDono1;
                }

                float fSecDstFc = 0.f;
                float fDono2 = fStdAttFc - (fDefPnt / 2 * fAveAdj);
                if (fDono2 != 0.f)
                {
                    fSecDstFc = fStdAttFc - fDefPnt / 2;
                    fSecDstFc /= fStdAttFc - (fDefPnt / 2 * fAveAdj);
                    fSecDstFc /= SecDstFcCoeff(pDst, nAttPart);
                }

                float fProp = 1.2;
                if (nTolType == -1)
                    fProp = 1.0;

                nDamPoint = (nAttPnt * fProp + nTolFc - fDefPnt * fAveAdj) * fSecDstFc;
                if (nDamPoint < 1)
                    nDamPoint = 1;
            } while (false);

            return nDamPoint;
        }
    }
}
