#include <_AVATOR_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _AVATOR_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DB_BASE*);
        (org_ptr(0x1400756a0L))(this);
    };
    _AVATOR_DB_BASE::_AVATOR_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DB_BASE*);
        (org_ptr(0x1400753c0L))(this);
    };
    void _AVATOR_DB_BASE::ctor__AVATOR_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DB_BASE*);
        (org_ptr(0x1400753c0L))(this);
    };
END_ATF_NAMESPACE
