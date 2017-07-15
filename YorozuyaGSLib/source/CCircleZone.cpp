#include <CCircleZone.hpp>


START_ATF_NAMESPACE
    CCircleZone::CCircleZone()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012d660L))(this);
    };
    void CCircleZone::ctor_CCircleZone()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012d660L))(this);
    };
    bool CCircleZone::Create(struct CMapData* pkMap, char byColor)
    {
        using org_ptr = bool (WINAPIV*)(struct CCircleZone*, struct CMapData*, char);
        return (org_ptr(0x14012da60L))(this, pkMap, byColor);
    };
    void CCircleZone::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012db70L))(this);
    };
    char CCircleZone::GetColor()
    {
        using org_ptr = char (WINAPIV*)(struct CCircleZone*);
        return (org_ptr(0x140034b20L))(this);
    };
    int CCircleZone::GetPortalInx()
    {
        using org_ptr = int (WINAPIV*)(struct CCircleZone*);
        return (org_ptr(0x140034b00L))(this);
    };
    char CCircleZone::Goal(struct CMapData* pkMap, float* pfCurPos)
    {
        using org_ptr = char (WINAPIV*)(struct CCircleZone*, struct CMapData*, float*);
        return (org_ptr(0x14012dbe0L))(this, pkMap, pfCurPos);
    };
    bool CCircleZone::Init(unsigned int uiMapInx, int iPlayerInx, int iNth, uint16_t wInx, struct CMapData* pkMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CCircleZone*, unsigned int, int, int, uint16_t, struct CMapData*);
        return (org_ptr(0x14012d740L))(this, uiMapInx, iPlayerInx, iNth, wInx, pkMap);
    };
    bool CCircleZone::IsNearPosition(float* pfCurPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CCircleZone*, float*);
        return (org_ptr(0x14012de20L))(this, pfCurPos);
    };
    void CCircleZone::SendMsgCreate()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012dc60L))(this);
    };
    void CCircleZone::SendMsgGoal()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012dda0L))(this);
    };
    void CCircleZone::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*, int);
        (org_ptr(0x14012dd00L))(this, n);
    };
    CCircleZone::~CCircleZone()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012d6f0L))(this);
    };
    void CCircleZone::dtor_CCircleZone()
    {
        using org_ptr = void (WINAPIV*)(struct CCircleZone*);
        (org_ptr(0x14012d6f0L))(this);
    };
    
END_ATF_NAMESPACE
