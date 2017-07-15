#include <_darkhole_create_setdata.hpp>


START_ATF_NAMESPACE
    _darkhole_create_setdata::_darkhole_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _darkhole_create_setdata*);
        (org_ptr(0x140099470L))(this);
    };
    void _darkhole_create_setdata::ctor__darkhole_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _darkhole_create_setdata*);
        (org_ptr(0x140099470L))(this);
    };
END_ATF_NAMESPACE
