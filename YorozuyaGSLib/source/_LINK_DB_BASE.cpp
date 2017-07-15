#include <_LINK_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _LINK_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _LINK_DB_BASE*);
        (org_ptr(0x140075990L))(this);
    };
    _LINK_DB_BASE::_LINK_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _LINK_DB_BASE*);
        (org_ptr(0x140075870L))(this);
    };
    void _LINK_DB_BASE::ctor__LINK_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _LINK_DB_BASE*);
        (org_ptr(0x140075870L))(this);
    };
    void _LINK_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _LINK_DB_BASE::_LIST*);
        (org_ptr(0x140075930L))(this);
    };
    _LINK_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _LINK_DB_BASE::_LIST*);
        (org_ptr(0x1400758e0L))(this);
    };
    void _LINK_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _LINK_DB_BASE::_LIST*);
        (org_ptr(0x1400758e0L))(this);
    };
END_ATF_NAMESPACE
