#include <_guild_master_info.hpp>


START_ATF_NAMESPACE
    bool _guild_master_info::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct _guild_master_info*);
        return (org_ptr(0x1400ad1e0L))(this);
    };
    _guild_master_info::_guild_master_info()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_master_info*);
        (org_ptr(0x14025ce30L))(this);
    };
    void _guild_master_info::ctor__guild_master_info()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_master_info*);
        (org_ptr(0x14025ce30L))(this);
    };
    void _guild_master_info::init()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_master_info*);
        (org_ptr(0x14025ce80L))(this);
    };
END_ATF_NAMESPACE
