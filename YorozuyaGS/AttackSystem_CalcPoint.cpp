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
                pPlayer->m_pmWpn.byWpType == (char)e_wp_type::luancher ||
                pPlayer->m_pmWpn.byWpType == (char)e_wp_type::grenade)
            {
                return next(pPlayer, wBulletSerial);
            }
            else
            {
                return nullptr;
            }
        }
    }
}
