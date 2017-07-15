#include <CChiNetworkEX.hpp>


START_ATF_NAMESPACE
    void CChiNetworkEX::AcceptClientCheck(unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1404106b0L))(this, dwProID, dwIndex, dwSerial);
    };
    CChiNetworkEX::CChiNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*);
        (org_ptr(0x14040f950L))(this);
    };
    void CChiNetworkEX::ctor_CChiNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*);
        (org_ptr(0x14040f950L))(this);
    };
    void CChiNetworkEX::CheckApexLine()
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*);
        (org_ptr(0x14040fc30L))(this);
    };
    void CChiNetworkEX::CloseClientCheck(unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x14040fcd0L))(this, dwProID, dwIndex, dwSerial);
    };
    void CChiNetworkEX::Destory()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14040f8d0L))();
    };
    void CChiNetworkEX::Inform_For_Exit_By_ApexBlock(unsigned int dwAccountSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, unsigned int);
        (org_ptr(0x1404105e0L))(this, dwAccountSerial);
    };
    int CChiNetworkEX::Initialize()
    {
        using org_ptr = int (WINAPIV*)(struct CChiNetworkEX*);
        return (org_ptr(0x14040fa80L))(this);
    };
    struct CChiNetworkEX* CChiNetworkEX::Instance()
    {
        using org_ptr = struct CChiNetworkEX* (WINAPIV*)();
        return (org_ptr(0x14040f810L))();
    };
    int CChiNetworkEX::LoadINIFile()
    {
        using org_ptr = int (WINAPIV*)(struct CChiNetworkEX*);
        return (org_ptr(0x14040fb20L))(this);
    };
    void CChiNetworkEX::Recv_ApexInform(unsigned int dwSID, unsigned int dwRecvSize, char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, unsigned int, unsigned int, char*);
        (org_ptr(0x1404103a0L))(this, dwSID, dwRecvSize, pMsg);
    };
    void CChiNetworkEX::Recv_ApexKill(unsigned int dwSID, unsigned int dwRecvSize, char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, unsigned int, unsigned int, char*);
        (org_ptr(0x140410460L))(this, dwSID, dwRecvSize, pMsg);
    };
    int CChiNetworkEX::Send(char* pbyType, unsigned int dwSID, char* szMsg, uint16_t nLen)
    {
        using org_ptr = int (WINAPIV*)(struct CChiNetworkEX*, char*, unsigned int, char*, uint16_t);
        return (org_ptr(0x14040fd20L))(this, pbyType, dwSID, szMsg, nLen);
    };
    void CChiNetworkEX::Send_ClienInform(struct CPlayer* pOne, uint16_t wSize, char* pBuf)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, struct CPlayer*, uint16_t, char*);
        (org_ptr(0x1404102d0L))(this, pOne, wSize, pBuf);
    };
    void CChiNetworkEX::Send_IP(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, struct CPlayer*);
        (org_ptr(0x14040ffc0L))(this, pOne);
    };
    void CChiNetworkEX::Send_Login(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, struct CPlayer*);
        (org_ptr(0x14040fe90L))(this, pOne);
    };
    void CChiNetworkEX::Send_Logout(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, struct CPlayer*);
        (org_ptr(0x140410190L))(this, pOne);
    };
    void CChiNetworkEX::Send_Trans(struct CPlayer* pOne, unsigned int dwRet)
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*, struct CPlayer*, unsigned int);
        (org_ptr(0x1404100b0L))(this, pOne, dwRet);
    };
    bool CChiNetworkEX::s_DataAnalysis(unsigned int dwProID, unsigned int dwClientIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(unsigned int, unsigned int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x14040fd90L))(dwProID, dwClientIndex, pMsgHeader, pMsg);
    };
    CChiNetworkEX::~CChiNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*);
        (org_ptr(0x14040f9f0L))(this);
    };
    void CChiNetworkEX::dtor_CChiNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CChiNetworkEX*);
        (org_ptr(0x14040f9f0L))(this);
    };
END_ATF_NAMESPACE
