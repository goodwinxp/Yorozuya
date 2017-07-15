#include <CAsyncLogger.hpp>


START_ATF_NAMESPACE
    CAsyncLogger::CAsyncLogger()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        (org_ptr(0x1403bda40L))(this);
    };
    void CAsyncLogger::ctor_CAsyncLogger()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        (org_ptr(0x1403bda40L))(this);
    };
    void CAsyncLogger::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403be1b0L))();
    };
    bool CAsyncLogger::FormatLog(int iType, char* fmt)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogger*, int, char*);
        return (org_ptr(0x1403bf220L))(this, iType, fmt);
    };
    int CAsyncLogger::GetTotalWaitSize()
    {
        using org_ptr = int (WINAPIV*)(struct CAsyncLogger*);
        return (org_ptr(0x1403bfd60L))(this);
    };
    int CAsyncLogger::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CAsyncLogger*);
        return (org_ptr(0x1403be220L))(this);
    };
    struct CAsyncLogger* CAsyncLogger::Instance()
    {
        using org_ptr = struct CAsyncLogger* (WINAPIV*)();
        return (org_ptr(0x1403be0f0L))();
    };
    void CAsyncLogger::Log(char* szFileName, char* szLog, int iLenStr)
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*, char*, char*, int);
        (org_ptr(0x1403c00e0L))(this, szFileName, szLog, iLenStr);
    };
    bool CAsyncLogger::Log(int iType, char* szLog)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogger*, int, char*);
        return (org_ptr(0x1403bfa00L))(this, iType, szLog);
    };
    bool CAsyncLogger::LogFromArg(int iType, char* fmt, char* arg_ptr)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogger*, int, char*, char*);
        return (org_ptr(0x1403bf620L))(this, iType, fmt, arg_ptr);
    };
    void CAsyncLogger::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        (org_ptr(0x1403be870L))(this);
    };
    void CAsyncLogger::ProcThread(void* p)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x1403bfe00L))(p);
    };
    void CAsyncLogger::ProcWrite()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        (org_ptr(0x1403beab0L))(this);
    };
    bool CAsyncLogger::Regist(ASYNC_LOG_TYPE eType, char* szDirPath, char* szTypeName, bool bAddDateFileName, unsigned int dwUpdateFileNameDelay)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogger*, ASYNC_LOG_TYPE, char*, char*, bool, unsigned int);
        return (org_ptr(0x1403bebb0L))(this, eType, szDirPath, szTypeName, bAddDateFileName, dwUpdateFileNameDelay);
    };
    void CAsyncLogger::SystemLog(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*, char*);
        (org_ptr(0x1403bfe60L))(this, fmt);
    };
    CAsyncLogger::~CAsyncLogger()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        (org_ptr(0x1403bdc40L))(this);
    };
    void CAsyncLogger::dtor_CAsyncLogger()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogger*);
        (org_ptr(0x1403bdc40L))(this);
    };
    
    
    
END_ATF_NAMESPACE
