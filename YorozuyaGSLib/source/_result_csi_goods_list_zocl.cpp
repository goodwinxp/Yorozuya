#include <_result_csi_goods_list_zocl.hpp>


START_ATF_NAMESPACE
    int _result_csi_goods_list_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _result_csi_goods_list_zocl*);
        return (org_ptr(0x140304dd0L))(this);
    };
END_ATF_NAMESPACE
