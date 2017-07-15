#include <_qry_case_amine_workstateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_workstatector__qry_case_amine_workstate2_ptr _qry_case_amine_workstatector__qry_case_amine_workstate2_next(nullptr);
        Info::_qry_case_amine_workstatector__qry_case_amine_workstate2_clbk _qry_case_amine_workstatector__qry_case_amine_workstate2_user(nullptr);
        
        Info::_qry_case_amine_workstatesize4_ptr _qry_case_amine_workstatesize4_next(nullptr);
        Info::_qry_case_amine_workstatesize4_clbk _qry_case_amine_workstatesize4_user(nullptr);
        
        
        void _qry_case_amine_workstatector__qry_case_amine_workstate2_wrapper(struct _qry_case_amine_workstate* _this)
        {
           _qry_case_amine_workstatector__qry_case_amine_workstate2_user(_this, _qry_case_amine_workstatector__qry_case_amine_workstate2_next);
        };
        int _qry_case_amine_workstatesize4_wrapper(struct _qry_case_amine_workstate* _this)
        {
           return _qry_case_amine_workstatesize4_user(_this, _qry_case_amine_workstatesize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_workstate_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4380L,
                (LPVOID *)&_qry_case_amine_workstatector__qry_case_amine_workstate2_user,
                (LPVOID *)&_qry_case_amine_workstatector__qry_case_amine_workstate2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_workstatector__qry_case_amine_workstate2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_workstate::*)())&_qry_case_amine_workstate::ctor__qry_case_amine_workstate)
            },
            _hook_record {
                (LPVOID)0x1402d43a0L,
                (LPVOID *)&_qry_case_amine_workstatesize4_user,
                (LPVOID *)&_qry_case_amine_workstatesize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_workstatesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_workstate::*)())&_qry_case_amine_workstate::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
