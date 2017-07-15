#include <_cancel_raceboss_msg_result_zoct.hpp>


START_ATF_NAMESPACE
    int _cancel_raceboss_msg_result_zoct::size()
    {
        using org_ptr = int (WINAPIV*)(struct _cancel_raceboss_msg_result_zoct*);
        return (org_ptr(0x1401c7740L))(this);
    };
END_ATF_NAMESPACE
