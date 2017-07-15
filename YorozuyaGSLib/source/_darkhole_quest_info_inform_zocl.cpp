#include <_darkhole_quest_info_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_quest_info_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_quest_info_inform_zocl*);
        return (org_ptr(0x14026f4f0L))(this);
    };
END_ATF_NAMESPACE
