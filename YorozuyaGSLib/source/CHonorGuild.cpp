#include <CHonorGuild.hpp>


START_ATF_NAMESPACE
    CHonorGuild::CHonorGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*);
        (org_ptr(0x14025e2a0L))(this);
    };
    void CHonorGuild::ctor_CHonorGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*);
        (org_ptr(0x14025e2a0L))(this);
    };
    void CHonorGuild::ChangeHonorGuild(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, char);
        (org_ptr(0x14025f240L))(this, byRace);
    };
    bool CHonorGuild::CheckHonorGuild(char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CHonorGuild*, char, unsigned int);
        return (org_ptr(0x14025fd30L))(this, byRace, dwSerial);
    };
    void CHonorGuild::DQSCompleteInAtradTaxMoney(char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, char*);
        (org_ptr(0x14025f0c0L))(this, pdata);
    };
    void CHonorGuild::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*);
        (org_ptr(0x14025e4b0L))(this);
    };
    char CHonorGuild::FindHonorGuildRank(char byRace, unsigned int dwGuildSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CHonorGuild*, char, unsigned int);
        return (org_ptr(0x14025f980L))(this, byRace, dwGuildSerial);
    };
    bool CHonorGuild::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CHonorGuild*);
        return (org_ptr(0x14025e540L))(this);
    };
    struct CHonorGuild* CHonorGuild::Instance()
    {
        using org_ptr = struct CHonorGuild* (WINAPIV*)();
        return (org_ptr(0x14025e3e0L))();
    };
    bool CHonorGuild::LoadDB()
    {
        using org_ptr = bool (WINAPIV*)(struct CHonorGuild*);
        return (org_ptr(0x14025e710L))(this);
    };
    void CHonorGuild::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*);
        (org_ptr(0x14025fb70L))(this);
    };
    void CHonorGuild::LoopSubProcSendInform(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, char);
        (org_ptr(0x14025fbe0L))(this, byRace);
    };
    void CHonorGuild::SendCurrHonorGuildList(uint16_t wIndex, char byRace, char byUI)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, uint16_t, char, char);
        (org_ptr(0x14025ed00L))(this, wIndex, byRace, byUI);
    };
    void CHonorGuild::SendInformChange(char byRace, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, char, uint16_t);
        (org_ptr(0x14025f850L))(this, byRace, wIndex);
    };
    void CHonorGuild::SendNextHonorGuildList(uint16_t wIndex, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, uint16_t, char);
        (org_ptr(0x14025edb0L))(this, wIndex, byRace);
    };
    void CHonorGuild::SetGuildMaintainMoney(char byRace, unsigned int dwTax, unsigned int dwSeller)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, char, unsigned int, unsigned int);
        (org_ptr(0x14025eea0L))(this, byRace, dwTax, dwSeller);
    };
    char CHonorGuild::SetNextHonorGuild(char byRace, struct _guild_honor_set_request_clzo* pRecv)
    {
        using org_ptr = char (WINAPIV*)(struct CHonorGuild*, char, struct _guild_honor_set_request_clzo*);
        return (org_ptr(0x14025e900L))(this, byRace, pRecv);
    };
    char CHonorGuild::UpdateChangeHonorGuild(char byRace)
    {
        using org_ptr = char (WINAPIV*)(struct CHonorGuild*, char);
        return (org_ptr(0x14025f720L))(this, byRace);
    };
    void CHonorGuild::UpdateHonorGuildMark(struct _guild_honor_list_result_zocl* pList, int bSet)
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*, struct _guild_honor_list_result_zocl*, int);
        (org_ptr(0x14025fa30L))(this, pList, bSet);
    };
    char CHonorGuild::UpdateNextHonorGuild(char byRace)
    {
        using org_ptr = char (WINAPIV*)(struct CHonorGuild*, char);
        return (org_ptr(0x14025f520L))(this, byRace);
    };
    CHonorGuild::~CHonorGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*);
        (org_ptr(0x14025e320L))(this);
    };
    void CHonorGuild::dtor_CHonorGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CHonorGuild*);
        (org_ptr(0x14025e320L))(this);
    };
END_ATF_NAMESPACE
