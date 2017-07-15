#include <_darkhole_state_change_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_darkhole_state_change_zoclsize2_ptr _darkhole_state_change_zoclsize2_next(nullptr);
        Info::_darkhole_state_change_zoclsize2_clbk _darkhole_state_change_zoclsize2_user(nullptr);
        
        int _darkhole_state_change_zoclsize2_wrapper(struct _darkhole_state_change_zocl* _this)
        {
           return _darkhole_state_change_zoclsize2_user(_this, _darkhole_state_change_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _darkhole_state_change_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1401648f0L,
                (LPVOID *)&_darkhole_state_change_zoclsize2_user,
                (LPVOID *)&_darkhole_state_change_zoclsize2_next,
                (LPVOID)cast_pointer_function(_darkhole_state_change_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_darkhole_state_change_zocl::*)())&_darkhole_state_change_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
