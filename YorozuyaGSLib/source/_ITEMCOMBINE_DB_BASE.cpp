#include <_ITEMCOMBINE_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _ITEMCOMBINE_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE*);
        (org_ptr(0x1400772d0L))(this);
    };
    bool _ITEMCOMBINE_DB_BASE::IsCombineData()
    {
        using org_ptr = bool (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE*);
        return (org_ptr(0x1402af610L))(this);
    };
    _ITEMCOMBINE_DB_BASE::_ITEMCOMBINE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE*);
        (org_ptr(0x140077180L))(this);
    };
    void _ITEMCOMBINE_DB_BASE::ctor__ITEMCOMBINE_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE*);
        (org_ptr(0x140077180L))(this);
    };
    void _ITEMCOMBINE_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE::_LIST*);
        (org_ptr(0x140077250L))(this);
    };
    _ITEMCOMBINE_DB_BASE::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE::_LIST*);
        (org_ptr(0x140077200L))(this);
    };
    void _ITEMCOMBINE_DB_BASE::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _ITEMCOMBINE_DB_BASE::_LIST*);
        (org_ptr(0x140077200L))(this);
    };
END_ATF_NAMESPACE
