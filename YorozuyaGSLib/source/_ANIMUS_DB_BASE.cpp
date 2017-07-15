#include <_ANIMUS_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _ANIMUS_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_DB_BASE*);
        (org_ptr(0x140076370L))(this);
    };
    _ANIMUS_DB_BASE::_ANIMUS_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_DB_BASE*);
        (org_ptr(0x1400761e0L))(this);
    };
    void _ANIMUS_DB_BASE::ctor__ANIMUS_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_DB_BASE*);
        (org_ptr(0x1400761e0L))(this);
    };
    void _ANIMUS_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_DB_BASE::_LIST*);
        (org_ptr(0x1400762a0L))(this);
    };
    bool _ANIMUS_DB_BASE::_LIST::Release()
    {
        using org_ptr = bool (WINAPIV*)(struct _ANIMUS_DB_BASE::_LIST*);
        return (org_ptr(0x140120940L))(this);
    };
    bool _ANIMUS_DB_BASE::_LIST::Set(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct _ANIMUS_DB_BASE::_LIST*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x140120430L))(this, pItem);
    };
    _ANIMUS_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_DB_BASE::_LIST*);
        (org_ptr(0x140076250L))(this);
    };
    void _ANIMUS_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_DB_BASE::_LIST*);
        (org_ptr(0x140076250L))(this);
    };
    
END_ATF_NAMESPACE
