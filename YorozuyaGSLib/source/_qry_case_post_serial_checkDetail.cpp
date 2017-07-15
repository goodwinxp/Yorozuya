#include <_qry_case_post_serial_checkDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_post_serial_checkctor__qry_case_post_serial_check2_ptr _qry_case_post_serial_checkctor__qry_case_post_serial_check2_next(nullptr);
        Info::_qry_case_post_serial_checkctor__qry_case_post_serial_check2_clbk _qry_case_post_serial_checkctor__qry_case_post_serial_check2_user(nullptr);
        
        Info::_qry_case_post_serial_checksize4_ptr _qry_case_post_serial_checksize4_next(nullptr);
        Info::_qry_case_post_serial_checksize4_clbk _qry_case_post_serial_checksize4_user(nullptr);
        
        
        void _qry_case_post_serial_checkctor__qry_case_post_serial_check2_wrapper(struct _qry_case_post_serial_check* _this)
        {
           _qry_case_post_serial_checkctor__qry_case_post_serial_check2_user(_this, _qry_case_post_serial_checkctor__qry_case_post_serial_check2_next);
        };
        int _qry_case_post_serial_checksize4_wrapper(struct _qry_case_post_serial_check* _this)
        {
           return _qry_case_post_serial_checksize4_user(_this, _qry_case_post_serial_checksize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_post_serial_check_functions = 
        {
            _hook_record {
                (LPVOID)0x140328240L,
                (LPVOID *)&_qry_case_post_serial_checkctor__qry_case_post_serial_check2_user,
                (LPVOID *)&_qry_case_post_serial_checkctor__qry_case_post_serial_check2_next,
                (LPVOID)cast_pointer_function(_qry_case_post_serial_checkctor__qry_case_post_serial_check2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_post_serial_check::*)())&_qry_case_post_serial_check::ctor__qry_case_post_serial_check)
            },
            _hook_record {
                (LPVOID)0x140328290L,
                (LPVOID *)&_qry_case_post_serial_checksize4_user,
                (LPVOID *)&_qry_case_post_serial_checksize4_next,
                (LPVOID)cast_pointer_function(_qry_case_post_serial_checksize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_post_serial_check::*)())&_qry_case_post_serial_check::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
