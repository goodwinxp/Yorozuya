#include <_Exttrunk_db_load.hpp>


START_ATF_NAMESPACE
    _Exttrunk_db_load::_Exttrunk_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _Exttrunk_db_load*);
        (org_ptr(0x14010df60L))(this);
    };
    void _Exttrunk_db_load::ctor__Exttrunk_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _Exttrunk_db_load*);
        (org_ptr(0x14010df60L))(this);
    };
END_ATF_NAMESPACE
