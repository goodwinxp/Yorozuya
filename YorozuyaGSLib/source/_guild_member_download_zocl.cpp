#include <_guild_member_download_zocl.hpp>


START_ATF_NAMESPACE
    void _guild_member_download_zocl::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_download_zocl*);
        (org_ptr(0x14025cce0L))(this);
    };
    _guild_member_download_zocl::_guild_member_download_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_download_zocl*);
        (org_ptr(0x14025cc90L))(this);
    };
    void _guild_member_download_zocl::ctor__guild_member_download_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_member_download_zocl*);
        (org_ptr(0x14025cc90L))(this);
    };
    int _guild_member_download_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_member_download_zocl*);
        return (org_ptr(0x14025d380L))(this);
    };
END_ATF_NAMESPACE
