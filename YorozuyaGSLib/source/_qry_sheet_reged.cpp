#include <_qry_sheet_reged.hpp>


START_ATF_NAMESPACE
    _qry_sheet_reged::_qry_sheet_reged()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_reged*);
        (org_ptr(0x14011f550L))(this);
    };
    void _qry_sheet_reged::ctor__qry_sheet_reged()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_sheet_reged*);
        (org_ptr(0x14011f550L))(this);
    };
    int _qry_sheet_reged::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_sheet_reged*);
        return (org_ptr(0x14011f540L))(this);
    };
END_ATF_NAMESPACE
