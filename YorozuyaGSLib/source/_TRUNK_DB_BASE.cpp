#include <_TRUNK_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _TRUNK_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _TRUNK_DB_BASE*);
        (org_ptr(0x1400770a0L))(this);
    };
    _TRUNK_DB_BASE::_TRUNK_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _TRUNK_DB_BASE*);
        (org_ptr(0x140076ef0L))(this);
    };
    void _TRUNK_DB_BASE::ctor__TRUNK_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _TRUNK_DB_BASE*);
        (org_ptr(0x140076ef0L))(this);
    };
    void _TRUNK_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _TRUNK_DB_BASE::_LIST*);
        (org_ptr(0x140076ff0L))(this);
    };
    bool _TRUNK_DB_BASE::_LIST::Release()
    {
        using org_ptr = bool (WINAPIV*)(struct _TRUNK_DB_BASE::_LIST*);
        return (org_ptr(0x1401209d0L))(this);
    };
    bool _TRUNK_DB_BASE::_LIST::Set(_STORAGE_LIST::_db_con* pItem, char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(_TRUNK_DB_BASE::_LIST*, _STORAGE_LIST::_db_con*, char);
        return (org_ptr(0x140120540L))(this, pItem, byRaceCode);
    };
    _TRUNK_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _TRUNK_DB_BASE::_LIST*);
        (org_ptr(0x140076f90L))(this);
    };
    void _TRUNK_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _TRUNK_DB_BASE::_LIST*);
        (org_ptr(0x140076f90L))(this);
    };
END_ATF_NAMESPACE
