#include <_qry_case_select_guild_master_lastconnDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_ptr _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_next(nullptr);
        Info::_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_clbk _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_user(nullptr);
        
        Info::_qry_case_select_guild_master_lastconnsize4_ptr _qry_case_select_guild_master_lastconnsize4_next(nullptr);
        Info::_qry_case_select_guild_master_lastconnsize4_clbk _qry_case_select_guild_master_lastconnsize4_user(nullptr);
        
        
        void _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_wrapper(struct _qry_case_select_guild_master_lastconn* _this)
        {
           _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_user(_this, _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_next);
        };
        int _qry_case_select_guild_master_lastconnsize4_wrapper(struct _qry_case_select_guild_master_lastconn* _this)
        {
           return _qry_case_select_guild_master_lastconnsize4_user(_this, _qry_case_select_guild_master_lastconnsize4_next);
        };
        
        ::std::array<hook_record, 2> _qry_case_select_guild_master_lastconn_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d680L,
                (LPVOID *)&_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_user,
                (LPVOID *)&_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_next,
                (LPVOID)cast_pointer_function(_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_wrapper),
                (LPVOID)cast_pointer_function((void(_qry_case_select_guild_master_lastconn::*)())&_qry_case_select_guild_master_lastconn::ctor__qry_case_select_guild_master_lastconn)
            },
            _hook_record {
                (LPVOID)0x14025d6a0L,
                (LPVOID *)&_qry_case_select_guild_master_lastconnsize4_user,
                (LPVOID *)&_qry_case_select_guild_master_lastconnsize4_next,
                (LPVOID)cast_pointer_function(_qry_case_select_guild_master_lastconnsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_select_guild_master_lastconn::*)())&_qry_case_select_guild_master_lastconn::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
