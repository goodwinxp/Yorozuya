#include <CDarkHole.hpp>


START_ATF_NAMESPACE
    CDarkHole::CDarkHole()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x140163820L))(this);
    };
    void CDarkHole::ctor_CDarkHole()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x140163820L))(this);
    };
    bool CDarkHole::Create(struct _darkhole_create_setdata* pParam)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*, struct _darkhole_create_setdata*);
        return (org_ptr(0x1401639a0L))(this, pParam);
    };
    bool CDarkHole::Destroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*);
        return (org_ptr(0x140163b20L))(this);
    };
    bool CDarkHole::EnterPlayer(struct CPlayer* pEnter, struct CMapData* pOldMap, uint16_t wOldLayer, float* fOldPos, bool bReconnect)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*, struct CMapData*, uint16_t, float*, bool);
        return (org_ptr(0x140163bc0L))(this, pEnter, pOldMap, wOldLayer, fOldPos, bReconnect);
    };
    bool CDarkHole::GetEnterNewPos(struct _ENTER_DUNGEON_NEW_POS* pNewPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*, struct _ENTER_DUNGEON_NEW_POS*);
        return (org_ptr(0x140163d10L))(this, pNewPos);
    };
    void CDarkHole::Init(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*, struct _object_id*);
        (org_ptr(0x140163910L))(this, pID);
    };
    bool CDarkHole::IsNewEnterAbleNum()
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*);
        return (org_ptr(0x140163d70L))(this);
    };
    bool CDarkHole::IsNewEnterAblePlayer(struct CPlayer* pEnter)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*);
        return (org_ptr(0x140163c50L))(this, pEnter);
    };
    bool CDarkHole::IsOpenPartyMember(struct CPlayer* pOpener)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHole*, struct CPlayer*);
        return (org_ptr(0x140163cb0L))(this, pOpener);
    };
    void CDarkHole::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x140163e40L))(this);
    };
    void CDarkHole::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x140163f10L))(this);
    };
    void CDarkHole::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x140164040L))(this);
    };
    void CDarkHole::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*, int);
        (org_ptr(0x1401642f0L))(this, n);
    };
    void CDarkHole::SendMsg_StateChange()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x140164240L))(this);
    };
    CDarkHole::~CDarkHole()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x1401638c0L))(this);
    };
    void CDarkHole::dtor_CDarkHole()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHole*);
        (org_ptr(0x1401638c0L))(this);
    };
END_ATF_NAMESPACE
