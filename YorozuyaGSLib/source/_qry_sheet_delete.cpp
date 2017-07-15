#include <_qry_sheet_delete.hpp>


START_ATF_NAMESPACE
    int _qry_sheet_delete::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_sheet_delete*);
        return (org_ptr(0x14011f890L))(this);
    };
END_ATF_NAMESPACE
