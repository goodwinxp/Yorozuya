#include <_darkhole_clear_out_result_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_clear_out_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_clear_out_result_zocl*);
        return (org_ptr(0x1400efa00L))(this);
    };
END_ATF_NAMESPACE
