#include <_pt_result_change_tax_rate_zocl.hpp>


START_ATF_NAMESPACE
    int _pt_result_change_tax_rate_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_result_change_tax_rate_zocl*);
        return (org_ptr(0x1400f05b0L))(this);
    };
END_ATF_NAMESPACE
