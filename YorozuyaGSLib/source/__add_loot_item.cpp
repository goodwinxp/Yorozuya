#include <__add_loot_item.hpp>


START_ATF_NAMESPACE
    __add_loot_item::__add_loot_item()
    {
        using org_ptr = void (WINAPIV*)(struct __add_loot_item*);
        (org_ptr(0x14027a2e0L))(this);
    };
    void __add_loot_item::ctor___add_loot_item()
    {
        using org_ptr = void (WINAPIV*)(struct __add_loot_item*);
        (org_ptr(0x14027a2e0L))(this);
    };
END_ATF_NAMESPACE
