#include <_logout_account_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_logout_account_request_wracsize2_ptr _logout_account_request_wracsize2_next(nullptr);
        Info::_logout_account_request_wracsize2_clbk _logout_account_request_wracsize2_user(nullptr);
        
        int _logout_account_request_wracsize2_wrapper(struct _logout_account_request_wrac* _this)
        {
           return _logout_account_request_wracsize2_user(_this, _logout_account_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _logout_account_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f230L,
                (LPVOID *)&_logout_account_request_wracsize2_user,
                (LPVOID *)&_logout_account_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_logout_account_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_logout_account_request_wrac::*)())&_logout_account_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
