#include <_animus_db_load.hpp>


START_ATF_NAMESPACE
    _animus_db_load::_animus_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _animus_db_load*);
        (org_ptr(0x14010dd50L))(this);
    };
    void _animus_db_load::ctor__animus_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _animus_db_load*);
        (org_ptr(0x14010dd50L))(this);
    };
END_ATF_NAMESPACE
