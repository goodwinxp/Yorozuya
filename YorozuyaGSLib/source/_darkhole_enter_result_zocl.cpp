#include <_darkhole_enter_result_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_enter_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_enter_result_zocl*);
        return (org_ptr(0x1400ef9e0L))(this);
    };
END_ATF_NAMESPACE
