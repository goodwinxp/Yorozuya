#include <_open_world_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_open_world_request_wracsize2_ptr _open_world_request_wracsize2_next(nullptr);
        Info::_open_world_request_wracsize2_clbk _open_world_request_wracsize2_user(nullptr);
        
        int _open_world_request_wracsize2_wrapper(struct _open_world_request_wrac* _this)
        {
           return _open_world_request_wracsize2_user(_this, _open_world_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _open_world_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x1402080c0L,
                (LPVOID *)&_open_world_request_wracsize2_user,
                (LPVOID *)&_open_world_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_open_world_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_open_world_request_wrac::*)())&_open_world_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
