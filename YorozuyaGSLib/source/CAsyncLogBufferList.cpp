#include <CAsyncLogBufferList.hpp>


START_ATF_NAMESPACE
    CAsyncLogBufferList::CAsyncLogBufferList()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        (org_ptr(0x1403bd460L))(this);
    };
    void CAsyncLogBufferList::ctor_CAsyncLogBufferList()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        (org_ptr(0x1403bd460L))(this);
    };
    unsigned int CAsyncLogBufferList::GetBufferSize()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CAsyncLogBufferList*);
        return (org_ptr(0x1403c1770L))(this);
    };
    int CAsyncLogBufferList::GetEmptySize()
    {
        using org_ptr = int (WINAPIV*)(struct CAsyncLogBufferList*);
        return (org_ptr(0x1403c1790L))(this);
    };
    int CAsyncLogBufferList::GetProcCount()
    {
        using org_ptr = int (WINAPIV*)(struct CAsyncLogBufferList*);
        return (org_ptr(0x1403c1720L))(this);
    };
    bool CAsyncLogBufferList::Init(unsigned int uiMaxBufferCnt, unsigned int uiMaxBufferSize, struct CLogFile* logLoading)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogBufferList*, unsigned int, unsigned int, struct CLogFile*);
        return (org_ptr(0x1403bd510L))(this, uiMaxBufferCnt, uiMaxBufferSize, logLoading);
    };
    bool CAsyncLogBufferList::Log(char* pszFileName, char* szLog, int iLen)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogBufferList*, char*, char*, int);
        return (org_ptr(0x1403bd780L))(this, pszFileName, szLog, iLen);
    };
    void CAsyncLogBufferList::ProcWrite()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        (org_ptr(0x1403bd860L))(this);
    };
    void CAsyncLogBufferList::WriteFile(char* pszFileName, int nLen, char* pszData)
    {
        using org_ptr = void (WINAPIV*)(char*, int, char*);
        (org_ptr(0x1403bd960L))(pszFileName, nLen, pszData);
    };
    CAsyncLogBufferList::~CAsyncLogBufferList()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        (org_ptr(0x1403c1340L))(this);
    };
    void CAsyncLogBufferList::dtor_CAsyncLogBufferList()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
        (org_ptr(0x1403c1340L))(this);
    };
END_ATF_NAMESPACE
