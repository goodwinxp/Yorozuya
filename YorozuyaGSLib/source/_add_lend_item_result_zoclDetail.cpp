#include <_add_lend_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_add_lend_item_result_zoclsize2_ptr _add_lend_item_result_zoclsize2_next(nullptr);
        Info::_add_lend_item_result_zoclsize2_clbk _add_lend_item_result_zoclsize2_user(nullptr);
        
        int _add_lend_item_result_zoclsize2_wrapper(struct _add_lend_item_result_zocl* _this)
        {
           return _add_lend_item_result_zoclsize2_user(_this, _add_lend_item_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _add_lend_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403fea30L,
                (LPVOID *)&_add_lend_item_result_zoclsize2_user,
                (LPVOID *)&_add_lend_item_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_add_lend_item_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_add_lend_item_result_zocl::*)())&_add_lend_item_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
