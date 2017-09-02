#pragma once

#include <cstdint>
#include <unordered_map>
#include <unordered_set>

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

            struct _set_item_action
            {
                uint8_t code_result;
                std::chrono::time_point<std::chrono::steady_clock> action_added;

                bool is_due(
                    const std::chrono::time_point<std::chrono::steady_clock>& current_time) const
                {
                    return std::chrono::duration_cast<std::chrono::minutes>(current_time - action_added) > std::chrono::minutes(1);
                }
            };
            using ContainerSetItemInfo_t = _STD unordered_set<_set_item_info, hashing_func, key_equal_fn>;
            using ContainerSetItemAction_t = _STD unordered_map<_set_item_info, _set_item_action, hashing_func, key_equal_fn>;
        }
    }
}
