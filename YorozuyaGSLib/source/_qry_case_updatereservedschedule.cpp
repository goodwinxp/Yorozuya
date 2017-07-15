#include <_qry_case_updatereservedschedule.hpp>


START_ATF_NAMESPACE
    int _qry_case_updatereservedschedule::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_updatereservedschedule*);
        return (org_ptr(0x1403d0b30L))(this);
    };
END_ATF_NAMESPACE
