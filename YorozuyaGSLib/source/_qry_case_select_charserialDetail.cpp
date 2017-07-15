#include <_qry_case_select_charserialDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_select_charserialsize2_ptr _qry_case_select_charserialsize2_next(nullptr);
        Info::_qry_case_select_charserialsize2_clbk _qry_case_select_charserialsize2_user(nullptr);
        
        int _qry_case_select_charserialsize2_wrapper(struct _qry_case_select_charserial* _this)
        {
           return _qry_case_select_charserialsize2_user(_this, _qry_case_select_charserialsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_select_charserial_functions = 
        {
            _hook_record {
                (LPVOID)0x140102910L,
                (LPVOID *)&_qry_case_select_charserialsize2_user,
                (LPVOID *)&_qry_case_select_charserialsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_select_charserialsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_select_charserial::*)())&_qry_case_select_charserial::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
