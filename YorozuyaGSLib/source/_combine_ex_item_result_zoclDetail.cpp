#include <_combine_ex_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_ptr _combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_next(nullptr);
        Info::_combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_clbk _combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_user(nullptr);
        
        
        void _combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_wrapper(struct _combine_ex_item_result_zocl* _this)
        {
           _combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_user(_this, _combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _combine_ex_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400b82b0L,
                (LPVOID *)&_combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_user,
                (LPVOID *)&_combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_next,
                (LPVOID)cast_pointer_function(_combine_ex_item_result_zoclctor__combine_ex_item_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_combine_ex_item_result_zocl::*)())&_combine_ex_item_result_zocl::ctor__combine_ex_item_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
