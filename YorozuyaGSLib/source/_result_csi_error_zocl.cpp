#include <_result_csi_error_zocl.hpp>


START_ATF_NAMESPACE
    int _result_csi_error_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _result_csi_error_zocl*);
        return (org_ptr(0x14030d6f0L))(this);
    };
END_ATF_NAMESPACE
