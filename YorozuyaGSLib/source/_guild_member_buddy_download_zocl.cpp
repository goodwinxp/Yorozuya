#include <_guild_member_buddy_download_zocl.hpp>


START_ATF_NAMESPACE
    _guild_member_buddy_download_zocl::_guild_member_buddy_download_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_buddy_download_zocl*);
        (org_ptr(0x14025ce10L))(this);
    };
    void _guild_member_buddy_download_zocl::ctor__guild_member_buddy_download_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_buddy_download_zocl*);
        (org_ptr(0x14025ce10L))(this);
    };
    int _guild_member_buddy_download_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_member_buddy_download_zocl*);
        return (org_ptr(0x14025d480L))(this);
    };
END_ATF_NAMESPACE
