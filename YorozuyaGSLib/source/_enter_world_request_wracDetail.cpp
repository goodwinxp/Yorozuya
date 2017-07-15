#include <_enter_world_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_enter_world_request_wracsize2_ptr _enter_world_request_wracsize2_next(nullptr);
        Info::_enter_world_request_wracsize2_clbk _enter_world_request_wracsize2_user(nullptr);
        
        int _enter_world_request_wracsize2_wrapper(struct _enter_world_request_wrac* _this)
        {
           return _enter_world_request_wracsize2_user(_this, _enter_world_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _enter_world_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f240L,
                (LPVOID *)&_enter_world_request_wracsize2_user,
                (LPVOID *)&_enter_world_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_enter_world_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_enter_world_request_wrac::*)())&_enter_world_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
