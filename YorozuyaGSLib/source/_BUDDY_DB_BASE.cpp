#include <_BUDDY_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _BUDDY_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE*);
        (org_ptr(0x140076cc0L))(this);
    };
    _BUDDY_DB_BASE::_BUDDY_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE*);
        (org_ptr(0x140076bd0L))(this);
    };
    void _BUDDY_DB_BASE::ctor__BUDDY_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE*);
        (org_ptr(0x140076bd0L))(this);
    };
    void _BUDDY_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE::_LIST*);
        (org_ptr(0x140076c90L))(this);
    };
    bool _BUDDY_DB_BASE::_LIST::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _BUDDY_DB_BASE::_LIST*);
        return (org_ptr(0x140075110L))(this);
    };
    _BUDDY_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE::_LIST*);
        (org_ptr(0x140076c40L))(this);
    };
    void _BUDDY_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE::_LIST*);
        (org_ptr(0x140076c40L))(this);
    };
END_ATF_NAMESPACE
