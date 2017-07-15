#include <_qry_case_alive_charDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_alive_charctor__qry_case_alive_char2_ptr _qry_case_alive_charctor__qry_case_alive_char2_next(nullptr);
        Info::_qry_case_alive_charctor__qry_case_alive_char2_clbk _qry_case_alive_charctor__qry_case_alive_char2_user(nullptr);
        
        Info::_qry_case_alive_charsize4_ptr _qry_case_alive_charsize4_next(nullptr);
        Info::_qry_case_alive_charsize4_clbk _qry_case_alive_charsize4_user(nullptr);
        
        
        void _qry_case_alive_charctor__qry_case_alive_char2_wrapper(struct _qry_case_alive_char* _this)
        {
           _qry_case_alive_charctor__qry_case_alive_char2_user(_this, _qry_case_alive_charctor__qry_case_alive_char2_next);
        };
        int _qry_case_alive_charsize4_wrapper(struct _qry_case_alive_char* _this)
        {
           return _qry_case_alive_charsize4_user(_this, _qry_case_alive_charsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_alive_char_functions = 
        {
            _hook_record {
                (LPVOID)0x140120d80L,
                (LPVOID *)&_qry_case_alive_charctor__qry_case_alive_char2_user,
                (LPVOID *)&_qry_case_alive_charctor__qry_case_alive_char2_next,
                (LPVOID)cast_pointer_function(_qry_case_alive_charctor__qry_case_alive_char2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_alive_char::*)())&_qry_case_alive_char::ctor__qry_case_alive_char)
            },
            _hook_record {
                (LPVOID)0x140120d70L,
                (LPVOID *)&_qry_case_alive_charsize4_user,
                (LPVOID *)&_qry_case_alive_charsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_alive_charsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_alive_char::*)())&_qry_case_alive_char::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
