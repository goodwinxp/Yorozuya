#include <_unmannedtrader_close_item_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _unmannedtrader_close_item_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _unmannedtrader_close_item_inform_zocl*);
        return (org_ptr(0x14035fd70L))(this);
    };
END_ATF_NAMESPACE
