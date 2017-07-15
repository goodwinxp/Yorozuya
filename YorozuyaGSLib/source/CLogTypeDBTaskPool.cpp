#include <CLogTypeDBTaskPool.hpp>


START_ATF_NAMESPACE
    CLogTypeDBTaskPool::CLogTypeDBTaskPool()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskPool*);
        (org_ptr(0x1402c1ea0L))(this);
    };
    void CLogTypeDBTaskPool::ctor_CLogTypeDBTaskPool()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskPool*);
        (org_ptr(0x1402c1ea0L))(this);
    };
    void CLogTypeDBTaskPool::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskPool*);
        (org_ptr(0x1402c28d0L))(this);
    };
    struct CLogTypeDBTask* CLogTypeDBTaskPool::GetComplete()
    {
        using org_ptr = struct CLogTypeDBTask* (WINAPIV*)(struct CLogTypeDBTaskPool*);
        return (org_ptr(0x1402c25d0L))(this);
    };
    struct CLogTypeDBTask* CLogTypeDBTaskPool::GetEmpty()
    {
        using org_ptr = struct CLogTypeDBTask* (WINAPIV*)(struct CLogTypeDBTaskPool*);
        return (org_ptr(0x1402c2430L))(this);
    };
    struct CLogTypeDBTask* CLogTypeDBTaskPool::GetProc()
    {
        using org_ptr = struct CLogTypeDBTask* (WINAPIV*)(struct CLogTypeDBTaskPool*);
        return (org_ptr(0x1402c2510L))(this);
    };
    bool CLogTypeDBTaskPool::Init(unsigned int uiBuffSize, unsigned int uiMaxCnt, struct CLogFile* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskPool*, unsigned int, unsigned int, struct CLogFile*);
        return (org_ptr(0x1402c2110L))(this, uiBuffSize, uiMaxCnt, kLogger);
    };
    bool CLogTypeDBTaskPool::SetComplete(struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskPool*, struct CLogTypeDBTask*, struct CLogFile*);
        return (org_ptr(0x1402c2750L))(this, pTask, kLogger);
    };
    bool CLogTypeDBTaskPool::SetEmpty(struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskPool*, struct CLogTypeDBTask*, struct CLogFile*);
        return (org_ptr(0x1402c2810L))(this, pTask, kLogger);
    };
    bool CLogTypeDBTaskPool::SetProc(struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskPool*, struct CLogTypeDBTask*, struct CLogFile*);
        return (org_ptr(0x1402c2690L))(this, pTask, kLogger);
    };
    CLogTypeDBTaskPool::~CLogTypeDBTaskPool()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskPool*);
        (org_ptr(0x1402c1fc0L))(this);
    };
    void CLogTypeDBTaskPool::dtor_CLogTypeDBTaskPool()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskPool*);
        (org_ptr(0x1402c1fc0L))(this);
    };
END_ATF_NAMESPACE
