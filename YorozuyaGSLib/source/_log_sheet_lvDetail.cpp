#include <_log_sheet_lvDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_log_sheet_lvsize2_ptr _log_sheet_lvsize2_next(nullptr);
        Info::_log_sheet_lvsize2_clbk _log_sheet_lvsize2_user(nullptr);
        
        int _log_sheet_lvsize2_wrapper(struct _log_sheet_lv* _this)
        {
           return _log_sheet_lvsize2_user(_this, _log_sheet_lvsize2_next);
        };
        
        ::std::array<hook_record, 1> _log_sheet_lv_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fbe0L,
                (LPVOID *)&_log_sheet_lvsize2_user,
                (LPVOID *)&_log_sheet_lvsize2_next,
                (LPVOID)cast_pointer_function(_log_sheet_lvsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_log_sheet_lv::*)())&_log_sheet_lv::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
