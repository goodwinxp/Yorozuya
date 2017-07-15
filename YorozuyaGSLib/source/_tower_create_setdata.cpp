#include <_tower_create_setdata.hpp>


START_ATF_NAMESPACE
    _tower_create_setdata::_tower_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _tower_create_setdata*);
        (org_ptr(0x140132a70L))(this);
    };
    void _tower_create_setdata::ctor__tower_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _tower_create_setdata*);
        (org_ptr(0x140132a70L))(this);
    };
END_ATF_NAMESPACE
