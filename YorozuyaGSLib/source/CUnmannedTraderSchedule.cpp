#include <CUnmannedTraderSchedule.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderSchedule::CUnmannedTraderSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*);
        (org_ptr(0x140394580L))(this);
    };
    void CUnmannedTraderSchedule::ctor_CUnmannedTraderSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*);
        (org_ptr(0x140394580L))(this);
    };
    void CUnmannedTraderSchedule::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*);
        (org_ptr(0x140351b00L))(this);
    };
    void CUnmannedTraderSchedule::CompleteClear(char byDBQueryRet, char byProcRet)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*, char, char);
        (org_ptr(0x1403978c0L))(this, byDBQueryRet, byProcRet);
    };
    unsigned int CUnmannedTraderSchedule::GetOwnerSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderSchedule*);
        return (org_ptr(0x140394710L))(this);
    };
    unsigned int CUnmannedTraderSchedule::GetRegistSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderSchedule*);
        return (org_ptr(0x140394ac0L))(this);
    };
    char CUnmannedTraderSchedule::GetType()
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderSchedule*);
        return (org_ptr(0x140394aa0L))(this);
    };
    bool CUnmannedTraderSchedule::IsDone()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSchedule*);
        return (org_ptr(0x140394730L))(this);
    };
    bool CUnmannedTraderSchedule::IsWait()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderSchedule*);
        return (org_ptr(0x140394c10L))(this);
    };
    void CUnmannedTraderSchedule::PushClear(bool bTimeLimit)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*, bool);
        (org_ptr(0x1403976e0L))(this, bTimeLimit);
    };
    void CUnmannedTraderSchedule::Set(char byType, unsigned int dwSerial, int64_t tEndTime, unsigned int dwOwnerSerial, unsigned int dwK)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*, char, unsigned int, int64_t, unsigned int, unsigned int);
        (org_ptr(0x140397620L))(this, byType, dwSerial, tEndTime, dwOwnerSerial, dwK);
    };
    CUnmannedTraderSchedule::~CUnmannedTraderSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*);
        (org_ptr(0x1403945d0L))(this);
    };
    void CUnmannedTraderSchedule::dtor_CUnmannedTraderSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderSchedule*);
        (org_ptr(0x1403945d0L))(this);
    };
    
END_ATF_NAMESPACE
