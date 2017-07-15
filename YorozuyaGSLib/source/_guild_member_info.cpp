#include <_guild_member_info.hpp>


START_ATF_NAMESPACE
    bool _guild_member_info::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct _guild_member_info*);
        return (org_ptr(0x140095050L))(this);
    };
    _guild_member_info::_guild_member_info()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_info*);
        (org_ptr(0x1400ad350L))(this);
    };
    void _guild_member_info::ctor__guild_member_info()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_info*);
        (org_ptr(0x1400ad350L))(this);
    };
    void _guild_member_info::init()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_info*);
        (org_ptr(0x1400ad3a0L))(this);
    };
END_ATF_NAMESPACE
