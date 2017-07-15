#include <GUILD_BATTLE__CReservedGuildSchedulePage.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CReservedGuildSchedulePage::CReservedGuildSchedulePage()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cbc30L))(this);
    };
    void GUILD_BATTLE::CReservedGuildSchedulePage::ctor_CReservedGuildSchedulePage()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cbc30L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildSchedulePage::Clear()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        return (org_ptr(0x1403cc220L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildSchedulePage::Find(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*, unsigned int);
        return (org_ptr(0x1403cbd80L))(this, dwGuildSerial);
    };
    void GUILD_BATTLE::CReservedGuildSchedulePage::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cc090L))(this);
    };
    void GUILD_BATTLE::CReservedGuildSchedulePage::IncVer()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cbd40L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildSchedulePage::Init(char ucPageInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*, char);
        return (org_ptr(0x1403cc170L))(this, ucPageInx);
    };
    void GUILD_BATTLE::CReservedGuildSchedulePage::Send(int n, unsigned int dwVer, struct GUILD_BATTLE::CReservedGuildSchedulePage* pkSelfInfoPage)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*, int, unsigned int, struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cbe20L))(this, n, dwVer, pkSelfInfoPage);
    };
    GUILD_BATTLE::CReservedGuildSchedulePage::~CReservedGuildSchedulePage()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cbce0L))(this);
    };
    void GUILD_BATTLE::CReservedGuildSchedulePage::dtor_CReservedGuildSchedulePage()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403cbce0L))(this);
    };
END_ATF_NAMESPACE
