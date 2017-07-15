#include <_storage_refresh_inform_zocl.hpp>


START_ATF_NAMESPACE
    _storage_refresh_inform_zocl::_storage_refresh_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _storage_refresh_inform_zocl*);
        (org_ptr(0x1400ef110L))(this);
    };
    void _storage_refresh_inform_zocl::ctor__storage_refresh_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _storage_refresh_inform_zocl*);
        (org_ptr(0x1400ef110L))(this);
    };
END_ATF_NAMESPACE
