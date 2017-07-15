#include <_qry_case_raceboss_accumulation_winrateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_raceboss_accumulation_winratesize2_ptr _qry_case_raceboss_accumulation_winratesize2_next(nullptr);
        Info::_qry_case_raceboss_accumulation_winratesize2_clbk _qry_case_raceboss_accumulation_winratesize2_user(nullptr);
        
        int _qry_case_raceboss_accumulation_winratesize2_wrapper(struct _qry_case_raceboss_accumulation_winrate* _this)
        {
           return _qry_case_raceboss_accumulation_winratesize2_user(_this, _qry_case_raceboss_accumulation_winratesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_raceboss_accumulation_winrate_functions = 
        {
            _hook_record {
                (LPVOID)0x1402bd720L,
                (LPVOID *)&_qry_case_raceboss_accumulation_winratesize2_user,
                (LPVOID *)&_qry_case_raceboss_accumulation_winratesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_raceboss_accumulation_winratesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_raceboss_accumulation_winrate::*)())&_qry_case_raceboss_accumulation_winrate::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
