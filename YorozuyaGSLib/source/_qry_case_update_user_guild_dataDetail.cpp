#include <_qry_case_update_user_guild_dataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_update_user_guild_datasize2_ptr _qry_case_update_user_guild_datasize2_next(nullptr);
        Info::_qry_case_update_user_guild_datasize2_clbk _qry_case_update_user_guild_datasize2_user(nullptr);
        
        int _qry_case_update_user_guild_datasize2_wrapper(struct _qry_case_update_user_guild_data* _this)
        {
           return _qry_case_update_user_guild_datasize2_user(_this, _qry_case_update_user_guild_datasize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_user_guild_data_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d670L,
                (LPVOID *)&_qry_case_update_user_guild_datasize2_user,
                (LPVOID *)&_qry_case_update_user_guild_datasize2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_user_guild_datasize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_user_guild_data::*)())&_qry_case_update_user_guild_data::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
