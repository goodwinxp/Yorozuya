#include <_qry_case_unmandtrader_updateitemstate.hpp>


START_ATF_NAMESPACE
    int _qry_case_unmandtrader_updateitemstate::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_unmandtrader_updateitemstate*);
        return (org_ptr(0x140351d90L))(this);
    };
END_ATF_NAMESPACE
