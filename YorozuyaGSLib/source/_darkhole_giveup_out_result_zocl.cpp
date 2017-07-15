#include <_darkhole_giveup_out_result_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_giveup_out_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_giveup_out_result_zocl*);
        return (org_ptr(0x1400ef9f0L))(this);
    };
END_ATF_NAMESPACE
