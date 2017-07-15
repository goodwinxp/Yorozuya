#include <CAsyncLogInfo.hpp>


START_ATF_NAMESPACE
    CAsyncLogInfo::CAsyncLogInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        (org_ptr(0x1403bc9f0L))(this);
    };
    void CAsyncLogInfo::ctor_CAsyncLogInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        (org_ptr(0x1403bc9f0L))(this);
    };
    unsigned int CAsyncLogInfo::GetCount()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CAsyncLogInfo*);
        return (org_ptr(0x1403c16b0L))(this);
    };
    char* CAsyncLogInfo::GetDirPath()
    {
        using org_ptr = char* (WINAPIV*)(struct CAsyncLogInfo*);
        return (org_ptr(0x1403c1630L))(this);
    };
    char* CAsyncLogInfo::GetFileName()
    {
        using org_ptr = char* (WINAPIV*)(struct CAsyncLogInfo*);
        return (org_ptr(0x1403c16d0L))(this);
    };
    char* CAsyncLogInfo::GetTypeName()
    {
        using org_ptr = char* (WINAPIV*)(struct CAsyncLogInfo*);
        return (org_ptr(0x1403c1650L))(this);
    };
    void CAsyncLogInfo::IncreaseCount()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        (org_ptr(0x1403c16f0L))(this);
    };
    bool CAsyncLogInfo::Init(ASYNC_LOG_TYPE eType, char* szDirPath, char* szTypeName, bool bAddDateFileName, unsigned int dwUpdateFileNameDelay, struct CLogFile* logLoading)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogInfo*, ASYNC_LOG_TYPE, char*, char*, bool, unsigned int, struct CLogFile*);
        return (org_ptr(0x1403bcb80L))(this, eType, szDirPath, szTypeName, bAddDateFileName, dwUpdateFileNameDelay, logLoading);
    };
    void CAsyncLogInfo::UpdateLogFileName()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        (org_ptr(0x1403bd0f0L))(this);
    };
    CAsyncLogInfo::~CAsyncLogInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        (org_ptr(0x1403bca80L))(this);
    };
    void CAsyncLogInfo::dtor_CAsyncLogInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogInfo*);
        (org_ptr(0x1403bca80L))(this);
    };
END_ATF_NAMESPACE
