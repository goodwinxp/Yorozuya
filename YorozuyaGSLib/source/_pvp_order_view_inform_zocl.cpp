#include <_pvp_order_view_inform_zocl.hpp>


START_ATF_NAMESPACE
    _pvp_order_view_inform_zocl::_pvp_order_view_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pvp_order_view_inform_zocl*);
        (org_ptr(0x1403f85d0L))(this);
    };
    void _pvp_order_view_inform_zocl::ctor__pvp_order_view_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pvp_order_view_inform_zocl*);
        (org_ptr(0x1403f85d0L))(this);
    };
    int _pvp_order_view_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pvp_order_view_inform_zocl*);
        return (org_ptr(0x1403f8620L))(this);
    };
END_ATF_NAMESPACE
