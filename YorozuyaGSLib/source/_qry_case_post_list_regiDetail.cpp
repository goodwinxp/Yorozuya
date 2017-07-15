#include <_qry_case_post_list_regiDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_post_list_regictor__qry_case_post_list_regi2_ptr _qry_case_post_list_regictor__qry_case_post_list_regi2_next(nullptr);
        Info::_qry_case_post_list_regictor__qry_case_post_list_regi2_clbk _qry_case_post_list_regictor__qry_case_post_list_regi2_user(nullptr);
        
        Info::_qry_case_post_list_regisize4_ptr _qry_case_post_list_regisize4_next(nullptr);
        Info::_qry_case_post_list_regisize4_clbk _qry_case_post_list_regisize4_user(nullptr);
        
        
        void _qry_case_post_list_regictor__qry_case_post_list_regi2_wrapper(struct _qry_case_post_list_regi* _this)
        {
           _qry_case_post_list_regictor__qry_case_post_list_regi2_user(_this, _qry_case_post_list_regictor__qry_case_post_list_regi2_next);
        };
        int _qry_case_post_list_regisize4_wrapper(struct _qry_case_post_list_regi* _this)
        {
           return _qry_case_post_list_regisize4_user(_this, _qry_case_post_list_regisize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_post_list_regi_functions = 
        {
            _hook_record {
                (LPVOID)0x140328150L,
                (LPVOID *)&_qry_case_post_list_regictor__qry_case_post_list_regi2_user,
                (LPVOID *)&_qry_case_post_list_regictor__qry_case_post_list_regi2_next,
                (LPVOID)cast_pointer_function(_qry_case_post_list_regictor__qry_case_post_list_regi2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_post_list_regi::*)())&_qry_case_post_list_regi::ctor__qry_case_post_list_regi)
            },
            _hook_record {
                (LPVOID)0x1403281d0L,
                (LPVOID *)&_qry_case_post_list_regisize4_user,
                (LPVOID *)&_qry_case_post_list_regisize4_next,
                (LPVOID)cast_pointer_function(_qry_case_post_list_regisize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_post_list_regi::*)())&_qry_case_post_list_regi::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
