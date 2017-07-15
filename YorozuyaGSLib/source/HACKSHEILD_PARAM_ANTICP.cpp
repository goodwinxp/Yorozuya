#include <HACKSHEILD_PARAM_ANTICP.hpp>


START_ATF_NAMESPACE
    void HACKSHEILD_PARAM_ANTICP::CheckClient()
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        (org_ptr(0x140417b60L))(this);
    };
    HACKSHEILD_PARAM_ANTICP::HACKSHEILD_PARAM_ANTICP()
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        (org_ptr(0x1404177d0L))(this);
    };
    void HACKSHEILD_PARAM_ANTICP::ctor_HACKSHEILD_PARAM_ANTICP()
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        (org_ptr(0x1404177d0L))(this);
    };
    void HACKSHEILD_PARAM_ANTICP::Init()
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        (org_ptr(0x140417890L))(this);
    };
    bool HACKSHEILD_PARAM_ANTICP::IsLogPass()
    {
        using org_ptr = bool (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        return (org_ptr(0x140417a50L))(this);
    };
    void HACKSHEILD_PARAM_ANTICP::Kick(char byReason, unsigned int dwRet)
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, char, unsigned int);
        (org_ptr(0x140417d60L))(this, byReason, dwRet);
    };
    bool HACKSHEILD_PARAM_ANTICP::OnCheckSession_FirstVerify(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, int);
        return (org_ptr(0x140417960L))(this, n);
    };
    void HACKSHEILD_PARAM_ANTICP::OnConnect(int nIndex)
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, int);
        (org_ptr(0x1404179d0L))(this, nIndex);
    };
    void HACKSHEILD_PARAM_ANTICP::OnDisConnect()
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        (org_ptr(0x140417a10L))(this);
    };
    void HACKSHEILD_PARAM_ANTICP::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*);
        (org_ptr(0x140417aa0L))(this);
    };
    bool HACKSHEILD_PARAM_ANTICP::OnRecvSession(struct CHackShieldExSystem* mgr, int nIndex, char byProtocol, uint64_t tSize, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, struct CHackShieldExSystem*, int, char, uint64_t, char*);
        return (org_ptr(0x140417f10L))(this, mgr, nIndex, byProtocol, tSize, pMsg);
    };
    bool HACKSHEILD_PARAM_ANTICP::OnRecvSession_ClientCheckSum_Response(uint64_t tSize, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, uint64_t, char*);
        return (org_ptr(0x140418120L))(this, tSize, pMsg);
    };
    bool HACKSHEILD_PARAM_ANTICP::OnRecvSession_ClientCrc_Response(uint64_t tSize, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, uint64_t, char*);
        return (org_ptr(0x140418290L))(this, tSize, pMsg);
    };
    bool HACKSHEILD_PARAM_ANTICP::OnRecvSession_ServerCheckSum_Request(int nIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct HACKSHEILD_PARAM_ANTICP*, int);
        return (org_ptr(0x140417fb0L))(this, nIndex);
    };
    
END_ATF_NAMESPACE
