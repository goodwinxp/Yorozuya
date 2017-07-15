#include <_exchange_lend_item_result_zocl.hpp>


START_ATF_NAMESPACE
    int _exchange_lend_item_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _exchange_lend_item_result_zocl*);
        return (org_ptr(0x1400ef270L))(this);
    };
END_ATF_NAMESPACE
