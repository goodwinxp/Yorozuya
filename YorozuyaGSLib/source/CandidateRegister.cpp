#include <CandidateRegister.hpp>


START_ATF_NAMESPACE
    CandidateRegister::CandidateRegister()
        : ElectProcessor(ProcessorType::_eCandidateRegister)
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*);
        (org_ptr(0x1402b6720L))(this);
    };
    void CandidateRegister::ctor_CandidateRegister()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*);
        (org_ptr(0x1402b6720L))(this);
    };
    int CandidateRegister::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateRegister*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402b68f0L))(this, eCmd, pOne, pdata);
    };
    bool CandidateRegister::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateRegister*);
        return (org_ptr(0x1402b67e0L))(this);
    };
    bool CandidateRegister::_AddToPacket(struct CPlayer* pOne, unsigned int dwWinCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, unsigned int);
        return (org_ptr(0x1402b6e40L))(this, pOne, dwWinCnt);
    };
    int CandidateRegister::_CheckPlayerInfo(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateRegister*, struct CPlayer*);
        return (org_ptr(0x1402b6d70L))(this, pOne);
    };
    void CandidateRegister::_InitCandidate()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*);
        (org_ptr(0x1402b70c0L))(this);
    };
    int CandidateRegister::_Regist(struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, char*);
        return (org_ptr(0x1402b6a40L))(this, pOne, pdata);
    };
    int CandidateRegister::_SendList(uint16_t wSock, char byRace)
    {
        using org_ptr = int (WINAPIV*)(struct CandidateRegister*, uint16_t, char);
        return (org_ptr(0x1402b6cc0L))(this, wSock, byRace);
    };
    void CandidateRegister::_SortCandidacyByPvpPoint(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*, char);
        (org_ptr(0x1402b7530L))(this, byRace);
    };
    void CandidateRegister::_UpdatePacketWin(char byRace, char* wszName, unsigned int dwWinCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*, char, char*, unsigned int);
        (org_ptr(0x1402b7430L))(this, byRace, wszName, dwWinCnt);
    };
    CandidateRegister::~CandidateRegister()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*);
        (org_ptr(0x1402b7df0L))(this);
    };
    void CandidateRegister::dtor_CandidateRegister()
    {
        using org_ptr = void (WINAPIV*)(struct CandidateRegister*);
        (org_ptr(0x1402b7df0L))(this);
    };
END_ATF_NAMESPACE
