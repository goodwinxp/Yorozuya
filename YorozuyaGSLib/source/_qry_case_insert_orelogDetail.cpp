#include <_qry_case_insert_orelogDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_insert_orelogctor__qry_case_insert_orelog2_ptr _qry_case_insert_orelogctor__qry_case_insert_orelog2_next(nullptr);
        Info::_qry_case_insert_orelogctor__qry_case_insert_orelog2_clbk _qry_case_insert_orelogctor__qry_case_insert_orelog2_user(nullptr);
        
        
        void _qry_case_insert_orelogctor__qry_case_insert_orelog2_wrapper(struct _qry_case_insert_orelog* _this)
        {
           _qry_case_insert_orelogctor__qry_case_insert_orelog2_user(_this, _qry_case_insert_orelogctor__qry_case_insert_orelog2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_insert_orelog_functions = 
        {
            _hook_record {
                (LPVOID)0x1403fa190L,
                (LPVOID *)&_qry_case_insert_orelogctor__qry_case_insert_orelog2_user,
                (LPVOID *)&_qry_case_insert_orelogctor__qry_case_insert_orelog2_next,
                (LPVOID)cast_pointer_function(_qry_case_insert_orelogctor__qry_case_insert_orelog2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_insert_orelog::*)())&_qry_case_insert_orelog::ctor__qry_case_insert_orelog)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
