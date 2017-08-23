#pragma once

#include <unordered_set>
#include <ATF\CPlayer.hpp>
#include <ATF\Global.hpp>
#include "..\Common\Helpers\SingletonHelper.hpp"

namespace GameServer
{
    namespace Extension
    {
        namespace detail
        {
            union _set_item_info
            {
                struct
                {
                    uint32_t dwSetItem;
                    uint8_t  bySetItemNum;
                    uint8_t  bySetEffectNum;
                } info;

                uint64_t value;

                _set_item_info()
                    : value(0)
                {
                }

                bool operator<(const _set_item_info& rhs) const
                {
                    return (value < rhs.value);
                }
            };

            class hashing_func {
            public:
                uint64_t operator()(const _set_item_info &obj) const 
                {
                    return obj.value;
                }
            };

            class key_equal_fn {
            public:
                bool operator()(const _set_item_info& t1, const _set_item_info& t2) const 
                {
                    return (t1.value == t2.value);
                }
            };
            
            using ContainerSetItemInfo_t = _STD unordered_set<detail::_set_item_info, hashing_func, key_equal_fn>;
        };

        class CPlayerEx
            : public SingletonHelper::CSingleton<CPlayerEx>
        {
        public:
            CPlayerEx();

            void loop();

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
            bool m_bUpdatedSetItem = false;
            ATF::CPlayer *m_pPlayer = nullptr;

            std::mutex m_mtxCurrentSetInfo;
            detail::ContainerSetItemInfo_t m_setInfoCurrentSetItem;
        };
    };
};
