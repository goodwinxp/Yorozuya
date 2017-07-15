#include <CMoveMapLimitManager.hpp>


START_ATF_NAMESPACE
    CMoveMapLimitManager::CMoveMapLimitManager()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        (org_ptr(0x1403a1d10L))(this);
    };
    void CMoveMapLimitManager::ctor_CMoveMapLimitManager()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        (org_ptr(0x1403a1d10L))(this);
    };
    void CMoveMapLimitManager::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        (org_ptr(0x1403a1910L))(this, pkPlayer);
    };
    void CMoveMapLimitManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403a16b0L))();
    };
    bool CMoveMapLimitManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitManager*);
        return (org_ptr(0x1403a1720L))(this);
    };
    struct CMoveMapLimitManager* CMoveMapLimitManager::Instance()
    {
        using org_ptr = struct CMoveMapLimitManager* (WINAPIV*)();
        return (org_ptr(0x1403a15f0L))();
    };
    void CMoveMapLimitManager::Load(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        (org_ptr(0x1403a1830L))(this, pkPlayer);
    };
    void CMoveMapLimitManager::LogIn(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        (org_ptr(0x1403a18a0L))(this, pkPlayer);
    };
    void CMoveMapLimitManager::LogOut(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        (org_ptr(0x1403a1960L))(this, pkPlayer);
    };
    void CMoveMapLimitManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        (org_ptr(0x1403a1b40L))(this);
    };
    bool CMoveMapLimitManager::MoveLimitMapZoneRequest(int iUserInx, char* pRequest)
    {
        using org_ptr = bool (WINAPIV*)(struct CMoveMapLimitManager*, int, char*);
        return (org_ptr(0x1403a1a60L))(this, iUserInx, pRequest);
    };
    char CMoveMapLimitManager::Request(int iLimitType, int iRequetType, int iMapInx, unsigned int dwStoreRecordIndex, int iUserInx, char* pRequest)
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitManager*, int, int, int, unsigned int, int, char*);
        return (org_ptr(0x1403a19d0L))(this, iLimitType, iRequetType, iMapInx, dwStoreRecordIndex, iUserInx, pRequest);
    };
    char CMoveMapLimitManager::RequestElanMapUserForceMoveHQ()
    {
        using org_ptr = char (WINAPIV*)(struct CMoveMapLimitManager*);
        return (org_ptr(0x140284700L))(this);
    };
    CMoveMapLimitManager::~CMoveMapLimitManager()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        (org_ptr(0x1403a1f10L))(this);
    };
    void CMoveMapLimitManager::dtor_CMoveMapLimitManager()
    {
        using org_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        (org_ptr(0x1403a1f10L))(this);
    };
END_ATF_NAMESPACE
