#include <_select_avator_report_wrac.hpp>


START_ATF_NAMESPACE
    int _select_avator_report_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _select_avator_report_wrac*);
        return (org_ptr(0x14011fa20L))(this);
    };
END_ATF_NAMESPACE
