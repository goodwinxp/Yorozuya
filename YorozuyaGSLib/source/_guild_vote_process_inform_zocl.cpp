#include <_guild_vote_process_inform_zocl.hpp>


START_ATF_NAMESPACE
    _guild_vote_process_inform_zocl::_guild_vote_process_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_vote_process_inform_zocl*);
        (org_ptr(0x14025d4d0L))(this);
    };
    void _guild_vote_process_inform_zocl::ctor__guild_vote_process_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_vote_process_inform_zocl*);
        (org_ptr(0x14025d4d0L))(this);
    };
    int _guild_vote_process_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _guild_vote_process_inform_zocl*);
        return (org_ptr(0x14025d4f0L))(this);
    };
END_ATF_NAMESPACE
