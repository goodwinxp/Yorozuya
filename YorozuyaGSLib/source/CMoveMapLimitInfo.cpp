#include <CMoveMapLimitInfo.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitInfo::CMoveMapLimitInfo(unsigned int uiInx, int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*, unsigned int, int);
        (org_ptr(0x1403a3d00L))(this, uiInx, iType);
    };
    void CMoveMapLimitInfo::ctor_CMoveMapLimitInfo(unsigned int uiInx, int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*, unsigned int, int);
        (org_ptr(0x1403a3d00L))(this, uiInx, iType);
    };
    struct CMoveMapLimitInfo* CMoveMapLimitInfo::Create(unsigned int uiInx, int iType)
    {
        using org_ptr = struct CMoveMapLimitInfo* (WINAPIV*)(unsigned int, int);
        return (org_ptr(0x1403a3db0L))(uiInx, iType);
    };
    unsigned int CMoveMapLimitInfo::GetInx()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMoveMapLimitInfo*);
        return (org_ptr(0x1403a74a0L))(this);
    };
    int CMoveMapLimitInfo::GetType()
    {
        using org_ptr = int (WINAPIV*)(struct CMoveMapLimitInfo*);
        return (org_ptr(0x1403a6f50L))(this);
    };
    bool CMoveMapLimitInfo::IsEqualLimit(int iType, int iMapInx, unsigned int dwStoreRecordIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitInfo*, int, int, unsigned int);
        return (org_ptr(0x1403a3e70L))(this, iType, iMapInx, dwStoreRecordIndex);
    };
    void CMoveMapLimitInfo::Load(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a6ee0L))(this, pkPlayer, pkRight);
    };
    void CMoveMapLimitInfo::LogIn(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a6f00L))(this, pkPlayer, pkRight);
    };
    void CMoveMapLimitInfo::LogOut(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a6f20L))(this, pkPlayer, pkRight);
    };
    void CMoveMapLimitInfo::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*);
        (org_ptr(0x1403a6f40L))(this);
    };
    CMoveMapLimitInfo::~CMoveMapLimitInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*);
        (org_ptr(0x1403a3d60L))(this);
    };
    void CMoveMapLimitInfo::dtor_CMoveMapLimitInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfo*);
        (org_ptr(0x1403a3d60L))(this);
    };
    
END_ATF_NAMESPACE
