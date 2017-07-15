#include <CUnmannedTraderScheduler.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderScheduler::CUnmannedTraderScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x140393120L))(this);
    };
    void CUnmannedTraderScheduler::ctor_CUnmannedTraderScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x140393120L))(this);
    };
    void CUnmannedTraderScheduler::CheatPushLoad()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x140351a10L))(this);
    };
    void CUnmannedTraderScheduler::ClearAll()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x140351a60L))(this);
    };
    void CUnmannedTraderScheduler::CompleteClear(char byDBQueryRet, char byProcRet, char byType, unsigned int dwRegistSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, char, char, char, unsigned int);
        (org_ptr(0x140393b60L))(this, byDBQueryRet, byProcRet, byType, dwRegistSerial);
    };
    void CUnmannedTraderScheduler::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140393330L))();
    };
    void CUnmannedTraderScheduler::DoDayChangedWork()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x140393f00L))(this);
    };
    std::_Vector_iterator<CUnmannedTraderSchedule>* CUnmannedTraderScheduler::FindItem(std::_Vector_iterator<CUnmannedTraderSchedule>* result, char byType, unsigned int dwRegistSerial)
    {
        using org_ptr = std::_Vector_iterator<CUnmannedTraderSchedule>* (WINAPIV*)(struct CUnmannedTraderScheduler*, std::_Vector_iterator<CUnmannedTraderSchedule>*, char, unsigned int);
        return (org_ptr(0x1403947e0L))(this, result, byType, dwRegistSerial);
    };
    bool CUnmannedTraderScheduler::FindWaitItem()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderScheduler*);
        return (org_ptr(0x140393da0L))(this);
    };
    bool CUnmannedTraderScheduler::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderScheduler*);
        return (org_ptr(0x1403933b0L))(this);
    };
    struct CUnmannedTraderScheduler* CUnmannedTraderScheduler::Instance()
    {
        using org_ptr = struct CUnmannedTraderScheduler* (WINAPIV*)();
        return (org_ptr(0x140393270L))();
    };
    bool CUnmannedTraderScheduler::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderScheduler*);
        return (org_ptr(0x1403935e0L))(this);
    };
    void CUnmannedTraderScheduler::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, char*);
        (org_ptr(0x140393d10L))(this, fmt);
    };
    void CUnmannedTraderScheduler::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x1403938c0L))(this);
    };
    void CUnmannedTraderScheduler::PushLoad()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x140394020L))(this);
    };
    void CUnmannedTraderScheduler::SetLogger(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, struct CLogFile*);
        (org_ptr(0x140351950L))(this, pkLogger);
    };
    void CUnmannedTraderScheduler::Update(struct _unmannedtrader_reserved_schedule_info* pkInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, struct _unmannedtrader_reserved_schedule_info*);
        (org_ptr(0x1403936b0L))(this, pkInfo);
    };
    CUnmannedTraderScheduler::~CUnmannedTraderScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x1403931d0L))(this);
    };
    void CUnmannedTraderScheduler::dtor_CUnmannedTraderScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
        (org_ptr(0x1403931d0L))(this);
    };
END_ATF_NAMESPACE
