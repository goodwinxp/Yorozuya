#include <_FORCE_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _FORCE_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_DB_BASE*);
        (org_ptr(0x140076160L))(this);
    };
    _FORCE_DB_BASE::_FORCE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_DB_BASE*);
        (org_ptr(0x140075ff0L))(this);
    };
    void _FORCE_DB_BASE::ctor__FORCE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_DB_BASE*);
        (org_ptr(0x140075ff0L))(this);
    };
    void _FORCE_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_DB_BASE::_LIST*);
        (org_ptr(0x1400760b0L))(this);
    };
    bool _FORCE_DB_BASE::_LIST::Release()
    {
        using org_ptr = bool (WINAPIV*)(struct _FORCE_DB_BASE::_LIST*);
        return (org_ptr(0x1401208b0L))(this);
    };
    bool _FORCE_DB_BASE::_LIST::Set(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(_FORCE_DB_BASE::_LIST*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1401202d0L))(this, pItem);
    };
    _FORCE_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_DB_BASE::_LIST*);
        (org_ptr(0x140076060L))(this);
    };
    void _FORCE_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _FORCE_DB_BASE::_LIST*);
        (org_ptr(0x140076060L))(this);
    };
END_ATF_NAMESPACE
