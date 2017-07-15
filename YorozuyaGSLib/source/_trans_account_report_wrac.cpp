#include <_trans_account_report_wrac.hpp>


START_ATF_NAMESPACE
    int _trans_account_report_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _trans_account_report_wrac*);
        return (org_ptr(0x140207e00L))(this);
    };
END_ATF_NAMESPACE
