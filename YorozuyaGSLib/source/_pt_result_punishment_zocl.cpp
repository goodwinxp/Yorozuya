#include <_pt_result_punishment_zocl.hpp>


START_ATF_NAMESPACE
    int _pt_result_punishment_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_result_punishment_zocl*);
        return (org_ptr(0x1402b0f50L))(this);
    };
END_ATF_NAMESPACE
