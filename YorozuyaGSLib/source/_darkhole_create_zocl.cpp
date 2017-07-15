#include <_darkhole_create_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_create_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_create_zocl*);
        return (org_ptr(0x1401648d0L))(this);
    };
END_ATF_NAMESPACE
