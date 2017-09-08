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

            void UpdateSetItem(bool bFirst = false);

            void SetItemCheckRequest(DWORD dwSetIndex,  BYTE bySetItemNum, BYTE bySetEffectNum);

            bool PushSerialKiller(DWORD dwKillerSerial);

            void CleanSerialKillerList();

        public:
            static void AdjustSerialKillerList();

            static bool Load(ATF::CPlayer* pPlayer);

            static void NetClose(ATF::CPlayer* pPlayer);

            static CPlayerEx& GetPlayerEx(const ATF::CPlayer* pPlayer);

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
            ATF::CPlayer *m_pPlayer = nullptr;

            detail::ContainerSetItemInfo_t m_setSetItemInfo;

            std::mutex m_mtxSetAction;
            detail::ContainerSetItemAction_t m_mapSetItemAction;

        private:
            std::mutex m_mtxKillerInfo;
            std::unordered_set<DWORD> m_setKillerInfo;
        };
    };
};
