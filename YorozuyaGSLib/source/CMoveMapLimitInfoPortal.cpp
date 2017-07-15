#include <CMoveMapLimitInfoPortal.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitInfoPortal::CMoveMapLimitInfoPortal(unsigned int uiInx, int iType)
        : CMoveMapLimitInfo(uiInx, iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*, unsigned int, int);
        (org_ptr(0x1403a3ee0L))(this, uiInx, iType);
    };
    void CMoveMapLimitInfoPortal::ctor_CMoveMapLimitInfoPortal(unsigned int uiInx, int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*, unsigned int, int);
        (org_ptr(0x1403a3ee0L))(this, uiInx, iType);
    };
    bool CMoveMapLimitInfoPortal::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        return (org_ptr(0x1403a4120L))(this);
    };
    void CMoveMapLimitInfoPortal::Load(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a42b0L))(this, pkPlayer, pkRight);
    };
    bool CMoveMapLimitInfoPortal::LoadINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        return (org_ptr(0x1403a56f0L))(this);
    };
    void CMoveMapLimitInfoPortal::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        (org_ptr(0x1403a43d0L))(this);
    };
    char CMoveMapLimitInfoPortal::ProcForceMoveHQ(int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitInfoPortal*, int, char*, struct CMoveMapLimitRightInfo*);
        return (org_ptr(0x1403a44b0L))(this, iUserInx, pRequest, pkRight);
    };
    char CMoveMapLimitInfoPortal::ProcGotoLimitZone(int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitInfoPortal*, int, char*, struct CMoveMapLimitRightInfo*);
        return (org_ptr(0x1403a47b0L))(this, iUserInx, pRequest, pkRight);
    };
    char CMoveMapLimitInfoPortal::ProcUseMoveScroll(int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitInfoPortal*, int, char*, struct CMoveMapLimitRightInfo*);
        return (org_ptr(0x1403a4520L))(this, iUserInx, pRequest, pkRight);
    };
    char CMoveMapLimitInfoPortal::Request(int iUserInx, int iRequetType, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitInfoPortal*, int, int, char*, struct CMoveMapLimitRightInfo*);
        return (org_ptr(0x1403a4200L))(this, iUserInx, iRequetType, pRequest, pkRight);
    };
    void CMoveMapLimitInfoPortal::SubProcForceMoveHQ()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        (org_ptr(0x1403a4a50L))(this);
    };
    char CMoveMapLimitInfoPortal::SubProcGotoLimitZone(int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitInfoPortal*, int, char*, struct CMoveMapLimitRightInfo*);
        return (org_ptr(0x1403a4d10L))(this, iUserInx, pRequest, pkRight);
    };
    void CMoveMapLimitInfoPortal::SubProcNotifyForceMoveHQ()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        (org_ptr(0x1403a4880L))(this);
    };
    CMoveMapLimitInfoPortal::~CMoveMapLimitInfoPortal()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        (org_ptr(0x1403a3fd0L))(this);
    };
    void CMoveMapLimitInfoPortal::dtor_CMoveMapLimitInfoPortal()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoPortal*);
        (org_ptr(0x1403a3fd0L))(this);
    };
    
    
END_ATF_NAMESPACE
