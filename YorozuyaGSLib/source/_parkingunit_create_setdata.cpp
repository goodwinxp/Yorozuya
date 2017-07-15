#include <_parkingunit_create_setdata.hpp>


START_ATF_NAMESPACE
    _parkingunit_create_setdata::_parkingunit_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _parkingunit_create_setdata*);
        (org_ptr(0x1401083e0L))(this);
    };
    void _parkingunit_create_setdata::ctor__parkingunit_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _parkingunit_create_setdata*);
        (org_ptr(0x1401083e0L))(this);
    };
END_ATF_NAMESPACE
