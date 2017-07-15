#include <CMoveMapLimitInfoList.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitInfoList::CMoveMapLimitInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*);
        (org_ptr(0x1403a1dc0L))(this);
    };
    void CMoveMapLimitInfoList::ctor_CMoveMapLimitInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*);
        (org_ptr(0x1403a1dc0L))(this);
    };
    void CMoveMapLimitInfoList::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*);
        (org_ptr(0x1403a6290L))(this);
    };
    struct CMoveMapLimitInfo* CMoveMapLimitInfoList::Get(int iLimitType, int iMapInx, unsigned int dwStoreRecordIndex)
    {
        using org_ptr = struct CMoveMapLimitInfo* (WINAPIV*)(struct CMoveMapLimitInfoList*, int, int, unsigned int);
        return (org_ptr(0x1403a6020L))(this, iLimitType, iMapInx, dwStoreRecordIndex);
    };
    bool CMoveMapLimitInfoList::Init(struct std::vector<int,std::allocator<int> >* vecRightTypeList)
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitInfoList*, struct std::vector<int,std::allocator<int> >*);
        return (org_ptr(0x1403a4ff0L))(this, vecRightTypeList);
    };
    void CMoveMapLimitInfoList::Load(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a58f0L))(this, pkPlayer, pkRight);
    };
    void CMoveMapLimitInfoList::LogIn(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a5b20L))(this, pkPlayer, pkRight);
    };
    void CMoveMapLimitInfoList::LogOut(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*, struct CPlayer*, struct CMoveMapLimitRightInfo*);
        (org_ptr(0x1403a5d50L))(this, pkPlayer, pkRight);
    };
    void CMoveMapLimitInfoList::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*);
        (org_ptr(0x1403a54d0L))(this);
    };
    char CMoveMapLimitInfoList::Request(int iLimitType, int iRequetType, int iMapInx, unsigned int dwStoreRecordIndex, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitInfoList*, int, int, int, unsigned int, int, char*, struct CMoveMapLimitRightInfo*);
        return (org_ptr(0x1403a5f80L))(this, iLimitType, iRequetType, iMapInx, dwStoreRecordIndex, iUserInx, pRequest, pkRight);
    };
    CMoveMapLimitInfoList::~CMoveMapLimitInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*);
        (org_ptr(0x1403a1fa0L))(this);
    };
    void CMoveMapLimitInfoList::dtor_CMoveMapLimitInfoList()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitInfoList*);
        (org_ptr(0x1403a1fa0L))(this);
    };
END_ATF_NAMESPACE
