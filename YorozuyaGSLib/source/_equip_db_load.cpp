#include <_equip_db_load.hpp>


START_ATF_NAMESPACE
    _equip_db_load::_equip_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _equip_db_load*);
        (org_ptr(0x14010db40L))(this);
    };
    void _equip_db_load::ctor__equip_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _equip_db_load*);
        (org_ptr(0x14010db40L))(this);
    };
END_ATF_NAMESPACE
