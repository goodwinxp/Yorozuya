#include <_db_golden_box_itemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_db_golden_box_itemctor__db_golden_box_item2_ptr _db_golden_box_itemctor__db_golden_box_item2_next(nullptr);
        Info::_db_golden_box_itemctor__db_golden_box_item2_clbk _db_golden_box_itemctor__db_golden_box_item2_user(nullptr);
        
        
        void _db_golden_box_itemctor__db_golden_box_item2_wrapper(struct _db_golden_box_item* _this)
        {
           _db_golden_box_itemctor__db_golden_box_item2_user(_this, _db_golden_box_itemctor__db_golden_box_item2_next);
        };
        
        ::std::array<hook_record, 1> _db_golden_box_item_functions = 
        {
            _hook_record {
                (LPVOID)0x140416a60L,
                (LPVOID *)&_db_golden_box_itemctor__db_golden_box_item2_user,
                (LPVOID *)&_db_golden_box_itemctor__db_golden_box_item2_next,
                (LPVOID)cast_pointer_function(_db_golden_box_itemctor__db_golden_box_item2_wrapper),
                (LPVOID)cast_pointer_function((void(_db_golden_box_item::*)())&_db_golden_box_item::ctor__db_golden_box_item)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
