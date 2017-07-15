#include <_apex_send_ipDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_apex_send_ipctor__apex_send_ip2_ptr _apex_send_ipctor__apex_send_ip2_next(nullptr);
        Info::_apex_send_ipctor__apex_send_ip2_clbk _apex_send_ipctor__apex_send_ip2_user(nullptr);
        
        Info::_apex_send_ipsize4_ptr _apex_send_ipsize4_next(nullptr);
        Info::_apex_send_ipsize4_clbk _apex_send_ipsize4_user(nullptr);
        
        
        void _apex_send_ipctor__apex_send_ip2_wrapper(struct _apex_send_ip* _this)
        {
           _apex_send_ipctor__apex_send_ip2_user(_this, _apex_send_ipctor__apex_send_ip2_next);
        };
        int _apex_send_ipsize4_wrapper(struct _apex_send_ip* _this)
        {
           return _apex_send_ipsize4_user(_this, _apex_send_ipsize4_next);
        };
        
        ::std::array<hook_record, 2> _apex_send_ip_functions = 
        {
            _hook_record {
                (LPVOID)0x140410c00L,
                (LPVOID *)&_apex_send_ipctor__apex_send_ip2_user,
                (LPVOID *)&_apex_send_ipctor__apex_send_ip2_next,
                (LPVOID)cast_pointer_function(_apex_send_ipctor__apex_send_ip2_wrapper),
                (LPVOID)cast_pointer_function((void(_apex_send_ip::*)())&_apex_send_ip::ctor__apex_send_ip)
            },
            _hook_record {
                (LPVOID)0x140410c20L,
                (LPVOID *)&_apex_send_ipsize4_user,
                (LPVOID *)&_apex_send_ipsize4_next,
                (LPVOID)cast_pointer_function(_apex_send_ipsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_apex_send_ip::*)())&_apex_send_ip::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
