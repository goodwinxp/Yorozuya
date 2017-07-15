#include <CGravityStoneRegener.hpp>


START_ATF_NAMESPACE
    CGravityStoneRegener::CGravityStoneRegener()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012e4c0L))(this);
    };
    void CGravityStoneRegener::ctor_CGravityStoneRegener()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012e4c0L))(this);
    };
    void CGravityStoneRegener::CheatClearRegenState()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012edb0L))(this);
    };
    bool CGravityStoneRegener::ClearRegen()
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStoneRegener*);
        return (org_ptr(0x14012ebb0L))(this);
    };
    bool CGravityStoneRegener::Create(struct CMapData* pkMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStoneRegener*, struct CMapData*);
        return (org_ptr(0x14012e950L))(this, pkMap);
    };
    void CGravityStoneRegener::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012ea50L))(this);
    };
    int CGravityStoneRegener::GetPortalInx()
    {
        using org_ptr = int (WINAPIV*)(struct CGravityStoneRegener*);
        return (org_ptr(0x140034ae0L))(this);
    };
    char* CGravityStoneRegener::GetStateString(struct ATL::CStringT<char>* strState)
    {
        using org_ptr = char* (WINAPIV*)(struct CGravityStoneRegener*, struct ATL::CStringT<char>*);
        return (org_ptr(0x14012ecf0L))(this, strState);
    };
    bool CGravityStoneRegener::Init(unsigned int uiMapInx, uint16_t wInx, struct CMapData* pkMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStoneRegener*, unsigned int, uint16_t, struct CMapData*);
        return (org_ptr(0x14012e590L))(this, uiMapInx, wInx, pkMap);
    };
    bool CGravityStoneRegener::IsNearPosition(float* pfCurPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CGravityStoneRegener*, float*);
        return (org_ptr(0x14012ee30L))(this, pfCurPos);
    };
    int CGravityStoneRegener::Regen()
    {
        using org_ptr = int (WINAPIV*)(struct CGravityStoneRegener*);
        return (org_ptr(0x14012eaa0L))(this);
    };
    void CGravityStoneRegener::SendMsgAlterState()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012ef50L))(this);
    };
    void CGravityStoneRegener::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*, int);
        (org_ptr(0x14012ee90L))(this, n);
    };
    char CGravityStoneRegener::Take(struct CMapData* pkMap, float* pfCurPos)
    {
        using org_ptr = char (WINAPIV*)(struct CGravityStoneRegener*, struct CMapData*, float*);
        return (org_ptr(0x14012eb20L))(this, pkMap, pfCurPos);
    };
    CGravityStoneRegener::~CGravityStoneRegener()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012e540L))(this);
    };
    void CGravityStoneRegener::dtor_CGravityStoneRegener()
    {
        using org_ptr = void (WINAPIV*)(struct CGravityStoneRegener*);
        (org_ptr(0x14012e540L))(this);
    };
    
END_ATF_NAMESPACE
