#include <_check_speed_hack_ans.hpp>


START_ATF_NAMESPACE
    int _check_speed_hack_ans::size()
    {
        using org_ptr = int (WINAPIV*)(struct _check_speed_hack_ans*);
        return (org_ptr(0x14047db50L))(this);
    };
END_ATF_NAMESPACE
