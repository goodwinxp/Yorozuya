#include <_nuclear_create_setdata.hpp>


START_ATF_NAMESPACE
    _nuclear_create_setdata::_nuclear_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _nuclear_create_setdata*);
        (org_ptr(0x14013e2c0L))(this);
    };
    void _nuclear_create_setdata::ctor__nuclear_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _nuclear_create_setdata*);
        (org_ptr(0x14013e2c0L))(this);
    };
END_ATF_NAMESPACE
