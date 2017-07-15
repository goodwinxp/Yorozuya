#include <_worlddb_potion_delay_info.hpp>


START_ATF_NAMESPACE
    _worlddb_potion_delay_info::_worlddb_potion_delay_info()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_potion_delay_info*);
        (org_ptr(0x1401bf480L))(this);
    };
    void _worlddb_potion_delay_info::ctor__worlddb_potion_delay_info()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_potion_delay_info*);
        (org_ptr(0x1401bf480L))(this);
    };
END_ATF_NAMESPACE
