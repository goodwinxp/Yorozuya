#include <_notify_not_use_premium_cashitem_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_not_use_premium_cashitem_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_not_use_premium_cashitem_zocl*);
        return (org_ptr(0x1400f0850L))(this);
    };
END_ATF_NAMESPACE
