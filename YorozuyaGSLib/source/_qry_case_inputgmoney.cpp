#include <_qry_case_inputgmoney.hpp>


START_ATF_NAMESPACE
    int _qry_case_inputgmoney::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_inputgmoney*);
        return (org_ptr(0x1400ad290L))(this);
    };
END_ATF_NAMESPACE
