#include <_qry_case_update_guildmasterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_update_guildmastersize2_ptr _qry_case_update_guildmastersize2_next(nullptr);
        Info::_qry_case_update_guildmastersize2_clbk _qry_case_update_guildmastersize2_user(nullptr);
        
        int _qry_case_update_guildmastersize2_wrapper(struct _qry_case_update_guildmaster* _this)
        {
           return _qry_case_update_guildmastersize2_user(_this, _qry_case_update_guildmastersize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_update_guildmaster_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d220L,
                (LPVOID *)&_qry_case_update_guildmastersize2_user,
                (LPVOID *)&_qry_case_update_guildmastersize2_next,
                (LPVOID)cast_pointer_function(_qry_case_update_guildmastersize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_update_guildmaster::*)())&_qry_case_update_guildmaster::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
