#include <_qry_case_selfleave.hpp>


START_ATF_NAMESPACE
    int _qry_case_selfleave::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_selfleave*);
        return (org_ptr(0x1400ad1d0L))(this);
    };
END_ATF_NAMESPACE
