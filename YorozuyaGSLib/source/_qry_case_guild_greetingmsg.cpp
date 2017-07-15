#include <_qry_case_guild_greetingmsg.hpp>


START_ATF_NAMESPACE
    int _qry_case_guild_greetingmsg::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_guild_greetingmsg*);
        return (org_ptr(0x14025d620L))(this);
    };
END_ATF_NAMESPACE
