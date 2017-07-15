#include <_log_sheet_usernum.hpp>


START_ATF_NAMESPACE
    int _log_sheet_usernum::size()
    {
        using org_ptr = int (WINAPIV*)(struct _log_sheet_usernum*);
        return (org_ptr(0x140207e50L))(this);
    };
END_ATF_NAMESPACE
