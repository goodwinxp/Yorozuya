#include <_darkhole_destroy_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_darkhole_destroy_zoclsize2_ptr _darkhole_destroy_zoclsize2_next(nullptr);
        Info::_darkhole_destroy_zoclsize2_clbk _darkhole_destroy_zoclsize2_user(nullptr);
        
        int _darkhole_destroy_zoclsize2_wrapper(struct _darkhole_destroy_zocl* _this)
        {
           return _darkhole_destroy_zoclsize2_user(_this, _darkhole_destroy_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _darkhole_destroy_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1401648e0L,
                (LPVOID *)&_darkhole_destroy_zoclsize2_user,
                (LPVOID *)&_darkhole_destroy_zoclsize2_next,
                (LPVOID)cast_pointer_function(_darkhole_destroy_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_darkhole_destroy_zocl::*)())&_darkhole_destroy_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
