#include <_qry_case_disjointguild.hpp>


START_ATF_NAMESPACE
    int _qry_case_disjointguild::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_disjointguild*);
        return (org_ptr(0x1400ad420L))(this);
    };
END_ATF_NAMESPACE
