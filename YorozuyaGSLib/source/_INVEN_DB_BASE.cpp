#include <_INVEN_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _INVEN_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE*);
        (org_ptr(0x140075dc0L))(this);
    };
    _INVEN_DB_BASE::_INVEN_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE*);
        (org_ptr(0x140075c10L))(this);
    };
    void _INVEN_DB_BASE::ctor__INVEN_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE*);
        (org_ptr(0x140075c10L))(this);
    };
    void _INVEN_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE::_LIST*);
        (org_ptr(0x140075cf0L))(this);
    };
    bool _INVEN_DB_BASE::_LIST::Release()
    {
        using org_ptr = bool (WINAPIV*)(struct _INVEN_DB_BASE::_LIST*);
        return (org_ptr(0x1401207c0L))(this);
    };
    bool _INVEN_DB_BASE::_LIST::Set(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(_INVEN_DB_BASE::_LIST*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x140120110L))(this, pItem);
    };
    _INVEN_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE::_LIST*);
        (org_ptr(0x140075c80L))(this);
    };
    void _INVEN_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE::_LIST*);
        (org_ptr(0x140075c80L))(this);
    };
END_ATF_NAMESPACE
