#include <_apex_send_logoutDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_apex_send_logoutsize2_ptr _apex_send_logoutsize2_next(nullptr);
        Info::_apex_send_logoutsize2_clbk _apex_send_logoutsize2_user(nullptr);
        
        int _apex_send_logoutsize2_wrapper(struct _apex_send_logout* _this)
        {
           return _apex_send_logoutsize2_user(_this, _apex_send_logoutsize2_next);
        };
        
        ::std::array<hook_record, 1> _apex_send_logout_functions = 
        {
            _hook_record {
                (LPVOID)0x140410c40L,
                (LPVOID *)&_apex_send_logoutsize2_user,
                (LPVOID *)&_apex_send_logoutsize2_next,
                (LPVOID)cast_pointer_function(_apex_send_logoutsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_apex_send_logout::*)())&_apex_send_logout::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
