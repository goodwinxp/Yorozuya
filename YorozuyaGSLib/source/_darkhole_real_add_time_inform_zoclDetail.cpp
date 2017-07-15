#include <_darkhole_real_add_time_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_darkhole_real_add_time_inform_zoclsize2_ptr _darkhole_real_add_time_inform_zoclsize2_next(nullptr);
        Info::_darkhole_real_add_time_inform_zoclsize2_clbk _darkhole_real_add_time_inform_zoclsize2_user(nullptr);
        
        int _darkhole_real_add_time_inform_zoclsize2_wrapper(struct _darkhole_real_add_time_inform_zocl* _this)
        {
           return _darkhole_real_add_time_inform_zoclsize2_user(_this, _darkhole_real_add_time_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _darkhole_real_add_time_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14026f920L,
                (LPVOID *)&_darkhole_real_add_time_inform_zoclsize2_user,
                (LPVOID *)&_darkhole_real_add_time_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_darkhole_real_add_time_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_darkhole_real_add_time_inform_zocl::*)())&_darkhole_real_add_time_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
