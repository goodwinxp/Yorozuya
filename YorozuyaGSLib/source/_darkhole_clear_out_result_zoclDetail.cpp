#include <_darkhole_clear_out_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_darkhole_clear_out_result_zoclsize2_ptr _darkhole_clear_out_result_zoclsize2_next(nullptr);
        Info::_darkhole_clear_out_result_zoclsize2_clbk _darkhole_clear_out_result_zoclsize2_user(nullptr);
        
        int _darkhole_clear_out_result_zoclsize2_wrapper(struct _darkhole_clear_out_result_zocl* _this)
        {
           return _darkhole_clear_out_result_zoclsize2_user(_this, _darkhole_clear_out_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _darkhole_clear_out_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efa00L,
                (LPVOID *)&_darkhole_clear_out_result_zoclsize2_user,
                (LPVOID *)&_darkhole_clear_out_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_darkhole_clear_out_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_darkhole_clear_out_result_zocl::*)())&_darkhole_clear_out_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
