#include <_qry_sheet_insert.hpp>


START_ATF_NAMESPACE
    _qry_sheet_insert::_qry_sheet_insert()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_insert*);
        (org_ptr(0x14011f820L))(this);
    };
    void _qry_sheet_insert::ctor__qry_sheet_insert()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_insert*);
        (org_ptr(0x14011f820L))(this);
    };
    int _qry_sheet_insert::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_sheet_insert*);
        return (org_ptr(0x14011f810L))(this);
    };
END_ATF_NAMESPACE
