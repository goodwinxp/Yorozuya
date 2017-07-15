#include <CNetSocket.hpp>


START_ATF_NAMESPACE
    bool CNetSocket::Accept_Client(unsigned int dwSocketIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, unsigned int);
        return (org_ptr(0x14047e750L))(this, dwSocketIndex);
    };
    unsigned int CNetSocket::Accept_Server()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CNetSocket*);
        return (org_ptr(0x14047e3b0L))(this);
    };
    CNetSocket::CNetSocket()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047db60L))(this);
    };
    void CNetSocket::ctor_CNetSocket()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047db60L))(this);
    };
    void CNetSocket::CloseAll()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047f060L))(this);
    };
    bool CNetSocket::CloseSocket(unsigned int n)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, unsigned int);
        return (org_ptr(0x14047ec40L))(this, n);
    };
    int CNetSocket::Connect(unsigned int n, struct sockaddr_in* pAddr)
    {
        using org_ptr = int (WINAPIV*)(struct CNetSocket*, unsigned int, struct sockaddr_in*);
        return (org_ptr(0x14047e830L))(this, n, pAddr);
    };
    void CNetSocket::EmptySocketBuffer(unsigned int n)
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*, unsigned int);
        (org_ptr(0x14047eb70L))(this, n);
    };
    unsigned int CNetSocket::FindEmptySocket()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CNetSocket*);
        return (org_ptr(0x14047f180L))(this);
    };
    struct _socket* CNetSocket::GetSocket(unsigned int dwIndex)
    {
        using org_ptr = struct _socket* (WINAPIV*)(struct CNetSocket*, unsigned int);
        return (org_ptr(0x14047d3b0L))(this, dwIndex);
    };
    unsigned int CNetSocket::GetSocketIPAddress(unsigned int dwIndex)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CNetSocket*, unsigned int);
        return (org_ptr(0x14047f150L))(this, dwIndex);
    };
    struct _SOCK_TYPE_PARAM* CNetSocket::GetSocketType()
    {
        using org_ptr = struct _SOCK_TYPE_PARAM* (WINAPIV*)(struct CNetSocket*);
        return (org_ptr(0x14047f110L))(this);
    };
    struct _total_count* CNetSocket::GetTotalCount()
    {
        using org_ptr = struct _total_count* (WINAPIV*)(struct CNetSocket*);
        return (org_ptr(0x14047f130L))(this);
    };
    bool CNetSocket::InitAcceptSocket(char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, char*);
        return (org_ptr(0x14047ee00L))(this, pszErrMsg);
    };
    void CNetSocket::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047e2b0L))(this);
    };
    bool CNetSocket::PushIPCheckList(unsigned int dwIP)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, unsigned int);
        return (org_ptr(0x14047ed20L))(this, dwIP);
    };
    bool CNetSocket::Recv(unsigned int n, char* pBuf, int nBufMaxSize, int* pnRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, unsigned int, char*, int, int*);
        return (org_ptr(0x14047e9c0L))(this, n, pBuf, nBufMaxSize, pnRet);
    };
    void CNetSocket::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047e140L))(this);
    };
    bool CNetSocket::Send(unsigned int n, char* pBuf, int nSize, int* pnRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, unsigned int, char*, int, int*);
        return (org_ptr(0x14047ea70L))(this, n, pBuf, nSize, pnRet);
    };
    bool CNetSocket::SetSocket(struct _SOCK_TYPE_PARAM* pType, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetSocket*, struct _SOCK_TYPE_PARAM*, char*);
        return (org_ptr(0x14047dda0L))(this, pType, pszErrMsg);
    };
    CNetSocket::~CNetSocket()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047dcc0L))(this);
    };
    void CNetSocket::dtor_CNetSocket()
    {
        using org_ptr = void (WINAPIV*)(struct CNetSocket*);
        (org_ptr(0x14047dcc0L))(this);
    };
END_ATF_NAMESPACE
