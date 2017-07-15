#include <_itembox_take_new_result_zocl.hpp>


START_ATF_NAMESPACE
    int _itembox_take_new_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _itembox_take_new_result_zocl*);
        return (org_ptr(0x1400ef0b0L))(this);
    };
END_ATF_NAMESPACE
