#include <_qry_sheet_logout.hpp>


START_ATF_NAMESPACE
    _qry_sheet_logout::_qry_sheet_logout()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_logout*);
        (org_ptr(0x14011f3a0L))(this);
    };
    void _qry_sheet_logout::ctor__qry_sheet_logout()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_logout*);
        (org_ptr(0x14011f3a0L))(this);
    };
    int _qry_sheet_logout::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_sheet_logout*);
        return (org_ptr(0x14011f280L))(this);
    };
    _qry_sheet_logout::~_qry_sheet_logout()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_logout*);
        (org_ptr(0x14011f450L))(this);
    };
    void _qry_sheet_logout::dtor__qry_sheet_logout()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_logout*);
        (org_ptr(0x14011f450L))(this);
    };
END_ATF_NAMESPACE
