#include <_user_num_report_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_user_num_report_wracsize2_ptr _user_num_report_wracsize2_next(nullptr);
        Info::_user_num_report_wracsize2_clbk _user_num_report_wracsize2_user(nullptr);
        
        int _user_num_report_wracsize2_wrapper(struct _user_num_report_wrac* _this)
        {
           return _user_num_report_wracsize2_user(_this, _user_num_report_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _user_num_report_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x140208050L,
                (LPVOID *)&_user_num_report_wracsize2_user,
                (LPVOID *)&_user_num_report_wracsize2_next,
                (LPVOID)cast_pointer_function(_user_num_report_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_user_num_report_wrac::*)())&_user_num_report_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
