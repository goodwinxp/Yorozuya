#include <_qry_case_amine_seloreDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_selorector__qry_case_amine_selore2_ptr _qry_case_amine_selorector__qry_case_amine_selore2_next(nullptr);
        Info::_qry_case_amine_selorector__qry_case_amine_selore2_clbk _qry_case_amine_selorector__qry_case_amine_selore2_user(nullptr);
        
        Info::_qry_case_amine_seloresize4_ptr _qry_case_amine_seloresize4_next(nullptr);
        Info::_qry_case_amine_seloresize4_clbk _qry_case_amine_seloresize4_user(nullptr);
        
        
        void _qry_case_amine_selorector__qry_case_amine_selore2_wrapper(struct _qry_case_amine_selore* _this)
        {
           _qry_case_amine_selorector__qry_case_amine_selore2_user(_this, _qry_case_amine_selorector__qry_case_amine_selore2_next);
        };
        int _qry_case_amine_seloresize4_wrapper(struct _qry_case_amine_selore* _this)
        {
           return _qry_case_amine_seloresize4_user(_this, _qry_case_amine_seloresize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_selore_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d43b0L,
                (LPVOID *)&_qry_case_amine_selorector__qry_case_amine_selore2_user,
                (LPVOID *)&_qry_case_amine_selorector__qry_case_amine_selore2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_selorector__qry_case_amine_selore2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_selore::*)())&_qry_case_amine_selore::ctor__qry_case_amine_selore)
            },
            _hook_record {
                (LPVOID)0x1402d43d0L,
                (LPVOID *)&_qry_case_amine_seloresize4_user,
                (LPVOID *)&_qry_case_amine_seloresize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_seloresize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_selore::*)())&_qry_case_amine_selore::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
