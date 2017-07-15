#include <_DELPOST_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _DELPOST_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _DELPOST_DB_BASE*);
        (org_ptr(0x140077620L))(this);
    };
    _DELPOST_DB_BASE::_DELPOST_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _DELPOST_DB_BASE*);
        (org_ptr(0x1400775d0L))(this);
    };
    void _DELPOST_DB_BASE::ctor__DELPOST_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _DELPOST_DB_BASE*);
        (org_ptr(0x1400775d0L))(this);
    };
    
END_ATF_NAMESPACE
