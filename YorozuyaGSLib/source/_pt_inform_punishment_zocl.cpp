#include <_pt_inform_punishment_zocl.hpp>


START_ATF_NAMESPACE
    int _pt_inform_punishment_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_inform_punishment_zocl*);
        return (org_ptr(0x14007e0d0L))(this);
    };
END_ATF_NAMESPACE
