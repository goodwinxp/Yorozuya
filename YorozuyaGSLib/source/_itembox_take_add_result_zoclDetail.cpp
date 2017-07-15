#include <_itembox_take_add_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_itembox_take_add_result_zoclsize2_ptr _itembox_take_add_result_zoclsize2_next(nullptr);
        Info::_itembox_take_add_result_zoclsize2_clbk _itembox_take_add_result_zoclsize2_user(nullptr);
        
        int _itembox_take_add_result_zoclsize2_wrapper(struct _itembox_take_add_result_zocl* _this)
        {
           return _itembox_take_add_result_zoclsize2_user(_this, _itembox_take_add_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _itembox_take_add_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef0e0L,
                (LPVOID *)&_itembox_take_add_result_zoclsize2_user,
                (LPVOID *)&_itembox_take_add_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_itembox_take_add_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_itembox_take_add_result_zocl::*)())&_itembox_take_add_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
