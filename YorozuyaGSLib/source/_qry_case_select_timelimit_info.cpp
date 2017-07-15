#include <_qry_case_select_timelimit_info.hpp>


START_ATF_NAMESPACE
    int _qry_case_select_timelimit_info::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_select_timelimit_info*);
        return (org_ptr(0x1401d9510L))(this);
    };
END_ATF_NAMESPACE
