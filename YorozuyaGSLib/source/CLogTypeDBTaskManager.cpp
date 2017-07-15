#include <CLogTypeDBTaskManager.hpp>


START_ATF_NAMESPACE
    CLogTypeDBTaskManager::CLogTypeDBTaskManager()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c2a90L))(this);
    };
    void CLogTypeDBTaskManager::ctor_CLogTypeDBTaskManager()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c2a90L))(this);
    };
    void CLogTypeDBTaskManager::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c3550L))(this);
    };
    void CLogTypeDBTaskManager::DBProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c3130L))(this);
    };
    void CLogTypeDBTaskManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402c2c50L))();
    };
    bool CLogTypeDBTaskManager::GetDBProc()
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*);
        return (org_ptr(0x1402c4360L))(this);
    };
    bool CLogTypeDBTaskManager::GetDBTaskConnectionStatus()
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*);
        return (org_ptr(0x1402c3870L))(this);
    };
    bool CLogTypeDBTaskManager::GetDBTaskDataStatus()
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*);
        return (org_ptr(0x1402c3850L))(this);
    };
    bool CLogTypeDBTaskManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*);
        return (org_ptr(0x1402c2cd0L))(this);
    };
    bool CLogTypeDBTaskManager::InitDB(char* szDBName, char* szDBIP)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*, char*, char*);
        return (org_ptr(0x1402c2e50L))(this, szDBName, szDBIP);
    };
    bool CLogTypeDBTaskManager::InitLogger()
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*);
        return (org_ptr(0x1402c36e0L))(this);
    };
    struct CLogTypeDBTaskManager* CLogTypeDBTaskManager::Instance()
    {
        using org_ptr = struct CLogTypeDBTaskManager* (WINAPIV*)();
        return (org_ptr(0x1402c2b90L))();
    };
    bool CLogTypeDBTaskManager::IsInitialized()
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*);
        return (org_ptr(0x140205810L))(this);
    };
    void CLogTypeDBTaskManager::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*, char*);
        (org_ptr(0x1402c3650L))(this, fmt);
    };
    void CLogTypeDBTaskManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c2f40L))(this);
    };
    void CLogTypeDBTaskManager::ProcComplete()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c3390L))(this);
    };
    void CLogTypeDBTaskManager::ProcThread(void* pParam)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x1402c3480L))(pParam);
    };
    bool CLogTypeDBTaskManager::Push(char byQueryType, char* pcData, uint16_t wSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CLogTypeDBTaskManager*, char, char*, uint16_t);
        return (org_ptr(0x1402c2fa0L))(this, byQueryType, pcData, wSize);
    };
    CLogTypeDBTaskManager::~CLogTypeDBTaskManager()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c2b10L))(this);
    };
    void CLogTypeDBTaskManager::dtor_CLogTypeDBTaskManager()
    {
        using org_ptr = void (WINAPIV*)(struct CLogTypeDBTaskManager*);
        (org_ptr(0x1402c2b10L))(this);
    };
    
END_ATF_NAMESPACE
