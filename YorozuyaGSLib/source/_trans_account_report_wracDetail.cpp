#include <_trans_account_report_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_trans_account_report_wracsize2_ptr _trans_account_report_wracsize2_next(nullptr);
        Info::_trans_account_report_wracsize2_clbk _trans_account_report_wracsize2_user(nullptr);
        
        int _trans_account_report_wracsize2_wrapper(struct _trans_account_report_wrac* _this)
        {
           return _trans_account_report_wracsize2_user(_this, _trans_account_report_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _trans_account_report_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x140207e00L,
                (LPVOID *)&_trans_account_report_wracsize2_user,
                (LPVOID *)&_trans_account_report_wracsize2_next,
                (LPVOID)cast_pointer_function(_trans_account_report_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_trans_account_report_wrac::*)())&_trans_account_report_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
