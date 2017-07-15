#include <_object_create_setdata.hpp>


START_ATF_NAMESPACE
    _object_create_setdata::_object_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _object_create_setdata*);
        (org_ptr(0x140078e70L))(this);
    };
    void _object_create_setdata::ctor__object_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _object_create_setdata*);
        (org_ptr(0x140078e70L))(this);
    };
END_ATF_NAMESPACE
