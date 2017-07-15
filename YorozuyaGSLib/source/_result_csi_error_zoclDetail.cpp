#include <_result_csi_error_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_result_csi_error_zoclsize2_ptr _result_csi_error_zoclsize2_next(nullptr);
        Info::_result_csi_error_zoclsize2_clbk _result_csi_error_zoclsize2_user(nullptr);
        
        int _result_csi_error_zoclsize2_wrapper(struct _result_csi_error_zocl* _this)
        {
           return _result_csi_error_zoclsize2_user(_this, _result_csi_error_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _result_csi_error_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14030d6f0L,
                (LPVOID *)&_result_csi_error_zoclsize2_user,
                (LPVOID *)&_result_csi_error_zoclsize2_next,
                (LPVOID)cast_pointer_function(_result_csi_error_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_result_csi_error_zocl::*)())&_result_csi_error_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
