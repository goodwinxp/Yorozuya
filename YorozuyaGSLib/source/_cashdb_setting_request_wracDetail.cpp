#include <_cashdb_setting_request_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_cashdb_setting_request_wracsize2_ptr _cashdb_setting_request_wracsize2_next(nullptr);
        Info::_cashdb_setting_request_wracsize2_clbk _cashdb_setting_request_wracsize2_user(nullptr);
        
        int _cashdb_setting_request_wracsize2_wrapper(struct _cashdb_setting_request_wrac* _this)
        {
           return _cashdb_setting_request_wracsize2_user(_this, _cashdb_setting_request_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _cashdb_setting_request_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x140212960L,
                (LPVOID *)&_cashdb_setting_request_wracsize2_user,
                (LPVOID *)&_cashdb_setting_request_wracsize2_next,
                (LPVOID)cast_pointer_function(_cashdb_setting_request_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_cashdb_setting_request_wrac::*)())&_cashdb_setting_request_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
