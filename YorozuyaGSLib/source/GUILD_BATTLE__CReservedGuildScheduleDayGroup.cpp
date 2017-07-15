#include <GUILD_BATTLE__CReservedGuildScheduleDayGroup.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CReservedGuildScheduleDayGroup::CReservedGuildScheduleDayGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*);
        (org_ptr(0x1403ccbc0L))(this);
    };
    void GUILD_BATTLE::CReservedGuildScheduleDayGroup::ctor_CReservedGuildScheduleDayGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*);
        (org_ptr(0x1403ccbc0L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildScheduleDayGroup::Clear()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*);
        return (org_ptr(0x1403cce80L))(this);
    };
    struct GUILD_BATTLE::CReservedGuildSchedulePage* GUILD_BATTLE::CReservedGuildScheduleDayGroup::Find(unsigned int dwGuildSerial)
    {
        using org_ptr = struct GUILD_BATTLE::CReservedGuildSchedulePage* (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*, unsigned int);
        return (org_ptr(0x1403ccfa0L))(this, dwGuildSerial);
    };
    void GUILD_BATTLE::CReservedGuildScheduleDayGroup::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*);
        (org_ptr(0x1403cd1c0L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildScheduleDayGroup::Init(unsigned int uiMapCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*, unsigned int);
        return (org_ptr(0x1403ccc90L))(this, uiMapCnt);
    };
    bool GUILD_BATTLE::CReservedGuildScheduleDayGroup::Load(char byDayID, unsigned int uiMapInx, struct _worlddb_guild_battle_reserved_schedule_info* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*, char, unsigned int, struct _worlddb_guild_battle_reserved_schedule_info*);
        return (org_ptr(0x1403ccf20L))(this, byDayID, uiMapInx, kInfo);
    };
    void GUILD_BATTLE::CReservedGuildScheduleDayGroup::Send(char byDayID, unsigned int uiMapID, int n, unsigned int dwVer, char byPage, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*, char, unsigned int, int, unsigned int, char, unsigned int);
        (org_ptr(0x1403cd040L))(this, byDayID, uiMapID, n, dwVer, byPage, dwGuildSerial);
    };
    GUILD_BATTLE::CReservedGuildScheduleDayGroup::~CReservedGuildScheduleDayGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*);
        (org_ptr(0x1403ccbf0L))(this);
    };
    void GUILD_BATTLE::CReservedGuildScheduleDayGroup::dtor_CReservedGuildScheduleDayGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup*);
        (org_ptr(0x1403ccbf0L))(this);
    };
END_ATF_NAMESPACE
