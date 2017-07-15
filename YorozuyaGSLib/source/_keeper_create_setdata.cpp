#include <_keeper_create_setdata.hpp>


START_ATF_NAMESPACE
    _keeper_create_setdata::_keeper_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _keeper_create_setdata*);
        (org_ptr(0x140284a90L))(this);
    };
    void _keeper_create_setdata::ctor__keeper_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _keeper_create_setdata*);
        (org_ptr(0x140284a90L))(this);
    };
END_ATF_NAMESPACE
