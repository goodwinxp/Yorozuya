#include <CMoveMapLimitRight.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitRight::CMoveMapLimitRight(int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, int);
        (org_ptr(0x1403ae460L))(this, iType);
    };
    void CMoveMapLimitRight::ctor_CMoveMapLimitRight(int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, int);
        (org_ptr(0x1403ae460L))(this, iType);
    };
    void CMoveMapLimitRight::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*);
        (org_ptr(0x1403ae4a0L))(this);
    };
    struct CMoveMapLimitRight* CMoveMapLimitRight::Create(int iType)
    {
        using org_ptr = struct CMoveMapLimitRight* (WINAPIV*)(int);
        return (org_ptr(0x1403ac5e0L))(iType);
    };
    void CMoveMapLimitRight::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, struct CPlayer*);
        (org_ptr(0x1403ae4d0L))(this, pkPlayer);
    };
    int CMoveMapLimitRight::GetType()
    {
        using org_ptr = int (WINAPIV*)(struct CMoveMapLimitRight*);
        return (org_ptr(0x1403ae6b0L))(this);
    };
    bool CMoveMapLimitRight::IsHaveRight()
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitRight*);
        return (org_ptr(0x1403ae4f0L))(this);
    };
    void CMoveMapLimitRight::Load(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, struct CPlayer*);
        (org_ptr(0x1403ae4b0L))(this, pkPlayer);
    };
    void CMoveMapLimitRight::LogIn(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, struct CPlayer*);
        (org_ptr(0x1403ae4c0L))(this, pkPlayer);
    };
    void CMoveMapLimitRight::LogOut(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, struct CPlayer*);
        (org_ptr(0x1403ae4e0L))(this, pkPlayer);
    };
    void CMoveMapLimitRight::SetFlag(int iType, bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*, int, bool);
        (org_ptr(0x1403ae500L))(this, iType, bFlag);
    };
    CMoveMapLimitRight::~CMoveMapLimitRight()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*);
        (org_ptr(0x1403ae740L))(this);
    };
    void CMoveMapLimitRight::dtor_CMoveMapLimitRight()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRight*);
        (org_ptr(0x1403ae740L))(this);
    };
    
END_ATF_NAMESPACE
