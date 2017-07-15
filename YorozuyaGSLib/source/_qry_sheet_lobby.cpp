#include <_qry_sheet_lobby.hpp>


START_ATF_NAMESPACE
    _qry_sheet_lobby::_qry_sheet_lobby()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_lobby*);
        (org_ptr(0x14011fa40L))(this);
    };
    void _qry_sheet_lobby::ctor__qry_sheet_lobby()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_lobby*);
        (org_ptr(0x14011fa40L))(this);
    };
    int _qry_sheet_lobby::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_sheet_lobby*);
        return (org_ptr(0x14011fa30L))(this);
    };
    _qry_sheet_lobby::~_qry_sheet_lobby()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_lobby*);
        (org_ptr(0x14011faf0L))(this);
    };
    void _qry_sheet_lobby::dtor__qry_sheet_lobby()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_lobby*);
        (org_ptr(0x14011faf0L))(this);
    };
END_ATF_NAMESPACE
