#include <_holy_quest_report_wracDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_holy_quest_report_wracsize2_ptr _holy_quest_report_wracsize2_next(nullptr);
        Info::_holy_quest_report_wracsize2_clbk _holy_quest_report_wracsize2_user(nullptr);
        
        int _holy_quest_report_wracsize2_wrapper(struct _holy_quest_report_wrac* _this)
        {
           return _holy_quest_report_wracsize2_user(_this, _holy_quest_report_wracsize2_next);
        };
        
        ::std::array<hook_record, 1> _holy_quest_report_wrac_functions = 
        {
            _hook_record {
                (LPVOID)0x140284bc0L,
                (LPVOID *)&_holy_quest_report_wracsize2_user,
                (LPVOID *)&_holy_quest_report_wracsize2_next,
                (LPVOID)cast_pointer_function(_holy_quest_report_wracsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_holy_quest_report_wrac::*)())&_holy_quest_report_wrac::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
