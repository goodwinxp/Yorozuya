#include <_qry_case_lobby_logoutDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_lobby_logoutctor__qry_case_lobby_logout2_ptr _qry_case_lobby_logoutctor__qry_case_lobby_logout2_next(nullptr);
        Info::_qry_case_lobby_logoutctor__qry_case_lobby_logout2_clbk _qry_case_lobby_logoutctor__qry_case_lobby_logout2_user(nullptr);
        
        Info::_qry_case_lobby_logoutinit4_ptr _qry_case_lobby_logoutinit4_next(nullptr);
        Info::_qry_case_lobby_logoutinit4_clbk _qry_case_lobby_logoutinit4_user(nullptr);
        
        Info::_qry_case_lobby_logoutsize6_ptr _qry_case_lobby_logoutsize6_next(nullptr);
        Info::_qry_case_lobby_logoutsize6_clbk _qry_case_lobby_logoutsize6_user(nullptr);
        
        
        void _qry_case_lobby_logoutctor__qry_case_lobby_logout2_wrapper(struct _qry_case_lobby_logout* _this)
        {
           _qry_case_lobby_logoutctor__qry_case_lobby_logout2_user(_this, _qry_case_lobby_logoutctor__qry_case_lobby_logout2_next);
        };
        void _qry_case_lobby_logoutinit4_wrapper(struct _qry_case_lobby_logout* _this)
        {
           _qry_case_lobby_logoutinit4_user(_this, _qry_case_lobby_logoutinit4_next);
        };
        int _qry_case_lobby_logoutsize6_wrapper(struct _qry_case_lobby_logout* _this)
        {
           return _qry_case_lobby_logoutsize6_user(_this, _qry_case_lobby_logoutsize6_next);
        };
        
        ::std::array<hook_record, 3> _qry_case_lobby_logout_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f290L,
                (LPVOID *)&_qry_case_lobby_logoutctor__qry_case_lobby_logout2_user,
                (LPVOID *)&_qry_case_lobby_logoutctor__qry_case_lobby_logout2_next,
                (LPVOID)cast_pointer_function(_qry_case_lobby_logoutctor__qry_case_lobby_logout2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_lobby_logout::*)())&_qry_case_lobby_logout::ctor__qry_case_lobby_logout)
            },
            _hook_record {
                (LPVOID)0x14011f2e0L,
                (LPVOID *)&_qry_case_lobby_logoutinit4_user,
                (LPVOID *)&_qry_case_lobby_logoutinit4_next,
                (LPVOID)cast_pointer_function(_qry_case_lobby_logoutinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_lobby_logout::*)())&_qry_case_lobby_logout::init)
            },
            _hook_record {
                (LPVOID)0x14011f390L,
                (LPVOID *)&_qry_case_lobby_logoutsize6_user,
                (LPVOID *)&_qry_case_lobby_logoutsize6_next,
                (LPVOID)cast_pointer_function(_qry_case_lobby_logoutsize6_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_lobby_logout::*)())&_qry_case_lobby_logout::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
