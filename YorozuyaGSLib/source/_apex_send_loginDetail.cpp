#include <_apex_send_loginDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_apex_send_loginsize2_ptr _apex_send_loginsize2_next(nullptr);
        Info::_apex_send_loginsize2_clbk _apex_send_loginsize2_user(nullptr);
        
        int _apex_send_loginsize2_wrapper(struct _apex_send_login* _this)
        {
           return _apex_send_loginsize2_user(_this, _apex_send_loginsize2_next);
        };
        
        ::std::array<hook_record, 1> _apex_send_login_functions = 
        {
            _hook_record {
                (LPVOID)0x140410bf0L,
                (LPVOID *)&_apex_send_loginsize2_user,
                (LPVOID *)&_apex_send_loginsize2_next,
                (LPVOID)cast_pointer_function(_apex_send_loginsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_apex_send_login::*)())&_apex_send_login::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
