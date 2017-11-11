#include "stdafx.h"

#include "ETypes.h"
#include "AttackSystem.h"
#include "AttackSystemError.h"

#include <ATF/Global.hpp>
#include <ATF/_SiegeKitItem_fld.hpp>
#include <ATF/_UnitFrame_fld.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CAttackSystem::load()
        {
            enable_hook(&ATF::CPlayer::skill_process, &CAttackSystem::skill_process);
            enable_hook(&ATF::CPlayer::_pre_check_skill_attack, &CAttackSystem::_pre_check_skill_attack);
            enable_hook(&ATF::CPlayer::_pre_check_force_attack, &CAttackSystem::_pre_check_force_attack);
            enable_hook(&ATF::CPlayer::_pre_check_normal_attack, &CAttackSystem::_pre_check_normal_attack);
            enable_hook(&ATF::CPlayer::_pre_check_siege_attack, &CAttackSystem::_pre_check_siege_attack);
            enable_hook(&ATF::CPlayer::_pre_check_unit_attack, &CAttackSystem::_pre_check_unit_attack);
            enable_hook(&ATF::CPlayer::pc_ForceRequest, &CAttackSystem::pc_ForceRequest);
            enable_hook(&ATF::CPlayer::pc_ThrowSkillRequest, &CAttackSystem::pc_ThrowSkillRequest);
            enable_hook(&ATF::CPlayer::pc_ThrowUnitRequest, &CAttackSystem::pc_ThrowUnitRequest);
            enable_hook(&ATF::CPlayer::IsBulletValidity, &CAttackSystem::IsBulletValidity);
            enable_hook(&ATF::CPlayer::make_gen_attack_param, &CAttackSystem::make_gen_attack_param);
            enable_hook(&ATF::CPlayer::make_siege_attack_param, &CAttackSystem::make_siege_attack_param);
            enable_hook(&ATF::CPlayer::make_skill_attack_param, &CAttackSystem::make_skill_attack_param);
            enable_hook(&ATF::CPlayer::make_wpactive_skill_attack_param, &CAttackSystem::make_wpactive_skill_attack_param);
        }

        void CAttackSystem::unload()
        {
            cleanup_all_hook();
        }

        ModuleName_t CAttackSystem::get_name()
        {
            static const ModuleName_t name = "fix_AttackSystem";
            return name;
        }

        int WINAPIV CAttackSystem::_pre_check_skill_attack(
            ATF::CPlayer * pPlayer, 
            ATF::CCharacter * pDst, 
            float * pfAttackPos, 
            char byEffectCode, 
            ATF::_skill_fld * pSkillFld, 
            uint16_t wBulletSerial, 
            ATF::_STORAGE_LIST::_db_con ** ppBulletProp, 
            ATF::_BulletItem_fld ** ppfldBullet, 
            int nEffectGroup, 
            uint16_t * pdwDecPoint, 
            uint16_t wEffBtSerial, 
            ATF::_STORAGE_LIST::_db_con ** ppEffBtProp, 
            ATF::_BulletItem_fld ** ppfldEffBt, 
            ATF::Info::CPlayer_pre_check_skill_attack1374_ptr next)
        {
            if (!pSkillFld)
                return error_attack_data;

            if (byEffectCode == effect_code_class)
            {
                if (pPlayer->IsSiegeMode())
                {
                    if (pSkillFld->m_nTempEffectType != 23)
                        return error_attack_skill_lock;

                    auto& RecordData = ATF::Global::g_MainThread->m_tblItemData[pPlayer->m_pSiegeItem->m_byTableCode];
                    ATF::_SiegeKitItem_fld* item = (ATF::_SiegeKitItem_fld*)RecordData.GetRecord(pPlayer->m_pSiegeItem->m_wItemIndex);

                    if (item->m_nLevelLim == 30 && pSkillFld->m_nLv != 0)
                        return error_attack_skill_lock;

                    if (item->m_nLevelLim == 40 && pSkillFld->m_nLv != 1)
                        return error_attack_skill_lock;
                }
                else if (pSkillFld->m_nTempEffectType == 23)
                {
                    return error_attack_skill_lock;
                }
            }

            return next(
                pPlayer,
                pDst,
                pfAttackPos,
                byEffectCode,
                pSkillFld,
                wBulletSerial,
                ppBulletProp,
                ppfldBullet,
                nEffectGroup,
                pdwDecPoint,
                wEffBtSerial,
                ppEffBtProp,
                ppfldEffBt);
        }

        int WINAPIV CAttackSystem::_pre_check_force_attack(
            ATF::CPlayer * pPlayer, 
            ATF::CCharacter * pDst, 
            float * pfTarPos,
            uint16_t wForceItemSerial, 
            ATF::_force_fld ** ppForceFld, 
            ATF::_STORAGE_LIST::_db_con ** ppForceItem, 
            uint16_t * pdwDecPoint, 
            uint16_t wEffBtSerial, 
            ATF::_STORAGE_LIST::_db_con ** ppEffBtProp, 
            ATF::_BulletItem_fld ** ppfldEffBt, 
            ATF::Info::CPlayer_pre_check_force_attack1364_ptr next)
        {
            return next(
                pPlayer,
                pDst,
                pfTarPos,
                wForceItemSerial,
                ppForceFld,
                ppForceItem,
                pdwDecPoint,
                wEffBtSerial,
                ppEffBtProp,
                ppfldEffBt);
        }

        int WINAPIV CAttackSystem::_pre_check_normal_attack(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            uint16_t wBulletSerial,
            bool bCount,
            ATF::_STORAGE_LIST::_db_con ** ppBulletProp,
            ATF::_BulletItem_fld ** ppfldBullet,
            uint16_t wEffBtSerial,
            ATF::_STORAGE_LIST::_db_con ** ppEffBtProp,
            ATF::_BulletItem_fld ** ppfldEffBt,
            ATF::Info::CPlayer_pre_check_normal_attack1370_ptr next)
        {
            return next(
                pPlayer,
                pDst,
                wBulletSerial,
                bCount,
                ppBulletProp,
                ppfldBullet,
                wEffBtSerial,
                ppEffBtProp,
                ppfldEffBt);
        }

        int WINAPIV CAttackSystem::_pre_check_siege_attack(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            float * pfAttackPos,
            uint16_t wBulletSerial,
            ATF::_STORAGE_LIST::_db_con ** ppBulletProp,
            ATF::_BulletItem_fld ** ppfldBullet,
            uint16_t wEffBtSerial,
            ATF::_STORAGE_LIST::_db_con ** ppEffBulletProp,
            ATF::_BulletItem_fld ** ppfldEffBullet,
            ATF::Info::CPlayer_pre_check_siege_attack1372_ptr next)
        {

            return next(
                pPlayer,
                pDst,
                pfAttackPos,
                wBulletSerial,
                ppBulletProp,
                ppfldBullet,
                wEffBtSerial,
                ppEffBulletProp,
                ppfldEffBullet);
        }

        int WINAPIV CAttackSystem::_pre_check_unit_attack(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            char byWeaponPart,
            ATF::_UnitPart_fld ** ppWeaponFld,
            ATF::_UnitBullet_fld ** ppBulletFld,
            ATF::_unit_bullet_param ** ppBulletParam,
            ATF::Info::CPlayer_pre_check_unit_attack1380_ptr next)
        {
            return next(
                pPlayer,
                pDst,
                byWeaponPart,
                ppWeaponFld,
                ppBulletFld,
                ppBulletParam);
        }

        char WINAPIV CAttackSystem::skill_process(
            ATF::CPlayer * pPlayer,
            int nEffectCode,
            int nSkillIndex,
            ATF::_CHRID * pidDst,
            uint16_t * pConsumeSerial,
            int * pnLv,
            ATF::Info::CPlayerskill_process2035_ptr next)
        {
            char byRetCode = 0;
            do
            {
                if (pPlayer->IsSiegeMode())
                {
                    byRetCode = 14;
                    break;
                }

                auto pDst = ATF::Global::g_MainThread->GetObjectA((int)e_obj_id::obj_id_player, pidDst->byID, pidDst->wIndex);
                if (!pDst)
                    break;

                ATF::_skill_fld* pSkillFld =
                    (ATF::_skill_fld*)ATF::Global::g_MainThread->m_tblEffectData[effect_code_class].GetRecord(nSkillIndex);

                if (nEffectCode == effect_code_class &&
                    pSkillFld->m_nTempEffectType == 36 &&
                    pSkillFld->m_nEffectClass == 6)
                {
                    break;
                }

                float fAvailableDist = pPlayer->m_pmWpn.wGaAttRange;
                fAvailableDist += pSkillFld->m_nBonusDistance;
                fAvailableDist += pDst->vfptr->GetWidth(pDst) / 2.0f;

                if (pPlayer->m_pmWpn.byWpType == (uint8_t)e_wp_type::launcher)
                    fAvailableDist += pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Lcr_Att_Dist);
                else
                    fAvailableDist += pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::GE_Att_Dist_ + pPlayer->m_pmWpn.byWpClass);

                fAvailableDist += pPlayer->m_EP.GetEff_Plus(pPlayer->m_pmWpn.byWpClass + (int)ATF::_EFF_PLUS::FC_Att_Dist);

                if (ATF::Global::Get3DSqrt(pDst->m_fCurPos, pPlayer->m_fCurPos) > fAvailableDist)
                {
                    if (ATF::Global::Get3DSqrt(pDst->m_fOldPos, pPlayer->m_fCurPos) > fAvailableDist)
                    {
                        byRetCode = error_attack_radius;
                        break;
                    }
                }
            } while (false);

            if (byRetCode == 0)
                byRetCode = next(pPlayer, nEffectCode, nSkillIndex, pidDst, pConsumeSerial, pnLv);

            return byRetCode;
        }

        void WINAPIV CAttackSystem::pc_ForceRequest(
            ATF::CPlayer* pPlayer,
            uint16_t wForceSerial,
            ATF::_CHRID* pidDst,
            uint16_t* pConsumeSerial,
            ATF::Info::CPlayerpc_ForceRequest1717_ptr next)
        {
            char byRetCode = 0;
            do
            {
                if (pPlayer->IsSiegeMode())
                {
                    byRetCode = 14;
                    break;
                }

                auto pForceItem = pPlayer->m_Param.m_dbForce.GetPtrFromSerial(wForceSerial);
                if (!pForceItem)
                    break;

                auto pDst = ATF::Global::g_MainThread->GetObjectA((int)e_obj_id::obj_id_player, pidDst->byID, pidDst->wIndex);
                if (!pDst)
                    break;

                ATF::_force_fld* pForceFld = 
                    (ATF::_force_fld*)ATF::Global::g_MainThread->m_tblEffectData[effect_code_force]
                    .GetRecord((*ATF::Global::s_pnLinkForceItemToEffect)[pForceItem->m_wItemIndex]);

                if (!pForceFld)
                    break;

                float fAvailableDist = pForceFld->m_nActDistance + 40.f;
                fAvailableDist += pDst->vfptr->GetWidth(pDst) / 2.0f;
                fAvailableDist += pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::FC_Att_Dist);
                if (ATF::Global::Get3DSqrt(pDst->m_fCurPos, pPlayer->m_fCurPos) > fAvailableDist)
                {
                    if (ATF::Global::Get3DSqrt(pDst->m_fOldPos, pPlayer->m_fCurPos) > fAvailableDist)
                    {
                        byRetCode = error_attack_radius;
                        break;
                    }
                }
            } while (false);

            if (byRetCode == 0)
                next(pPlayer, wForceSerial, pidDst, pConsumeSerial);
            else
                pPlayer->SendMsg_ForceResult(byRetCode, pidDst, nullptr, 0);
        }

        void WINAPIV CAttackSystem::pc_ThrowSkillRequest(
            ATF::CPlayer* pPlayer,
            uint16_t wBulletSerial,
            ATF::_CHRID* pidDst,
            uint16_t* pConsumeSerial,
            ATF::Info::CPlayerpc_ThrowSkillRequest1951_ptr next)
        {
            char byRetCode = 0;
            do
            {
                auto pDst = ATF::Global::g_MainThread->GetObjectA(0, pidDst->byID, pidDst->wIndex);
                if (!pDst)
                {
                    byRetCode = 2;
                    break;
                }
                
                float fAvailableDist = 0.0;
                if (pPlayer->m_pmWpn.byWpType == (char)e_wp_type::launcher ||
                    pPlayer->m_pmWpn.byWpType == (char)e_wp_type::grenade)
                {
                    fAvailableDist = (pDst->vfptr->GetWidth(pDst) / 2.f) + pPlayer->m_pmWpn.wGaAttRange;
                    fAvailableDist += pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Lcr_Att_Dist);
                }
                else
                {
                    fAvailableDist = (pDst->vfptr->GetWidth(pDst) / 2.f) + pPlayer->m_pmWpn.wGaAttRange;
                    fAvailableDist += pPlayer->m_EP.GetEff_Plus(
                        pPlayer->m_pmWpn.byWpClass + (int)ATF::_EFF_PLUS::GE_Att_Dist_);
                }

                if (ATF::Global::Get3DSqrt(pPlayer->m_fCurPos, pDst->m_fCurPos) > fAvailableDist)
                {
                    if (ATF::Global::Get3DSqrt(pPlayer->m_fCurPos, pDst->m_fOldPos) > fAvailableDist)
                    {
                        byRetCode = 5;
                        break;
                    }
                }

                next(pPlayer, wBulletSerial, pidDst, pConsumeSerial);
            } while (false);

            if (byRetCode != 0)
            {
                pPlayer->SendMsg_ThrowSkillResult(byRetCode, pidDst, -1);
            }
        }

        void WINAPIV CAttackSystem::pc_ThrowUnitRequest(
            ATF::CPlayer * pPlayer,
            ATF::_CHRID * pidDst,
            uint16_t * pConsumeSerial,
            ATF::Info::CPlayerpc_ThrowUnitRequest1955_ptr next)
        {
            char byRetCode = 0;
            do
            {
                if (!pPlayer->IsRidingUnit())
                {
                    byRetCode = 23;
                    break;
                }

                auto pDst = ATF::Global::g_MainThread->GetObjectA(0, pidDst->byID, pidDst->wIndex);
                if (!pDst)
                {
                    byRetCode = 2;
                    break;
                }

                ATF::_UnitPart_fld* pPartFld = 
                    (ATF::_UnitPart_fld*)ATF::Global::g_MainThread->m_tblUnitPart[4].GetRecord(
                        pPlayer->m_pUsingUnit->byPart[4]);

                if (!pPartFld)
                {
                    byRetCode = 23;
                    break;
                }

                float fAvailableDist = (pDst->vfptr->GetWidth(pDst) / 2.f) + pPartFld->m_fAttackRange;
                if (ATF::Global::Get3DSqrt(pPlayer->m_fCurPos, pDst->m_fCurPos) > fAvailableDist)
                {
                    if (ATF::Global::Get3DSqrt(pPlayer->m_fCurPos, pDst->m_fOldPos) > fAvailableDist)
                    {
                        byRetCode = 5;
                        break;
                    }
                }

                next(pPlayer, pidDst, pConsumeSerial);
            } while (false);

            if (byRetCode != 0)
            {
                pPlayer->SendMsg_ThrowUnitResult(byRetCode, pidDst, -1);
            }
        }
    }
}
