#include <_darkhole_ask_reenter_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_ask_reenter_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_ask_reenter_inform_zocl*);
        return (org_ptr(0x1400efa20L))(this);
    };
END_ATF_NAMESPACE
