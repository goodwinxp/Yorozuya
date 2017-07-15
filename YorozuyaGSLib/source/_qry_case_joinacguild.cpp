#include <_qry_case_joinacguild.hpp>


START_ATF_NAMESPACE
    int _qry_case_joinacguild::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_joinacguild*);
        return (org_ptr(0x1400ad170L))(this);
    };
END_ATF_NAMESPACE
