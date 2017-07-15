#include <_bag_db_load.hpp>


START_ATF_NAMESPACE
    _bag_db_load::_bag_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _bag_db_load*);
        (org_ptr(0x14010da90L))(this);
    };
    void _bag_db_load::ctor__bag_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _bag_db_load*);
        (org_ptr(0x14010da90L))(this);
    };
END_ATF_NAMESPACE
