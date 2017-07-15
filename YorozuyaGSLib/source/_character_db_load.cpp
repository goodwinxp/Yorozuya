#include <_character_db_load.hpp>


START_ATF_NAMESPACE
    _character_db_load::_character_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _character_db_load*);
        (org_ptr(0x14010e010L))(this);
    };
    void _character_db_load::ctor__character_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _character_db_load*);
        (org_ptr(0x14010e010L))(this);
    };
END_ATF_NAMESPACE
