#include <CMoveMapLimitRightPortal.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitRightPortal::CMoveMapLimitRightPortal(int iType)
        : CMoveMapLimitRight(iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, int);
        (org_ptr(0x1403ac7f0L))(this, iType);
    };
    void CMoveMapLimitRightPortal::ctor_CMoveMapLimitRightPortal(int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, int);
        (org_ptr(0x1403ac7f0L))(this, iType);
    };
    void CMoveMapLimitRightPortal::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, struct CPlayer*);
        (org_ptr(0x1403ac890L))(this, pkPlayer);
    };
    bool CMoveMapLimitRightPortal::IsHaveRight()
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitRightPortal*);
        return (org_ptr(0x1403ac6a0L))(this);
    };
    void CMoveMapLimitRightPortal::Load(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, struct CPlayer*);
        (org_ptr(0x1403ac860L))(this, pkPlayer);
    };
    void CMoveMapLimitRightPortal::LogOut(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, struct CPlayer*);
        (org_ptr(0x1403ac940L))(this, pkPlayer);
    };
    void CMoveMapLimitRightPortal::SetFlag(int iType, bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightPortal*, int, bool);
        (org_ptr(0x1403ac790L))(this, iType, bFlag);
    };
END_ATF_NAMESPACE
