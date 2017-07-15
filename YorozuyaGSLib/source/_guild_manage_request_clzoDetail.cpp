#include <_guild_manage_request_clzoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_guild_manage_request_clzoctor__guild_manage_request_clzo2_ptr _guild_manage_request_clzoctor__guild_manage_request_clzo2_next(nullptr);
        Info::_guild_manage_request_clzoctor__guild_manage_request_clzo2_clbk _guild_manage_request_clzoctor__guild_manage_request_clzo2_user(nullptr);
        
        Info::_guild_manage_request_clzosize4_ptr _guild_manage_request_clzosize4_next(nullptr);
        Info::_guild_manage_request_clzosize4_clbk _guild_manage_request_clzosize4_user(nullptr);
        
        
        void _guild_manage_request_clzoctor__guild_manage_request_clzo2_wrapper(struct _guild_manage_request_clzo* _this)
        {
           _guild_manage_request_clzoctor__guild_manage_request_clzo2_user(_this, _guild_manage_request_clzoctor__guild_manage_request_clzo2_next);
        };
        int _guild_manage_request_clzosize4_wrapper(struct _guild_manage_request_clzo* _this)
        {
           return _guild_manage_request_clzosize4_user(_this, _guild_manage_request_clzosize4_next);
        };
        
        ::std::array<hook_record, 2> _guild_manage_request_clzo_functions = 
        {
            _hook_record {
                (LPVOID)0x14029d7d0L,
                (LPVOID *)&_guild_manage_request_clzoctor__guild_manage_request_clzo2_user,
                (LPVOID *)&_guild_manage_request_clzoctor__guild_manage_request_clzo2_next,
                (LPVOID)cast_pointer_function(_guild_manage_request_clzoctor__guild_manage_request_clzo2_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_manage_request_clzo::*)())&_guild_manage_request_clzo::ctor__guild_manage_request_clzo)
            },
            _hook_record {
                (LPVOID)0x14029d830L,
                (LPVOID *)&_guild_manage_request_clzosize4_user,
                (LPVOID *)&_guild_manage_request_clzosize4_next,
                (LPVOID)cast_pointer_function(_guild_manage_request_clzosize4_wrapper),
                (LPVOID)cast_pointer_function((int(_guild_manage_request_clzo::*)())&_guild_manage_request_clzo::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
