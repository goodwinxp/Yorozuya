#include <_trunk_db_load.hpp>


START_ATF_NAMESPACE
    _trunk_db_load::_trunk_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _trunk_db_load*);
        (org_ptr(0x14010de00L))(this);
    };
    void _trunk_db_load::ctor__trunk_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _trunk_db_load*);
        (org_ptr(0x14010de00L))(this);
    };
END_ATF_NAMESPACE
