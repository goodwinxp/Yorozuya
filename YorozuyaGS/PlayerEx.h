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

            void loop();

            void update_set_item(bool bFirst = false);

            void set_item_check_request(DWORD dwSetIndex,  BYTE bySetItemNum, BYTE bySetEffectNum);

            bool insert_serial_killer(DWORD dwKillerSerial);

            void clear_serial_list();

        public:
            static bool Load(ATF::CPlayer* pPlayer);

            static void NetClose(ATF::CPlayer* pPlayer);

            static CPlayerEx& GetPlayerEx(const ATF::CPlayer* pPlayer);

        private:
            static CPlayerEx g_PlayerEx[ATF::Global::max_player];

        private:
            bool init(ATF::CPlayer* pPlayer);

            void save();

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
