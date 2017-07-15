#include <_guild_battle_rank_list_result_zocl.hpp>


START_ATF_NAMESPACE
    int _guild_battle_rank_list_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_battle_rank_list_result_zocl*);
        return (org_ptr(0x1403d0930L))(this);
    };
    
END_ATF_NAMESPACE
