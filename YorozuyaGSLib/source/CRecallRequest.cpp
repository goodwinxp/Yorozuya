#include <CRecallRequest.hpp>


START_ATF_NAMESPACE
    CRecallRequest::CRecallRequest(uint16_t usID)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallRequest*, uint16_t);
        (org_ptr(0x14024d4d0L))(this, usID);
    };
    void CRecallRequest::ctor_CRecallRequest(uint16_t usID)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallRequest*, uint16_t);
        (org_ptr(0x14024d4d0L))(this, usID);
    };
    void CRecallRequest::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallRequest*);
        (org_ptr(0x14024dc90L))(this);
    };
    void CRecallRequest::Close(bool bDone)
    {
        using org_ptr = void (WINAPIV*)(struct CRecallRequest*, bool);
        (org_ptr(0x14024dd10L))(this, bDone);
    };
    uint16_t CRecallRequest::GetID()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024fc80L))(this);
    };
    struct CPlayer* CRecallRequest::GetOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024fca0L))(this);
    };
    bool CRecallRequest::IsBattleModeUse()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024fd00L))(this);
    };
    bool CRecallRequest::IsClose()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024dc20L))(this);
    };
    bool CRecallRequest::IsRecallAfterStoneState()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024fce0L))(this);
    };
    bool CRecallRequest::IsRecallParty()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024fcc0L))(this);
    };
    bool CRecallRequest::IsTimeOut()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024ffe0L))(this);
    };
    bool CRecallRequest::IsWait()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecallRequest*);
        return (org_ptr(0x14024ff80L))(this);
    };
    char CRecallRequest::Recall(struct CPlayer* pkDest, bool bStone)
    {
        using org_ptr = char (WINAPIV*)(struct CRecallRequest*, struct CPlayer*, bool);
        return (org_ptr(0x14024dac0L))(this, pkDest, bStone);
    };
    char CRecallRequest::Regist(struct CPlayer* pkObj, struct CCharacter* pkDest, bool bRecallParty, bool bStone, bool bBattleModeUse)
    {
        using org_ptr = char (WINAPIV*)(struct CRecallRequest*, struct CPlayer*, struct CCharacter*, bool, bool, bool);
        return (org_ptr(0x14024d530L))(this, pkObj, pkDest, bRecallParty, bStone, bBattleModeUse);
    };
    CRecallRequest::~CRecallRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallRequest*);
        (org_ptr(0x14024d520L))(this);
    };
    void CRecallRequest::dtor_CRecallRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CRecallRequest*);
        (org_ptr(0x14024d520L))(this);
    };
    
END_ATF_NAMESPACE
