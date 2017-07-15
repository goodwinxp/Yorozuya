#include <CRecallEffectController.hpp>


START_ATF_NAMESPACE
    CRecallEffectController::CRecallEffectController()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024dd80L))(this);
    };
    void CRecallEffectController::ctor_CRecallEffectController()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024dd80L))(this);
    };
    void CRecallEffectController::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024eb70L))(this);
    };
    void CRecallEffectController::Close(struct CRecallRequest* pkRequest, bool bDone)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*, struct CRecallRequest*, bool);
        (org_ptr(0x14024eea0L))(this, pkRequest, bDone);
    };
    void CRecallEffectController::DecideRecall(uint16_t dwRequestID, char byAgree, struct CPlayer* pkObj)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*, uint16_t, char, struct CPlayer*);
        (org_ptr(0x14024e430L))(this, dwRequestID, byAgree, pkObj);
    };
    void CRecallEffectController::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14024dec0L))();
    };
    struct CRecallRequest* CRecallEffectController::GetEmpty()
    {
        using org_ptr = struct CRecallRequest* (WINAPIV*)(struct CRecallEffectController*);
        return (org_ptr(0x14024f040L))(this);
    };
    char CRecallEffectController::GetResistedRecall(uint16_t wID, struct CRecallRequest** pkRequest)
    {
        using org_ptr = char (WINAPIV*)(struct CRecallEffectController*, uint16_t, struct CRecallRequest**);
        return (org_ptr(0x14024f0f0L))(this, wID, pkRequest);
    };
    bool CRecallEffectController::Init(unsigned int uiSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallEffectController*, unsigned int);
        return (org_ptr(0x14024df40L))(this, uiSize);
    };
    struct CRecallEffectController* CRecallEffectController::Instance()
    {
        using org_ptr = struct CRecallEffectController* (WINAPIV*)();
        return (org_ptr(0x14024de00L))();
    };
    void CRecallEffectController::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024eb10L))(this);
    };
    char CRecallEffectController::ProcessRequestRecall(struct CPlayer* pkPerformer, struct CCharacter* pkDest, struct CRecallRequest** pkRequest, bool bRecallParty, bool bStone, bool bBattleModeUse)
    {
        using org_ptr = char (WINAPIV*)(struct CRecallEffectController*, struct CPlayer*, struct CCharacter*, struct CRecallRequest**, bool, bool, bool);
        return (org_ptr(0x14024ef50L))(this, pkPerformer, pkDest, pkRequest, bRecallParty, bStone, bBattleModeUse);
    };
    bool CRecallEffectController::RequestRecall(struct CPlayer* pkPerformer, struct CCharacter* pkDest, bool bRecallParty, bool bStone, bool bBattleModeUse)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallEffectController*, struct CPlayer*, struct CCharacter*, bool, bool, bool);
        return (org_ptr(0x14024e340L))(this, pkPerformer, pkDest, bRecallParty, bStone, bBattleModeUse);
    };
    void CRecallEffectController::SendDecideRecallErrorResultToDest(char byErr, struct CPlayer* pkDest, int nCallerMapCode)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*, char, struct CPlayer*, int);
        (org_ptr(0x14024f3a0L))(this, byErr, pkDest, nCallerMapCode);
    };
    void CRecallEffectController::SendRecallReqeustResult(char byRet, struct CPlayer* pkObj)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*, char, struct CPlayer*);
        (org_ptr(0x14024f1e0L))(this, byRet, pkObj);
    };
    void CRecallEffectController::SendRecallReqeustToDest(uint16_t wRequestID, struct CPlayer* pkPerformer, struct CPlayer* pkDest)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*, uint16_t, struct CPlayer*, struct CPlayer*);
        (org_ptr(0x14024f2c0L))(this, wRequestID, pkPerformer, pkDest);
    };
    void CRecallEffectController::UpdateClose()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024edb0L))(this);
    };
    CRecallEffectController::~CRecallEffectController()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024ddc0L))(this);
    };
    void CRecallEffectController::dtor_CRecallEffectController()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        (org_ptr(0x14024ddc0L))(this);
    };
END_ATF_NAMESPACE
