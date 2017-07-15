#include <__add_loot_itemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__add_loot_itemctor___add_loot_item2_ptr __add_loot_itemctor___add_loot_item2_next(nullptr);
        Info::__add_loot_itemctor___add_loot_item2_clbk __add_loot_itemctor___add_loot_item2_user(nullptr);
        
        
        void __add_loot_itemctor___add_loot_item2_wrapper(struct __add_loot_item* _this)
        {
           __add_loot_itemctor___add_loot_item2_user(_this, __add_loot_itemctor___add_loot_item2_next);
        };
        
        ::std::array<hook_record, 1> __add_loot_item_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a2e0L,
                (LPVOID *)&__add_loot_itemctor___add_loot_item2_user,
                (LPVOID *)&__add_loot_itemctor___add_loot_item2_next,
                (LPVOID)cast_pointer_function(__add_loot_itemctor___add_loot_item2_wrapper),
                (LPVOID)cast_pointer_function((void(__add_loot_item::*)())&__add_loot_item::ctor___add_loot_item)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
