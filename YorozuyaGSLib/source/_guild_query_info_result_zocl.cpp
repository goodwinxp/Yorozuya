#include <_guild_query_info_result_zocl.hpp>


START_ATF_NAMESPACE
    void _guild_query_info_result_zocl::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_query_info_result_zocl*);
        (org_ptr(0x14025d190L))(this);
    };
END_ATF_NAMESPACE
