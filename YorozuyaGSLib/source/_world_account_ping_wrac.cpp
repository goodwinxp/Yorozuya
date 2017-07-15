#include <_world_account_ping_wrac.hpp>


START_ATF_NAMESPACE
    int _world_account_ping_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _world_account_ping_wrac*);
        return (org_ptr(0x1402080f0L))(this);
    };
END_ATF_NAMESPACE
