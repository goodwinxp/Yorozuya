#include <_qry_case_amine_mineoreDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_mineorector__qry_case_amine_mineore2_ptr _qry_case_amine_mineorector__qry_case_amine_mineore2_next(nullptr);
        Info::_qry_case_amine_mineorector__qry_case_amine_mineore2_clbk _qry_case_amine_mineorector__qry_case_amine_mineore2_user(nullptr);
        
        Info::_qry_case_amine_mineoresize4_ptr _qry_case_amine_mineoresize4_next(nullptr);
        Info::_qry_case_amine_mineoresize4_clbk _qry_case_amine_mineoresize4_user(nullptr);
        
        
        void _qry_case_amine_mineorector__qry_case_amine_mineore2_wrapper(struct _qry_case_amine_mineore* _this)
        {
           _qry_case_amine_mineorector__qry_case_amine_mineore2_user(_this, _qry_case_amine_mineorector__qry_case_amine_mineore2_next);
        };
        int _qry_case_amine_mineoresize4_wrapper(struct _qry_case_amine_mineore* _this)
        {
           return _qry_case_amine_mineoresize4_user(_this, _qry_case_amine_mineoresize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_mineore_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4320L,
                (LPVOID *)&_qry_case_amine_mineorector__qry_case_amine_mineore2_user,
                (LPVOID *)&_qry_case_amine_mineorector__qry_case_amine_mineore2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_mineorector__qry_case_amine_mineore2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_mineore::*)())&_qry_case_amine_mineore::ctor__qry_case_amine_mineore)
            },
            _hook_record {
                (LPVOID)0x1402d4340L,
                (LPVOID *)&_qry_case_amine_mineoresize4_user,
                (LPVOID *)&_qry_case_amine_mineoresize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_mineoresize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_mineore::*)())&_qry_case_amine_mineore::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
