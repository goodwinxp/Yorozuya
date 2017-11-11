#pragma once

#include <chrono>
#include <ATF\CPlayer.hpp>
#include <ATF\Global.hpp>
#include "PlayerEx_detail.h"
#include "..\Common\Helpers\SingletonHelper.hpp"
#include "..\Common\Helpers\TimeHelper.hpp"

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
            
            bool PushSerialKiller(DWORD dwKillerSerial);

            void CleanSerialKillerList();

            bool CheckMove(float* pfTar) const;

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
            ATF::CPlayer *m_pPlayer = nullptr;

            std::mutex m_mtxSetView;
            detail::ContainerSetItemInfo_t m_setSetItemInfoView;
            detail::ContainerSetItemInfo_t m_setSetItemInfo;
        private:
            std::mutex m_mtxKillerInfo;
            std::unordered_set<DWORD> m_setKillerInfo;

        private:
            detail::_attack_delay m_AttackDelay;
            mutable detail::_move_info m_MoveInfo;
        };
    };
};
