#include <_SUPPLEMENT_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _SUPPLEMENT_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _SUPPLEMENT_DB_BASE*);
        (org_ptr(0x140077910L))(this);
    };
    _SUPPLEMENT_DB_BASE::_SUPPLEMENT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _SUPPLEMENT_DB_BASE*);
        (org_ptr(0x1400778c0L))(this);
    };
    void _SUPPLEMENT_DB_BASE::ctor__SUPPLEMENT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _SUPPLEMENT_DB_BASE*);
        (org_ptr(0x1400778c0L))(this);
    };
END_ATF_NAMESPACE
