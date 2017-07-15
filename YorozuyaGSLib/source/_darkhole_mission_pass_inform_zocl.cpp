#include <_darkhole_mission_pass_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_mission_pass_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_mission_pass_inform_zocl*);
        return (org_ptr(0x14026f850L))(this);
    };
END_ATF_NAMESPACE
