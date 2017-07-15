#include <_qry_case_guild_greetingmsgDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_guild_greetingmsgsize2_ptr _qry_case_guild_greetingmsgsize2_next(nullptr);
        Info::_qry_case_guild_greetingmsgsize2_clbk _qry_case_guild_greetingmsgsize2_user(nullptr);
        
        int _qry_case_guild_greetingmsgsize2_wrapper(struct _qry_case_guild_greetingmsg* _this)
        {
           return _qry_case_guild_greetingmsgsize2_user(_this, _qry_case_guild_greetingmsgsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_guild_greetingmsg_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d620L,
                (LPVOID *)&_qry_case_guild_greetingmsgsize2_user,
                (LPVOID *)&_qry_case_guild_greetingmsgsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_guild_greetingmsgsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_guild_greetingmsg::*)())&_qry_case_guild_greetingmsg::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
