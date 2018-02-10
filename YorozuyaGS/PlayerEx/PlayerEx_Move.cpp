#include "stdafx.h"

#include "PlayerEx.h"
#include "../../Common/ETypes.h"

#include <ATF/Global.hpp>
#include <ATF/_UnitFrame_fld.hpp>
#include <ATF/_player_fld.hpp>

namespace GameServer
{
    namespace Extension
    {
        #define _MAX_PATH_POS   16
        #define _PATH_NOT_FOUND 0

        bool CPlayerEx::CheckWallHack( float* fTar) const
        {
            float fPos[3] = { 0.0f };
            float fCurPos[3] = { 0.0f };
            float fMovePos[_MAX_PATH_POS + 1] = { 0.0f };
            uint32_t nCount = 0;

            memcpy(fCurPos, m_pPlayer->m_fCurPos, sizeof(fCurPos));

            if (m_pPlayer->m_pCurMap->m_Level.mBsp->CanYouGoThere(fCurPos, fTar, (float **)&fPos))
                return true;

            if (m_pPlayer->m_pCurMap->m_Level.mBsp->GetPathFind(fCurPos, fTar, (float **)&fMovePos, &nCount, _MAX_PATH_POS) == _PATH_NOT_FOUND)
                return false;

            if (nCount < 2)
                return false;

            return true;
        }

        float CPlayerEx::GetMoveSpeed() const
        {
            float m_fAvatarSpeed = 0.0f;
            if (m_pPlayer->IsRidingUnit())
            {
                ATF::_UnitFrame_fld* pFrameFld = (ATF::_UnitFrame_fld*)ATF::Global::g_MainThread->m_tblUnitFrame.GetRecord(m_pPlayer->m_pUsingUnit->byFrame);
                m_fAvatarSpeed = pFrameFld->m_fMoveRate_Seed;
                switch (m_pPlayer->m_byMoveType)
                {
                case 0:
                    for (int i = 0; i < 6; ++i)
                    {
                        ATF::_UnitPart_fld* pPartFld = (ATF::_UnitPart_fld*)ATF::Global::g_MainThread->m_tblUnitPart[i].GetRecord(m_pPlayer->m_pUsingUnit->byPart[i]);
                        m_fAvatarSpeed += pPartFld->m_fMoveSpdRev;
                    }
                    break;

                case 1:
                    ATF::_UnitPart_fld* pPartFld = (ATF::_UnitPart_fld*)ATF::Global::g_MainThread->m_tblUnitPart[5].GetRecord(m_pPlayer->m_pUsingUnit->byPart[5]);
                    m_fAvatarSpeed += pPartFld->m_fBstSpd;
                    break;
                }
            }
            else
            {
                ATF::_player_fld * pPlayerFld = (ATF::_player_fld*)ATF::Global::g_MainThread->m_tblPlayer.GetRecord(m_pPlayer->m_Param.m_dbChar.m_byRaceSexCode);
                if (m_pPlayer->m_bInGuildBattle && m_pPlayer->m_bTakeGravityStone)
                {
                    m_fAvatarSpeed = 3.0f;
                    m_fAvatarSpeed += m_pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Move_Run_Spd);
                }
                else
                {
                    switch (m_pPlayer->m_byMoveType)
                    {
                    case 0:
                        m_fAvatarSpeed += pPlayerFld->m_fMoveWalkRate;
                        m_fAvatarSpeed += m_pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Move_Run_Spd);
                        break;

                    case 1:
                        m_fAvatarSpeed += pPlayerFld->m_fMoveRunRate;
                        m_fAvatarSpeed += m_pPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Move_Run_Spd);
                        break;

                    case 2:
                        m_fAvatarSpeed += pPlayerFld->m_fMoveRunRate;
                        m_fAvatarSpeed += m_pPlayer->EquipItemSFAgent.GetBoosterAddSpeed();
                        break;
                    }
                }
            }

            return m_fAvatarSpeed;
        }

        bool CPlayerEx::CheckFlyHack(float* fTar) const
        {
            if (ATF::Global::Get3DSqrt(m_pPlayer->m_fCurPos, fTar) <= 15.0f &&
                std::fabs(m_pPlayer->m_fCurPos[1] - fTar[1]) >= 120.0f)
                return false;

            float fCur[3] = { 0.0f };
            memcpy(fCur, m_pPlayer->m_fCurPos, sizeof(fCur));

            if (!m_pPlayer->m_pCurMap->m_Level.GetNextYposFarProgress(fCur, fTar, &fTar[1]) &&
                !m_pPlayer->m_pCurMap->m_Level.GetNextYposForServerFar(fCur, fTar, &fTar[1]))
                return false;

            return true;
        }

        bool CPlayerEx::CheckSpeedHack(float fRealSpeed, float* fTar) const
        {
            const auto tpCurrentTime = TimeHelper::GetLoopTimeInChrono();

            auto tmTime = ::std::chrono::milliseconds(100);
            if (!m_pPlayer->m_bMove || m_MoveInfo.m_nCountMove < 1)
            {
                if (memcmp(m_pPlayer->m_fCurPos, fTar, sizeof(m_pPlayer->m_fCurPos)) == 0)
                    return true;

                m_MoveInfo.m_nCountMove = 0;
                tmTime += ::std::chrono::milliseconds(600);
            }
            else
            {
                const auto tmDiff = tpCurrentTime - m_MoveInfo.m_tpLastMove;
                tmTime += ::std::chrono::duration_cast<::std::chrono::milliseconds>(tmDiff);
                if (tmTime > ::std::chrono::milliseconds(5000))
                    tmTime = ::std::chrono::milliseconds(2500);
            }

            const float fDist = fRealSpeed * 15.0f * tmTime.count() / 1000.f;
            const float fSqrt = ATF::Global::Get3DSqrt(m_pPlayer->m_fCurPos, fTar);
            if (fSqrt < fDist)
                return true;

            float fRatio = fSqrt / fDist;

            if (fRatio <= 1.3f)
                return true;

            if (fRatio >= 5.0f)
                return false;

            if (m_MoveInfo.m_timerWarning.is_end()) // Время с последнего страйка
                m_MoveInfo.m_nCountWarning = 0;

            int nCountWarning = m_MoveInfo.m_nCountWarning;
            m_MoveInfo.m_timerWarning.begin(::std::chrono::milliseconds(3000));

            if (nCountWarning >= 15)
            {
                return false;
            }
            else
            {
                if (fRatio > 1.3f && fRatio <= 1.65f)
                    nCountWarning += 2;

                else if (fRatio > 1.65f && fRatio <= 2.1f)
                    nCountWarning += 5;

                else
                    nCountWarning += 9;
            }

            m_MoveInfo.m_nCountWarning = ++nCountWarning;

            return true;
        };

        bool CPlayerEx::CheckMove(float* pfTar) const
        {
            bool result = false;

            do
            {
                if (m_pPlayer->m_byUserDgr > 0)
                {
                    result = true;
                    break;
                }

                const float fLastSpeed = m_MoveInfo.m_fLastSpeed;
                float fCurrentSpeed = GetMoveSpeed();
                m_MoveInfo.m_fLastSpeed = fCurrentSpeed;
                if (fLastSpeed > fCurrentSpeed)
                    fCurrentSpeed = fLastSpeed;

                if (!CheckSpeedHack(fCurrentSpeed, pfTar))
                    break;

                if (!CheckWallHack(pfTar))
                    break;

                if (!CheckFlyHack(pfTar))
                    break;

                result = true;
            } while (false);

            if (!result)
            {
                MoveError();
            }
            else
            {
                ++m_MoveInfo.m_nCountMove;
                m_MoveInfo.m_tpLastMove = TimeHelper::GetLoopTimeInChrono();
            }
            
            return result;
        }

        void CPlayerEx::MoveError() const
        {
            m_pPlayer->SendMsg_MoveError(11);
            if (m_pPlayer->m_bMove)
            {
                bool bAll = m_pPlayer->IsOutExtraStopPos(m_pPlayer->m_fCurPos);
                m_pPlayer->SendMsg_Stop(bAll);
                m_pPlayer->Stop();
            }
        }

        void CPlayerEx::InitMoveInfo()
        {
            m_MoveInfo.reset();
            m_MoveInfo.m_fLastSpeed = GetMoveSpeed();
        }
    }
}
