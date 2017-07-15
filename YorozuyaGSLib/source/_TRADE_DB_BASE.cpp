#include <_TRADE_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _TRADE_DB_BASE::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE*);
        (org_ptr(0x140076e70L))(this);
    };
    void _TRADE_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE*);
        (org_ptr(0x140077ca0L))(this);
    };
    _TRADE_DB_BASE::_TRADE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE*);
        (org_ptr(0x140076d40L))(this);
    };
    void _TRADE_DB_BASE::ctor__TRADE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE*);
        (org_ptr(0x140076d40L))(this);
    };
    void _TRADE_DB_BASE::_LIST::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE::_LIST*);
        (org_ptr(0x140076e00L))(this);
    };
    bool _TRADE_DB_BASE::_LIST::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct _TRADE_DB_BASE::_LIST*);
        return (org_ptr(0x14035fdf0L))(this);
    };
    _TRADE_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE::_LIST*);
        (org_ptr(0x140076db0L))(this);
    };
    void _TRADE_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _TRADE_DB_BASE::_LIST*);
        (org_ptr(0x140076db0L))(this);
    };
END_ATF_NAMESPACE
