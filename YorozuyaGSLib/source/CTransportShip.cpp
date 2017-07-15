#include <CTransportShip.hpp>


START_ATF_NAMESPACE
    void CTransportShip::AlterState(bool bAnchor, char byDirect, int nPassMin, int nNextSubEventTerm)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, bool, char, int, int);
        (org_ptr(0x140263c00L))(this, bAnchor, byDirect, nPassMin, nNextSubEventTerm);
    };
    void CTransportShip::ApplyTicketReserver()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140264f80L))(this);
    };
    CTransportShip::CTransportShip()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140263820L))(this);
    };
    void CTransportShip::ctor_CTransportShip()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140263820L))(this);
    };
    void CTransportShip::CheckHurry()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140263e80L))(this);
    };
    void CTransportShip::CheckTicket()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140263dd0L))(this);
    };
    void CTransportShip::CheckTicket_Kick(struct CPlayer* pPtr, int nPortalIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, struct CPlayer*, int);
        (org_ptr(0x1402642d0L))(this, pPtr, nPortalIndex);
    };
    void CTransportShip::CheckTicket_Pass(struct CPlayer* pPtr, int nPortalIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, struct CPlayer*, int);
        (org_ptr(0x140264170L))(this, pPtr, nPortalIndex);
    };
    void CTransportShip::EnterMember(struct CPlayer* pEnter)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, struct CPlayer*);
        (org_ptr(0x140264830L))(this, pEnter);
    };
    void CTransportShip::ExitMember(struct CPlayer* pExiter, bool bLogoff)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, struct CPlayer*, bool);
        (org_ptr(0x1402649c0L))(this, pExiter, bLogoff);
    };
    bool CTransportShip::GetCurRideShipThisTicket(struct _TicketItem_fld* pTicketFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip*, struct _TicketItem_fld*);
        return (org_ptr(0x140265040L))(this, pTicketFld);
    };
    struct CTransportShip::__mgr_member* CTransportShip::GetEmptyNewMember()
    {
        using org_ptr = struct CTransportShip::__mgr_member* (WINAPIV*)(struct CTransportShip*);
        return (org_ptr(0x1402652a0L))(this);
    };
    int CTransportShip::GetLeftTicketIncludeReserNum(char* pszTarMapCode, int nAdd)
    {
        using org_ptr = int (WINAPIV*)(struct CTransportShip*, char*, int);
        return (org_ptr(0x140264e00L))(this, pszTarMapCode, nAdd);
    };
    struct CMapData* CTransportShip::GetMapCurDirect()
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CTransportShip*);
        return (org_ptr(0x140264dd0L))(this);
    };
    int CTransportShip::GetOutPortalIndex(int nRaceCode, char byExitDirect)
    {
        using org_ptr = int (WINAPIV*)(struct CTransportShip*, int, char);
        return (org_ptr(0x140265110L))(this, nRaceCode, byExitDirect);
    };
    int CTransportShip::GetRideLimLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CTransportShip*);
        return (org_ptr(0x140265140L))(this);
    };
    int CTransportShip::GetRideUpLimLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CTransportShip*);
        return (org_ptr(0x1402651f0L))(this);
    };
    void CTransportShip::GetStartPosInShip(float* pfPos)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, float*);
        (org_ptr(0x140264d70L))(this, pfPos);
    };
    bool CTransportShip::InitShip(struct CMapData* pLinkShipMap, struct CMapData* pLinkMainbaseMap, struct CMapData* pLinkPlatformMap, char byRaceCode_Layer)
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip*, struct CMapData*, struct CMapData*, struct CMapData*, char);
        return (org_ptr(0x1402639c0L))(this, pLinkShipMap, pLinkMainbaseMap, pLinkPlatformMap, byRaceCode_Layer);
    };
    void CTransportShip::InitTicketReserver()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140264f10L))(this);
    };
    bool CTransportShip::IsMemberBeforeLogoff(unsigned int dwPlayerSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip*, unsigned int);
        return (org_ptr(0x140078ae0L))(this, dwPlayerSerial);
    };
    bool CTransportShip::IsOldMember(struct CPlayer* pMember)
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip*, struct CPlayer*);
        return (org_ptr(0x140264cc0L))(this, pMember);
    };
    void CTransportShip::KickFreeMember()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140263f10L))(this);
    };
    void CTransportShip::KickOldMember(char byKickDirectCode)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, char);
        (org_ptr(0x140264030L))(this, byKickDirectCode);
    };
    void CTransportShip::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140263d70L))(this);
    };
    void CTransportShip::ReEnterMember(struct CPlayer* pExiter)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, struct CPlayer*);
        (org_ptr(0x140264b30L))(this, pExiter);
    };
    bool CTransportShip::RenewOldMember(struct CPlayer* pMember)
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip*, struct CPlayer*);
        return (org_ptr(0x140264bc0L))(this, pMember);
    };
    void CTransportShip::SendMsg_KickForSail(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, int);
        (org_ptr(0x1402653d0L))(this, n);
    };
    void CTransportShip::SendMsg_TicketCheck(int n, bool bPass, uint16_t wTicketSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, int, bool, uint16_t);
        (org_ptr(0x140265330L))(this, n, bPass, wTicketSerial);
    };
    void CTransportShip::SendMsg_TransportShipState(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*, int);
        (org_ptr(0x140265450L))(this, n);
    };
    bool CTransportShip::Ticketting(struct CPlayer* pExiter)
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip*, struct CPlayer*);
        return (org_ptr(0x140264450L))(this, pExiter);
    };
    CTransportShip::~CTransportShip()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140265e00L))(this);
    };
    void CTransportShip::dtor_CTransportShip()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip*);
        (org_ptr(0x140265e00L))(this);
    };
    CTransportShip::__mgr_member::__mgr_member()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip::__mgr_member*);
        (org_ptr(0x140265d20L))(this);
    };
    void CTransportShip::__mgr_member::ctor___mgr_member()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip::__mgr_member*);
        (org_ptr(0x140265d20L))(this);
    };
    void CTransportShip::__mgr_member::init()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip::__mgr_member*);
        (org_ptr(0x140265dc0L))(this);
    };
    bool CTransportShip::__mgr_member::is_fill()
    {
        using org_ptr = bool (WINAPIV*)(struct CTransportShip::__mgr_member*);
        return (org_ptr(0x140265de0L))(this);
    };
    CTransportShip::__mgr_ticket::__mgr_ticket()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip::__mgr_ticket*);
        (org_ptr(0x140265d40L))(this);
    };
    void CTransportShip::__mgr_ticket::ctor___mgr_ticket()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip::__mgr_ticket*);
        (org_ptr(0x140265d40L))(this);
    };
    void CTransportShip::__mgr_ticket::init()
    {
        using org_ptr = void (WINAPIV*)(struct CTransportShip::__mgr_ticket*);
        (org_ptr(0x140265d90L))(this);
    };
END_ATF_NAMESPACE
