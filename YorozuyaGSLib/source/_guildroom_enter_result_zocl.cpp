#include <_guildroom_enter_result_zocl.hpp>


START_ATF_NAMESPACE
    int _guildroom_enter_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guildroom_enter_result_zocl*);
        return (org_ptr(0x1400f03a0L))(this);
    };
END_ATF_NAMESPACE
