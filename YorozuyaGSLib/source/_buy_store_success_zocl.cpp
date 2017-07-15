#include <_buy_store_success_zocl.hpp>


START_ATF_NAMESPACE
    _buy_store_success_zocl::_buy_store_success_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _buy_store_success_zocl*);
        (org_ptr(0x1400ef130L))(this);
    };
    void _buy_store_success_zocl::ctor__buy_store_success_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _buy_store_success_zocl*);
        (org_ptr(0x1400ef130L))(this);
    };
    int _buy_store_success_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _buy_store_success_zocl*);
        return (org_ptr(0x1400ef150L))(this);
    };
    
END_ATF_NAMESPACE
