#include <_darkhole_new_member_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_new_member_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_new_member_inform_zocl*);
        return (org_ptr(0x14026f4c0L))(this);
    };
END_ATF_NAMESPACE
