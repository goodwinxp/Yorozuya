#include <_notify_coupon_error_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_coupon_error_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_coupon_error_zocl*);
        return (org_ptr(0x1403fea10L))(this);
    };
END_ATF_NAMESPACE
