#include <_trunk_est_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_trunk_est_result_zoclctor__trunk_est_result_zocl2_ptr _trunk_est_result_zoclctor__trunk_est_result_zocl2_next(nullptr);
        Info::_trunk_est_result_zoclctor__trunk_est_result_zocl2_clbk _trunk_est_result_zoclctor__trunk_est_result_zocl2_user(nullptr);
        
        
        void _trunk_est_result_zoclctor__trunk_est_result_zocl2_wrapper(struct _trunk_est_result_zocl* _this)
        {
           _trunk_est_result_zoclctor__trunk_est_result_zocl2_user(_this, _trunk_est_result_zoclctor__trunk_est_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _trunk_est_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400effa0L,
                (LPVOID *)&_trunk_est_result_zoclctor__trunk_est_result_zocl2_user,
                (LPVOID *)&_trunk_est_result_zoclctor__trunk_est_result_zocl2_next,
                (LPVOID)cast_pointer_function(_trunk_est_result_zoclctor__trunk_est_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_trunk_est_result_zocl::*)())&_trunk_est_result_zocl::ctor__trunk_est_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
