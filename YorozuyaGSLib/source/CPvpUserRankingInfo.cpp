#include <CPvpUserRankingInfo.hpp>


START_ATF_NAMESPACE
    CPvpUserRankingInfo::CPvpUserRankingInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x140344090L))(this);
    };
    void CPvpUserRankingInfo::ctor_CPvpUserRankingInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x140344090L))(this);
    };
    void CPvpUserRankingInfo::ClearTomorrowPvpRankData()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x14032d7b0L))(this);
    };
    void CPvpUserRankingInfo::DoDayChangedWork(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, struct CLogFile*);
        (org_ptr(0x14032d450L))(this, pkLogger);
    };
    unsigned int CPvpUserRankingInfo::FindRank(char byRaceCode, unsigned int dwAvatorSerial)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPvpUserRankingInfo*, char, unsigned int);
        return (org_ptr(0x14032ca60L))(this, byRaceCode, dwAvatorSerial);
    };
    void CPvpUserRankingInfo::FlipPvPRankTop()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x14032d160L))(this);
    };
    char CPvpUserRankingInfo::GetBossType(char byRaceCode, unsigned int dwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char, unsigned int);
        return (org_ptr(0x14032d8f0L))(this, byRaceCode, dwSerial);
    };
    struct _PVP_RANK_DATA* CPvpUserRankingInfo::GetCurrentPvpRankData(char byRace, char byNth)
    {
        using org_ptr = struct _PVP_RANK_DATA* (WINAPIV*)(struct CPvpUserRankingInfo*, char, char);
        return (org_ptr(0x14032d6b0L))(this, byRace, byNth);
    };
    unsigned int CPvpUserRankingInfo::GetCurrentRaceBossSerial(char byRace, char byNth)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPvpUserRankingInfo*, char, char);
        return (org_ptr(0x140079ba0L))(this, byRace, byNth);
    };
    char CPvpUserRankingInfo::GetPvpRankDataVersion()
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*);
        return (org_ptr(0x140344810L))(this);
    };
    struct _PVP_RANK_PACKED_DATA* CPvpUserRankingInfo::GetRankPackedData(char byRace, char byPage)
    {
        using org_ptr = struct _PVP_RANK_PACKED_DATA* (WINAPIV*)(struct CPvpUserRankingInfo*, char, char);
        return (org_ptr(0x14032d730L))(this, byRace, byPage);
    };
    struct _PVP_RANK_DATA* CPvpUserRankingInfo::GetTomorrowPvpRankData(char byRace, char byNth)
    {
        using org_ptr = struct _PVP_RANK_DATA* (WINAPIV*)(struct CPvpUserRankingInfo*, char, char);
        return (org_ptr(0x14032d860L))(this, byRace, byNth);
    };
    void CPvpUserRankingInfo::IncreaseVesion()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x1402b9b40L))(this);
    };
    bool CPvpUserRankingInfo::IsCurrentRaceBossGroup(char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpUserRankingInfo*, char, unsigned int);
        return (org_ptr(0x14032da20L))(this, byRace, dwSerial);
    };
    bool CPvpUserRankingInfo::IsRaceViceBoss(char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpUserRankingInfo*, char, unsigned int);
        return (org_ptr(0x14032d990L))(this, byRace, dwSerial);
    };
    bool CPvpUserRankingInfo::LoadPvpRank(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032caf0L))(this, szDate);
    };
    void CPvpUserRankingInfo::PvpRankDataPacking(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, struct CLogFile*);
        (org_ptr(0x14032cd10L))(this, pkLogger);
    };
    void CPvpUserRankingInfo::PvpRankListRequest(uint16_t wIndex, char byRace, char byVersion, char byPage)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, uint16_t, char, char, char);
        (org_ptr(0x14032dab0L))(this, wIndex, byRace, byVersion, byPage);
    };
    void CPvpUserRankingInfo::SendMsg_PvpRankListData(uint16_t wIndex, char byRace, char byVersion, char byPage)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, uint16_t, char, char, char);
        (org_ptr(0x14032e020L))(this, wIndex, byRace, byVersion, byPage);
    };
    void CPvpUserRankingInfo::SendMsg_PvpRankListNodata(uint16_t wIndex, char byRace, char byPage, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, uint16_t, char, char, char);
        (org_ptr(0x14032df70L))(this, wIndex, byRace, byPage, byRet);
    };
    void CPvpUserRankingInfo::SetCurrentRaceBossSerial(char byRace, char byNth, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, char, char, unsigned int);
        (org_ptr(0x14032d630L))(this, byRace, byNth, dwSerial);
    };
    void CPvpUserRankingInfo::SetUpdateRaceBossSerial(char byRace, char byNth, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*, char, char, unsigned int);
        (org_ptr(0x14032d5b0L))(this, byRace, byNth, dwSerial);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep1(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032db50L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep10(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032deb0L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep2(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032dbb0L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep3(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032dc10L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep4(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032dc70L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep5(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032dcd0L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep6(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032dd30L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep7(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032dd90L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep8(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032ddf0L))(this, szData);
    };
    char CPvpUserRankingInfo::UpdateRaceRankStep9(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CPvpUserRankingInfo*, char*);
        return (org_ptr(0x14032de50L))(this, szData);
    };
    bool CPvpUserRankingInfo::assign()
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpUserRankingInfo*);
        return (org_ptr(0x14032c7a0L))(this);
    };
    CPvpUserRankingInfo::~CPvpUserRankingInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x14032bc00L))(this);
    };
    void CPvpUserRankingInfo::dtor_CPvpUserRankingInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpUserRankingInfo*);
        (org_ptr(0x14032bc00L))(this);
    };
END_ATF_NAMESPACE
