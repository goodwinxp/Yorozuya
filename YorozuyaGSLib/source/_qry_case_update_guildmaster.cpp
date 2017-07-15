#include <_qry_case_update_guildmaster.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_guildmaster::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_guildmaster*);
        return (org_ptr(0x14025d220L))(this);
    };
END_ATF_NAMESPACE
