#include <_qry_sheet_lobbyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_sheet_lobbyctor__qry_sheet_lobby2_ptr _qry_sheet_lobbyctor__qry_sheet_lobby2_next(nullptr);
        Info::_qry_sheet_lobbyctor__qry_sheet_lobby2_clbk _qry_sheet_lobbyctor__qry_sheet_lobby2_user(nullptr);
        
        Info::_qry_sheet_lobbysize4_ptr _qry_sheet_lobbysize4_next(nullptr);
        Info::_qry_sheet_lobbysize4_clbk _qry_sheet_lobbysize4_user(nullptr);
        
        
        Info::_qry_sheet_lobbydtor__qry_sheet_lobby6_ptr _qry_sheet_lobbydtor__qry_sheet_lobby6_next(nullptr);
        Info::_qry_sheet_lobbydtor__qry_sheet_lobby6_clbk _qry_sheet_lobbydtor__qry_sheet_lobby6_user(nullptr);
        
        
        void _qry_sheet_lobbyctor__qry_sheet_lobby2_wrapper(struct _qry_sheet_lobby* _this)
        {
           _qry_sheet_lobbyctor__qry_sheet_lobby2_user(_this, _qry_sheet_lobbyctor__qry_sheet_lobby2_next);
        };
        int _qry_sheet_lobbysize4_wrapper(struct _qry_sheet_lobby* _this)
        {
           return _qry_sheet_lobbysize4_user(_this, _qry_sheet_lobbysize4_next);
        };
        
        void _qry_sheet_lobbydtor__qry_sheet_lobby6_wrapper(struct _qry_sheet_lobby* _this)
        {
           _qry_sheet_lobbydtor__qry_sheet_lobby6_user(_this, _qry_sheet_lobbydtor__qry_sheet_lobby6_next);
        };
        
        ::std::array<hook_record, 3> _qry_sheet_lobby_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fa40L,
                (LPVOID *)&_qry_sheet_lobbyctor__qry_sheet_lobby2_user,
                (LPVOID *)&_qry_sheet_lobbyctor__qry_sheet_lobby2_next,
                (LPVOID)cast_pointer_function(_qry_sheet_lobbyctor__qry_sheet_lobby2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_lobby::*)())&_qry_sheet_lobby::ctor__qry_sheet_lobby)
            },
            _hook_record {
                (LPVOID)0x14011fa30L,
                (LPVOID *)&_qry_sheet_lobbysize4_user,
                (LPVOID *)&_qry_sheet_lobbysize4_next,
                (LPVOID)cast_pointer_function(_qry_sheet_lobbysize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_sheet_lobby::*)())&_qry_sheet_lobby::size)
            },
            _hook_record {
                (LPVOID)0x14011faf0L,
                (LPVOID *)&_qry_sheet_lobbydtor__qry_sheet_lobby6_user,
                (LPVOID *)&_qry_sheet_lobbydtor__qry_sheet_lobby6_next,
                (LPVOID)cast_pointer_function(_qry_sheet_lobbydtor__qry_sheet_lobby6_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_sheet_lobby::*)())&_qry_sheet_lobby::dtor__qry_sheet_lobby)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
