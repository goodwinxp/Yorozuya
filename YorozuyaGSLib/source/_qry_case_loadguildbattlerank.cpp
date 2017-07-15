#include <_qry_case_loadguildbattlerank.hpp>


START_ATF_NAMESPACE
    int _qry_case_loadguildbattlerank::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_loadguildbattlerank*);
        return (org_ptr(0x140207580L))(this);
    };
END_ATF_NAMESPACE
