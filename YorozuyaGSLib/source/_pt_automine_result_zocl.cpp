#include <_pt_automine_result_zocl.hpp>


START_ATF_NAMESPACE
    int _pt_automine_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_automine_result_zocl*);
        return (org_ptr(0x1402d3fc0L))(this);
    };
END_ATF_NAMESPACE
