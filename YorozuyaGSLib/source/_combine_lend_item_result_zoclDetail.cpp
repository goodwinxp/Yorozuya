#include <_combine_lend_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_combine_lend_item_result_zoclsize2_ptr _combine_lend_item_result_zoclsize2_next(nullptr);
        Info::_combine_lend_item_result_zoclsize2_clbk _combine_lend_item_result_zoclsize2_user(nullptr);
        
        int _combine_lend_item_result_zoclsize2_wrapper(struct _combine_lend_item_result_zocl* _this)
        {
           return _combine_lend_item_result_zoclsize2_user(_this, _combine_lend_item_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _combine_lend_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef260L,
                (LPVOID *)&_combine_lend_item_result_zoclsize2_user,
                (LPVOID *)&_combine_lend_item_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_combine_lend_item_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_combine_lend_item_result_zocl::*)())&_combine_lend_item_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
