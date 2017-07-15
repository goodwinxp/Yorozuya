#include <CPartyPlayer.hpp>


START_ATF_NAMESPACE
    CPartyPlayer::CPartyPlayer()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*);
        (org_ptr(0x140044c10L))(this);
    };
    void CPartyPlayer::ctor_CPartyPlayer()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*);
        (org_ptr(0x140044c10L))(this);
    };
    bool CPartyPlayer::DisjointParty()
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140045190L))(this);
    };
    void CPartyPlayer::EnterWorld(struct _WA_AVATOR_CODE* pData, uint16_t wZoneIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*, struct _WA_AVATOR_CODE*, uint16_t);
        (org_ptr(0x140044ca0L))(this, pData, wZoneIndex);
    };
    void CPartyPlayer::ExitWorld(struct CPartyPlayer** ppoutNewBoss)
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*, struct CPartyPlayer**);
        (org_ptr(0x140044d30L))(this, ppoutNewBoss);
    };
    bool CPartyPlayer::FoundParty(struct CPartyPlayer* pParticiper)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, struct CPartyPlayer*);
        return (org_ptr(0x1400450e0L))(this, pParticiper);
    };
    struct CPlayer* CPartyPlayer::GetLootAuthor()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140045c50L))(this);
    };
    int CPartyPlayer::GetPopPartyMember()
    {
        using org_ptr = int (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140044eb0L))(this);
    };
    struct CPartyPlayer* CPartyPlayer::GetPtrFromSerial(unsigned int dwWorldSerial)
    {
        using org_ptr = struct CPartyPlayer* (WINAPIV*)(struct CPartyPlayer*, unsigned int);
        return (org_ptr(0x140044f80L))(this, dwWorldSerial);
    };
    struct CPartyPlayer** CPartyPlayer::GetPtrPartyMember()
    {
        using org_ptr = struct CPartyPlayer** (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140044f50L))(this);
    };
    bool CPartyPlayer::InheritBoss(struct CPartyPlayer* pSuccessor)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, struct CPartyPlayer*);
        return (org_ptr(0x140045830L))(this, pSuccessor);
    };
    void CPartyPlayer::Init(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*, uint16_t);
        (org_ptr(0x140044c30L))(this, wIndex);
    };
    bool CPartyPlayer::InsertPartyMember(struct CPartyPlayer* pJoiner)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, struct CPartyPlayer*);
        return (org_ptr(0x1400452f0L))(this, pJoiner);
    };
    bool CPartyPlayer::IsJoinPartyLevel(int nJoinerLevel, float fProf)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, int, float);
        return (org_ptr(0x140045ea0L))(this, nJoinerLevel, fProf);
    };
    bool CPartyPlayer::IsPartyBoss()
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140044e50L))(this);
    };
    bool CPartyPlayer::IsPartyLock()
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140044e80L))(this);
    };
    bool CPartyPlayer::IsPartyMember(struct CPlayer* pkObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, struct CPlayer*);
        return (org_ptr(0x140045030L))(this, pkObj);
    };
    bool CPartyPlayer::IsPartyMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*);
        return (org_ptr(0x140044e30L))(this);
    };
    void CPartyPlayer::PartyListInit()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*);
        (org_ptr(0x140044db0L))(this);
    };
    bool CPartyPlayer::RemovePartyMember(struct CPartyPlayer* pExiter, struct CPartyPlayer** ppoutNewBoss)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, struct CPartyPlayer*, struct CPartyPlayer**);
        return (org_ptr(0x1400453a0L))(this, pExiter, ppoutNewBoss);
    };
    bool CPartyPlayer::SetLockMode(bool bLock)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, bool);
        return (org_ptr(0x140045b70L))(this, bLock);
    };
    bool CPartyPlayer::SetLootShareMode(char byLootShareMode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyPlayer*, char);
        return (org_ptr(0x140045be0L))(this, byLootShareMode);
    };
    void CPartyPlayer::SetNextLootAuthor()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyPlayer*);
        (org_ptr(0x140045d80L))(this);
    };
END_ATF_NAMESPACE
