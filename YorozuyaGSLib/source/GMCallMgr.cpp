#include <GMCallMgr.hpp>


START_ATF_NAMESPACE
    GMCallMgr::GMCallMgr()
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*);
        (org_ptr(0x1402aa0b0L))(this);
    };
    void GMCallMgr::ctor_GMCallMgr()
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*);
        (org_ptr(0x1402aa0b0L))(this);
    };
    struct GMRequestData* GMCallMgr::GetGMRequestDataPtr(struct CPlayer* pOne)
    {
        using org_ptr = struct GMRequestData* (WINAPIV*)(struct GMCallMgr*, struct CPlayer*);
        return (org_ptr(0x1402aa5a0L))(this, pOne);
    };
    void GMCallMgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*);
        (org_ptr(0x1402aa300L))(this);
    };
    void GMCallMgr::InitReqBuff()
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*);
        (org_ptr(0x1402aa340L))(this);
    };
    struct GMRequestData* GMCallMgr::PopReqEmptNode()
    {
        using org_ptr = struct GMRequestData* (WINAPIV*)(struct GMCallMgr*);
        return (org_ptr(0x1402aa3e0L))(this);
    };
    void GMCallMgr::PushReqNode(struct GMRequestData* pInst)
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*, struct GMRequestData*);
        (org_ptr(0x1402aa4f0L))(this, pInst);
    };
    bool GMCallMgr::RequestAcceptGMCall(struct CPlayer* pOne, unsigned int dwUserSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GMCallMgr*, struct CPlayer*, unsigned int);
        return (org_ptr(0x1402aa810L))(this, pOne, dwUserSerial);
    };
    bool GMCallMgr::RequestGMCall(struct CPlayer* pOne, int bCall)
    {
        using org_ptr = bool (WINAPIV*)(struct GMCallMgr*, struct CPlayer*, int);
        return (org_ptr(0x1402aa6a0L))(this, pOne, bCall);
    };
    bool GMCallMgr::RequestGMList(struct CPlayer* pOne, int nCurrPageIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct GMCallMgr*, struct CPlayer*, int);
        return (org_ptr(0x1402aa7a0L))(this, pOne, nCurrPageIndex);
    };
    void GMCallMgr::SendResponseAcceptResult(struct CPlayer* pOneGM, struct CPlayer* pOneUser, int nErrorCode)
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*, struct CPlayer*, struct CPlayer*, int);
        (org_ptr(0x1402aae40L))(this, pOneGM, pOneUser, nErrorCode);
    };
    bool GMCallMgr::SendResponseGMCall(struct CPlayer* pOne, int bCallState)
    {
        using org_ptr = bool (WINAPIV*)(struct GMCallMgr*, struct CPlayer*, int);
        return (org_ptr(0x1402aaa60L))(this, pOne, bCallState);
    };
    bool GMCallMgr::SendResponseGMList(struct CPlayer* pOne, int nCurrPageIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct GMCallMgr*, struct CPlayer*, int);
        return (org_ptr(0x1402aab10L))(this, pOne, nCurrPageIndex);
    };
    GMCallMgr::~GMCallMgr()
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*);
        (org_ptr(0x1402aa200L))(this);
    };
    void GMCallMgr::dtor_GMCallMgr()
    {
        using org_ptr = void (WINAPIV*)(struct GMCallMgr*);
        (org_ptr(0x1402aa200L))(this);
    };
    
END_ATF_NAMESPACE
