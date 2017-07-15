#include <CPartyModeKillMonsterExpNotify.hpp>


START_ATF_NAMESPACE
    bool CPartyModeKillMonsterExpNotify::Add(struct CPlayer* pkMember, float fExp)
    {
        using org_ptr = bool (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*, struct CPlayer*, float);
        return (org_ptr(0x1401692f0L))(this, pkMember, fExp);
    };
    CPartyModeKillMonsterExpNotify::CPartyModeKillMonsterExpNotify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14008e4f0L))(this);
    };
    void CPartyModeKillMonsterExpNotify::ctor_CPartyModeKillMonsterExpNotify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14008e4f0L))(this);
    };
    void CPartyModeKillMonsterExpNotify::Notify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14008e620L))(this);
    };
    void CPartyModeKillMonsterExpNotify::ctor_Notify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14008e620L))(this);
    };
    void CPartyModeKillMonsterExpNotify::SetKillMonsterFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14007d3a0L))(this);
    };
    CPartyModeKillMonsterExpNotify::~CPartyModeKillMonsterExpNotify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14008e580L))(this);
    };
    void CPartyModeKillMonsterExpNotify::dtor_CPartyModeKillMonsterExpNotify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14008e580L))(this);
    };
    CPartyModeKillMonsterExpNotify::CExpInfo::CExpInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify::CExpInfo*);
        (org_ptr(0x14008e5e0L))(this);
    };
    void CPartyModeKillMonsterExpNotify::CExpInfo::ctor_CExpInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify::CExpInfo*);
        (org_ptr(0x14008e5e0L))(this);
    };
    void CPartyModeKillMonsterExpNotify::CExpInfo::Notify()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify::CExpInfo*);
        (org_ptr(0x1401693b0L))(this);
    };
    void CPartyModeKillMonsterExpNotify::CExpInfo::SetGetExp(struct CPlayer* pkMember, float fExp)
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify::CExpInfo*, struct CPlayer*, float);
        (org_ptr(0x1401721d0L))(this, pkMember, fExp);
    };
    CPartyModeKillMonsterExpNotify::CExpInfo::~CExpInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify::CExpInfo*);
        (org_ptr(0x14008e610L))(this);
    };
    void CPartyModeKillMonsterExpNotify::CExpInfo::dtor_CExpInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPartyModeKillMonsterExpNotify::CExpInfo*);
        (org_ptr(0x14008e610L))(this);
    };
END_ATF_NAMESPACE
