#include <_notify_race_boss_winrate_zocl.hpp>


START_ATF_NAMESPACE
    int _notify_race_boss_winrate_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _notify_race_boss_winrate_zocl*);
        return (org_ptr(0x14024d4c0L))(this);
    };
END_ATF_NAMESPACE
