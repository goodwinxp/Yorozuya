#include <_qry_case_update_server_reset_tokenDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_update_server_reset_tokensize2_ptr _qry_case_update_server_reset_tokensize2_next(nullptr);
        Info::_qry_case_update_server_reset_tokensize2_clbk _qry_case_update_server_reset_tokensize2_user(nullptr);
        
        int _qry_case_update_server_reset_tokensize2_wrapper(struct _qry_case_update_server_reset_token* _this)
        {
           return _qry_case_update_server_reset_tokensize2_user(_this, _qry_case_update_server_reset_tokensize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_server_reset_token_functions = 
        {
            _hook_record {
                (LPVOID)0x140208260L,
                (LPVOID *)&_qry_case_update_server_reset_tokensize2_user,
                (LPVOID *)&_qry_case_update_server_reset_tokensize2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_server_reset_tokensize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_server_reset_token::*)())&_qry_case_update_server_reset_token::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
