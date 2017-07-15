#include <_embellish_db_load.hpp>


START_ATF_NAMESPACE
    _embellish_db_load::_embellish_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _embellish_db_load*);
        (org_ptr(0x14010dbf0L))(this);
    };
    void _embellish_db_load::ctor__embellish_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _embellish_db_load*);
        (org_ptr(0x14010dbf0L))(this);
    };
END_ATF_NAMESPACE
