#include <_user_num_report_wrac.hpp>


START_ATF_NAMESPACE
    int _user_num_report_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _user_num_report_wrac*);
        return (org_ptr(0x140208050L))(this);
    };
END_ATF_NAMESPACE
