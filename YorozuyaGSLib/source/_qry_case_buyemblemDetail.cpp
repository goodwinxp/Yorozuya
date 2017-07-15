#include <_qry_case_buyemblemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_buyemblemsize2_ptr _qry_case_buyemblemsize2_next(nullptr);
        Info::_qry_case_buyemblemsize2_clbk _qry_case_buyemblemsize2_user(nullptr);
        
        int _qry_case_buyemblemsize2_wrapper(struct _qry_case_buyemblem* _this)
        {
           return _qry_case_buyemblemsize2_user(_this, _qry_case_buyemblemsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_buyemblem_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d660L,
                (LPVOID *)&_qry_case_buyemblemsize2_user,
                (LPVOID *)&_qry_case_buyemblemsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_buyemblemsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_buyemblem::*)())&_qry_case_buyemblem::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
