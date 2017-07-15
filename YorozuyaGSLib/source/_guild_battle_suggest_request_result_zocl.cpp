#include <_guild_battle_suggest_request_result_zocl.hpp>


START_ATF_NAMESPACE
    int _guild_battle_suggest_request_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_battle_suggest_request_result_zocl*);
        return (org_ptr(0x14025d5f0L))(this);
    };
END_ATF_NAMESPACE
