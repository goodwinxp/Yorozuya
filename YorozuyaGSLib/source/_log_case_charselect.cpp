#include <_log_case_charselect.hpp>


START_ATF_NAMESPACE
    int _log_case_charselect::size()
    {
        using org_ptr = int (WINAPIV*)(struct _log_case_charselect*);
        return (org_ptr(0x14011fbf0L))(this);
    };
END_ATF_NAMESPACE
