#include <_qry_case_unmandtrader_cheat_updateregisttimeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_unmandtrader_cheat_updateregisttimesize2_ptr _qry_case_unmandtrader_cheat_updateregisttimesize2_next(nullptr);
        Info::_qry_case_unmandtrader_cheat_updateregisttimesize2_clbk _qry_case_unmandtrader_cheat_updateregisttimesize2_user(nullptr);
        
        int _qry_case_unmandtrader_cheat_updateregisttimesize2_wrapper(struct _qry_case_unmandtrader_cheat_updateregisttime* _this)
        {
           return _qry_case_unmandtrader_cheat_updateregisttimesize2_user(_this, _qry_case_unmandtrader_cheat_updateregisttimesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_unmandtrader_cheat_updateregisttime_functions = 
        {
            _hook_record {
                (LPVOID)0x140360ad0L,
                (LPVOID *)&_qry_case_unmandtrader_cheat_updateregisttimesize2_user,
                (LPVOID *)&_qry_case_unmandtrader_cheat_updateregisttimesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_unmandtrader_cheat_updateregisttimesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_unmandtrader_cheat_updateregisttime::*)())&_qry_case_unmandtrader_cheat_updateregisttime::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
