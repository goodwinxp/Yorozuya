#include <_qry_case_insertitem.hpp>


START_ATF_NAMESPACE
    int _qry_case_insertitem::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_insertitem*);
        return (org_ptr(0x1401bf540L))(this);
    };
END_ATF_NAMESPACE
