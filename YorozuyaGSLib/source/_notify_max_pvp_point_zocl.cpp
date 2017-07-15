#include <_notify_max_pvp_point_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_max_pvp_point_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_max_pvp_point_zocl*);
        return (org_ptr(0x1400f0840L))(this);
    };
END_ATF_NAMESPACE
