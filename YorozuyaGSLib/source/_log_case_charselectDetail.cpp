#include <_log_case_charselectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_log_case_charselectsize2_ptr _log_case_charselectsize2_next(nullptr);
        Info::_log_case_charselectsize2_clbk _log_case_charselectsize2_user(nullptr);
        
        int _log_case_charselectsize2_wrapper(struct _log_case_charselect* _this)
        {
           return _log_case_charselectsize2_user(_this, _log_case_charselectsize2_next);
        };
        
        ::std::array<hook_record, 1> _log_case_charselect_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fbf0L,
                (LPVOID *)&_log_case_charselectsize2_user,
                (LPVOID *)&_log_case_charselectsize2_next,
                (LPVOID)cast_pointer_function(_log_case_charselectsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_log_case_charselect::*)())&_log_case_charselect::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
