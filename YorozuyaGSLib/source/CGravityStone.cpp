#include <CGravityStone.hpp>


START_ATF_NAMESPACE
    CGravityStone::CGravityStone(uint16_t wInx)
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*, uint16_t);
        (org_ptr(0x140164910L))(this, wInx);
    };
    void CGravityStone::ctor_CGravityStone(uint16_t wInx)
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*, uint16_t);
        (org_ptr(0x140164910L))(this, wInx);
    };
    char CGravityStone::CheatGet(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct CGravityStone*, struct CPlayer*);
        return (org_ptr(0x1403f01b0L))(this, pkPlayer);
    };
    bool CGravityStone::CheckTakeTimeLimit()
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStone*);
        return (org_ptr(0x1401650c0L))(this);
    };
    void CGravityStone::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*);
        (org_ptr(0x140164db0L))(this);
    };
    void CGravityStone::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*);
        (org_ptr(0x140165060L))(this);
    };
    char CGravityStone::Drop(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct CGravityStone*, struct CPlayer*);
        return (org_ptr(0x140164b50L))(this, pkPlayer);
    };
    char CGravityStone::Get(uint16_t wIndex, unsigned int dwObjSerial, struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct CGravityStone*, uint16_t, unsigned int, struct CPlayer*);
        return (org_ptr(0x140164ce0L))(this, wIndex, dwObjSerial, pkPlayer);
    };
    struct CPlayer* CGravityStone::GetOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CGravityStone*);
        return (org_ptr(0x140034ac0L))(this);
    };
    float* CGravityStone::GetOwnerCurPos()
    {
        using org_ptr = float* (WINAPIV*)(struct CGravityStone*);
        return (org_ptr(0x140164f30L))(this);
    };
    bool CGravityStone::IsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStone*);
        return (org_ptr(0x140164ec0L))(this);
    };
    bool CGravityStone::IsNearPosition(float* pfCurPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStone*, float*);
        return (org_ptr(0x1401652b0L))(this, pfCurPos);
    };
    bool CGravityStone::IsValidOwner(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStone*, struct CPlayer*);
        return (org_ptr(0x140164e30L))(this, pkPlayer);
    };
    bool CGravityStone::Regen(struct _object_create_setdata* pParam)
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStone*, struct _object_create_setdata*);
        return (org_ptr(0x140164ad0L))(this, pParam);
    };
    void CGravityStone::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*);
        (org_ptr(0x140165140L))(this);
    };
    void CGravityStone::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*);
        (org_ptr(0x140165220L))(this);
    };
    void CGravityStone::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*, int);
        (org_ptr(0x140164f70L))(this, n);
    };
    void CGravityStone::SetOwner(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*, struct CPlayer*);
        (org_ptr(0x140164a50L))(this, pkPlayer);
    };
    CGravityStone::~CGravityStone()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*);
        (org_ptr(0x140164a00L))(this);
    };
    void CGravityStone::dtor_CGravityStone()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStone*);
        (org_ptr(0x140164a00L))(this);
    };
END_ATF_NAMESPACE
