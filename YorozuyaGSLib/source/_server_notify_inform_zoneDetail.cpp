#include <_server_notify_inform_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_server_notify_inform_zonesize2_ptr _server_notify_inform_zonesize2_next(nullptr);
        Info::_server_notify_inform_zonesize2_clbk _server_notify_inform_zonesize2_user(nullptr);
        
        int _server_notify_inform_zonesize2_wrapper(struct _server_notify_inform_zone* _this)
        {
           return _server_notify_inform_zonesize2_user(_this, _server_notify_inform_zonesize2_next);
        };
        
        ::std::array<hook_record, 1> _server_notify_inform_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f1e0L,
                (LPVOID *)&_server_notify_inform_zonesize2_user,
                (LPVOID *)&_server_notify_inform_zonesize2_next,
                (LPVOID)cast_pointer_function(_server_notify_inform_zonesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_server_notify_inform_zone::*)())&_server_notify_inform_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
