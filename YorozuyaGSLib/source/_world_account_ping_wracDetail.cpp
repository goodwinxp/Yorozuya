#include <_world_account_ping_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_world_account_ping_wracsize2_ptr _world_account_ping_wracsize2_next(nullptr);
        Info::_world_account_ping_wracsize2_clbk _world_account_ping_wracsize2_user(nullptr);
        
        int _world_account_ping_wracsize2_wrapper(struct _world_account_ping_wrac* _this)
        {
           return _world_account_ping_wracsize2_user(_this, _world_account_ping_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _world_account_ping_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x1402080f0L,
                (LPVOID *)&_world_account_ping_wracsize2_user,
                (LPVOID *)&_world_account_ping_wracsize2_next,
                (LPVOID)cast_pointer_function(_world_account_ping_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_world_account_ping_wrac::*)())&_world_account_ping_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
