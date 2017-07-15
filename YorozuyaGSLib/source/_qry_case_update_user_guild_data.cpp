#include <_qry_case_update_user_guild_data.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_user_guild_data::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_user_guild_data*);
        return (org_ptr(0x14025d670L))(this);
    };
END_ATF_NAMESPACE
