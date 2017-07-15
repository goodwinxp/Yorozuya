#include <_POSTDATA_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _POSTDATA_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTDATA_DB_BASE*);
        (org_ptr(0x140077680L))(this);
    };
    void _POSTDATA_DB_BASE::UpdateInit()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTDATA_DB_BASE*);
        (org_ptr(0x14011fc50L))(this);
    };
    _POSTDATA_DB_BASE::_POSTDATA_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTDATA_DB_BASE*);
        (org_ptr(0x140077390L))(this);
    };
    void _POSTDATA_DB_BASE::ctor__POSTDATA_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _POSTDATA_DB_BASE*);
        (org_ptr(0x140077390L))(this);
    };
END_ATF_NAMESPACE
