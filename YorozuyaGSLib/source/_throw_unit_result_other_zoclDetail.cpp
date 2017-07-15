#include <_throw_unit_result_other_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_ptr _throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_next(nullptr);
        Info::_throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_clbk _throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_user(nullptr);
        
        
        void _throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_wrapper(struct _throw_unit_result_other_zocl* _this)
        {
           _throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_user(_this, _throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _throw_unit_result_other_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efdd0L,
                (LPVOID *)&_throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_user,
                (LPVOID *)&_throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_next,
                (LPVOID)cast_pointer_function(_throw_unit_result_other_zoclctor__throw_unit_result_other_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_throw_unit_result_other_zocl::*)())&_throw_unit_result_other_zocl::ctor__throw_unit_result_other_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
