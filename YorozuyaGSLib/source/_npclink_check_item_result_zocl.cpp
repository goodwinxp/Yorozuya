#include <_npclink_check_item_result_zocl.hpp>


START_ATF_NAMESPACE
    int _npclink_check_item_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _npclink_check_item_result_zocl*);
        return (org_ptr(0x1400f06a0L))(this);
    };
END_ATF_NAMESPACE
