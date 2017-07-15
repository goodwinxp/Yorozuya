#include <CandidateMgr.hpp>


START_ATF_NAMESPACE
    void CandidateMgr::AddScore(char byRace, char* wszName, char byScore)
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*, char, char*, char);
        (org_ptr(0x1402b38a0L))(this, byRace, wszName, byScore);
    };
    void CandidateMgr::ApplyPatriarchGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b4870L))(this);
    };
    bool CandidateMgr::AppointPatriarchGroup(struct CPlayer* pOne, _candidate_info::ClassType eClassType)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, struct CPlayer*, _candidate_info::ClassType);
        return (org_ptr(0x1402b4c20L))(this, pOne, eClassType);
    };
    CandidateMgr::CandidateMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b1020L))(this);
    };
    void CandidateMgr::ctor_CandidateMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b1020L))(this);
    };
    void CandidateMgr::ChangeState_1to2()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b2260L))(this);
    };
    int CandidateMgr::CheckDBValidCharacter(char byProc)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*, char);
        return (org_ptr(0x1402b4fb0L))(this, byProc);
    };
    void CandidateMgr::CompleteInsertCandidate(char byRet, char* p)
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*, char, char*);
        (org_ptr(0x1402b4960L))(this, byRet, p);
    };
    bool CandidateMgr::DischargePatriarchGroup(char byRace, _candidate_info::ClassType eClassType)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, char, _candidate_info::ClassType);
        return (org_ptr(0x1402b4ea0L))(this, byRace, eClassType);
    };
    void CandidateMgr::FinalDecision()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b2f90L))(this);
    };
    struct _candidate_info* CandidateMgr::GetCandidate(char byRace, unsigned int dwIdx)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char, unsigned int);
        return (org_ptr(0x1402b7eb0L))(this, byRace, dwIdx);
    };
    struct _candidate_info* CandidateMgr::GetCandidateBySerial(char byRace, unsigned int dwASerial)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char, unsigned int);
        return (org_ptr(0x1402b34a0L))(this, byRace, dwASerial);
    };
    int CandidateMgr::GetCandidateCnt_1st(char byRace)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*, char);
        return (org_ptr(0x1402b7e90L))(this, byRace);
    };
    int CandidateMgr::GetCandidateCnt_2st(char byRace)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*, char);
        return (org_ptr(0x1402c0530L))(this, byRace);
    };
    struct _candidate_info* CandidateMgr::GetCandidate_2st(char byRace, int nIdx)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char, int);
        return (org_ptr(0x1402b6480L))(this, byRace, nIdx);
    };
    struct _candidate_info* CandidateMgr::GetEmpty(char byRace)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char);
        return (org_ptr(0x1402b20a0L))(this, byRace);
    };
    struct _candidate_info* CandidateMgr::GetEmptyPatriarchGroup(char byRace)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char);
        return (org_ptr(0x1402b2130L))(this, byRace);
    };
    struct _candidate_info* CandidateMgr::GetLeader(char byRace, int nIdx)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char, int);
        return (org_ptr(0x1402b64f0L))(this, byRace, nIdx);
    };
    int CandidateMgr::GetMaxNum()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b7e70L))(this);
    };
    struct _candidate_info* CandidateMgr::GetPatriarchGroup(char byRace, _candidate_info::ClassType eType)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char, _candidate_info::ClassType);
        return (org_ptr(0x1402b32f0L))(this, byRace, eType);
    };
    struct _candidate_info* CandidateMgr::GetPatriarchGroupBySerial(char byRace, unsigned int dwASerial)
    {
        using org_ptr = struct _candidate_info* (WINAPIV*)(struct CandidateMgr*, char, unsigned int);
        return (org_ptr(0x1402b33d0L))(this, byRace, dwASerial);
    };
    unsigned int CandidateMgr::GetWinCnt(char byRace, unsigned int dwAvatorSerial)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CandidateMgr*, char, unsigned int);
        return (org_ptr(0x1402b21c0L))(this, byRace, dwAvatorSerial);
    };
    void CandidateMgr::InitCandidate()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b4700L))(this);
    };
    bool CandidateMgr::Initialize(int nMaxNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, int);
        return (org_ptr(0x1402b1200L))(this, nMaxNum);
    };
    int CandidateMgr::Insert_Candidate(char* p)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*, char*);
        return (org_ptr(0x1402b39a0L))(this, p);
    };
    struct CandidateMgr* CandidateMgr::Instance()
    {
        using org_ptr = struct CandidateMgr* (WINAPIV*)();
        return (org_ptr(0x1402b1140L))();
    };
    bool CandidateMgr::IsRegistedAvator_1(char byRace, unsigned int dwAvatorSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, char, unsigned int);
        return (org_ptr(0x1402b35e0L))(this, byRace, dwAvatorSerial);
    };
    bool CandidateMgr::IsRegistedAvator_2(char byRace, char* wszName)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, char, char*);
        return (org_ptr(0x1402b37a0L))(this, byRace, wszName);
    };
    bool CandidateMgr::IsRegistedAvator_2(char byRace, unsigned int dwAvatorSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, char, unsigned int);
        return (org_ptr(0x1402b36c0L))(this, byRace, dwAvatorSerial);
    };
    bool CandidateMgr::LoadDatabase()
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b1730L))(this);
    };
    bool CandidateMgr::LoadLeaderPreVersion(char byRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, char);
        return (org_ptr(0x1402b4690L))(this, byRace);
    };
    bool CandidateMgr::LoadPatriarchGroup()
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b1b00L))(this);
    };
    bool CandidateMgr::Regist(struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, struct CPlayer*);
        return (org_ptr(0x1402b1ba0L))(this, pOne);
    };
    bool CandidateMgr::Regist(char byRace, struct _PVP_RANK_DATA* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateMgr*, char, struct _PVP_RANK_DATA*);
        return (org_ptr(0x1402b1e70L))(this, byRace, pData);
    };
    void CandidateMgr::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b1640L))(this);
    };
    int CandidateMgr::Update_ClassType()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b3f90L))(this);
    };
    int CandidateMgr::Update_DischargePatriarch(char* p)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*, char*);
        return (org_ptr(0x1402b3e80L))(this, p);
    };
    int CandidateMgr::Update_Refund()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b4480L))(this);
    };
    int CandidateMgr::Update_RegistCandidate_2st()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b3c30L))(this);
    };
    int CandidateMgr::Update_Score()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b4140L))(this);
    };
    int CandidateMgr::Update_VoteTime(unsigned int dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*, unsigned int);
        return (org_ptr(0x1402b4360L))(this, dwSerial);
    };
    void CandidateMgr::__AddWinner(char byRace, char byNum)
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*, char, char);
        (org_ptr(0x1402b2490L))(this, byRace, byNum);
    };
    int CandidateMgr::__SortByPvpPoint()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b2ce0L))(this);
    };
    int CandidateMgr::__SortByRank()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b2a40L))(this);
    };
    int CandidateMgr::__SortByScore()
    {
        using org_ptr = int (WINAPIV*)(struct CandidateMgr*);
        return (org_ptr(0x1402b27a0L))(this);
    };
    CandidateMgr::~CandidateMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b10b0L))(this);
    };
    void CandidateMgr::dtor_CandidateMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateMgr*);
        (org_ptr(0x1402b10b0L))(this);
    };
END_ATF_NAMESPACE
