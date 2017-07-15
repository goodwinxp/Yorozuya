#include <_notify_remain_coupon_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_remain_coupon_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_remain_coupon_zocl*);
        return (org_ptr(0x1403fea20L))(this);
    };
END_ATF_NAMESPACE
