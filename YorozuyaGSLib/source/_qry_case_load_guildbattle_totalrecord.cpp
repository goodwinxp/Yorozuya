#include <_qry_case_load_guildbattle_totalrecord.hpp>


START_ATF_NAMESPACE
    int _qry_case_load_guildbattle_totalrecord::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_load_guildbattle_totalrecord*);
        return (org_ptr(0x140207590L))(this);
    };
END_ATF_NAMESPACE
