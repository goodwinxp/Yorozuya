#include <_qry_case_addpvppoint.hpp>


START_ATF_NAMESPACE
    int _qry_case_addpvppoint::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_addpvppoint*);
        return (org_ptr(0x1401413f0L))(this);
    };
END_ATF_NAMESPACE
