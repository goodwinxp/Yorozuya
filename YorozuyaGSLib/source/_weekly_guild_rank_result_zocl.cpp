#include <_weekly_guild_rank_result_zocl.hpp>


START_ATF_NAMESPACE
    int _weekly_guild_rank_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _weekly_guild_rank_result_zocl*);
        return (org_ptr(0x1402cf9c0L))(this);
    };
    
END_ATF_NAMESPACE
