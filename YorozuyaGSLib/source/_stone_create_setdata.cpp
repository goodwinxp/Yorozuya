#include <_stone_create_setdata.hpp>


START_ATF_NAMESPACE
    _stone_create_setdata::_stone_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _stone_create_setdata*);
        (org_ptr(0x140284530L))(this);
    };
    void _stone_create_setdata::ctor__stone_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _stone_create_setdata*);
        (org_ptr(0x140284530L))(this);
    };
END_ATF_NAMESPACE
