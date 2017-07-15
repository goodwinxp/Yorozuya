#include <_fireguard_block_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_fireguard_block_request_wracsize2_ptr _fireguard_block_request_wracsize2_next(nullptr);
        Info::_fireguard_block_request_wracsize2_clbk _fireguard_block_request_wracsize2_user(nullptr);
        
        int _fireguard_block_request_wracsize2_wrapper(struct _fireguard_block_request_wrac* _this)
        {
           return _fireguard_block_request_wracsize2_user(_this, _fireguard_block_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _fireguard_block_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f500L,
                (LPVOID *)&_fireguard_block_request_wracsize2_user,
                (LPVOID *)&_fireguard_block_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_fireguard_block_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_fireguard_block_request_wrac::*)())&_fireguard_block_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
