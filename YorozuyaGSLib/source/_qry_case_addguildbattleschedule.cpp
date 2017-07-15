#include <_qry_case_addguildbattleschedule.hpp>


START_ATF_NAMESPACE
    int _qry_case_addguildbattleschedule::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_addguildbattleschedule*);
        return (org_ptr(0x1403d93c0L))(this);
    };
END_ATF_NAMESPACE
