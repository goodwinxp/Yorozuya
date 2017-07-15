#include <_animus_create_setdata.hpp>


START_ATF_NAMESPACE
    _animus_create_setdata::_animus_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _animus_create_setdata*);
        (org_ptr(0x1400d16c0L))(this);
    };
    void _animus_create_setdata::ctor__animus_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _animus_create_setdata*);
        (org_ptr(0x1400d16c0L))(this);
    };
END_ATF_NAMESPACE
