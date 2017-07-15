#include <_qry_case_in_atrade_taxDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_ptr _qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_next(nullptr);
        Info::_qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_clbk _qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_user(nullptr);
        
        Info::_qry_case_in_atrade_taxsize4_ptr _qry_case_in_atrade_taxsize4_next(nullptr);
        Info::_qry_case_in_atrade_taxsize4_clbk _qry_case_in_atrade_taxsize4_user(nullptr);
        
        
        void _qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_wrapper(struct _qry_case_in_atrade_tax* _this)
        {
           _qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_user(_this, _qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_next);
        };
        int _qry_case_in_atrade_taxsize4_wrapper(struct _qry_case_in_atrade_tax* _this)
        {
           return _qry_case_in_atrade_taxsize4_user(_this, _qry_case_in_atrade_taxsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_in_atrade_tax_functions = 
        {
            _hook_record {
                (LPVOID)0x1402605a0L,
                (LPVOID *)&_qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_user,
                (LPVOID *)&_qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_next,
                (LPVOID)cast_pointer_function(_qry_case_in_atrade_taxctor__qry_case_in_atrade_tax2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_in_atrade_tax::*)())&_qry_case_in_atrade_tax::ctor__qry_case_in_atrade_tax)
            },
            _hook_record {
                (LPVOID)0x140260620L,
                (LPVOID *)&_qry_case_in_atrade_taxsize4_user,
                (LPVOID *)&_qry_case_in_atrade_taxsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_in_atrade_taxsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_in_atrade_tax::*)())&_qry_case_in_atrade_tax::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
