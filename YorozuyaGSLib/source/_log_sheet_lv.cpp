#include <_log_sheet_lv.hpp>


START_ATF_NAMESPACE
    int _log_sheet_lv::size()
    {
        using org_ptr = int (WINAPIV*)(struct _log_sheet_lv*);
        return (org_ptr(0x14011fbe0L))(this);
    };
END_ATF_NAMESPACE
