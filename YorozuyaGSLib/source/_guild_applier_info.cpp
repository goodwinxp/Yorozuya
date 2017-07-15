#include <_guild_applier_info.hpp>


START_ATF_NAMESPACE
    bool _guild_applier_info::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct _guild_applier_info*);
        return (org_ptr(0x14025d330L))(this);
    };
    _guild_applier_info::_guild_applier_info()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_applier_info*);
        (org_ptr(0x14025cec0L))(this);
    };
    void _guild_applier_info::ctor__guild_applier_info()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_applier_info*);
        (org_ptr(0x14025cec0L))(this);
    };
    void _guild_applier_info::init()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_applier_info*);
        (org_ptr(0x14025cf10L))(this);
    };
END_ATF_NAMESPACE
