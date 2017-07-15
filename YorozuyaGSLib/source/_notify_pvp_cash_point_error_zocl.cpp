#include <_notify_pvp_cash_point_error_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_pvp_cash_point_error_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_pvp_cash_point_error_zocl*);
        return (org_ptr(0x1403f6e10L))(this);
    };
END_ATF_NAMESPACE
