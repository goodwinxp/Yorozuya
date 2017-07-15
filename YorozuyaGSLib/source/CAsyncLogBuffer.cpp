#include <CAsyncLogBuffer.hpp>


START_ATF_NAMESPACE
    CAsyncLogBuffer::CAsyncLogBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBuffer*);
        (org_ptr(0x1403bd290L))(this);
    };
    void CAsyncLogBuffer::ctor_CAsyncLogBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBuffer*);
        (org_ptr(0x1403bd290L))(this);
    };
    char* CAsyncLogBuffer::GetFileName()
    {
        using org_ptr = char* (WINAPIV*)(struct CAsyncLogBuffer*);
        return (org_ptr(0x1403c1110L))(this);
    };
    int CAsyncLogBuffer::GetLength()
    {
        using org_ptr = int (WINAPIV*)(struct CAsyncLogBuffer*);
        return (org_ptr(0x1403c1130L))(this);
    };
    char* CAsyncLogBuffer::GetStr()
    {
        using org_ptr = char* (WINAPIV*)(struct CAsyncLogBuffer*);
        return (org_ptr(0x1403c1150L))(this);
    };
    bool CAsyncLogBuffer::Init(int iMaxBufferSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogBuffer*, int);
        return (org_ptr(0x1403bd2f0L))(this, iMaxBufferSize);
    };
    bool CAsyncLogBuffer::Log(char* pszFileName, char* szLog, int iLen)
    {
        using org_ptr = bool (WINAPIV*)(struct CAsyncLogBuffer*, char*, char*, int);
        return (org_ptr(0x1403bd380L))(this, pszFileName, szLog, iLen);
    };
    CAsyncLogBuffer::~CAsyncLogBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBuffer*);
        (org_ptr(0x1403bc990L))(this);
    };
    void CAsyncLogBuffer::dtor_CAsyncLogBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CAsyncLogBuffer*);
        (org_ptr(0x1403bc990L))(this);
    };
    
END_ATF_NAMESPACE
