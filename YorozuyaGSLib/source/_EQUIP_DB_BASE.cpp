#include <_EQUIP_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _EQUIP_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIP_DB_BASE*);
        (org_ptr(0x140075b90L))(this);
    };
    _EQUIP_DB_BASE::_EQUIP_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIP_DB_BASE*);
        (org_ptr(0x140075a10L))(this);
    };
    void _EQUIP_DB_BASE::ctor__EQUIP_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIP_DB_BASE*);
        (org_ptr(0x140075a10L))(this);
    };
    void _EQUIP_DB_BASE::_EMBELLISH_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIP_DB_BASE::_EMBELLISH_LIST*);
        (org_ptr(0x140075ad0L))(this);
    };
    bool _EQUIP_DB_BASE::_EMBELLISH_LIST::Release()
    {
        using org_ptr = bool (WINAPIV*)(struct _EQUIP_DB_BASE::_EMBELLISH_LIST*);
        return (org_ptr(0x140120730L))(this);
    };
    bool _EQUIP_DB_BASE::_EMBELLISH_LIST::Set(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(_EQUIP_DB_BASE::_EMBELLISH_LIST*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x140120020L))(this, pItem);
    };
    _EQUIP_DB_BASE::_EMBELLISH_LIST::_EMBELLISH_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIP_DB_BASE::_EMBELLISH_LIST*);
        (org_ptr(0x140075a80L))(this);
    };
    void _EQUIP_DB_BASE::_EMBELLISH_LIST::ctor__EMBELLISH_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _EQUIP_DB_BASE::_EMBELLISH_LIST*);
        (org_ptr(0x140075a80L))(this);
    };
END_ATF_NAMESPACE
