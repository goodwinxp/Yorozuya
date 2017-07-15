#include <_qry_case_outputgmoney.hpp>


START_ATF_NAMESPACE
    int _qry_case_outputgmoney::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_outputgmoney*);
        return (org_ptr(0x1400ad4c0L))(this);
    };
END_ATF_NAMESPACE
