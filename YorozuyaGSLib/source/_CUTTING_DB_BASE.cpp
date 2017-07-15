#include <_CUTTING_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _CUTTING_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE*);
        (org_ptr(0x140076780L))(this);
    };
    void _CUTTING_DB_BASE::ReSetOldDataLoad()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE*);
        (org_ptr(0x140077c80L))(this);
    };
    _CUTTING_DB_BASE::_CUTTING_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE*);
        (org_ptr(0x140076650L))(this);
    };
    void _CUTTING_DB_BASE::ctor__CUTTING_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE*);
        (org_ptr(0x140076650L))(this);
    };
    void _CUTTING_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE::_LIST*);
        (org_ptr(0x140076730L))(this);
    };
    _CUTTING_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE::_LIST*);
        (org_ptr(0x1400766d0L))(this);
    };
    void _CUTTING_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _CUTTING_DB_BASE::_LIST*);
        (org_ptr(0x1400766d0L))(this);
    };
END_ATF_NAMESPACE
