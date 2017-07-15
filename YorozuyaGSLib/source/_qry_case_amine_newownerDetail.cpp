#include <_qry_case_amine_newownerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_amine_newownerctor__qry_case_amine_newowner2_ptr _qry_case_amine_newownerctor__qry_case_amine_newowner2_next(nullptr);
        Info::_qry_case_amine_newownerctor__qry_case_amine_newowner2_clbk _qry_case_amine_newownerctor__qry_case_amine_newowner2_user(nullptr);
        
        Info::_qry_case_amine_newownersize4_ptr _qry_case_amine_newownersize4_next(nullptr);
        Info::_qry_case_amine_newownersize4_clbk _qry_case_amine_newownersize4_user(nullptr);
        
        
        void _qry_case_amine_newownerctor__qry_case_amine_newowner2_wrapper(struct _qry_case_amine_newowner* _this)
        {
           _qry_case_amine_newownerctor__qry_case_amine_newowner2_user(_this, _qry_case_amine_newownerctor__qry_case_amine_newowner2_next);
        };
        int _qry_case_amine_newownersize4_wrapper(struct _qry_case_amine_newowner* _this)
        {
           return _qry_case_amine_newownersize4_user(_this, _qry_case_amine_newownersize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_amine_newowner_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d41d0L,
                (LPVOID *)&_qry_case_amine_newownerctor__qry_case_amine_newowner2_user,
                (LPVOID *)&_qry_case_amine_newownerctor__qry_case_amine_newowner2_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_newownerctor__qry_case_amine_newowner2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_amine_newowner::*)())&_qry_case_amine_newowner::ctor__qry_case_amine_newowner)
            },
            _hook_record {
                (LPVOID)0x1402d41f0L,
                (LPVOID *)&_qry_case_amine_newownersize4_user,
                (LPVOID *)&_qry_case_amine_newownersize4_next,
                (LPVOID)cast_pointer_function(_qry_case_amine_newownersize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_amine_newowner::*)())&_qry_case_amine_newowner::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
