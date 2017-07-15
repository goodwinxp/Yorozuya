#include <_enter_lobby_report_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_enter_lobby_report_wracsize2_ptr _enter_lobby_report_wracsize2_next(nullptr);
        Info::_enter_lobby_report_wracsize2_clbk _enter_lobby_report_wracsize2_user(nullptr);
        
        int _enter_lobby_report_wracsize2_wrapper(struct _enter_lobby_report_wrac* _this)
        {
           return _enter_lobby_report_wracsize2_user(_this, _enter_lobby_report_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _enter_lobby_report_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fbc0L,
                (LPVOID *)&_enter_lobby_report_wracsize2_user,
                (LPVOID *)&_enter_lobby_report_wracsize2_next,
                (LPVOID)cast_pointer_function(_enter_lobby_report_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_enter_lobby_report_wrac::*)())&_enter_lobby_report_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
