#include <_qry_case_discharge_patriarchDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_ptr _qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_next(nullptr);
        Info::_qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_clbk _qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_user(nullptr);
        
        Info::_qry_case_discharge_patriarchsize4_ptr _qry_case_discharge_patriarchsize4_next(nullptr);
        Info::_qry_case_discharge_patriarchsize4_clbk _qry_case_discharge_patriarchsize4_user(nullptr);
        
        
        void _qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_wrapper(struct _qry_case_discharge_patriarch* _this, char byR, unsigned int dwS, unsigned int dwE)
        {
           _qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_user(_this, byR, dwS, dwE, _qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_next);
        };
        int _qry_case_discharge_patriarchsize4_wrapper(struct _qry_case_discharge_patriarch* _this)
        {
           return _qry_case_discharge_patriarchsize4_user(_this, _qry_case_discharge_patriarchsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_discharge_patriarch_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b6630L,
                (LPVOID *)&_qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_user,
                (LPVOID *)&_qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_next,
                (LPVOID)cast_pointer_function(_qry_case_discharge_patriarchctor__qry_case_discharge_patriarch2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_discharge_patriarch::*)(char, unsigned int, unsigned int))&_qry_case_discharge_patriarch::ctor__qry_case_discharge_patriarch)
            },
            _hook_record {
                (LPVOID)0x1402b6680L,
                (LPVOID *)&_qry_case_discharge_patriarchsize4_user,
                (LPVOID *)&_qry_case_discharge_patriarchsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_discharge_patriarchsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_discharge_patriarch::*)())&_qry_case_discharge_patriarch::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
