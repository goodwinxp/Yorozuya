#include <_total_guild_rank_result_zocl.hpp>


START_ATF_NAMESPACE
    int _total_guild_rank_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _total_guild_rank_result_zocl*);
        return (org_ptr(0x1402ca390L))(this);
    };
    
END_ATF_NAMESPACE
