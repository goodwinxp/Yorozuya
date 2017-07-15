#include <_qry_case_select_patriarch_commDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_ptr _qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_next(nullptr);
        Info::_qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_clbk _qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_user(nullptr);
        
        Info::_qry_case_select_patriarch_commsize4_ptr _qry_case_select_patriarch_commsize4_next(nullptr);
        Info::_qry_case_select_patriarch_commsize4_clbk _qry_case_select_patriarch_commsize4_user(nullptr);
        
        
        void _qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_wrapper(struct _qry_case_select_patriarch_comm* _this)
        {
           _qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_user(_this, _qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_next);
        };
        int _qry_case_select_patriarch_commsize4_wrapper(struct _qry_case_select_patriarch_comm* _this)
        {
           return _qry_case_select_patriarch_commsize4_user(_this, _qry_case_select_patriarch_commsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_select_patriarch_comm_functions = 
        {
            _hook_record {
                (LPVOID)0x140079a00L,
                (LPVOID *)&_qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_user,
                (LPVOID *)&_qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_next,
                (LPVOID)cast_pointer_function(_qry_case_select_patriarch_commctor__qry_case_select_patriarch_comm2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_select_patriarch_comm::*)())&_qry_case_select_patriarch_comm::ctor__qry_case_select_patriarch_comm)
            },
            _hook_record {
                (LPVOID)0x140079a50L,
                (LPVOID *)&_qry_case_select_patriarch_commsize4_user,
                (LPVOID *)&_qry_case_select_patriarch_commsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_select_patriarch_commsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_select_patriarch_comm::*)())&_qry_case_select_patriarch_comm::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
