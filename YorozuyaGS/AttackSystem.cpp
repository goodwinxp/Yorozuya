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
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::_pre_check_skill_attack, &CAttackSystem::_pre_check_skill_attack);
            core.set_hook(&ATF::CPlayer::skill_process, &CAttackSystem::skill_process);
            core.set_hook(&ATF::CPlayer::pc_ForceRequest, &CAttackSystem::pc_ForceRequest);
            core.set_hook(&ATF::CPlayer::pc_SkillRequest, &CAttackSystem::pc_SkillRequest);
            core.set_hook(&ATF::CPlayer::pc_ClassSkillRequest, &CAttackSystem::pc_ClassSkillRequest);
            core.set_hook(&ATF::CPlayer::pc_PlayAttack_Force, &CAttackSystem::pc_PlayAttack_Force);
            core.set_hook(&ATF::CPlayer::pc_PlayAttack_Gen, &CAttackSystem::pc_PlayAttack_Gen);
            core.set_hook(&ATF::CPlayer::pc_PlayAttack_SelfDestruction, &CAttackSystem::pc_PlayAttack_SelfDestruction);
            core.set_hook(&ATF::CPlayer::pc_PlayAttack_Siege, &CAttackSystem::pc_PlayAttack_Siege);
            core.set_hook(&ATF::CPlayer::pc_PlayAttack_Skill, &CAttackSystem::pc_PlayAttack_Skill);
            core.set_hook(&ATF::CPlayer::pc_PlayAttack_Unit, &CAttackSystem::pc_PlayAttack_Unit);
            core.set_hook(&ATF::CPlayer::pc_ThrowSkillRequest, &CAttackSystem::pc_ThrowSkillRequest);
            core.set_hook(&ATF::CPlayer::pc_ThrowUnitRequest, &CAttackSystem::pc_ThrowUnitRequest);
            core.set_hook(&ATF::CPlayer::IsBulletValidity, &CAttackSystem::IsBulletValidity);
        }

        void CAttackSystem::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::_pre_check_skill_attack);
            core.unset_hook(&ATF::CPlayer::skill_process);
            core.unset_hook(&ATF::CPlayer::pc_ForceRequest);
            core.unset_hook(&ATF::CPlayer::pc_SkillRequest);
            core.unset_hook(&ATF::CPlayer::pc_ClassSkillRequest);
            core.unset_hook(&ATF::CPlayer::pc_PlayAttack_Force);
            core.unset_hook(&ATF::CPlayer::pc_PlayAttack_Gen);
            core.unset_hook(&ATF::CPlayer::pc_PlayAttack_SelfDestruction);
            core.unset_hook(&ATF::CPlayer::pc_PlayAttack_Siege);
            core.unset_hook(&ATF::CPlayer::pc_PlayAttack_Skill);
            core.unset_hook(&ATF::CPlayer::pc_PlayAttack_Unit);
            core.unset_hook(&ATF::CPlayer::pc_ThrowSkillRequest);
            core.unset_hook(&ATF::CPlayer::pc_ThrowUnitRequest);
            core.unset_hook(&ATF::CPlayer::IsBulletValidity);
        }

        void CAttackSystem::loop()
        {
        }

        ModuleVersion_t CAttackSystem::get_version()
        {
            return usVersion;
        }

        ModuleName_t CAttackSystem::get_name()
        {
            static const ModuleName_t name = "fix_AttackSystem";
            return name;
        }

        void CAttackSystem::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
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

        char WINAPIV CAttackSystem::skill_process(
            ATF::CPlayer * pPlayer,
            int nEffectCode,
            int nSkillIndex,
            ATF::_CHRID * pidDst,
            uint16_t * pConsumeSerial,
            int * pnLv,
            ATF::Info::CPlayerskill_process2035_ptr next)
        {
            if (pPlayer->IsSiegeMode())
            {
                return 14;
            }

            return next(pPlayer, nEffectCode, nSkillIndex, pidDst, pConsumeSerial, pnLv);
        }

        void WINAPIV CAttackSystem::pc_ForceRequest(
            ATF::CPlayer* pPlayer,
            uint16_t wForceSerial,
            ATF::_CHRID* pidDst,
            uint16_t* pConsumeSerial,
            ATF::Info::CPlayerpc_ForceRequest1717_ptr next)
        {
            if (pPlayer->IsSiegeMode())
            {
                pPlayer->SendMsg_ForceResult(14, pidDst, nullptr, 0);
                return;
            }

            next(pPlayer, wForceSerial, pidDst, pConsumeSerial);
        }

        void WINAPIV CAttackSystem::pc_SkillRequest(
            ATF::CPlayer* pPlayer,
            char bySkillIndex,
            ATF::_CHRID* pidDst,
            uint16_t* pConsumeSerial,
            ATF::Info::CPlayerpc_SkillRequest1943_ptr next)
        {
            next(pPlayer, bySkillIndex, pidDst, pConsumeSerial);
        }

        void WINAPIV CAttackSystem::pc_ClassSkillRequest(
            ATF::CPlayer* pPlayer,
            uint16_t wSkillIndex,
            ATF::_CHRID* pidDst,
            uint16_t* pConsumeSerial,
            ATF::Info::CPlayerpc_ClassSkillRequest1663_ptr next)
        {
            next(pPlayer, wSkillIndex, pidDst, pConsumeSerial);
        }

        void WINAPIV CAttackSystem::pc_PlayAttack_Force(
            ATF::CPlayer* pPlayer,
            ATF::CCharacter* pDst,
            float* pfAreaPos,
            uint16_t wForceSerial,
            uint16_t* pConsumeSerial,
            uint16_t wEffBtSerial,
            ATF::Info::CPlayerpc_PlayAttack_Force1841_ptr next)
        {
            next(pPlayer, pDst, pfAreaPos, wForceSerial, pConsumeSerial, wEffBtSerial);
        }

        void WINAPIV CAttackSystem::pc_PlayAttack_Gen(
            ATF::CPlayer* pPlayer,
            ATF::CCharacter* pDst,
            char byAttPart,
            uint16_t wBulletSerial,
            uint16_t wEffBtSerial,
            bool bCount,
            ATF::Info::CPlayerpc_PlayAttack_Gen1843_ptr next)
        {
            next(pPlayer, pDst, byAttPart, wBulletSerial, wEffBtSerial, bCount);
        }

        void WINAPIV CAttackSystem::pc_PlayAttack_SelfDestruction(
            ATF::CPlayer* pPlayer,
            ATF::Info::CPlayerpc_PlayAttack_SelfDestruction1845_ptr next)
        {
            next(pPlayer);
        }

        void WINAPIV CAttackSystem::pc_PlayAttack_Siege(
            ATF::CPlayer* pPlayer,
            ATF::CCharacter* pDst,
            float* pfAttackPos,
            char byAttPart,
            uint16_t wBulletSerial,
            uint16_t wEffBtSerial,
            ATF::Info::CPlayerpc_PlayAttack_Siege1847_ptr next)
        {
            next(pPlayer, pDst, pfAttackPos, byAttPart, wBulletSerial, wEffBtSerial);
        }

        void WINAPIV CAttackSystem::pc_PlayAttack_Skill(
            ATF::CPlayer* pPlayer,
            ATF::CCharacter* pDst,
            float* pfAttackPos,
            char byEffectCode,
            uint16_t wSkillIndex,
            uint16_t wBulletSerial,
            uint16_t* pConsumeSerial,
            uint16_t wEffBtSerial,
            ATF::Info::CPlayerpc_PlayAttack_Skill1849_ptr next)
        {
            next(pPlayer, pDst, pfAttackPos, byEffectCode, wSkillIndex, wBulletSerial, pConsumeSerial, wEffBtSerial);
        }

        void WINAPIV CAttackSystem::pc_PlayAttack_Unit(
            ATF::CPlayer* pPlayer,
            ATF::CCharacter* pDst,
            char byWeaponPart,
            ATF::Info::CPlayerpc_PlayAttack_Unit1853_ptr next)
        {
            next(pPlayer, pDst, byWeaponPart);
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
                if (pPlayer->m_pmWpn.byWpType == (char)e_wp_type::luancher ||
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
