#include <_throw_skill_result_one_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_ptr _throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_next(nullptr);
        Info::_throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_clbk _throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_user(nullptr);
        
        
        void _throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_wrapper(struct _throw_skill_result_one_zocl* _this)
        {
           _throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_user(_this, _throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _throw_skill_result_one_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efd70L,
                (LPVOID *)&_throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_user,
                (LPVOID *)&_throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_next,
                (LPVOID)cast_pointer_function(_throw_skill_result_one_zoclctor__throw_skill_result_one_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_throw_skill_result_one_zocl::*)())&_throw_skill_result_one_zocl::ctor__throw_skill_result_one_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
