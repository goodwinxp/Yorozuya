#include <_guildroom_rent_result_zocl.hpp>


START_ATF_NAMESPACE
    int _guildroom_rent_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guildroom_rent_result_zocl*);
        return (org_ptr(0x1400f0390L))(this);
    };
END_ATF_NAMESPACE
