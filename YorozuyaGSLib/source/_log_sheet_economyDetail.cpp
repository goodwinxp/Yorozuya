#include <_log_sheet_economyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_log_sheet_economysize2_ptr _log_sheet_economysize2_next(nullptr);
        Info::_log_sheet_economysize2_clbk _log_sheet_economysize2_user(nullptr);
        
        int _log_sheet_economysize2_wrapper(struct _log_sheet_economy* _this)
        {
           return _log_sheet_economysize2_user(_this, _log_sheet_economysize2_next);
        };
        
        ::std::array<hook_record, 1> _log_sheet_economy_functions = 
        {
            _hook_record {
                (LPVOID)0x1402a5ce0L,
                (LPVOID *)&_log_sheet_economysize2_user,
                (LPVOID *)&_log_sheet_economysize2_next,
                (LPVOID)cast_pointer_function(_log_sheet_economysize2_wrapper),
                (LPVOID)cast_pointer_function((int(_log_sheet_economy::*)())&_log_sheet_economy::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
