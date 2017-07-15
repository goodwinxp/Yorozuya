#include <_npc_create_setdata.hpp>


START_ATF_NAMESPACE
    _npc_create_setdata::_npc_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _npc_create_setdata*);
        (org_ptr(0x140199140L))(this);
    };
    void _npc_create_setdata::ctor__npc_create_setdata()
    {
        using org_ptr = void (WINAPIV*)(struct _npc_create_setdata*);
        (org_ptr(0x140199140L))(this);
    };
END_ATF_NAMESPACE
