#include <GuildCreateEventInfo.hpp>


START_ATF_NAMESPACE
    bool GuildCreateEventInfo::ApplyModifiedGuildEventInfo()
    {
        using org_ptr = bool (WINAPIV*)(struct GuildCreateEventInfo*);
        return (org_ptr(0x14025a630L))(this);
    };
    bool GuildCreateEventInfo::CheckEventDate()
    {
        using org_ptr = bool (WINAPIV*)(struct GuildCreateEventInfo*);
        return (org_ptr(0x14025a730L))(this);
    };
    unsigned int GuildCreateEventInfo::GetEmblemDalant()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GuildCreateEventInfo*);
        return (org_ptr(0x14025d640L))(this);
    };
    unsigned int GuildCreateEventInfo::GetEstConsumeDalant()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GuildCreateEventInfo*);
        return (org_ptr(0x1400ad130L))(this);
    };
    GuildCreateEventInfo::GuildCreateEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x140202f60L))(this);
    };
    void GuildCreateEventInfo::ctor_GuildCreateEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x140202f60L))(this);
    };
    void GuildCreateEventInfo::Init()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x14025a310L))(this);
    };
    void GuildCreateEventInfo::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x14025a3f0L))(this);
    };
    void GuildCreateEventInfo::ReadEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x14025a4f0L))(this);
    };
    void GuildCreateEventInfo::SetConsumeDalantFree(bool bEnable)
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*, bool);
        (org_ptr(0x14025a6e0L))(this, bEnable);
    };
    GuildCreateEventInfo::~GuildCreateEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x140202fb0L))(this);
    };
    void GuildCreateEventInfo::dtor_GuildCreateEventInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GuildCreateEventInfo*);
        (org_ptr(0x140202fb0L))(this);
    };
END_ATF_NAMESPACE
