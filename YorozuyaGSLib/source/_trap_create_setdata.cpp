#include <_trap_create_setdata.hpp>


START_ATF_NAMESPACE
    _trap_create_setdata::_trap_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _trap_create_setdata*);
        (org_ptr(0x140141480L))(this);
    };
    void _trap_create_setdata::ctor__trap_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _trap_create_setdata*);
        (org_ptr(0x140141480L))(this);
    };
END_ATF_NAMESPACE
