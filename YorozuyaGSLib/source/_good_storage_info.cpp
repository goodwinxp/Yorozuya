#include <_good_storage_info.hpp>


START_ATF_NAMESPACE
    _good_storage_info::_good_storage_info()
    {
        using org_ptr = void (WINAPIV*)(struct _good_storage_info*);
        (org_ptr(0x140263710L))(this);
    };
    void _good_storage_info::ctor__good_storage_info()
    {
        using org_ptr = void (WINAPIV*)(struct _good_storage_info*);
        (org_ptr(0x140263710L))(this);
    };
END_ATF_NAMESPACE
