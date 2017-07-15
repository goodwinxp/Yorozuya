#include <_qry_case_updateclearguildbattleDayInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_updateclearguildbattleDayInfosize2_ptr _qry_case_updateclearguildbattleDayInfosize2_next(nullptr);
        Info::_qry_case_updateclearguildbattleDayInfosize2_clbk _qry_case_updateclearguildbattleDayInfosize2_user(nullptr);
        
        int _qry_case_updateclearguildbattleDayInfosize2_wrapper(struct _qry_case_updateclearguildbattleDayInfo* _this)
        {
           return _qry_case_updateclearguildbattleDayInfosize2_user(_this, _qry_case_updateclearguildbattleDayInfosize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_updateclearguildbattleDayInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403dece0L,
                (LPVOID *)&_qry_case_updateclearguildbattleDayInfosize2_user,
                (LPVOID *)&_qry_case_updateclearguildbattleDayInfosize2_next,
                (LPVOID)cast_pointer_function(_qry_case_updateclearguildbattleDayInfosize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_updateclearguildbattleDayInfo::*)())&_qry_case_updateclearguildbattleDayInfo::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
