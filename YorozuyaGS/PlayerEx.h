#pragma once

#include <ATF\CPlayer.hpp>
#include <ATF\Global.hpp>
#include "..\Common\Helpers\SingletonHelper.hpp"

namespace GameServer
{
    namespace Extension
    {
        namespace detail
        {
            struct _set_item_info
            {
                uint32_t dwSetItem = 0;
                uint8_t  bySetItemNum = 0;
                uint8_t  bySetEffectNum = 0;
            };
        };

        class CPlayerEx
            : public SingletonHelper::CSingleton<CPlayerEx>
        {
        public:
            CPlayerEx();

            void update_set_item();

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

            _STD vector<detail::_set_item_info> m_vecInfoCurrentSetItem;
        };
    };
};
