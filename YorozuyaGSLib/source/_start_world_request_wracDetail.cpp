#include <_start_world_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_start_world_request_wracsize2_ptr _start_world_request_wracsize2_next(nullptr);
        Info::_start_world_request_wracsize2_clbk _start_world_request_wracsize2_user(nullptr);
        
        int _start_world_request_wracsize2_wrapper(struct _start_world_request_wrac* _this)
        {
           return _start_world_request_wracsize2_user(_this, _start_world_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _start_world_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x1402080d0L,
                (LPVOID *)&_start_world_request_wracsize2_user,
                (LPVOID *)&_start_world_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_start_world_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_start_world_request_wrac::*)())&_start_world_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
