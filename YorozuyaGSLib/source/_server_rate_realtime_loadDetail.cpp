#include <_server_rate_realtime_loadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_server_rate_realtime_loadInit2_ptr _server_rate_realtime_loadInit2_next(nullptr);
        Info::_server_rate_realtime_loadInit2_clbk _server_rate_realtime_loadInit2_user(nullptr);
        
        
        Info::_server_rate_realtime_loadctor__server_rate_realtime_load4_ptr _server_rate_realtime_loadctor__server_rate_realtime_load4_next(nullptr);
        Info::_server_rate_realtime_loadctor__server_rate_realtime_load4_clbk _server_rate_realtime_loadctor__server_rate_realtime_load4_user(nullptr);
        
        
        Info::_server_rate_realtime_loaddtor__server_rate_realtime_load6_ptr _server_rate_realtime_loaddtor__server_rate_realtime_load6_next(nullptr);
        Info::_server_rate_realtime_loaddtor__server_rate_realtime_load6_clbk _server_rate_realtime_loaddtor__server_rate_realtime_load6_user(nullptr);
        
        void _server_rate_realtime_loadInit2_wrapper(struct _server_rate_realtime_load* _this, unsigned int dwReadTerm)
        {
           _server_rate_realtime_loadInit2_user(_this, dwReadTerm, _server_rate_realtime_loadInit2_next);
        };
        
        void _server_rate_realtime_loadctor__server_rate_realtime_load4_wrapper(struct _server_rate_realtime_load* _this)
        {
           _server_rate_realtime_loadctor__server_rate_realtime_load4_user(_this, _server_rate_realtime_loadctor__server_rate_realtime_load4_next);
        };
        
        void _server_rate_realtime_loaddtor__server_rate_realtime_load6_wrapper(struct _server_rate_realtime_load* _this)
        {
           _server_rate_realtime_loaddtor__server_rate_realtime_load6_user(_this, _server_rate_realtime_loaddtor__server_rate_realtime_load6_next);
        };
        
        ::std::array<hook_record, 3> _server_rate_realtime_load_functions = 
        {
            _hook_record {
                (LPVOID)0x140203120L,
                (LPVOID *)&_server_rate_realtime_loadInit2_user,
                (LPVOID *)&_server_rate_realtime_loadInit2_next,
                (LPVOID)cast_pointer_function(_server_rate_realtime_loadInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_server_rate_realtime_load::*)(unsigned int))&_server_rate_realtime_load::Init)
            },
            _hook_record {
                (LPVOID)0x140203070L,
                (LPVOID *)&_server_rate_realtime_loadctor__server_rate_realtime_load4_user,
                (LPVOID *)&_server_rate_realtime_loadctor__server_rate_realtime_load4_next,
                (LPVOID)cast_pointer_function(_server_rate_realtime_loadctor__server_rate_realtime_load4_wrapper),
                (LPVOID)cast_pointer_function((void(_server_rate_realtime_load::*)())&_server_rate_realtime_load::ctor__server_rate_realtime_load)
            },
            _hook_record {
                (LPVOID)0x1402031f0L,
                (LPVOID *)&_server_rate_realtime_loaddtor__server_rate_realtime_load6_user,
                (LPVOID *)&_server_rate_realtime_loaddtor__server_rate_realtime_load6_next,
                (LPVOID)cast_pointer_function(_server_rate_realtime_loaddtor__server_rate_realtime_load6_wrapper),
                (LPVOID)cast_pointer_function((void(_server_rate_realtime_load::*)())&_server_rate_realtime_load::dtor__server_rate_realtime_load)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
