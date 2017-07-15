#include <GUILD_BATTLE__CReservedGuildScheduleMapGroup.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CReservedGuildScheduleMapGroup::CReservedGuildScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        (org_ptr(0x1403cc340L))(this);
    };
    void GUILD_BATTLE::CReservedGuildScheduleMapGroup::ctor_CReservedGuildScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        (org_ptr(0x1403cc340L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildScheduleMapGroup::Clear()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        return (org_ptr(0x1403cc4c0L))(this);
    };
    struct GUILD_BATTLE::CReservedGuildSchedulePage* GUILD_BATTLE::CReservedGuildScheduleMapGroup::Find(unsigned int dwGuildSerial)
    {
        using org_ptr = struct GUILD_BATTLE::CReservedGuildSchedulePage* (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*, unsigned int);
        return (org_ptr(0x1403cca30L))(this, dwGuildSerial);
    };
    void GUILD_BATTLE::CReservedGuildScheduleMapGroup::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        (org_ptr(0x1403ccb50L))(this);
    };
    char GUILD_BATTLE::CReservedGuildScheduleMapGroup::GetMaxPage()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        return (org_ptr(0x1403d0a80L))(this);
    };
    bool GUILD_BATTLE::CReservedGuildScheduleMapGroup::Init(unsigned int uiMapInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*, unsigned int);
        return (org_ptr(0x1403cc420L))(this, uiMapInx);
    };
    bool GUILD_BATTLE::CReservedGuildScheduleMapGroup::Load(char byDayID, struct _worlddb_guild_battle_reserved_schedule_info* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*, char, struct _worlddb_guild_battle_reserved_schedule_info*);
        return (org_ptr(0x1403cc540L))(this, byDayID, kInfo);
    };
    void GUILD_BATTLE::CReservedGuildScheduleMapGroup::Send(int n, unsigned int dwVer, char byPage, struct GUILD_BATTLE::CReservedGuildSchedulePage* pkSelfInfoPage)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*, int, unsigned int, char, struct GUILD_BATTLE::CReservedGuildSchedulePage*);
        (org_ptr(0x1403ccad0L))(this, n, dwVer, byPage, pkSelfInfoPage);
    };
    GUILD_BATTLE::CReservedGuildScheduleMapGroup::~CReservedGuildScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        (org_ptr(0x1403cc3c0L))(this);
    };
    void GUILD_BATTLE::CReservedGuildScheduleMapGroup::dtor_CReservedGuildScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CReservedGuildScheduleMapGroup*);
        (org_ptr(0x1403cc3c0L))(this);
    };
END_ATF_NAMESPACE
