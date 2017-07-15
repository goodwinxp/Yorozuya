#include <CLogTypeDBTask.hpp>


START_ATF_NAMESPACE
    CLogTypeDBTask::CLogTypeDBTask()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c1ca0L))(this);
    };
    void CLogTypeDBTask::ctor_CLogTypeDBTask()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c1ca0L))(this);
    };
    void CLogTypeDBTask::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c3fc0L))(this);
    };
    char CLogTypeDBTask::GetDBRet()
    {
        using org_ptr = char (WINAPIV*)(struct CLogTypeDBTask*);
        return (org_ptr(0x1402c42b0L))(this);
    };
    char* CLogTypeDBTask::GetData()
    {
        using org_ptr = char* (WINAPIV*)(struct CLogTypeDBTask*);
        return (org_ptr(0x1402c4250L))(this);
    };
    unsigned int CLogTypeDBTask::GetInx()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CLogTypeDBTask*);
        return (org_ptr(0x1402c4010L))(this);
    };
    char CLogTypeDBTask::GetProcRet()
    {
        using org_ptr = char (WINAPIV*)(struct CLogTypeDBTask*);
        return (org_ptr(0x1402c42d0L))(this);
    };
    int CLogTypeDBTask::GetQueryType()
    {
        using org_ptr = int (WINAPIV*)(struct CLogTypeDBTask*);
        return (org_ptr(0x1402c4030L))(this);
    };
    bool CLogTypeDBTask::Init(unsigned int dwInx, unsigned int uiSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTask*, unsigned int, unsigned int);
        return (org_ptr(0x1402c1d80L))(this, dwInx, uiSize);
    };
    bool CLogTypeDBTask::Set(char byQueryType, char* pcData, uint16_t wSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTask*, char, char*, uint16_t);
        return (org_ptr(0x1402c1e10L))(this, byQueryType, pcData, wSize);
    };
    void CLogTypeDBTask::SetComplete()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c4070L))(this);
    };
    void CLogTypeDBTask::SetEmpty()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c4090L))(this);
    };
    void CLogTypeDBTask::SetRet(char byDBRet, char byProcRet)
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*, char, char);
        (org_ptr(0x1402c4270L))(this, byDBRet, byProcRet);
    };
    void CLogTypeDBTask::SetUse()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c4050L))(this);
    };
    CLogTypeDBTask::~CLogTypeDBTask()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c1d00L))(this);
    };
    void CLogTypeDBTask::dtor_CLogTypeDBTask()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTask*);
        (org_ptr(0x1402c1d00L))(this);
    };
END_ATF_NAMESPACE
