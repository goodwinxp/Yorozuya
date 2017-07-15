#include <_select_avator_report_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_select_avator_report_wracsize2_ptr _select_avator_report_wracsize2_next(nullptr);
        Info::_select_avator_report_wracsize2_clbk _select_avator_report_wracsize2_user(nullptr);
        
        int _select_avator_report_wracsize2_wrapper(struct _select_avator_report_wrac* _this)
        {
           return _select_avator_report_wracsize2_user(_this, _select_avator_report_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _select_avator_report_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fa20L,
                (LPVOID *)&_select_avator_report_wracsize2_user,
                (LPVOID *)&_select_avator_report_wracsize2_next,
                (LPVOID)cast_pointer_function(_select_avator_report_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_select_avator_report_wrac::*)())&_select_avator_report_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
