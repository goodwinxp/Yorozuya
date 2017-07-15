#include <_PERSONALAMINE_INVEN_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _PERSONALAMINE_INVEN_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE*);
        (org_ptr(0x140075f70L))(this);
    };
    _PERSONALAMINE_INVEN_DB_BASE::_PERSONALAMINE_INVEN_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE*);
        (org_ptr(0x140075e40L))(this);
    };
    void _PERSONALAMINE_INVEN_DB_BASE::ctor__PERSONALAMINE_INVEN_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE*);
        (org_ptr(0x140075e40L))(this);
    };
    void _PERSONALAMINE_INVEN_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE::_LIST*);
        (org_ptr(0x140075f20L))(this);
    };
    bool _PERSONALAMINE_INVEN_DB_BASE::_LIST::Release()
    {
        using org_ptr = bool (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE::_LIST*);
        return (org_ptr(0x140120850L))(this);
    };
    bool _PERSONALAMINE_INVEN_DB_BASE::_LIST::Set(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(_PERSONALAMINE_INVEN_DB_BASE::_LIST*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x140120220L))(this, pItem);
    };
    _PERSONALAMINE_INVEN_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE::_LIST*);
        (org_ptr(0x140075ec0L))(this);
    };
    void _PERSONALAMINE_INVEN_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _PERSONALAMINE_INVEN_DB_BASE::_LIST*);
        (org_ptr(0x140075ec0L))(this);
    };
END_ATF_NAMESPACE
