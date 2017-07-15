#include <_notify_local_time_result_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_local_time_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_local_time_result_zocl*);
        return (org_ptr(0x1401d24b0L))(this);
    };
END_ATF_NAMESPACE
