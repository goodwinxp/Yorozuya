#include <_force_db_load.hpp>


START_ATF_NAMESPACE
    _force_db_load::_force_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _force_db_load*);
        (org_ptr(0x14010dca0L))(this);
    };
    void _force_db_load::ctor__force_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _force_db_load*);
        (org_ptr(0x14010dca0L))(this);
    };
END_ATF_NAMESPACE
