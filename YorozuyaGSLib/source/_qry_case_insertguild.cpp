#include <_qry_case_insertguild.hpp>


START_ATF_NAMESPACE
    int _qry_case_insertguild::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_insertguild*);
        return (org_ptr(0x1400ad0c0L))(this);
    };
END_ATF_NAMESPACE
