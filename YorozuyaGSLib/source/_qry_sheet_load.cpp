#include <_qry_sheet_load.hpp>


START_ATF_NAMESPACE
    _qry_sheet_load::_qry_sheet_load()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_load*);
        (org_ptr(0x14011f8e0L))(this);
    };
    void _qry_sheet_load::ctor__qry_sheet_load()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_load*);
        (org_ptr(0x14011f8e0L))(this);
    };
    int _qry_sheet_load::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_sheet_load*);
        return (org_ptr(0x14011f9c0L))(this);
    };
    _qry_sheet_load::~_qry_sheet_load()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_load*);
        (org_ptr(0x14011f9d0L))(this);
    };
    void _qry_sheet_load::dtor__qry_sheet_load()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_load*);
        (org_ptr(0x14011f9d0L))(this);
    };
END_ATF_NAMESPACE
