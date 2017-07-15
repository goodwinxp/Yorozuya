#include <_pt_inform_commission_income_zocl.hpp>


START_ATF_NAMESPACE
    int _pt_inform_commission_income_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_inform_commission_income_zocl*);
        return (org_ptr(0x1400f05c0L))(this);
    };
END_ATF_NAMESPACE
