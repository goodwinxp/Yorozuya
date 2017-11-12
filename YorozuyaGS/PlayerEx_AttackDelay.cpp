#include "stdafx.h"

#include "ETypes.h"
#include "PlayerEx.h"

namespace GameServer
{
    namespace Extension
    {
        inline _STD chrono::milliseconds AdjustDelayValue(
            _STD chrono::milliseconds msDelay)
        {
            static _STD chrono::milliseconds msCollision(50);
            if (msDelay >= msCollision)
                return msDelay - msCollision;
            return msDelay;
        }

        bool CPlayerEx::CheckUnitAttackDelay() const
        {
            return m_AttackDelay.unit.is_end();
        }

        bool CPlayerEx::CheckSiegeAttackDelay() const
        {
            return m_AttackDelay.siege.is_end();
        }

        bool CPlayerEx::CheckNormalAttackDelay() const
        {
            return m_AttackDelay.normal.is_end();
        }

        bool CPlayerEx::CheckForceAttackDelay(int nCode, int nSub) const
        {
            return m_AttackDelay.force[nCode][nSub].is_end();
        }

        bool CPlayerEx::CheckSkillAttackDelay(int nCode, int nSub, int indx) const
        {
            if (nCode == -1)
                return m_AttackDelay.class_skill[nSub][indx].is_end();

            return m_AttackDelay.skill[nCode][nSub].is_end();
        }

        void CPlayerEx::SetUnitAttackDelay(_STD chrono::milliseconds msDelay)
        {
            m_AttackDelay.unit.begin(AdjustDelayValue(msDelay));
        }

        void CPlayerEx::SetSiegeAttackDelay(_STD chrono::milliseconds msDelay)
        {
            m_AttackDelay.siege.begin(AdjustDelayValue(msDelay));
        }

        void CPlayerEx::SetNormalAttackDelay(_STD chrono::milliseconds msDelay)
        {
            m_AttackDelay.normal.begin(AdjustDelayValue(msDelay));
        }

        void CPlayerEx::SetForceAttackDelay(int nCode, int nSub, _STD chrono::milliseconds msDelay)
        {
            m_AttackDelay.force[nCode][nSub].begin(AdjustDelayValue(msDelay));
        }

        void CPlayerEx::SetSkillAttackDelay(int nCode, int nSub, int indx, _STD chrono::milliseconds msDelay)
        {
            if (nCode == -1)
                m_AttackDelay.class_skill[nSub][indx].begin(AdjustDelayValue(msDelay));
            else
                m_AttackDelay.skill[nCode][nSub].begin(AdjustDelayValue(msDelay));
        }
    }
}
