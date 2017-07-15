#include <_add_lend_item_result_zocl.hpp>


START_ATF_NAMESPACE
    int _add_lend_item_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _add_lend_item_result_zocl*);
        return (org_ptr(0x1403fea30L))(this);
    };
END_ATF_NAMESPACE
