#pragma once

#include <ATF\CPlayer.hpp>
#include <ATF\Global.hpp>
#include "PlayerEx_detail.h"
#include "..\Common\Helpers\SingletonHelper.hpp"

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

            bool CheckMove(float* pfTar);

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
            void CleanSetItem();

        private:
            void InitMoveInfo();

            void MoveError();

            bool CheckSpeedHack(float fRealSpeed, float* fTar);

            bool CheckFlyHack(float* fTar);

            bool CheckWallHack(float* fTar);

            float GetMoveSpeed();

        private:
            std::mutex m_mtxPlayer;
            ATF::CPlayer *m_pPlayer = nullptr;

            std::mutex m_mtxSetView;
            detail::ContainerSetItemInfo_t m_setSetItemInfoView;
            detail::ContainerSetItemInfo_t m_setSetItemInfo;
        private:
            std::mutex m_mtxKillerInfo;
            std::unordered_set<DWORD> m_setKillerInfo;

        private:
            DWORD m_dwTimeLastMove;
            DWORD m_dwTimeLastWarning;
            float m_fLastSpeed;
            int m_nCountMove;
            int m_nCountWarning;
        };
    };
};
