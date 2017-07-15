#include <_holy_quest_report_wrac.hpp>


START_ATF_NAMESPACE
    int _holy_quest_report_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _holy_quest_report_wrac*);
        return (org_ptr(0x140284bc0L))(this);
    };
END_ATF_NAMESPACE
