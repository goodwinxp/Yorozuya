#include <_log_sheet_economy.hpp>


START_ATF_NAMESPACE
    int _log_sheet_economy::size()
    {
        using org_ptr = int (WINAPIV*)(struct _log_sheet_economy*);
        return (org_ptr(0x1402a5ce0L))(this);
    };
END_ATF_NAMESPACE
