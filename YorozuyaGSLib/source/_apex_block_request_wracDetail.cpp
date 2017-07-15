#include <_apex_block_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_apex_block_request_wracsize2_ptr _apex_block_request_wracsize2_next(nullptr);
        Info::_apex_block_request_wracsize2_clbk _apex_block_request_wracsize2_user(nullptr);
        
        int _apex_block_request_wracsize2_wrapper(struct _apex_block_request_wrac* _this)
        {
           return _apex_block_request_wracsize2_user(_this, _apex_block_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _apex_block_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x140410c50L,
                (LPVOID *)&_apex_block_request_wracsize2_user,
                (LPVOID *)&_apex_block_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_apex_block_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_apex_block_request_wrac::*)())&_apex_block_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
