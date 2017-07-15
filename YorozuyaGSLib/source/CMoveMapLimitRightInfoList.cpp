#include <CMoveMapLimitRightInfoList.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitRightInfoList::CMoveMapLimitRightInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*);
        (org_ptr(0x1403a1e10L))(this);
    };
    void CMoveMapLimitRightInfoList::ctor_CMoveMapLimitRightInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*);
        (org_ptr(0x1403a1e10L))(this);
    };
    void CMoveMapLimitRightInfoList::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*, struct CPlayer*);
        (org_ptr(0x1403add30L))(this, pkPlayer);
    };
    struct CMoveMapLimitRightInfo* CMoveMapLimitRightInfoList::Get(int iInx)
    {
        using org_ptr = struct CMoveMapLimitRightInfo* (WINAPIV*)(struct CMoveMapLimitRightInfoList*, int);
        return (org_ptr(0x1403a1fe0L))(this, iInx);
    };
    bool CMoveMapLimitRightInfoList::Init(struct std::vector<int,std::allocator<int> >* vecRightTypeList)
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitRightInfoList*, struct std::vector<int,std::allocator<int> >*);
        return (org_ptr(0x1403ad800L))(this, vecRightTypeList);
    };
    void CMoveMapLimitRightInfoList::Load(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*, struct CPlayer*);
        (org_ptr(0x1403adc10L))(this, pkPlayer);
    };
    void CMoveMapLimitRightInfoList::LogIn(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*, struct CPlayer*);
        (org_ptr(0x1403adca0L))(this, pkPlayer);
    };
    void CMoveMapLimitRightInfoList::LogOut(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*, struct CPlayer*);
        (org_ptr(0x1403addc0L))(this, pkPlayer);
    };
    CMoveMapLimitRightInfoList::~CMoveMapLimitRightInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*);
        (org_ptr(0x1403a1e60L))(this);
    };
    void CMoveMapLimitRightInfoList::dtor_CMoveMapLimitRightInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitRightInfoList*);
        (org_ptr(0x1403a1e60L))(this);
    };
END_ATF_NAMESPACE
