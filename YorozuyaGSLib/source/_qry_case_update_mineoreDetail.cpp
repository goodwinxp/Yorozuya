#include <_qry_case_update_mineoreDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_update_mineorector__qry_case_update_mineore2_ptr _qry_case_update_mineorector__qry_case_update_mineore2_next(nullptr);
        Info::_qry_case_update_mineorector__qry_case_update_mineore2_clbk _qry_case_update_mineorector__qry_case_update_mineore2_user(nullptr);
        
        
        void _qry_case_update_mineorector__qry_case_update_mineore2_wrapper(struct _qry_case_update_mineore* _this)
        {
           _qry_case_update_mineorector__qry_case_update_mineore2_user(_this, _qry_case_update_mineorector__qry_case_update_mineore2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_mineore_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ddbb0L,
                (LPVOID *)&_qry_case_update_mineorector__qry_case_update_mineore2_user,
                (LPVOID *)&_qry_case_update_mineorector__qry_case_update_mineore2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_mineorector__qry_case_update_mineore2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_update_mineore::*)())&_qry_case_update_mineore::ctor__qry_case_update_mineore)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
