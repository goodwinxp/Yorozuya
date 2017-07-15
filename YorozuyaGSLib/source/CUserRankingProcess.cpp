#include <CUserRankingProcess.hpp>


START_ATF_NAMESPACE
    bool CUserRankingProcess::AllocObject()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*);
        return (org_ptr(0x140342480L))(this);
    };
    CUserRankingProcess::CUserRankingProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140340470L))(this);
    };
    void CUserRankingProcess::ctor_CUserRankingProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140340470L))(this);
    };
    bool CUserRankingProcess::CheckAndCreateTodayPvpRankTable(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1403426f0L))(this, szDate);
    };
    void CUserRankingProcess::CheckTomorrowPvpRankDate()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1403429c0L))(this);
    };
    void CUserRankingProcess::CompleteGuildRankStep1(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341430L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteGuildRankStep2(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341530L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteGuildRankStep3(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341630L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteGuildRankStep4(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341740L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep1(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340930L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep10(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341220L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep11(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341320L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep2(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340a30L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep3(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340b30L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep4(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340c30L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep5(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340d30L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep6(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340e30L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep7(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140340f30L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep8(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341030L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRaceRankStep9(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341120L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankInGuildStep1(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x1403418a0L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankInGuildStep2(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341a20L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankInGuildStep3(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341ba0L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankInGuildStep4(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341d20L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankInGuildStep5(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140341ea0L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankInGuildStep6(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140342020L))(this, byRet, szData);
    };
    void CUserRankingProcess::CompleteRankUpdateAndSelectGarde(char byRet, char* szData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char*);
        (org_ptr(0x140342170L))(this, byRet, szData);
    };
    unsigned int CUserRankingProcess::FindRank(char byRaceCode, unsigned int dwAvatorSerial)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUserRankingProcess*, char, unsigned int);
        return (org_ptr(0x1402b7fb0L))(this, byRaceCode, dwAvatorSerial);
    };
    void CUserRankingProcess::FlipPvPRankTop()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1402b9aa0L))(this);
    };
    char CUserRankingProcess::GetBossType(char byRace, unsigned int dwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char, unsigned int);
        return (org_ptr(0x140079c70L))(this, byRace, dwSerial);
    };
    struct _PVP_RANK_DATA* CUserRankingProcess::GetCurrentPvpRankData(char byRace, char byNth)
    {
        using org_ptr = struct _PVP_RANK_DATA* (WINAPIV*)(struct CUserRankingProcess*, char, char);
        return (org_ptr(0x140284c40L))(this, byRace, byNth);
    };
    unsigned int CUserRankingProcess::GetCurrentRaceBossSerial(char byRace, char byNth)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUserRankingProcess*, char, char);
        return (org_ptr(0x140079b30L))(this, byRace, byNth);
    };
    void CUserRankingProcess::GetRankDateStr(char* szDate, uint64_t tDateStrSize)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char*, uint64_t);
        (org_ptr(0x1403426a0L))(this, szDate, tDateStrSize);
    };
    void CUserRankingProcess::GetTommorrowStr(char* szTommorrow)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char*);
        (org_ptr(0x140342800L))(this, szTommorrow);
    };
    void CUserRankingProcess::IncreaseVesion()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1402b9af0L))(this);
    };
    bool CUserRankingProcess::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*);
        return (org_ptr(0x1403405e0L))(this);
    };
    bool CUserRankingProcess::InitProcFunc()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*);
        return (org_ptr(0x1403424f0L))(this);
    };
    bool CUserRankingProcess::IsCurrentRaceBossGroup(char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*, char, unsigned int);
        return (org_ptr(0x140079d30L))(this, byRace, dwSerial);
    };
    bool CUserRankingProcess::IsRaceViceBoss(char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*, char, unsigned int);
        return (org_ptr(0x14007dbd0L))(this, byRace, dwSerial);
    };
    bool CUserRankingProcess::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*);
        return (org_ptr(0x140340730L))(this);
    };
    void CUserRankingProcess::LoadINI(int* piHour, int* piMin)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, int*, int*);
        (org_ptr(0x140342230L))(this, piHour, piMin);
    };
    void CUserRankingProcess::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140340880L))(this);
    };
    void CUserRankingProcess::ProcApplyGuildGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1403431b0L))(this);
    };
    void CUserRankingProcess::ProcApplyRankInGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140343240L))(this);
    };
    void CUserRankingProcess::ProcFailedWait()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1403432f0L))(this);
    };
    void CUserRankingProcess::ProcNotifyVersionUp()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342fc0L))(this);
    };
    void CUserRankingProcess::ProcRankComplete()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342eb0L))(this);
    };
    void CUserRankingProcess::ProcRankStart()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342d30L))(this);
    };
    void CUserRankingProcess::ProcRankSuccess()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1403433c0L))(this);
    };
    void CUserRankingProcess::ProcSaveTargetList()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342bf0L))(this);
    };
    void CUserRankingProcess::ProcWait()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342b30L))(this);
    };
    void CUserRankingProcess::ProcWaitDayChanged()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342f00L))(this);
    };
    void CUserRankingProcess::PvpRankDataPacking()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x1402b9a40L))(this);
    };
    void CUserRankingProcess::PvpRankListRequest(uint16_t wIndex, char byRace, char byVersion, char byPage)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, uint16_t, char, char, char);
        (org_ptr(0x1401d9490L))(this, wIndex, byRace, byVersion, byPage);
    };
    void CUserRankingProcess::SetCurrentRaceBossSerial(char byRace, char byNth, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char, unsigned int);
        (org_ptr(0x1402bd5a0L))(this, byRace, byNth, dwSerial);
    };
    void CUserRankingProcess::SetLogger(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, struct CLogFile*);
        (org_ptr(0x14032b740L))(this, pkLogger);
    };
    bool CUserRankingProcess::SetRankingStartTime(int iHour, int iMin)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserRankingProcess*, int, int);
        return (org_ptr(0x1403422c0L))(this, iHour, iMin);
    };
    void CUserRankingProcess::SetUpdateRaceBossSerial(char byRace, char byNth, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*, char, char, unsigned int);
        (org_ptr(0x1402b9be0L))(this, byRace, byNth, dwSerial);
    };
    char CUserRankingProcess::UpdateAndSelectGuildGrade(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206a30L))(this, szData);
    };
    char CUserRankingProcess::UpdateGuildRankStep1(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1402062b0L))(this, szData);
    };
    char CUserRankingProcess::UpdateGuildRankStep2(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206370L))(this, szData);
    };
    char CUserRankingProcess::UpdateGuildRankStep3(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206430L))(this, szData);
    };
    char CUserRankingProcess::UpdateGuildRankStep4(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1402064f0L))(this, szData);
    };
    void CUserRankingProcess::UpdateNextRankingStartTime()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x140342b00L))(this);
    };
    char CUserRankingProcess::UpdateRaceRankStep1(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205a70L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep10(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206130L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep11(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1402061f0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep2(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205b30L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep3(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205bf0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep4(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205cb0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep5(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205d70L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep6(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205e30L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep7(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205ef0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep8(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140205fb0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRaceRankStep9(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206070L))(this, szData);
    };
    char CUserRankingProcess::UpdateRankinGuildStep1(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1402065b0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRankinGuildStep2(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206670L))(this, szData);
    };
    char CUserRankingProcess::UpdateRankinGuildStep3(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206730L))(this, szData);
    };
    char CUserRankingProcess::UpdateRankinGuildStep4(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1402067f0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRankinGuildStep5(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x1402068b0L))(this, szData);
    };
    char CUserRankingProcess::UpdateRankinGuildStep6(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CUserRankingProcess*, char*);
        return (org_ptr(0x140206970L))(this, szData);
    };
    CUserRankingProcess::~CUserRankingProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x14032b580L))(this);
    };
    void CUserRankingProcess::dtor_CUserRankingProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CUserRankingProcess*);
        (org_ptr(0x14032b580L))(this);
    };
    
END_ATF_NAMESPACE
