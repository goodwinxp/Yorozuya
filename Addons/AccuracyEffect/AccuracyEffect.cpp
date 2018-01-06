#include "stdafx.h"

#include "AccuracyEffect.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"
#include "../../Common/Helpers/Memory.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        bool CAccuracyEffect::m_bActivated = false;
        CAccuracyEffect::eHitType CAccuracyEffect::m_eHitRand = CAccuracyEffect::eHitType::standart;
        
        void CAccuracyEffect::load()
        {
            enable_hook(&ATF::CPlayer::apply_normal_item_std_effect, &CAccuracyEffect::apply_normal_item_std_effect);
            enable_hook(&ATF::CPlayer::apply_have_item_std_effect, &CAccuracyEffect::apply_have_item_std_effect);
            enable_hook(&ATF::CAttack::AttackForce, &CAccuracyEffect::AttackForce);
            enable_hook(&ATF::CPlayerAttack::AttackSkill, &CAccuracyEffect::AttackSkill);
        }

        void CAccuracyEffect::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CAccuracyEffect::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.accuracy_effect";
            return name;
        }

        void CAccuracyEffect::configure(const rapidjson::Value & nodeConfig)
        {
            CAccuracyEffect::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            std::string sHitType = RapidHelper::GetValueOrDefault<std::string>(nodeConfig, "hit", "standart");

            if (sHitType == "standart")
            {
                CAccuracyEffect::m_eHitRand = CAccuracyEffect::eHitType::standart;
            }
            else if (sHitType == "one_to_one")
            {
                CAccuracyEffect::m_eHitRand = CAccuracyEffect::eHitType::one_to_one;
            }
            else if (sHitType == "gen")
            {
                CAccuracyEffect::m_eHitRand = CAccuracyEffect::eHitType::gen;
            }
        }

        inline float CAccuracyEffect::CalcBaseAccuration(
            ATF::CPlayer* pPlayer, ATF::CCharacter* pDst)
        {
            switch (CAccuracyEffect::m_eHitRand)
            {
            case CAccuracyEffect::eHitType::one_to_one:
                return CalcBaseAccurationOneToOne(pPlayer, pDst);
            case CAccuracyEffect::eHitType::gen:
                return CalcBaseAccurationRandGen(pPlayer, pDst);
            case CAccuracyEffect::eHitType::standart:
            default:
                return CalcBaseAccurationRand(pPlayer, pDst);
            }
        }

        inline float CAccuracyEffect::CalcBaseAccurationRand(
            ATF::CPlayer* pPlayer, ATF::CCharacter* pDst)
        {
            return 100.f;
        }

        inline float CAccuracyEffect::CalcBaseAccurationRandGen(
            ATF::CPlayer* pPlayer, ATF::CCharacter* pDst)
        {
            float fBaseMasteryAccuracy = 0.f;
            if (pPlayer->m_pmWpn.byWpType == 255)
            {
                fBaseMasteryAccuracy = 10.f;
            }
            else if (pPlayer->m_pmWpn.byWpType == 9)
            {
                fBaseMasteryAccuracy = 10.f;
            }
            else
            {
                fBaseMasteryAccuracy = pPlayer->m_pmMst.GetMasteryPerMast(0, pPlayer->m_pmWpn.byWpClass);
            }

            float v13 = 1.f;
            if (pPlayer->IsRidingUnit())
            {
                ATF::_UnitPart_fld* pFld = (ATF::_UnitPart_fld*)ATF::Global::g_MainThread->m_tblUnitPart[pPlayer->m_byUsingWeaponPart].GetRecord(
                    pPlayer->m_pUsingUnit->byPart[pPlayer->m_byUsingWeaponPart]);

                if (pFld)
                    v13 = pFld->m_nAttMastery;

                pFld = (ATF::_UnitPart_fld*)ATF::Global::g_MainThread->m_tblUnitPart[0].GetRecord(
                    pPlayer->m_pUsingUnit->byPart[0]);

                if (pFld)
                    v13 += pFld->m_nAttMastery;
            }
            else
            {
                v13 = pPlayer->m_Param.GetLevel() + fBaseMasteryAccuracy;
            }

            float v16 = 0.0;
            if (pDst->m_ObjID.m_byID)
            {
                if (pDst->m_ObjID.m_byID == 1)
                    v16 = pDst->vfptr->GetDefSkill(pDst, true);
            }
            else
            {
                ATF::CPlayer* pPlayer = (ATF::CPlayer*)pDst;
                int nCoeff = 1;
                if (pPlayer->m_bInGuildBattle)
                    nCoeff = 2;

                v16 = (pPlayer->vfptr->GetDefSkill(pPlayer, true) + nCoeff * pPlayer->m_Param.GetLevel());
            }

            float v26 = (v13 - v16);
            v26 /= 4.f;
            v26 += 95.f;

            return v26;
        }

        inline float CAccuracyEffect::CalcBaseAccurationOneToOne(
            ATF::CPlayer* pPlayer, ATF::CCharacter* pDst)
        {
            return 1.f;
        }

        inline bool CAccuracyEffect::Hit(int nDiff)
        {
            switch (CAccuracyEffect::m_eHitRand)
            {
            case CAccuracyEffect::eHitType::one_to_one:
                return HitOneToOne(nDiff);
            case CAccuracyEffect::eHitType::gen:
                return HitRandGen(nDiff);
            case CAccuracyEffect::eHitType::standart:
            default:
                return HitRand(nDiff);
            }
        }

        inline bool CAccuracyEffect::HitRand(int nDiff)
        {
            bool bHit = true;
            if (nDiff <= 0)
                nDiff = 0;

            if (nDiff >= 100)
                nDiff = 100;

            if (rand() % 100 >= nDiff)
                bHit = false;

            return bHit;
        }

        inline bool CAccuracyEffect::HitRandGen(int nDiff)
        {
            bool bHit = true;
            if (nDiff <= 5)
                nDiff = 5;

            if (nDiff >= 95)
                nDiff = 95;

            if (rand() % 100 >= nDiff)
                bHit = false;

            return bHit;
        }

        inline  bool CAccuracyEffect::HitOneToOne(int nDiff)
        {
            return nDiff >= 0;
        }

        void CAccuracyEffect::apply_normal_item_std_effect(
            ATF::CPlayer* pObj,
            int nEffCode,
            float fVal,
            bool bEquip,
            ATF::Info::CPlayerapply_normal_item_std_effect1397_ptr next)
        {
            if (!CAccuracyEffect::m_bActivated)
            {
                next(pObj, nEffCode, fVal, bEquip);
                return;
            }

            switch (nEffCode)
            {
            case 1:
                pObj->m_EP.SetEff_Rate(11, fVal, bEquip);
                break;
            case 2:
                pObj->m_EP.SetEff_Rate(7, fVal, bEquip);
                break;
            case 3:
                for (int nParamIndex = 0; nParamIndex < 2; ++nParamIndex)
                    pObj->m_EP.SetEff_Plus(nParamIndex, fVal, bEquip);
                pObj->m_EP.SetEff_Plus(2, fVal, bEquip);
                pObj->m_EP.SetEff_Plus(30, fVal, bEquip);
                pObj->m_EP.SetEff_Plus(31, fVal, bEquip);
                break;
            case 4:
                pObj->m_EP.SetEff_Plus(3, fVal, bEquip);
                break;
            case 5:
                pObj->m_EP.SetEff_Rate(9, fVal, bEquip);
                pObj->m_EP.SetEff_Rate(10, fVal, bEquip);
                break;
            case 6:
                for (int j = 0; j < 2; ++j)
                {
                    pObj->m_EP.SetEff_Rate(j, fVal, bEquip);
                    pObj->m_EP.SetEff_Rate(j + 2, fVal, bEquip);
                }
                pObj->m_EP.SetEff_Rate(4, fVal, bEquip);
                pObj->m_EP.SetEff_Rate(29, fVal, bEquip);
                break;
            case 7:
                pObj->m_EP.SetEff_Rate(6, fVal, bEquip);
                break;
            case 8:
                pObj->m_EP.SetEff_Plus(19, fVal, bEquip);
                break;
            case 9:
                pObj->m_EP.SetEff_Plus(21, 1.0, bEquip);
                break;
            case 10:
                pObj->m_EP.SetEff_Plus(22, 1.0, bEquip);
                break;
            case 11:
                pObj->m_EP.SetEff_Plus(23, 1.0, bEquip);
                break;
            case 12:
                if (!pObj->m_bInGuildBattle || !pObj->m_bTakeGravityStone)
                    pObj->m_EP.SetEff_Plus(20, fVal, bEquip);
                break;
            case 13:
                pObj->m_EP.SetEff_Plus(24, 1.0, bEquip);
                break;
            case 14:
                pObj->m_EP.SetEff_Plus(25, fVal, bEquip);
                break;
            case 15:
                pObj->m_EP.SetEff_Rate(4, fVal, bEquip);
                break;
            case 16:
                pObj->m_EP.SetEff_Rate(10, fVal, bEquip);
                break;
            case 17:
                pObj->m_EP.SetEff_Rate(12, fVal, bEquip);
                break;
            case 18:
                pObj->m_EP.SetEff_Rate(13, fVal, bEquip);
                break;
            case 19:
                pObj->m_EP.SetEff_Plus(14, fVal, bEquip);
                break;
            case 20:
                for (int k = 0; k < 2; ++k)
                {
                    pObj->m_EP.SetEff_Plus(k + 4, fVal, bEquip);
                    pObj->m_EP.SetEff_Plus(k + 6, fVal, bEquip);
                }
                pObj->m_EP.SetEff_Plus(36, fVal, bEquip);
                break;
            case 21:
                pObj->m_EP.SetEff_Rate(6, fVal, bEquip);
                break;
            case 22:
                pObj->m_EP.SetEff_Rate(8, fVal, bEquip);
                break;
            case 23:
                pObj->m_EP.SetEff_Rate(14, fVal, bEquip);
                break;
            case 24:
                pObj->m_EP.SetEff_Plus(3, fVal, bEquip);
                break;
            case 25:
                pObj->m_EP.SetEff_Plus(11, fVal, bEquip);
                break;
            case 26:
                pObj->m_EP.SetEff_Plus(8, fVal, bEquip);
                break;
            case 27:
                pObj->m_EP.SetEff_Plus(37, fVal, bEquip);
                break;
            case 28:
                pObj->m_EP.SetEff_Plus(29, fVal, bEquip);
                break;
            case 29:
                pObj->m_EP.SetEff_Plus(15, fVal, bEquip);
                pObj->m_EP.SetEff_Plus(16, fVal, bEquip);
                pObj->m_EP.SetEff_Plus(17, fVal, bEquip);
                pObj->m_EP.SetEff_Plus(18, fVal, bEquip);
                break;
            case 30:
                pObj->m_EP.SetEff_Rate(9, fVal, bEquip);
                break;
            case 31:
                pObj->m_EP.SetEff_Rate(8, fVal, bEquip);
                break;
            case 32:
                pObj->m_EP.SetEff_Plus(28, fVal, bEquip);
                break;
            case 33:
                pObj->m_EP.SetEff_Plus(10, fVal, bEquip);
                break;
            case 34:
                pObj->m_EP.SetEff_Plus(12, fVal, bEquip);
                break;
            case 35:
                pObj->m_EP.SetEff_Plus(13, fVal, bEquip);
                break;
            case 36:
                pObj->m_EP.SetEff_Plus(38, fVal, bEquip);
                break;
            default:
                return;
            }
        }

        void CAccuracyEffect::apply_have_item_std_effect(
            ATF::CPlayer* pObj,
            int nEffCode,
            float fVal,
            bool bAdd,
            int nDiffCnt,
            ATF::Info::CPlayerapply_have_item_std_effect1395_ptr next)
        {
            if (!CAccuracyEffect::m_bActivated)
            {
                next(pObj, nEffCode, fVal, bAdd, nDiffCnt);
                return;
            }

            switch (nEffCode)
            {
            case 15:
                pObj->m_EP.SetEff_Rate(9, fVal, bAdd);
                break;
            case 16:
                pObj->m_EP.SetEff_Rate(10, fVal, bAdd);
                break;
            case 17:
                pObj->m_EP.SetEff_Rate(11, fVal, bAdd);
                break;
            case 18:
                pObj->m_EP.SetEff_Rate(0, fVal, bAdd);
                pObj->m_EP.SetEff_Rate(1, fVal, bAdd);
                pObj->m_EP.SetEff_Rate(2, fVal, bAdd);
                pObj->m_EP.SetEff_Rate(3, fVal, bAdd);
                pObj->m_EP.SetEff_Rate(4, fVal, bAdd);
                pObj->m_EP.SetEff_Rate(29, fVal, bAdd);
                break;
            case 19:
                pObj->m_EP.SetEff_Rate(0, fVal, bAdd);
                break;
            case 20:
                pObj->m_EP.SetEff_Rate(2, fVal, bAdd);
                break;
            case 21:
                pObj->m_EP.SetEff_Rate(1, fVal, bAdd);
                break;
            case 22:
                pObj->m_EP.SetEff_Rate(3, fVal, bAdd);
                break;
            case 23:
                pObj->m_EP.SetEff_Rate(4, fVal, bAdd);
                break;
            case 24:
                pObj->m_EP.SetEff_Rate(6, fVal, bAdd);
                break;
            case 25:
                pObj->m_EP.SetEff_Rate(12, fVal, bAdd);
                break;
            case 26:
                pObj->m_EP.SetEff_Rate(13, fVal, bAdd);
                break;
            case 27:
                pObj->m_EP.SetEff_Rate(40, fVal, bAdd);
                break;
            case 29:
                pObj->m_EP.SetEff_Rate(41, fVal, bAdd);
                break;
            case 30:
                pObj->m_EP.SetEff_Rate(42, fVal, bAdd);
                break;
            case 31:
                pObj->m_EP.SetEff_Rate(43, fVal, bAdd);
                break;
            case 32:
                pObj->m_EP.SetEff_Rate(44, fVal, bAdd);
                break;
            case 33:
                pObj->m_EP.SetEff_Rate(57, fVal, bAdd);
                break;
            case 34:
                pObj->m_EP.SetEff_Rate(58, fVal, bAdd);
                break;
            case 35:
                pObj->m_EP.SetEff_Rate(59, fVal, bAdd);
                break;
            case 36:
                pObj->m_EP.SetEff_Rate(60, fVal, bAdd);
                break;
            case 37:
                pObj->m_EP.SetEff_Rate(61, fVal, bAdd);
                break;
            case 38:
                pObj->m_EP.SetEff_Rate(0, fVal, bAdd);
                pObj->m_EP.SetEff_Rate(1, fVal, bAdd);
                break;
            case 39:
                pObj->m_EP.SetEff_Plus(6, fVal, bAdd);
                pObj->m_EP.SetEff_Plus(7, fVal, bAdd);
                break;
            case 40:
                pObj->m_EP.SetEff_Plus(23, 1.0, bAdd);
                break;
            case 41:
                pObj->m_EP.SetEff_Plus(20, fVal, bAdd);
                break;
            case 43:
                pObj->m_EP.SetEff_Plus(0, fVal, bAdd);
                pObj->m_EP.SetEff_Plus(30, fVal, bAdd);
                pObj->m_EP.SetEff_Plus(31, fVal, bAdd);
                break;
            case 44:
                pObj->m_EP.SetEff_Plus(1, fVal, bAdd);
                pObj->m_EP.SetEff_Plus(30, fVal, bAdd);
                pObj->m_EP.SetEff_Plus(31, fVal, bAdd);
                break;
            case 45:
                pObj->m_EP.SetEff_Plus(31, fVal, bAdd);
                break;
            case 46:
                pObj->m_EP.SetEff_Plus(30, fVal, bAdd);
                break;
            case 47:
                pObj->m_EP.SetEff_Plus(14, fVal, bAdd);
                break;
            case 48:
                pObj->m_EP.SetEff_Plus(40, fVal, bAdd);
                break;
            case 49:
                pObj->m_EP.SetEff_Plus(3, fVal, bAdd);
                break;
            case 50:
                pObj->HideNameEffect( bAdd);
                break;
            case 56:
                pObj->m_EP.SetEff_State(8, bAdd);
                break;
            case 57:
                pObj->m_EP.SetEff_Plus(29, fVal, bAdd);
                break;
            case 59:
                pObj->SetMstPt(0, fVal, bAdd, 0);
                break;
            case 60:
                pObj->SetMstPt(0, fVal, bAdd, 1);
                break;
            case 61:
                pObj->SetMstPt(4, fVal, bAdd, 0);
                break;
            case 62:
                pObj->SetMstPt(1, fVal, bAdd, 0);
                break;
            case 63:
                pObj->SetMstPt(2, fVal, bAdd, 0);
                break;
            case 64:
                pObj->SetMstPt(6, fVal, bAdd, 0);
                break;
            case 65:
                pObj->SetMstPt(6, fVal, bAdd, 0);
                break;
            case 76:
                pObj->m_EP.SetEff_Plus(22, fVal, bAdd);
                break;
            case 77:
                if (nDiffCnt > 0 && bAdd)
                {
                    pObj->DecHalfSFContDam(static_cast<float>(nDiffCnt) * 0.01f);
                }
                break;
            case 78:
                pObj->m_EP.SetEff_Plus(28, fVal, bAdd);
                break;
            case 79:
                if (nDiffCnt != 1 && fVal >= 1.0)
                    pObj->SetEquipJadeEffect(79, fVal, bAdd);
                break;
            case 80:
                if (nDiffCnt != 1 && fVal >= 1.0)
                    pObj->SetEquipJadeEffect(80, fVal, bAdd);
                break;
            default:
                return;
            }
        }

        void CAccuracyEffect::AttackForce(
            ATF::CAttack* pObj,
            ATF::_attack_param* pParam,
            bool bUseEffBullet,
            ATF::Info::CAttackAttackForce4_ptr next)
        {
            if (!CAccuracyEffect::m_bActivated)
            {
                next(pObj, pParam, bUseEffBullet);
                return;
            }

            pObj->m_nDamagedObjNum = 0;
            pObj->m_bIsCrtAtt = 0;
            pObj->m_pp = pParam;
            ATF::_force_fld* pForceFld = (ATF::_force_fld*)pObj->m_pp->pFld;
            bool bHit = true;

            pObj->m_pAttChar->BreakStealth();
            if (pObj->m_pp->pDst)
            {
                if (pObj->m_pp->pDst->m_EP.GetEff_State(8))
                {
                    bHit = false;
                }
                else
                {
                    float fAccuracy = pObj->m_pAttChar->m_EP.GetEff_Plus(31);
                    if (!pObj->m_pAttChar->m_ObjID.m_byID)
                    {
                        fAccuracy += pObj->m_pAttChar->m_EP.GetEff_Plus(40);
                        fAccuracy += CalcBaseAccuration((ATF::CPlayer*)pObj->m_pAttChar, pObj->m_pp->pDst);
                    }

                    float fDiff = fAccuracy - pObj->m_pp->pDst->vfptr->GetAvoidRate(pObj->m_pp->pDst);
                    
                    bHit = CAccuracyEffect::Hit(static_cast<int>(fDiff));
                }
            }

            if (!bHit)
            {
                if (pObj->m_pp->pDst)
                {
                    pObj->m_DamList[0].m_pChar = pObj->m_pp->pDst;
                    pObj->m_DamList[0].m_nDamage = 0;
                    pObj->m_nDamagedObjNum = 1;
                }
                return;
            }

            float fAttPower = static_cast<float>(pObj->m_pp->nAddAttPnt) + pObj->_CalcForceAttPnt(false);
            fAttPower *= pObj->m_pAttChar->m_EP.GetEff_Rate(4);

            float fEffAttPower = static_cast<float>(pObj->m_pp->nAddAttPnt) + pObj->_CalcForceAttPnt(bUseEffBullet);
            fEffAttPower *= pObj->m_pAttChar->m_EP.GetEff_Rate(4);

            
            if (!pObj->m_pAttChar->m_ObjID.m_byID)
            {
                ATF::CPlayer* pPlayer = (ATF::CPlayer*)pObj->m_pAttChar;
                if (ATF::Global::g_HolySys->GetDestroyerSerial() == pObj->m_pAttChar->m_dwObjSerial
                    || pPlayer->IsLastAttBuff())
                {
                    fAttPower *= 1.3f;
                    fEffAttPower *= 1.3f;
                }

                if (!pPlayer->m_bInGuildBattle)
                {
                    uint32_t dwSerial = pPlayer->m_Param.GetCharSerial();
                    auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                    int nBossType = instance->GetBossType(
                        pPlayer->m_Param.GetRaceCode(),
                        pPlayer->m_Param.GetCharSerial());

                    if (nBossType)
                    {
                        if (nBossType == 2 || nBossType == 6)
                        {
                            fAttPower *= 1.2f;
                            fEffAttPower *= 1.2f;
                        }
                    }
                    else
                    {
                        fAttPower *= 1.3f;
                        fEffAttPower *= 1.3f;
                    }
                }
            }

            if (pForceFld->m_nEffectGroup < 0)
                return;

            do
            {
                if (pForceFld->m_nEffectGroup <= 2)
                {
                    if (pObj->m_pp->pDst)
                    {
                        pObj->m_DamList[0].m_pChar = pObj->m_pp->pDst;
                        if (bUseEffBullet)
                        {
                            pObj->m_DamList[0].m_nDamage = pObj->m_pAttChar->GetAttackDamPoint(
                                static_cast<int>(fEffAttPower),
                                pObj->m_pp->nPart,
                                pObj->m_pp->nTol,
                                pObj->m_pp->pDst,
                                pObj->m_pp->bBackAttack);
                        }
                        else
                        {
                            pObj->m_DamList[0].m_nDamage = pObj->m_pAttChar->GetAttackDamPoint(
                                static_cast<int>(fAttPower),
                                pObj->m_pp->nPart,
                                pObj->m_pp->nTol,
                                pObj->m_pp->pDst,
                                pObj->m_pp->bBackAttack);
                        }
                        pObj->m_nDamagedObjNum = 1;
                    }
                    break;
                }

                if (pForceFld->m_nEffectGroup != 4)
                {
                    if (pForceFld->m_nEffectGroup == 5)
                    {
                        pObj->FlashDamageProc(
                            ATF::Global::s_nLimitDist[pForceFld->m_nLv],
                            static_cast<int>(fAttPower),
                            ATF::Global::s_nLimitAngle[1][pForceFld->m_nLv],
                            static_cast<int>(fEffAttPower),
                            bUseEffBullet);
                        break;
                    }
                    if (pForceFld->m_nEffectGroup != 6)
                        return;
                }

                pObj->AreaDamageProc(
                    ATF::Global::s_nLimitRadius[pForceFld->m_nLv],
                    static_cast<int>(fAttPower),
                    pObj->m_pp->fArea,
                    static_cast<int>(fEffAttPower),
                    bUseEffBullet);
            } while (false);

            pObj->CalcAvgDamage();
        }

        void CAccuracyEffect::AttackSkill(
            ATF::CPlayerAttack* pObj,
            ATF::_attack_param* pParam,
            bool bUseEffBullet,
            ATF::Info::CPlayerAttackAttackSkill2_ptr next)
        {
            if (!CAccuracyEffect::m_bActivated)
            {
                next(pObj, pParam, bUseEffBullet);
                return;
            }

            pObj->m_nDamagedObjNum = 0;
            pObj->m_bIsCrtAtt = 0;
            pObj->m_pp = pParam;
            ATF::_skill_fld* pSkillFld = (ATF::_skill_fld*)pObj->m_pp->pFld;
            bool bHit = true;
            bool bResAtt = false;

            pObj->m_pAttChar->BreakStealth();

            int nAttType = 0;
            if (pObj->m_pp->byEffectCode)
                nAttType = pSkillFld->m_nAttType[0];
            else
                nAttType = pSkillFld->m_nAttType[pObj->m_pp->nLevel - 1];

            if (pObj->m_pp->pDst)
            {
                if (pObj->m_pp->pDst->m_EP.GetEff_State(14))
                {
                    bResAtt = true;
                }
                else
                {
                    if (pObj->m_pp->pDst->m_EP.GetEff_Plus(27) > 0.f)
                    {
                        if (pObj->m_pp->pDst->m_EP.GetEff_Plus(27) > rand() % 100)
                            bResAtt = true;
                    }
                }

                if (bResAtt)
                {
                    if (!pObj->m_pp->bPassCount &&
                        !pObj->m_pp->nClass &&
                        !pObj->m_pp->pDst->vfptr->GetWeaponClass(pObj->m_pp->pDst))
                    {
                        float fAttRange = pObj->m_pp->pDst->vfptr->GetAttackRange(pObj->m_pp->pDst);
                        fAttRange += pObj->m_pAttChar->vfptr->GetWidth(pObj->m_pAttChar) / 2.f;
                        fAttRange += pObj->m_pp->pDst->m_EP.GetEff_Plus(4);
                        float fCurrRange = ATF::Global::GetSqrt(
                            pObj->m_pp->pDst->m_fCurPos,
                            pObj->m_pAttChar->m_fCurPos);

                        if (fAttRange >= fCurrRange)
                        {
                            pObj->m_DamList[0].m_pChar = pObj->m_pp->pDst;
                            pObj->m_DamList[0].m_nDamage = -1;
                            pObj->m_nDamagedObjNum = 1;
                            pObj->m_pAttChar->SendMsg_AttackActEffect(0, pObj->m_pp->pDst);
                            return;
                        }
                    }

                    if (pObj->m_pp->pDst->m_EP.GetEff_Plus(27) > 0.0)
                    {
                        pObj->m_DamList[0].m_pChar = pObj->m_pp->pDst;
                        pObj->m_DamList[0].m_nDamage = 0;
                        pObj->m_nDamagedObjNum = 1;
                        return;
                    }
                }

                if (pObj->m_pp->pDst->m_EP.GetEff_State(8))
                {
                    bHit = false;
                }
                else
                {
                    float fAccuracy = pObj->m_pAttChar->m_EP.GetEff_Plus(30);
                    if (!pObj->m_pAttChar->m_ObjID.m_byID)
                    {
                        fAccuracy += pObj->m_pAttChar->m_EP.GetEff_Plus(40);
                        fAccuracy += CalcBaseAccuration((ATF::CPlayer*)pObj->m_pAttChar, pObj->m_pp->pDst);
                    }

                    float fDiff = fAccuracy - pObj->m_pp->pDst->vfptr->GetAvoidRate(pObj->m_pp->pDst);

                    bHit = CAccuracyEffect::Hit(static_cast<int>(fDiff));
                }

                if (!bHit)
                {
                    if (pObj->m_pp->pDst)
                    {
                        pObj->m_DamList[0].m_pChar = pObj->m_pp->pDst;
                        pObj->m_DamList[0].m_nDamage = 0;
                        pObj->m_nDamagedObjNum = 1;
                    }
                    return;
                }
            }

            float fAttPower = static_cast<float>(pObj->m_pp->nAddAttPnt);
            fAttPower += pObj->_CalcSkillAttPnt(false);

            float fEffAttPower = static_cast<float>(pObj->m_pp->nAddAttPnt);
            fEffAttPower += pObj->_CalcSkillAttPnt(bUseEffBullet);

            if (!pObj->m_pAttChar->m_ObjID.m_byID)
            {
                ATF::CPlayer* pPlayer = (ATF::CPlayer*)pObj->m_pAttChar;
                if (ATF::Global::g_HolySys->GetDestroyerSerial() == pObj->m_pAttChar->m_dwObjSerial
                    || pPlayer->IsLastAttBuff())
                {
                    fAttPower *= 1.3f;
                    fEffAttPower *= 1.3f;
                }
            }

            if (!pObj->m_pAttPlayer->m_bInGuildBattle)
            {
                uint32_t dwSerial = pObj->m_pAttPlayer->m_Param.GetCharSerial();
                auto instance = ATF::CPvpUserAndGuildRankingSystem::Instance();
                int nBossType = instance->GetBossType(
                    pObj->m_pAttPlayer->m_Param.GetRaceCode(),
                    pObj->m_pAttPlayer->m_Param.GetCharSerial());

                if (nBossType)
                {
                    if (nBossType == 2 || nBossType == 6)
                    {
                        fAttPower *= 1.2f;
                        fEffAttPower *= 1.2f;
                    }
                }
                else
                {
                    fAttPower *= 1.3f;
                    fEffAttPower *= 1.3f;
                }
            }

            if (pObj->m_pp->nWpType == 7)
            {
                fAttPower *= pObj->m_pAttChar->m_EP.GetEff_Rate(29);
                fEffAttPower *= pObj->m_pAttChar->m_EP.GetEff_Rate(29);
            }
            else
            {
                fAttPower *= pObj->m_pAttChar->m_EP.GetEff_Rate(pObj->m_pp->nClass + 2);
                fEffAttPower *= pObj->m_pAttChar->m_EP.GetEff_Rate(pObj->m_pp->nClass + 2);
            }

            switch (nAttType)
            {
            case 5:
                pObj->FlashDamageProc(
                    ATF::Global::s_nLimitDist[pSkillFld->m_nLv],
                    static_cast<int>(fAttPower),
                    ATF::Global::s_nLimitAngle[0][pSkillFld->m_nLv],
                    static_cast<int>(fEffAttPower),
                    bUseEffBullet);
                break;
            case 4: case 6:
                pObj->AreaDamageProc(
                    ATF::Global::s_nLimitRadius[pSkillFld->m_nLv],
                    static_cast<int>(fAttPower),
                    pObj->m_pp->fArea,
                    static_cast<int>(fEffAttPower),
                    bUseEffBullet);
                break;
            case 7:
                pObj->SectorDamageProc(
                    pSkillFld->m_nLv,
                    static_cast<int>(fAttPower),
                    ATF::Global::s_nLimitAngle[0][pSkillFld->m_nLv],
                    pObj->m_pp->nShotNum,
                    pObj->m_pp->nExtentRange,
                    static_cast<int>(fEffAttPower),
                    bUseEffBullet);
                break;
            case 0: case 1: case 2: case 3:
                if (pObj->m_pp->pDst)
                {
                    pObj->m_DamList[0].m_pChar = pObj->m_pp->pDst;
                    if (bUseEffBullet)
                    {
                        pObj->m_DamList[0].m_nDamage = pObj->m_pAttChar->GetAttackDamPoint(
                            static_cast<int>(fEffAttPower),
                            pObj->m_pp->nPart,
                            pObj->m_pp->nTol,
                            pObj->m_pp->pDst,
                            pObj->m_pp->bBackAttack);
                    }
                    else
                    {
                        pObj->m_DamList[0].m_nDamage = pObj->m_pAttChar->GetAttackDamPoint(
                            static_cast<int>(fAttPower),
                            pObj->m_pp->nPart,
                            pObj->m_pp->nTol,
                            pObj->m_pp->pDst,
                            pObj->m_pp->bBackAttack);
                    }
                    pObj->m_nDamagedObjNum = 1;
                }
                break;
            default:
                return;
            }

            pObj->CalcAvgDamage();
        }
    }
}
