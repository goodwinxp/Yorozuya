#include <_limit_item_num_info_zocl.hpp>


START_ATF_NAMESPACE
    _limit_item_num_info_zocl::_limit_item_num_info_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_num_info_zocl*);
        (org_ptr(0x1400ef1b0L))(this);
    };
    void _limit_item_num_info_zocl::ctor__limit_item_num_info_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_num_info_zocl*);
        (org_ptr(0x1400ef1b0L))(this);
    };
    int _limit_item_num_info_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _limit_item_num_info_zocl*);
        return (org_ptr(0x1400ef200L))(this);
    };
    
END_ATF_NAMESPACE
