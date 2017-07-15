#include <_darkhole_state_change_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_state_change_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_state_change_zocl*);
        return (org_ptr(0x1401648f0L))(this);
    };
END_ATF_NAMESPACE
