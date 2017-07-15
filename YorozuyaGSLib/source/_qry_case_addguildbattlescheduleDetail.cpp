#include <_qry_case_addguildbattlescheduleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_addguildbattleschedulesize2_ptr _qry_case_addguildbattleschedulesize2_next(nullptr);
        Info::_qry_case_addguildbattleschedulesize2_clbk _qry_case_addguildbattleschedulesize2_user(nullptr);
        
        int _qry_case_addguildbattleschedulesize2_wrapper(struct _qry_case_addguildbattleschedule* _this)
        {
           return _qry_case_addguildbattleschedulesize2_user(_this, _qry_case_addguildbattleschedulesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_addguildbattleschedule_functions = 
        {
            _hook_record {
                (LPVOID)0x1403d93c0L,
                (LPVOID *)&_qry_case_addguildbattleschedulesize2_user,
                (LPVOID *)&_qry_case_addguildbattleschedulesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_addguildbattleschedulesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_addguildbattleschedule::*)())&_qry_case_addguildbattleschedule::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
