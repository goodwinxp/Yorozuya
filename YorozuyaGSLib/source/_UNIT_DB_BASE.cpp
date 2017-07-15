#include <_UNIT_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _UNIT_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE*);
        (org_ptr(0x1400765c0L))(this);
    };
    _UNIT_DB_BASE::_UNIT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE*);
        (org_ptr(0x1400763f0L))(this);
    };
    void _UNIT_DB_BASE::ctor__UNIT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE*);
        (org_ptr(0x1400763f0L))(this);
    };
    void _UNIT_DB_BASE::_LIST::DelUnit()
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE::_LIST*);
        (org_ptr(0x1401082c0L))(this);
    };
    void _UNIT_DB_BASE::_LIST::Init(char byIndex)
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE::_LIST*, char);
        (org_ptr(0x1400764b0L))(this, byIndex);
    };
    _UNIT_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE::_LIST*);
        (org_ptr(0x140076460L))(this);
    };
    void _UNIT_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _UNIT_DB_BASE::_LIST*);
        (org_ptr(0x140076460L))(this);
    };
END_ATF_NAMESPACE
