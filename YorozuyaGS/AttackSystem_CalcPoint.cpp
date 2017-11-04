#include "stdafx.h"

#include "ETypes.h"
#include "AttackSystem.h"
#include "AttackSystemError.h"

#include <ATF/Global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        ATF::_STORAGE_LIST::_db_con* WINAPIV CAttackSystem::IsBulletValidity(
            ATF::CPlayer* pPlayer,
            uint16_t wBulletSerial,
            ATF::Info::CPlayerIsBulletValidity302_ptr next)
        {
            if (pPlayer->m_pmWpn.byWpType == (char)e_wp_type::bow ||
                pPlayer->m_pmWpn.byWpType == (char)e_wp_type::firearm ||
                pPlayer->m_pmWpn.byWpType == (char)e_wp_type::launcher ||
                pPlayer->m_pmWpn.byWpType == (char)e_wp_type::grenade)
            {
                return next(pPlayer, wBulletSerial);
            }
            else
            {
                return nullptr;
            }
        }

        void WINAPIV CAttackSystem::make_gen_attack_param(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            char byPart,
            ATF::_BulletItem_fld * pBulletFld,
            float fAddBulletFc,
            ATF::_attack_param * pAP,
            ATF::_BulletItem_fld * pEffBtFld,
            float fAddEffBtFc,
            ATF::Info::CPlayermake_gen_attack_param1505_ptr next)
        {
            next(pPlayer, pDst, byPart, pBulletFld, fAddBulletFc, pAP, pEffBtFld, fAddEffBtFc);
            if (!pBulletFld && pAP->nTol == 0xff)
            {
                pAP->nTol = -1;
            }
        }

        void WINAPIV CAttackSystem::make_siege_attack_param(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            float * pfAttackPos,
            char byPart,
            ATF::_BulletItem_fld * pBulletFld,
            float fAddBulletFc,
            ATF::_attack_param * pAP,
            ATF::_BulletItem_fld * pEffBulletFld,
            float fAddEffBtFc,
            ATF::Info::CPlayermake_siege_attack_param1507_ptr next)
        {
            next(pPlayer, pDst, pfAttackPos, byPart, pBulletFld, fAddBulletFc,
                pAP, pEffBulletFld, fAddEffBtFc);

            if (!pBulletFld && pAP->nTol == 0xff)
            {
                pAP->nTol = -1;
            }
        }

        void WINAPIV CAttackSystem::make_skill_attack_param(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            float * pfAttackPos,
            char byEffectCode,
            ATF::_skill_fld * pSkillFld,
            int nAttType,
            ATF::_STORAGE_LIST::_db_con * pBulletItem,
            float fAddBulletFc,
            ATF::_attack_param * pAP,
            ATF::_STORAGE_LIST::_db_con * pEffBulletItem,
            float fAddEffBulletFc,
            ATF::Info::CPlayermake_skill_attack_param1509_ptr next)
        {
            next(pPlayer, pDst, pfAttackPos, byEffectCode, pSkillFld, nAttType,
                pBulletItem, fAddBulletFc, pAP, pEffBulletItem, fAddEffBulletFc);

            if (!pBulletItem && pAP->nTol == 0xff)
            {
                pAP->nTol = -1;
            }
        }

        void WINAPIV CAttackSystem::make_wpactive_skill_attack_param(
            ATF::CPlayer * pPlayer,
            ATF::CCharacter * pDst,
            ATF::_skill_fld * pSkillFld,
            float * pfAttackPos,
            char byEffectCode,
            int nAttType,
            ATF::_STORAGE_LIST::_db_con * pBulletItem,
            float fAddBulletFc,
            ATF::_attack_param * pAP,
            int * nShotNum,
            ATF::Info::CPlayermake_wpactive_skill_attack_param1515_ptr next)
        {
            next(pPlayer, pDst, pSkillFld, pfAttackPos, byEffectCode,
                nAttType, pBulletItem, fAddBulletFc, pAP, nShotNum);

            if (!pBulletItem && pAP->nTol == 0xff)
            {
                pAP->nTol = -1;
            }
        }
    }
}
