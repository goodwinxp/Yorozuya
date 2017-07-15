#include <_guild_manage_request_clzo.hpp>


START_ATF_NAMESPACE
    _guild_manage_request_clzo::_guild_manage_request_clzo()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_manage_request_clzo*);
        (org_ptr(0x14029d7d0L))(this);
    };
    void _guild_manage_request_clzo::ctor__guild_manage_request_clzo()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_manage_request_clzo*);
        (org_ptr(0x14029d7d0L))(this);
    };
    int _guild_manage_request_clzo::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_manage_request_clzo*);
        return (org_ptr(0x14029d830L))(this);
    };
END_ATF_NAMESPACE
