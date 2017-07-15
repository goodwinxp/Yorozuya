#include <CRaceBuffHolyQuestResultInfo.hpp>


START_ATF_NAMESPACE
    CRaceBuffHolyQuestResultInfo::CRaceBuffHolyQuestResultInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        (org_ptr(0x1403b53b0L))(this);
    };
    void CRaceBuffHolyQuestResultInfo::ctor_CRaceBuffHolyQuestResultInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        (org_ptr(0x1403b53b0L))(this);
    };
    void CRaceBuffHolyQuestResultInfo::ClearResult()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        (org_ptr(0x1403b7c60L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::FindFailRace(char byWinRace, char byLoseRace, char* pbyFailRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*, char, char, char*);
        return (org_ptr(0x1403b5e50L))(this, byWinRace, byLoseRace, pbyFailRace);
    };
    unsigned int CRaceBuffHolyQuestResultInfo::GetContinueCnt(int iType)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*, int);
        return (org_ptr(0x1403b5790L))(this, iType);
    };
    int CRaceBuffHolyQuestResultInfo::GetResultType(char byRace, bool bGetScanner)
    {
        using org_ptr = int (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*, char, bool);
        return (org_ptr(0x1403b56e0L))(this, byRace, bGetScanner);
    };
    bool CRaceBuffHolyQuestResultInfo::IsChaos()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        return (org_ptr(0x1403b7da0L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::IsValidResult()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        return (org_ptr(0x1403b7b20L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        return (org_ptr(0x1403b5470L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::LoadINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        return (org_ptr(0x1403b5a30L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::Save()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        return (org_ptr(0x1403b5430L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::SaveINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        return (org_ptr(0x1403b57f0L))(this);
    };
    bool CRaceBuffHolyQuestResultInfo::SaveINISubProcSaveNum(char* szItem, char byNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*, char*, char);
        return (org_ptr(0x1403b5cf0L))(this, szItem, byNum);
    };
    void CRaceBuffHolyQuestResultInfo::SetBuffFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        (org_ptr(0x1403b5600L))(this);
    };
    void CRaceBuffHolyQuestResultInfo::SetResult(char byWinRace, char byLoseRace, unsigned int uiThMax)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*, char, char, unsigned int);
        (org_ptr(0x1403b5570L))(this, byWinRace, byLoseRace, uiThMax);
    };
    bool CRaceBuffHolyQuestResultInfo::SetResultSubProcSetRace(char byWinRace, char byLoseRace, unsigned int uiThMax)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*, char, char, unsigned int);
        return (org_ptr(0x1403b5f50L))(this, byWinRace, byLoseRace, uiThMax);
    };
    CRaceBuffHolyQuestResultInfo::~CRaceBuffHolyQuestResultInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        (org_ptr(0x1403b7c50L))(this);
    };
    void CRaceBuffHolyQuestResultInfo::dtor_CRaceBuffHolyQuestResultInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffHolyQuestResultInfo*);
        (org_ptr(0x1403b7c50L))(this);
    };
END_ATF_NAMESPACE
