#include <CNetWorking.hpp>


START_ATF_NAMESPACE
    void CNetWorking::AcceptClientCheck(unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140482160L))(this, dwProID, dwIndex, dwSerial);
    };
    void CNetWorking::AnsyncConnectComplete(unsigned int dwProID, unsigned int dwIndex, int nResult)
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, int);
        (org_ptr(0x140482210L))(this, dwProID, dwIndex, nResult);
    };
    CNetWorking::CNetWorking()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481020L))(this);
    };
    void CNetWorking::ctor_CNetWorking()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481020L))(this);
    };
    void CNetWorking::CloseClientCheck(unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140482180L))(this, dwProID, dwIndex, dwSerial);
    };
    void CNetWorking::CloseSocket(unsigned int dwProID, unsigned int dwSocketIndex, bool bSlowClose)
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, bool);
        (org_ptr(0x140481ae0L))(this, dwProID, dwSocketIndex, bSlowClose);
    };
    int CNetWorking::Connect(unsigned int dwProID, unsigned int dwSocketIndex, unsigned int dwIP, uint16_t wPort)
    {
        using org_ptr = int (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, unsigned int, uint16_t);
        return (org_ptr(0x1404819b0L))(this, dwProID, dwSocketIndex, dwIP, wPort);
    };
    bool CNetWorking::DataAnalysis(unsigned int dwProID, unsigned int dwClientIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x140482140L))(this, dwProID, dwClientIndex, pMsgHeader, pMsg);
    };
    bool CNetWorking::ExpulsionSocket(unsigned int dwProID, unsigned int dwIndex, char byReason, void* pvInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int, char, void*);
        return (org_ptr(0x1404821a0L))(this, dwProID, dwIndex, byReason, pvInfo);
    };
    unsigned int CNetWorking::GetCheckRecvTime(unsigned int dwProID, unsigned int dwSocketIndex)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int);
        return (org_ptr(0x140481d60L))(this, dwProID, dwSocketIndex);
    };
    struct _socket* CNetWorking::GetSocket(unsigned int dwProID, unsigned int dwSocketIndex)
    {
        using org_ptr = struct _socket* (WINAPIV*)(struct CNetWorking*, unsigned int, unsigned int);
        return (org_ptr(0x140481bd0L))(this, dwProID, dwSocketIndex);
    };
    void CNetWorking::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481c50L))(this);
    };
    void CNetWorking::OnLoop_Receipt()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481ce0L))(this);
    };
    void CNetWorking::ProcessLogFile(unsigned int dwProID, bool bRecv, bool bSend, bool bSystem)
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*, unsigned int, bool, bool, bool);
        (org_ptr(0x140481940L))(this, dwProID, bRecv, bSend, bSystem);
    };
    void CNetWorking::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481340L))(this);
    };
    bool CNetWorking::SetNetSystem(unsigned int dwUseProcessNum, struct _NET_TYPE_PARAM* pType, char* szSystemName, char* pszLogPath)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetWorking*, unsigned int, struct _NET_TYPE_PARAM*, char*, char*);
        return (org_ptr(0x1404813e0L))(this, dwUseProcessNum, pType, szSystemName, pszLogPath);
    };
    void CNetWorking::UserLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140482130L))(this);
    };
    CNetWorking::~CNetWorking()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481230L))(this);
    };
    void CNetWorking::dtor_CNetWorking()
    {
        using org_ptr = void (WINAPIV*)(struct CNetWorking*);
        (org_ptr(0x140481230L))(this);
    };
END_ATF_NAMESPACE
