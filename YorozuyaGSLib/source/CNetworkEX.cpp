#include <CNetworkEX.hpp>


START_ATF_NAMESPACE
    bool CNetworkEX::AMP_DownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9ef0L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeAdjustPriceRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d38e0L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeBuyItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3a20L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeClearItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3980L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeReRegistRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3bb0L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeRegItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3740L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeRegedListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3b10L))(this, n, pBuf);
    };
    bool CNetworkEX::ATradeTaxRateRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3c50L))(this, n, pBuf);
    };
    void CNetworkEX::AcceptClientCheck(unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1401dac00L))(this, dwProID, dwIndex, dwSerial);
    };
    bool CNetworkEX::AccountLineAnalysis(int n, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401db800L))(this, n, pMsgHeader, pMsg);
    };
    bool CNetworkEX::AddBagRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cae10L))(this, n, pBuf);
    };
    bool CNetworkEX::AddCharRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1180L))(this, n, pBuf);
    };
    bool CNetworkEX::AliveCharRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1950L))(this, n, pBuf);
    };
    bool CNetworkEX::AlterItemSlotRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7090L))(this, n, pBuf);
    };
    bool CNetworkEX::AlterLinkBoardSlotRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7390L))(this, n, pBuf);
    };
    bool CNetworkEX::AlterPartyLootShareRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cd120L))(this, n, pBuf);
    };
    bool CNetworkEX::AlterWindowInfoRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7970L))(this, n, pBuf);
    };
    bool CNetworkEX::AnimusCommandRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cfc00L))(this, n, pBuf);
    };
    bool CNetworkEX::AnimusInvenChangeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6b90L))(this, n, pBuf);
    };
    bool CNetworkEX::AnimusRecallRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cfaa0L))(this, n, pBuf);
    };
    bool CNetworkEX::AnimusReturnRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cfb60L))(this, n, pBuf);
    };
    bool CNetworkEX::AnimusTargetRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cfce0L))(this, n, pBuf);
    };
    void CNetworkEX::AnsyncConnectComplete(unsigned int dwProID, unsigned int dwIndex, int nResult)
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*, unsigned int, unsigned int, int);
        (org_ptr(0x1401db640L))(this, dwProID, dwIndex, nResult);
    };
    bool CNetworkEX::Apex_R(int n, uint16_t wSize, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, uint16_t, char*);
        return (org_ptr(0x1401c14d0L))(this, n, wSize, pBuf);
    };
    bool CNetworkEX::Apex_T(int n, uint16_t wSize, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, uint16_t, char*);
        return (org_ptr(0x1401c1580L))(this, n, wSize, pBuf);
    };
    bool CNetworkEX::AttackForceRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c1a50L))(this, n, pBuf);
    };
    bool CNetworkEX::AttackPersonalRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c1680L))(this, n, pBuf);
    };
    bool CNetworkEX::AttackSiegeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c1f20L))(this, n, pBuf);
    };
    bool CNetworkEX::AttackSkillRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c17f0L))(this, n, pBuf);
    };
    bool CNetworkEX::AttackTestRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c1d60L))(this, n, pBuf);
    };
    bool CNetworkEX::AttackUnitRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c1c00L))(this, n, pBuf);
    };
    bool CNetworkEX::AwayPartyInvitation(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cd210L))(this, n, pBuf);
    };
    bool CNetworkEX::AwayPartyInvitationAnswer(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cd340L))(this, n, pBuf);
    };
    bool CNetworkEX::BackTowerRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c29a0L))(this, n, pBuf);
    };
    bool CNetworkEX::BackTrapRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2d10L))(this, n, pBuf);
    };
    bool CNetworkEX::BaseDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9610L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingChangeType(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3b10L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingCloseRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3990L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingDestroyModule(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3ce0L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingExpireIPOverflow(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3c80L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingExpirePCBang(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3c20L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingExpirePersonal(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3bc0L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingInfoRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3900L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingLineAnalysis(int n, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401dfb50L))(this, n, pMsgHeader, pMsg);
    };
    bool CNetworkEX::BillingRemaintimePCBang(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3a80L))(this, n, pBuf);
    };
    bool CNetworkEX::BillingRemaintimePersonal(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c39f0L))(this, n, pBuf);
    };
    bool CNetworkEX::BossSMSMsgRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c4390L))(this, n, pBuf);
    };
    bool CNetworkEX::BriefPassReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf0a0L))(this, n, pBuf);
    };
    bool CNetworkEX::BuddyAddAnswer(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c4710L))(this, n, pBuf);
    };
    bool CNetworkEX::BuddyAddRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c45b0L))(this, n, pBuf);
    };
    bool CNetworkEX::BuddyDelRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c47f0L))(this, n, pBuf);
    };
    bool CNetworkEX::BuddyDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c4880L))(this, n, pBuf);
    };
    bool CNetworkEX::BuyStoreRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d24f0L))(this, n, pBuf);
    };
    CNetworkEX::CNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*);
        (org_ptr(0x1401dab10L))(this);
    };
    void CNetworkEX::ctor_CNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*);
        (org_ptr(0x1401dab10L))(this);
    };
    bool CNetworkEX::CanSelectClassRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0120L))(this, n, pBuf);
    };
    bool CNetworkEX::CancelRaceBossSMSMsg(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7380L))(this, n, pBuf);
    };
    bool CNetworkEX::CashDBInfoRecvResult(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1dd0L))(this, n, pBuf);
    };
    bool CNetworkEX::CastVoteRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf420L))(this, n, pBuf);
    };
    bool CNetworkEX::CharacterRenameCash(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cbbe0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatAllRecvYesOrNo(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5a00L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatAllRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5ab0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatCheatRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c53f0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatCircleRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c4b90L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatFarRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c4d00L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatGmNoticeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c52b0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatGreetingMsg_GM(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5bf0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatGreetingMsg_GUILD(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5ff0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatGreetingMsg_RACE(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5dc0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatGuildEstSenRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c65c0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatGuildRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5690L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatLockCommand(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0ad0L))(this, n, pMsg);
    };
    bool CNetworkEX::ChatManageRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5530L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatMapRecvYesOrNo(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5810L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatMapRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c58c0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatMgrWhisperRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5550L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatMultiFarRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c6700L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatOperatorRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c49f0L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatPartyRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c4e90L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatRaceBossCryRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5170L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatRaceBossRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c6340L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatRaceRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c5000L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatRePresentationRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c6480L))(this, n, pBuf);
    };
    bool CNetworkEX::ChatTradeRequestMsg(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c61f0L))(this, n, pBuf);
    };
    bool CNetworkEX::CheckIsBlockIPResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0b30L))(this, n, pMsg);
    };
    bool CNetworkEX::ChinaBillingChangePrimium(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3df0L))(this, n, pBuf);
    };
    bool CNetworkEX::ClassSkillRecallTeleportRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3090L))(this, n, pBuf);
    };
    bool CNetworkEX::ClassSkillRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2360L))(this, n, pBuf);
    };
    bool CNetworkEX::ClientLineAnalysis(int n, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401dbb40L))(this, n, pMsgHeader, pMsg);
    };
    void CNetworkEX::Close(unsigned int dwProID, unsigned int dwSocketIndex, bool bSlowClose, char* pszLog)
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*, unsigned int, unsigned int, bool, char*);
        (org_ptr(0x1401db6b0L))(this, dwProID, dwSocketIndex, bSlowClose, pszLog);
    };
    void CNetworkEX::CloseClientCheck(unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1401dae20L))(this, dwProID, dwIndex, dwSerial);
    };
    bool CNetworkEX::CombineExItemAcceptRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb160L))(this, n, pBuf);
    };
    bool CNetworkEX::CombineExItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb030L))(this, n, pBuf);
    };
    bool CNetworkEX::CombineItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401caec0L))(this, n, pBuf);
    };
    bool CNetworkEX::ConEventTotalSalesCheck(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1e60L))(this, n, pBuf);
    };
    bool CNetworkEX::ConnectionStatusRequest(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int);
        return (org_ptr(0x1401c7490L))(this, n);
    };
    bool CNetworkEX::CumDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9a10L))(this, n, pBuf);
    };
    bool CNetworkEX::CuttingCompleteRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0990L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeAddRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3400L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeAnswerRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3150L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeAskRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2fc0L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeBetRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3650L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeCancleRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3250L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeDelRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3570L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeLockRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d32d0L))(this, n, pBuf);
    };
    bool CNetworkEX::DTradeOKRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3360L))(this, n, pBuf);
    };
    bool CNetworkEX::DarkHoleAnswerReenterRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7b20L))(this, n, pBuf);
    };
    bool CNetworkEX::DarkHoleClearOutRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7a90L))(this, n, pBuf);
    };
    bool CNetworkEX::DarkHoleEnterRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7930L))(this, n, pBuf);
    };
    bool CNetworkEX::DarkHoleGiveupOutRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7a00L))(this, n, pBuf);
    };
    bool CNetworkEX::DarkHoleOpenRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c78a0L))(this, n, pBuf);
    };
    bool CNetworkEX::DataAnalysis(unsigned int dwProID, unsigned int dwClientIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, unsigned int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401db730L))(this, dwProID, dwClientIndex, pMsgHeader, pMsg);
    };
    bool CNetworkEX::DecideRecallRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2c80L))(this, n, pBuf);
    };
    bool CNetworkEX::DelCharRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d13d0L))(this, n, pBuf);
    };
    bool CNetworkEX::DisconnectGuildWarCharacterRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1eb0L))(this, n, pBuf);
    };
    bool CNetworkEX::DownGradeItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cac80L))(this, n, pBuf);
    };
    bool CNetworkEX::EmbellishRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca6e0L))(this, n, pBuf);
    };
    bool CNetworkEX::EnterReturnGateRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cc870L))(this, n, pBuf);
    };
    bool CNetworkEX::EnterWorldRequest(int n, struct _MSG_HEADER* pMsgHeader, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401d0d30L))(this, n, pMsgHeader, pBuf);
    };
    bool CNetworkEX::EnterWorldResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c06d0L))(this, n, pMsg);
    };
    bool CNetworkEX::EquipPartRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca600L))(this, n, pBuf);
    };
    bool CNetworkEX::ExchangeDalantForGoldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2d10L))(this, n, pBuf);
    };
    bool CNetworkEX::ExchangeGoldForDalantRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2dc0L))(this, n, pBuf);
    };
    bool CNetworkEX::ExchangeGoldForPvPRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2e70L))(this, n, pBuf);
    };
    bool CNetworkEX::ExchangeItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb2a0L))(this, n, pBuf);
    };
    bool CNetworkEX::ExitWorldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9d20L))(this, n, pBuf);
    };
    bool CNetworkEX::ExpulsionSocket(unsigned int dwProID, unsigned int dwIndex, char byReason, void* pvInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, unsigned int, char, void*);
        return (org_ptr(0x1401dafa0L))(this, dwProID, dwIndex, byReason, pvInfo);
    };
    bool CNetworkEX::ForceCloseCommand(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0750L))(this, n, pMsg);
    };
    bool CNetworkEX::ForceDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9950L))(this, n, pBuf);
    };
    bool CNetworkEX::ForceInvenChangeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6a90L))(this, n, pBuf);
    };
    bool CNetworkEX::ForceRecallTeleportRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2dc0L))(this, n, pBuf);
    };
    bool CNetworkEX::ForceRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c20d0L))(this, n, pBuf);
    };
    bool CNetworkEX::GotoAvatorRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cdef0L))(this, n, pBuf);
    };
    bool CNetworkEX::GotoBasePortalRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cde40L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleBlockReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7f40L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleCurrentBattleInfoRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8770L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleGetGravityStoneRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8940L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleGoalRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c89e0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleJoinGuildBattleRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8820L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattlePossibleGuildBattleList(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c84a0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleRankListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8560L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleReservedScheduleRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8670L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildBattleTakeGravityStoneRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c88b0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildCancelSuggestRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8240L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7d80L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildEstablishRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7c80L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildHonorListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8e50L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildJoinAcceptRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7fc0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildJoinApplyCancelRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7f40L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildJoinApplyRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7e50L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8ca0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildManageRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8f60L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildNextHonorListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8ee0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildOfferSuggestRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c80e0L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildPushMoneyRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8410L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildQueryInfoRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8380L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildRoomEnterRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8b00L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildRoomOutRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8b90L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildRoomRentRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8a70L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildRoomRestTimeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8c20L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildSelfLeaveRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8060L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildSetHonorRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c8d80L))(this, n, pBuf);
    };
    bool CNetworkEX::GuildVoteRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c82d0L))(this, n, pBuf);
    };
    bool CNetworkEX::GustureRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7880L))(this, n, pBuf);
    };
    bool CNetworkEX::InitClassCostRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0050L))(this, n, pBuf);
    };
    bool CNetworkEX::InitClassRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cff30L))(this, n, pBuf);
    };
    bool CNetworkEX::InvenDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c96e0L))(this, n, pBuf);
    };
    bool CNetworkEX::ItemboxTakeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca240L))(this, n, pBuf);
    };
    bool CNetworkEX::LimitItemNumRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2f20L))(this, n, pBuf);
    };
    bool CNetworkEX::LinkBoardDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9df0L))(this, n, pBuf);
    };
    bool CNetworkEX::LogInControllServer(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c7250L))(this, n, pBuf);
    };
    bool CNetworkEX::LogInWebAgentServer(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401da860L))(this, n, pBuf);
    };
    bool CNetworkEX::MacroDownLoadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9e70L))(this, n, pBuf);
    };
    bool CNetworkEX::MakeItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca8c0L))(this, n, pBuf);
    };
    bool CNetworkEX::MakeTowerRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2710L))(this, n, pBuf);
    };
    bool CNetworkEX::MakeTrapRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2a50L))(this, n, pBuf);
    };
    bool CNetworkEX::ManageClientForceExitRequest()
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*);
        return (org_ptr(0x1401c1020L))(this);
    };
    bool CNetworkEX::ManageClientLimitRunRequest(char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, char*);
        return (org_ptr(0x1401c0fd0L))(this, pBuf);
    };
    bool CNetworkEX::MineCancleRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d06a0L))(this, n, pBuf);
    };
    bool CNetworkEX::MineStartRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d04b0L))(this, n, pBuf);
    };
    bool CNetworkEX::ModeChangeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7700L))(this, n, pBuf);
    };
    bool CNetworkEX::MoveInfoRequeset(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce180L))(this, n, pBuf);
    };
    bool CNetworkEX::MoveLobbyRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1770L))(this, n, pBuf);
    };
    bool CNetworkEX::MovePortalRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cc5b0L))(this, n, pBuf);
    };
    bool CNetworkEX::MoveToOwnStoneMapRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf500L))(this, n, pBuf);
    };
    bool CNetworkEX::MoveTypeChangeRequeset(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce080L))(this, n, pBuf);
    };
    bool CNetworkEX::NPCDialogRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf580L))(this, n, pBuf);
    };
    bool CNetworkEX::NPCLinkCheckItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb9c0L))(this, n, pBuf);
    };
    bool CNetworkEX::NPCQuestListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cef70L))(this, n, pBuf);
    };
    bool CNetworkEX::NPCQuestRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cee40L))(this, n, pBuf);
    };
    bool CNetworkEX::NPCWatchingRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf690L))(this, n, pBuf);
    };
    bool CNetworkEX::NewPosStartRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9550L))(this, n, pBuf);
    };
    bool CNetworkEX::NextPoint(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cd6d0L))(this, n, pBuf);
    };
    bool CNetworkEX::NotifyLocalTimeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1b40L))(this, n, pBuf);
    };
    bool CNetworkEX::NotifyRaceBossCryMsg(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d82f0L))(this, n, pBuf);
    };
    bool CNetworkEX::ObjectServerPosRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce1c0L))(this, n, pBuf);
    };
    bool CNetworkEX::OffPartRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca7d0L))(this, n, pBuf);
    };
    bool CNetworkEX::OpenControlInform(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0480L))(this, n, pMsg);
    };
    bool CNetworkEX::OpenWorldFailureResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0420L))(this, n, pMsg);
    };
    bool CNetworkEX::OpenWorldSuccessResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0340L))(this, n, pMsg);
    };
    bool CNetworkEX::OreIntoBagRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0830L))(this, n, pBuf);
    };
    bool CNetworkEX::OtherShapeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9ad0L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyDisjointRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ccf20L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyJoinApplicatiohAnswer(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ccce0L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyJoinApplication(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ccbf0L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyJoinInvitation(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cc9e0L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyJoinInvitationAnswer(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ccb00L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyLeaveCompulsionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cce70L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyLeaveSelfRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ccdd0L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyLockRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cd070L))(this, n, pBuf);
    };
    bool CNetworkEX::PartyReqBlockReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7d90L))(this, n, pBuf);
    };
    bool CNetworkEX::PartySuccessionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ccfc0L))(this, n, pBuf);
    };
    bool CNetworkEX::PcBangPrimiumCouponRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3e40L))(this, n, pBuf);
    };
    bool CNetworkEX::PlayerInfoResult(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce1a0L))(this, n, pBuf);
    };
    bool CNetworkEX::PlayerMacroUpdate(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7fd0L))(this, n, pBuf);
    };
    bool CNetworkEX::PostContentRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce840L))(this, n, pBuf);
    };
    bool CNetworkEX::PostDeleteRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce960L))(this, n, pBuf);
    };
    bool CNetworkEX::PostItemGoldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce8d0L))(this, n, pBuf);
    };
    bool CNetworkEX::PostListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce7c0L))(this, n, pBuf);
    };
    bool CNetworkEX::PostReturnConfirmRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce9f0L))(this, n, pBuf);
    };
    bool CNetworkEX::PostSendRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ce6b0L))(this, n, pBuf);
    };
    bool CNetworkEX::PotionSocketDivisionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6f90L))(this, n, pBuf);
    };
    bool CNetworkEX::PotionSocketSeparationRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6e90L))(this, n, pBuf);
    };
    bool CNetworkEX::ProposeVoteRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf240L))(this, n, pBuf);
    };
    bool CNetworkEX::PvpCashRecorverWithTalik(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3da0L))(this, n, pBuf);
    };
    bool CNetworkEX::PvpRankListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d75a0L))(this, n, pBuf);
    };
    bool CNetworkEX::QuestDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c97b0L))(this, n, pBuf);
    };
    bool CNetworkEX::QuestGiveupRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cf170L))(this, n, pBuf);
    };
    bool CNetworkEX::QuestSelectRewardReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cec50L))(this, n, pBuf);
    };
    bool CNetworkEX::RadarCharListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb940L))(this, n, pBuf);
    };
    bool CNetworkEX::RealMovPosRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cd9e0L))(this, n, pBuf);
    };
    bool CNetworkEX::RegedCharRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1040L))(this, n, pBuf);
    };
    bool CNetworkEX::RegistBindRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cc670L))(this, n, pBuf);
    };
    bool CNetworkEX::ReleaseGroupTargetObjectRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7cb0L))(this, n, pBuf);
    };
    bool CNetworkEX::ReleaseSiegeModeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0c40L))(this, n, pBuf);
    };
    bool CNetworkEX::ReleaseTargetObjectRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7b10L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestChangeTaxRate(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d86d0L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestPatriarchPunishment(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8440L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestTLLogoutTime(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8b00L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestTaxRate(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8650L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestUILockFindPW(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8a60L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestUILockInit(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8760L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestUILockUpdateInfo(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d89a0L))(this, n, pBuf);
    };
    bool CNetworkEX::RequestUILockUserCertify(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8900L))(this, n, pBuf);
    };
    bool CNetworkEX::ResCuttingRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0740L))(this, n, pBuf);
    };
    bool CNetworkEX::ResDivisionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6d90L))(this, n, pBuf);
    };
    bool CNetworkEX::ResSeparationRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6c90L))(this, n, pBuf);
    };
    bool CNetworkEX::Revival(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9c90L))(this, n, pBuf);
    };
    bool CNetworkEX::SelCharRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d1560L))(this, n, pBuf);
    };
    bool CNetworkEX::SelectClassRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cfdf0L))(this, n, pBuf);
    };
    bool CNetworkEX::SelectPcBangRewardRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0200L))(this, n, pBuf);
    };
    bool CNetworkEX::SelectWaitedQuestReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ceb70L))(this, n, pBuf);
    };
    bool CNetworkEX::SellStoreRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2930L))(this, n, pBuf);
    };
    bool CNetworkEX::SendRaceBossMsgFromWebRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401da990L))(this, n, pBuf);
    };
    bool CNetworkEX::SetGroupMapPointRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8360L))(this, n, pBuf);
    };
    bool CNetworkEX::SetGroupTargetObjectRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7b90L))(this, n, pBuf);
    };
    bool CNetworkEX::SetItemCheckRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb620L))(this, n, pBuf);
    };
    void CNetworkEX::SetPassablePacket(unsigned int dwProID, char byHeader1, char byHeader2)
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*, unsigned int, char, char);
        (org_ptr(0x140208100L))(this, dwProID, byHeader1, byHeader2);
    };
    bool CNetworkEX::SetRaceBossCryMsgRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8190L))(this, n, pBuf);
    };
    bool CNetworkEX::SetTargetObjectRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7a40L))(this, n, pBuf);
    };
    bool CNetworkEX::SkillRecallTeleportRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2f00L))(this, n, pBuf);
    };
    bool CNetworkEX::SkillRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c21f0L))(this, n, pBuf);
    };
    bool CNetworkEX::SpecialDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c9880L))(this, n, pBuf);
    };
    bool CNetworkEX::Stop(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cdc10L))(this, n, pBuf);
    };
    bool CNetworkEX::StoreListRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d2ca0L))(this, n, pBuf);
    };
    bool CNetworkEX::TaiwanBillingUserCertify(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3d30L))(this, n, pBuf);
    };
    bool CNetworkEX::TalikCrystalExchangeRequest(int n, struct _MSG_HEADER* pHeader, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401cbd50L))(this, n, pHeader, pBuf);
    };
    bool CNetworkEX::TalikRecorverList(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d3d10L))(this, n, pBuf);
    };
    bool CNetworkEX::ThrowSkillRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c24e0L))(this, n, pBuf);
    };
    bool CNetworkEX::ThrowStorageRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca380L))(this, n, pBuf);
    };
    bool CNetworkEX::ThrowUnitRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c2600L))(this, n, pBuf);
    };
    bool CNetworkEX::TotalGuildRankRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d8050L))(this, n, pBuf);
    };
    bool CNetworkEX::TradeBlockReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7eb0L))(this, n, pBuf);
    };
    bool CNetworkEX::TransAccountInform(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c04a0L))(this, n, pMsg);
    };
    bool CNetworkEX::TransShipRenewTicketRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cc7e0L))(this, n, pBuf);
    };
    bool CNetworkEX::TransformSiegeModeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d0b90L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkAlterItemSlotRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d5cd0L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkChangePasswdRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d5000L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkCreateCostIsFreeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d63e0L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkDownloadRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d4d70L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkEstRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d4e90L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkExtendRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d51c0L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkHintAnswerRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d62d0L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkIoMergeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d5960L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkIoMoneyRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6140L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkIoMoveRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d5260L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkIoSwapRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d55e0L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkPotionDivisionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d5fd0L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkPwHintIndexRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d6240L))(this, n, pBuf);
    };
    bool CNetworkEX::TrunkResDivisionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d5e60L))(this, n, pBuf);
    };
    bool CNetworkEX::TutorialProcessReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d18a0L))(this, n, pBuf);
    };
    bool CNetworkEX::UILockInitResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c07e0L))(this, n, pMsg);
    };
    bool CNetworkEX::UILockRefreshResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c08c0L))(this, n, pMsg);
    };
    bool CNetworkEX::UILockUpdateResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0850L))(this, n, pMsg);
    };
    bool CNetworkEX::UnitBulletFillRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9a10L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitBulletReplaceRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401da320L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitDeliveryRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9f00L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitFrameBuyRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9580L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitFrameRepairRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9920L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitLeaveRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401da250L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitPackFillRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9c10L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitPartTuningRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9760L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitReturnRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401da110L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitSellRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d9670L))(this, n, pBuf);
    };
    bool CNetworkEX::UnitTakeRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401da1b0L))(this, n, pBuf);
    };
    bool CNetworkEX::UpgradeItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401caa20L))(this, n, pBuf);
    };
    bool CNetworkEX::UseFireCrackerItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb4a0L))(this, n, pBuf);
    };
    bool CNetworkEX::UsePotionRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401ca4c0L))(this, n, pBuf);
    };
    bool CNetworkEX::UseRadarItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb850L))(this, n, pBuf);
    };
    bool CNetworkEX::UseRecallTeleportItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cba50L))(this, n, pBuf);
    };
    bool CNetworkEX::UseRecoverLossExpItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb3b0L))(this, n, pBuf);
    };
    bool CNetworkEX::UseSoccerBallItemRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401cb6d0L))(this, n, pBuf);
    };
    bool CNetworkEX::UserBlockResult(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c10d0L))(this, n, pMsg);
    };
    void CNetworkEX::UserLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*);
        (org_ptr(0x1401e1310L))(this);
    };
    bool CNetworkEX::WebAgentLineAnalysis(int n, struct _MSG_HEADER* pMsgHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1401dfd40L))(this, n, pMsgHeader, pMsg);
    };
    bool CNetworkEX::WeeklyGuildRankRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d80f0L))(this, n, pBuf);
    };
    bool CNetworkEX::WhisperBlockReport(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401d7e20L))(this, n, pBuf);
    };
    bool CNetworkEX::WorldExitInform(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c09a0L))(this, n, pMsg);
    };
    bool CNetworkEX::WorldMsgInform(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c09f0L))(this, n, pMsg);
    };
    bool CNetworkEX::WorldServiceInform(unsigned int n, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, unsigned int, char*);
        return (org_ptr(0x1401c0940L))(this, n, pMsg);
    };
    bool CNetworkEX::ZoneAliveCheckRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNetworkEX*, int, char*);
        return (org_ptr(0x1401c3d90L))(this, n, pBuf);
    };
    CNetworkEX::~CNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*);
        (org_ptr(0x1401dabb0L))(this);
    };
    void CNetworkEX::dtor_CNetworkEX()
    {
        using org_ptr = void (WINAPIV*)(struct CNetworkEX*);
        (org_ptr(0x1401dabb0L))(this);
    };
END_ATF_NAMESPACE
