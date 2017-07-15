#include <CGuildRanking.hpp>


START_ATF_NAMESPACE
    void CGuildRanking::ApplyGuildGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140339500L))(this);
    };
    bool CGuildRanking::ApplyRankInGuild()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*);
        return (org_ptr(0x140339600L))(this);
    };
    CGuildRanking::CGuildRanking()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x1403442b0L))(this);
    };
    void CGuildRanking::ctor_CGuildRanking()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x1403442b0L))(this);
    };
    bool CGuildRanking::CheckAndCreateTodayGuildRankTable(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339fc0L))(this, szDate);
    };
    bool CGuildRanking::CheckGuildCheckSum(unsigned int dwSerial, char* wszGuildName, long double* dDalant, long double* dGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*, unsigned int, char*, long double*, long double*);
        return (org_ptr(0x14033a100L))(this, dwSerial, wszGuildName, dDalant, dGold);
    };
    void CGuildRanking::CheckMaxGuildMoney(unsigned int dwGuildSerial, char* wszGuildName, long double* pdDalant, long double* pdGold)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*, unsigned int, char*, long double*, long double*);
        (org_ptr(0x14033b300L))(this, dwGuildSerial, wszGuildName, pdDalant, pdGold);
    };
    void CGuildRanking::ClearApplyRankInGuildJobOffset()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140344950L))(this);
    };
    void CGuildRanking::ClearGuildGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140344830L))(this);
    };
    void CGuildRanking::ClearGuildSerial()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140344430L))(this);
    };
    void CGuildRanking::ClearRefreshData()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140339450L))(this);
    };
    unsigned int CGuildRanking::GetNextGuildSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CGuildRanking*);
        return (org_ptr(0x140344590L))(this);
    };
    int CGuildRanking::GetRankInGuildJobOffset()
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRanking*);
        return (org_ptr(0x140344970L))(this);
    };
    bool CGuildRanking::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*);
        return (org_ptr(0x140339210L))(this);
    };
    bool CGuildRanking::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*);
        return (org_ptr(0x140339320L))(this);
    };
    bool CGuildRanking::LoadAllGuildData(struct _worlddb_guild_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*, struct _worlddb_guild_info*);
        return (org_ptr(0x14033a5d0L))(this, pkInfo);
    };
    bool CGuildRanking::LoadGuildMoneyIOInfo(unsigned int dwGuildSerial, struct _io_money_data* pkIOInfo, int* pnIOMonHisNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*, unsigned int, struct _io_money_data*, int*);
        return (org_ptr(0x14033b0a0L))(this, dwGuildSerial, pkIOInfo, pnIOMonHisNum);
    };
    bool CGuildRanking::LoadMemberInfo(unsigned int dwMasterSerial, unsigned int dwGuildSerial, struct _guild_member_info* pkMemberInfo, uint16_t* pwMemberCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*, unsigned int, unsigned int, struct _guild_member_info*, uint16_t*);
        return (org_ptr(0x14033acb0L))(this, dwMasterSerial, dwGuildSerial, pkMemberInfo, pwMemberCnt);
    };
    bool CGuildRanking::SetLoadAllGuildInfo(struct _worlddb_guild_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*, struct _worlddb_guild_info*);
        return (org_ptr(0x14033a720L))(this, pkInfo);
    };
    void CGuildRanking::SetLogger(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*, struct CLogFile*);
        (org_ptr(0x14032b7b0L))(this, pkLogger);
    };
    char CGuildRanking::UpdateAndSelectGuildGrade(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339e90L))(this, szData);
    };
    char CGuildRanking::UpdateGuildRankStep1(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339780L))(this, szData);
    };
    char CGuildRanking::UpdateGuildRankStep2(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x1403397e0L))(this, szData);
    };
    char CGuildRanking::UpdateGuildRankStep3(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339840L))(this, szData);
    };
    char CGuildRanking::UpdateGuildRankStep4(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x1403398a0L))(this, szData);
    };
    bool CGuildRanking::UpdateRankAndGrade()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRanking*);
        return (org_ptr(0x14033a460L))(this);
    };
    char CGuildRanking::UpdateRankinGuildStep1(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339940L))(this, szData);
    };
    char CGuildRanking::UpdateRankinGuildStep2(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x1403399c0L))(this, szData);
    };
    char CGuildRanking::UpdateRankinGuildStep3(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339a20L))(this, szData);
    };
    char CGuildRanking::UpdateRankinGuildStep4(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339a80L))(this, szData);
    };
    char CGuildRanking::UpdateRankinGuildStep5(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339ae0L))(this, szData);
    };
    char CGuildRanking::UpdateRankinGuildStep6(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRanking*, char*);
        return (org_ptr(0x140339e40L))(this, szData);
    };
    CGuildRanking::~CGuildRanking()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140338f20L))(this);
    };
    void CGuildRanking::dtor_CGuildRanking()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRanking*);
        (org_ptr(0x140338f20L))(this);
    };
END_ATF_NAMESPACE
