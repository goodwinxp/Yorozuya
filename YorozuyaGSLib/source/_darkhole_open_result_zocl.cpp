#include <_darkhole_open_result_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_open_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_open_result_zocl*);
        return (org_ptr(0x1400ef9d0L))(this);
    };
END_ATF_NAMESPACE
