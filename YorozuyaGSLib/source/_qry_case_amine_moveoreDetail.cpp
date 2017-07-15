#include <_qry_case_amine_moveoreDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_moveorector__qry_case_amine_moveore2_ptr _qry_case_amine_moveorector__qry_case_amine_moveore2_next(nullptr);
        Info::_qry_case_amine_moveorector__qry_case_amine_moveore2_clbk _qry_case_amine_moveorector__qry_case_amine_moveore2_user(nullptr);
        
        Info::_qry_case_amine_moveoresize4_ptr _qry_case_amine_moveoresize4_next(nullptr);
        Info::_qry_case_amine_moveoresize4_clbk _qry_case_amine_moveoresize4_user(nullptr);
        
        
        void _qry_case_amine_moveorector__qry_case_amine_moveore2_wrapper(struct _qry_case_amine_moveore* _this)
        {
           _qry_case_amine_moveorector__qry_case_amine_moveore2_user(_this, _qry_case_amine_moveorector__qry_case_amine_moveore2_next);
        };
        int _qry_case_amine_moveoresize4_wrapper(struct _qry_case_amine_moveore* _this)
        {
           return _qry_case_amine_moveoresize4_user(_this, _qry_case_amine_moveoresize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_moveore_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4350L,
                (LPVOID *)&_qry_case_amine_moveorector__qry_case_amine_moveore2_user,
                (LPVOID *)&_qry_case_amine_moveorector__qry_case_amine_moveore2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_moveorector__qry_case_amine_moveore2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_moveore::*)())&_qry_case_amine_moveore::ctor__qry_case_amine_moveore)
            },
            _hook_record {
                (LPVOID)0x1402d4370L,
                (LPVOID *)&_qry_case_amine_moveoresize4_user,
                (LPVOID *)&_qry_case_amine_moveoresize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_moveoresize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_moveore::*)())&_qry_case_amine_moveore::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
