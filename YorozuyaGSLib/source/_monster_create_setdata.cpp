#include <_monster_create_setdata.hpp>


START_ATF_NAMESPACE
    _monster_create_setdata::_monster_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _monster_create_setdata*);
        (org_ptr(0x14014c340L))(this);
    };
    void _monster_create_setdata::ctor__monster_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _monster_create_setdata*);
        (org_ptr(0x14014c340L))(this);
    };
END_ATF_NAMESPACE
