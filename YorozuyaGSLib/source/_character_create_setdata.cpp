#include <_character_create_setdata.hpp>


START_ATF_NAMESPACE
    _character_create_setdata::_character_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _character_create_setdata*);
        (org_ptr(0x140078e20L))(this);
    };
    void _character_create_setdata::ctor__character_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _character_create_setdata*);
        (org_ptr(0x140078e20L))(this);
    };
END_ATF_NAMESPACE
