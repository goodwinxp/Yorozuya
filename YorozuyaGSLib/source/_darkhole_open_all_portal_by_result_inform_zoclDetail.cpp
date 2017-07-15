#include <_darkhole_open_all_portal_by_result_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_ptr _darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_next(nullptr);
        Info::_darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_clbk _darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_user(nullptr);
        
        Info::_darkhole_open_all_portal_by_result_inform_zoclsize4_ptr _darkhole_open_all_portal_by_result_inform_zoclsize4_next(nullptr);
        Info::_darkhole_open_all_portal_by_result_inform_zoclsize4_clbk _darkhole_open_all_portal_by_result_inform_zoclsize4_user(nullptr);
        
        
        void _darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_wrapper(struct _darkhole_open_all_portal_by_result_inform_zocl* _this)
        {
           _darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_user(_this, _darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_next);
        };
        int _darkhole_open_all_portal_by_result_inform_zoclsize4_wrapper(struct _darkhole_open_all_portal_by_result_inform_zocl* _this)
        {
           return _darkhole_open_all_portal_by_result_inform_zoclsize4_user(_this, _darkhole_open_all_portal_by_result_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _darkhole_open_all_portal_by_result_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14026f700L,
                (LPVOID *)&_darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_user,
                (LPVOID *)&_darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_darkhole_open_all_portal_by_result_inform_zoclctor__darkhole_open_all_portal_by_result_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_darkhole_open_all_portal_by_result_inform_zocl::*)())&_darkhole_open_all_portal_by_result_inform_zocl::ctor__darkhole_open_all_portal_by_result_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x14026f750L,
                (LPVOID *)&_darkhole_open_all_portal_by_result_inform_zoclsize4_user,
                (LPVOID *)&_darkhole_open_all_portal_by_result_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_darkhole_open_all_portal_by_result_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_darkhole_open_all_portal_by_result_inform_zocl::*)())&_darkhole_open_all_portal_by_result_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
