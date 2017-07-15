#include <_notify_cont_play_time_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_cont_play_time_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_cont_play_time_zocl*);
        return (org_ptr(0x1403fea00L))(this);
    };
END_ATF_NAMESPACE
