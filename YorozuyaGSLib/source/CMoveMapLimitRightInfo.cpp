#include <CMoveMapLimitRightInfo.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitRightInfo::CMoveMapLimitRightInfo(struct CMoveMapLimitRightInfo* __that)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403af990L))(this, __that);
    };
    void CMoveMapLimitRightInfo::ctor_CMoveMapLimitRightInfo(struct CMoveMapLimitRightInfo* __that)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403af990L))(this, __that);
    };
    CMoveMapLimitRightInfo::CMoveMapLimitRightInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403ae760L))(this);
    };
    void CMoveMapLimitRightInfo::ctor_CMoveMapLimitRightInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403ae760L))(this);
    };
    void CMoveMapLimitRightInfo::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403ad710L))(this);
    };
    void CMoveMapLimitRightInfo::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, struct CPlayer*);
        (org_ptr(0x1403ad150L))(this, pkPlayer);
    };
    bool CMoveMapLimitRightInfo::IsHaveRight(int iType)
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitRightInfo*, int);
        return (org_ptr(0x1403acba0L))(this, iType);
    };
    void CMoveMapLimitRightInfo::Load(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, struct CPlayer*);
        (org_ptr(0x1403acd10L))(this, pkPlayer);
    };
    void CMoveMapLimitRightInfo::LogIn(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, struct CPlayer*);
        (org_ptr(0x1403acf30L))(this, pkPlayer);
    };
    void CMoveMapLimitRightInfo::LogOut(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, struct CPlayer*);
        (org_ptr(0x1403ad370L))(this, pkPlayer);
    };
    bool CMoveMapLimitRightInfo::Regist(int iType)
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitRightInfo*, int);
        return (org_ptr(0x1403ac960L))(this, iType);
    };
    void CMoveMapLimitRightInfo::SetFlag(int iType, int iSubType, bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*, int, int, bool);
        (org_ptr(0x1403acc50L))(this, iType, iSubType, bFlag);
    };
    CMoveMapLimitRightInfo::~CMoveMapLimitRightInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a3990L))(this);
    };
    void CMoveMapLimitRightInfo::dtor_CMoveMapLimitRightInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a3990L))(this);
    };
END_ATF_NAMESPACE
