#include <_combine_lend_item_result_zocl.hpp>


START_ATF_NAMESPACE
    int _combine_lend_item_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _combine_lend_item_result_zocl*);
        return (org_ptr(0x1400ef260L))(this);
    };
    
END_ATF_NAMESPACE
