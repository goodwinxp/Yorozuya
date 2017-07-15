#include <_qry_case_update_honor_guild.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_honor_guild::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_honor_guild*);
        return (org_ptr(0x140260540L))(this);
    };
END_ATF_NAMESPACE
