#include <CNetProcess.hpp>


START_ATF_NAMESPACE
    void CNetProcess::AcceptThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140477fb0L))(pv);
    };
    CNetProcess::CNetProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140475e00L))(this);
    };
    void CNetProcess::ctor_CNetProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140475e00L))(this);
    };
    void CNetProcess::CloseAll()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140477c40L))(this);
    };
    void CNetProcess::CloseSocket(unsigned int dwSocketIndex, bool bSlowClose)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, unsigned int, bool);
        (org_ptr(0x14047a140L))(this, dwSocketIndex, bSlowClose);
    };
    void CNetProcess::CompleteAnsyncConnect()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140479970L))(this);
    };
    void CNetProcess::ConnectThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x14047b230L))(pv);
    };
    bool CNetProcess::FindKeyFromWaitList(unsigned int dwSocketIndex, unsigned int dwSerial, unsigned int* pdwKey, int nUseKeyNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int, unsigned int, unsigned int*, int);
        return (org_ptr(0x140479d50L))(this, dwSocketIndex, dwSerial, pdwKey, nUseKeyNum);
    };
    void* CNetProcess::GetContextHandle(uint16_t wIndex)
    {
        using org_ptr = void* (WINAPIV*)(struct CNetProcess*, uint16_t);
        return (org_ptr(0x14047a1f0L))(this, wIndex);
    };
    unsigned int CNetProcess::GetSendThreadFrame()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CNetProcess*);
        return (org_ptr(0x140479f80L))(this);
    };
    void CNetProcess::IOLogFileOperSetting(bool bOper)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, bool);
        (org_ptr(0x14047a0d0L))(this, bOper);
    };
    int CNetProcess::LoadSendMsg(unsigned int dwClientIndex, char* pbyType, char* szMsg, uint16_t nLen)
    {
        using org_ptr = int (WINAPIV*)(struct CNetProcess*, unsigned int, char*, char*, uint16_t);
        return (org_ptr(0x140478f90L))(this, dwClientIndex, pbyType, szMsg, nLen);
    };
    int CNetProcess::LoadSendMsg(unsigned int dwClientIndex, uint16_t wType, char* szMsg, uint16_t nLen)
    {
        using org_ptr = int (WINAPIV*)(struct CNetProcess*, unsigned int, uint16_t, char*, uint16_t);
        return (org_ptr(0x140479680L))(this, dwClientIndex, wType, szMsg, nLen);
    };
    void CNetProcess::LogFileOperSetting(bool bRecv, bool bSend, bool bSystem)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, bool, bool, bool);
        (org_ptr(0x14047a040L))(this, bRecv, bSend, bSystem);
    };
    void CNetProcess::NetEventThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140478100L))(pv);
    };
    void CNetProcess::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140477cb0L))(this);
    };
    void CNetProcess::OnLoop_Receipt()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140477dd0L))(this);
    };
    bool CNetProcess::PushAnsyncConnect(unsigned int dwSocketIndex, struct sockaddr_in* pAddr)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int, struct sockaddr_in*);
        return (org_ptr(0x140479890L))(this, dwSocketIndex, pAddr);
    };
    void CNetProcess::PushCloseNode(int nIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, int);
        (org_ptr(0x140479fa0L))(this, nIndex);
    };
    bool CNetProcess::PushKeyCheckList(unsigned int dwSerial, unsigned int dwIP, unsigned int* pdwKey, int nUseKeyNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int, unsigned int, unsigned int*, int);
        return (org_ptr(0x140479b30L))(this, dwSerial, dwIP, pdwKey, nUseKeyNum);
    };
    void CNetProcess::RecvThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140478340L))(pv);
    };
    void CNetProcess::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x1404777b0L))(this);
    };
    void CNetProcess::SendThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140478bd0L))(pv);
    };
    void CNetProcess::SetContextHandle(void* hContextHandle, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, void*, uint16_t);
        (org_ptr(0x14047a1a0L))(this, hContextHandle, wIndex);
    };
    bool CNetProcess::SetProcess(int nIndex, struct _NET_TYPE_PARAM* pType, struct CNetWorking* pNetwork, bool bUseFG)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, int, struct _NET_TYPE_PARAM*, struct CNetWorking*, bool);
        return (org_ptr(0x140476340L))(this, nIndex, pType, pNetwork, bUseFG);
    };
    bool CNetProcess::StartSpeedHackCheck(unsigned int dwClientIndex, char* pszID)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int, char*);
        return (org_ptr(0x1404796e0L))(this, dwClientIndex, pszID);
    };
    void CNetProcess::_CheckSend(uint16_t wSocketIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, uint16_t);
        (org_ptr(0x140479a30L))(this, wSocketIndex);
    };
    void CNetProcess::_CheckWaitKey()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047a920L))(this);
    };
    void CNetProcess::_CkeckKeyCertifyDeley()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047aed0L))(this);
    };
    void CNetProcess::_CkeckRecvBreak()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047b010L))(this);
    };
    void CNetProcess::_CkeckSpeedHackDeley()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047ad20L))(this);
    };
    void CNetProcess::_ForceCloseLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047aa40L))(this);
    };
    bool CNetProcess::_InternalPacketProcess(unsigned int dwSocketIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x14047a4f0L))(this, dwSocketIndex, pMsgHeader, pMsg);
    };
    void CNetProcess::_PopRecvMsg(uint16_t wSocketIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, uint16_t);
        (org_ptr(0x140478680L))(this, wSocketIndex);
    };
    void CNetProcess::_Receipt()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047a220L))(this);
    };
    void CNetProcess::_ResponSpeedHack()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x14047ab90L))(this);
    };
    void CNetProcess::_SendLoop(unsigned int n)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, unsigned int);
        (org_ptr(0x140478d60L))(this, n);
    };
    void CNetProcess::_SendSpeedHackCheckMsg(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*, int);
        (org_ptr(0x14047b0e0L))(this, n);
    };
    bool CNetProcess::wt_AcceptClient(unsigned int* pdwClientIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int*);
        return (org_ptr(0x140477e10L))(this, pdwClientIndex);
    };
    bool CNetProcess::wt_CloseClient(unsigned int dwClientIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetProcess*, unsigned int);
        return (org_ptr(0x140477f00L))(this, dwClientIndex);
    };
    CNetProcess::~CNetProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140477400L))(this);
    };
    void CNetProcess::dtor_CNetProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CNetProcess*);
        (org_ptr(0x140477400L))(this);
    };
END_ATF_NAMESPACE
