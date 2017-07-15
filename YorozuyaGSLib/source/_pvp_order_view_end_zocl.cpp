#include <_pvp_order_view_end_zocl.hpp>


START_ATF_NAMESPACE
    int _pvp_order_view_end_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pvp_order_view_end_zocl*);
        return (org_ptr(0x1403f8690L))(this);
    };
END_ATF_NAMESPACE
