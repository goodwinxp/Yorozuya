#pragma once

#include <chrono>
#include <set>
#include <ATF/CPlayer.hpp>
#include <ATF/Global.hpp>

#include "PlayerEx_detail.h"
#include "../../Common/Helpers/SingletonHelper.hpp"
#include "../../Common/Helpers/TimeHelper.hpp"
#include "../../Common/Helpers/CriticalSection.hpp"

namespace GameServer
{
    namespace Extension
    {
        class CPlayerEx
            : public SingletonHelper::CSingleton<CPlayerEx>
        {
        public:
            CPlayerEx();

            void Loop();

            void UpdateSetItem();

            bool AlreadyKilled(DWORD dwKillerSerial);

            bool PushSerialKiller(DWORD dwKillerSerial);

            void CleanSerialKillerList();

            bool CheckMove(float* pfTar) const;

            void DBSave();

            static void CheckDayChangedPvpPointClear();

            void LoadSerialKillerListComplete(
                std::set<uint32_t>&& setKillerList,
                uint32_t dwPlayerSerial);
        public:
            bool CheckUnitAttackDelay() const;

            bool CheckSiegeAttackDelay() const;

            bool CheckNormalAttackDelay() const;

            bool CheckForceAttackDelay(int nCode, int nSub) const;

            bool CheckSkillAttackDelay(int nCode, int nSub, int indx) const;

        public:
            void SetUnitAttackDelay(::std::chrono::milliseconds msDelay);

            void SetSiegeAttackDelay(::std::chrono::milliseconds msDelay);

            void SetNormalAttackDelay(::std::chrono::milliseconds msDelay);

            void SetForceAttackDelay(int nCode, int nSub, ::std::chrono::milliseconds msDelay);

            void SetSkillAttackDelay(int nCode, int nSub, int indx, ::std::chrono::milliseconds msDelay);

        public:
            static bool init_player(size_t indx, ATF::CPlayer* pPlayer);

        public:
            static void AdjustSerialKillerList();

            static bool Load(ATF::CPlayer* pPlayer);

            static void NetClose(ATF::CPlayer* pPlayer);

            static CPlayerEx& GetPlayerEx(const ATF::CPlayer* pPlayer);

            static bool WINAPIV pc_SetItemCheckRequest(
                ATF::CPlayer *pPlayer,
                unsigned int dwSetItem,
                char bySetItemNum,
                char bySetEffectNum,
                bool bSet,
                uint8_t& byResult);

        private:
            static CPlayerEx g_PlayerEx[ATF::Global::max_player];

        private:
            bool Init(ATF::CPlayer* pPlayer);

            void Save();

        private:
            void LoadSerialKillerList();

            void SaveSerialKillerList();

        private:
            void ResetSetItem();

            void ResetAttackDelay();

        private:
            void InitMoveInfo();

            void MoveError() const;

            bool CheckSpeedHack(float fRealSpeed, float* fTar) const;

            bool CheckFlyHack(float* fTar) const;

            bool CheckWallHack(float* fTar) const;

            float GetMoveSpeed() const;

        private:
            uint32_t m_dwPlayerSerial;
            ATF::CPlayer *m_pPlayer = nullptr;

            CCriticalSection m_mtxSetView;
            TimeHelper::CTimer m_tmPeriodSendItemInfo;
            detail::ContainerSetItemInfo_t m_setSetItemInfoView;
            detail::ContainerSetItemInfo_t m_setSetItemInfo;
        private:
            CCriticalSection m_mtxKillerInfo;
            std::set<uint32_t> m_setKillerInfo;
            std::set<uint32_t> m_setSavedKillerInfo;

        private:
            detail::_attack_delay m_AttackDelay;
            mutable detail::_move_info m_MoveInfo;
        };
    };
};
