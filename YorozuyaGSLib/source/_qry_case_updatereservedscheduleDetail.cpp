#include <_qry_case_updatereservedscheduleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_updatereservedschedulesize2_ptr _qry_case_updatereservedschedulesize2_next(nullptr);
        Info::_qry_case_updatereservedschedulesize2_clbk _qry_case_updatereservedschedulesize2_user(nullptr);
        
        int _qry_case_updatereservedschedulesize2_wrapper(struct _qry_case_updatereservedschedule* _this)
        {
           return _qry_case_updatereservedschedulesize2_user(_this, _qry_case_updatereservedschedulesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_updatereservedschedule_functions = 
        {
            _hook_record {
                (LPVOID)0x1403d0b30L,
                (LPVOID *)&_qry_case_updatereservedschedulesize2_user,
                (LPVOID *)&_qry_case_updatereservedschedulesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_updatereservedschedulesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_updatereservedschedule::*)())&_qry_case_updatereservedschedule::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
