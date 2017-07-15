#include <_qry_case_updatedrawguildbattlerank.hpp>


START_ATF_NAMESPACE
    int _qry_case_updatedrawguildbattlerank::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_updatedrawguildbattlerank*);
        return (org_ptr(0x1403eb3d0L))(this);
    };
END_ATF_NAMESPACE
