#include <_qry_case_update_data_for_post_sendDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_ptr _qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_next(nullptr);
        Info::_qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_clbk _qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_user(nullptr);
        
        Info::_qry_case_update_data_for_post_sendsize4_ptr _qry_case_update_data_for_post_sendsize4_next(nullptr);
        Info::_qry_case_update_data_for_post_sendsize4_clbk _qry_case_update_data_for_post_sendsize4_user(nullptr);
        
        
        void _qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_wrapper(struct _qry_case_update_data_for_post_send* _this)
        {
           _qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_user(_this, _qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_next);
        };
        int _qry_case_update_data_for_post_sendsize4_wrapper(struct _qry_case_update_data_for_post_send* _this)
        {
           return _qry_case_update_data_for_post_sendsize4_user(_this, _qry_case_update_data_for_post_sendsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_update_data_for_post_send_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ca7e0L,
                (LPVOID *)&_qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_user,
                (LPVOID *)&_qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_data_for_post_sendctor__qry_case_update_data_for_post_send2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_update_data_for_post_send::*)())&_qry_case_update_data_for_post_send::ctor__qry_case_update_data_for_post_send)
            },
            _hook_record {
                (LPVOID)0x1400ca7d0L,
                (LPVOID *)&_qry_case_update_data_for_post_sendsize4_user,
                (LPVOID *)&_qry_case_update_data_for_post_sendsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_update_data_for_post_sendsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_data_for_post_send::*)())&_qry_case_update_data_for_post_send::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
