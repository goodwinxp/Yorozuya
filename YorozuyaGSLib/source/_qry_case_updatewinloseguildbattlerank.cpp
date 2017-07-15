#include <_qry_case_updatewinloseguildbattlerank.hpp>


START_ATF_NAMESPACE
    int _qry_case_updatewinloseguildbattlerank::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_updatewinloseguildbattlerank*);
        return (org_ptr(0x1403eb3e0L))(this);
    };
END_ATF_NAMESPACE
