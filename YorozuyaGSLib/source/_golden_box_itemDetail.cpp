#include <_golden_box_itemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_golden_box_itemctor__golden_box_item2_ptr _golden_box_itemctor__golden_box_item2_next(nullptr);
        Info::_golden_box_itemctor__golden_box_item2_clbk _golden_box_itemctor__golden_box_item2_user(nullptr);
        
        
        void _golden_box_itemctor__golden_box_item2_wrapper(struct _golden_box_item* _this)
        {
           _golden_box_itemctor__golden_box_item2_user(_this, _golden_box_itemctor__golden_box_item2_next);
        };
        
        ::std::array<hook_record, 1> _golden_box_item_functions = 
        {
            _hook_record {
                (LPVOID)0x140416a10L,
                (LPVOID *)&_golden_box_itemctor__golden_box_item2_user,
                (LPVOID *)&_golden_box_itemctor__golden_box_item2_next,
                (LPVOID)cast_pointer_function(_golden_box_itemctor__golden_box_item2_wrapper),
                (LPVOID)cast_pointer_function((void(_golden_box_item::*)())&_golden_box_item::ctor__golden_box_item)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
