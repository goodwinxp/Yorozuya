#include <_post_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_post_result_zoclctor__post_result_zocl2_ptr _post_result_zoclctor__post_result_zocl2_next(nullptr);
        Info::_post_result_zoclctor__post_result_zocl2_clbk _post_result_zoclctor__post_result_zocl2_user(nullptr);
        
        
        void _post_result_zoclctor__post_result_zocl2_wrapper(struct _post_result_zocl* _this)
        {
           _post_result_zoclctor__post_result_zocl2_user(_this, _post_result_zoclctor__post_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _post_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f0470L,
                (LPVOID *)&_post_result_zoclctor__post_result_zocl2_user,
                (LPVOID *)&_post_result_zoclctor__post_result_zocl2_next,
                (LPVOID)cast_pointer_function(_post_result_zoclctor__post_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_post_result_zocl::*)())&_post_result_zocl::ctor__post_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
