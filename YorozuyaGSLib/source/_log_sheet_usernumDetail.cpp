#include <_log_sheet_usernumDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_log_sheet_usernumsize2_ptr _log_sheet_usernumsize2_next(nullptr);
        Info::_log_sheet_usernumsize2_clbk _log_sheet_usernumsize2_user(nullptr);
        
        int _log_sheet_usernumsize2_wrapper(struct _log_sheet_usernum* _this)
        {
           return _log_sheet_usernumsize2_user(_this, _log_sheet_usernumsize2_next);
        };
        
        ::std::array<hook_record, 1> _log_sheet_usernum_functions = 
        {
            _hook_record {
                (LPVOID)0x140207e50L,
                (LPVOID *)&_log_sheet_usernumsize2_user,
                (LPVOID *)&_log_sheet_usernumsize2_next,
                (LPVOID)cast_pointer_function(_log_sheet_usernumsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_log_sheet_usernum::*)())&_log_sheet_usernum::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
