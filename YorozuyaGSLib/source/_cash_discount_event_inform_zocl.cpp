#include <_cash_discount_event_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _cash_discount_event_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _cash_discount_event_inform_zocl*);
        return (org_ptr(0x14030d700L))(this);
    };
END_ATF_NAMESPACE
