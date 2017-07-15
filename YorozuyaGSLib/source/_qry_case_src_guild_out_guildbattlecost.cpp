#include <_qry_case_src_guild_out_guildbattlecost.hpp>


START_ATF_NAMESPACE
    int _qry_case_src_guild_out_guildbattlecost::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_src_guild_out_guildbattlecost*);
        return (org_ptr(0x14025d5c0L))(this);
    };
END_ATF_NAMESPACE
