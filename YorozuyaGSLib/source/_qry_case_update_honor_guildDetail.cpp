#include <_qry_case_update_honor_guildDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_update_honor_guildsize2_ptr _qry_case_update_honor_guildsize2_next(nullptr);
        Info::_qry_case_update_honor_guildsize2_clbk _qry_case_update_honor_guildsize2_user(nullptr);
        
        int _qry_case_update_honor_guildsize2_wrapper(struct _qry_case_update_honor_guild* _this)
        {
           return _qry_case_update_honor_guildsize2_user(_this, _qry_case_update_honor_guildsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_honor_guild_functions = 
        {
            _hook_record {
                (LPVOID)0x140260540L,
                (LPVOID *)&_qry_case_update_honor_guildsize2_user,
                (LPVOID *)&_qry_case_update_honor_guildsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_honor_guildsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_honor_guild::*)())&_qry_case_update_honor_guild::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
