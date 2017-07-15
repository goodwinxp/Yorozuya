#include <_stop_world_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_stop_world_request_wracsize2_ptr _stop_world_request_wracsize2_next(nullptr);
        Info::_stop_world_request_wracsize2_clbk _stop_world_request_wracsize2_user(nullptr);
        
        int _stop_world_request_wracsize2_wrapper(struct _stop_world_request_wrac* _this)
        {
           return _stop_world_request_wracsize2_user(_this, _stop_world_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _stop_world_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x1402080e0L,
                (LPVOID *)&_stop_world_request_wracsize2_user,
                (LPVOID *)&_stop_world_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_stop_world_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_stop_world_request_wrac::*)())&_stop_world_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
