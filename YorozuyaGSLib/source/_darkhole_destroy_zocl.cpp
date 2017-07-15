#include <_darkhole_destroy_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_destroy_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_destroy_zocl*);
        return (org_ptr(0x1401648e0L))(this);
    };
END_ATF_NAMESPACE
