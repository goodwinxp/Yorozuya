#include <CRaceBuffManager.hpp>


START_ATF_NAMESPACE
    CRaceBuffManager::CRaceBuffManager()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffManager*);
        (org_ptr(0x1403b7e30L))(this);
    };
    void CRaceBuffManager::ctor_CRaceBuffManager()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffManager*);
        (org_ptr(0x1403b7e30L))(this);
    };
    int CRaceBuffManager::CancelPlayerRaceBuff(struct CPlayer* pkPlayer, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE eReleaseType, unsigned int uiContinueCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRaceBuffManager*, struct CPlayer*, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE, unsigned int);
        return (org_ptr(0x14017ffe0L))(this, pkPlayer, eReleaseType, uiContinueCnt);
    };
    bool CRaceBuffManager::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffManager*, struct CPlayer*);
        return (org_ptr(0x140079e70L))(this, pkPlayer);
    };
    void CRaceBuffManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403b6a70L))();
    };
    int CRaceBuffManager::GetRaceBuffLevel(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct CRaceBuffManager*, struct CPlayer*);
        return (org_ptr(0x1403a1080L))(this, pOne);
    };
    bool CRaceBuffManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffManager*);
        return (org_ptr(0x1403b6ae0L))(this);
    };
    struct CRaceBuffManager* CRaceBuffManager::Instance()
    {
        using org_ptr = struct CRaceBuffManager* (WINAPIV*)();
        return (org_ptr(0x1403b69b0L))();
    };
    void CRaceBuffManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffManager*);
        (org_ptr(0x1403b6b30L))(this);
    };
    bool CRaceBuffManager::RequestHolyQuestRaceBuff(int iType)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffManager*, int);
        return (org_ptr(0x1402846b0L))(this, iType);
    };
    CRaceBuffManager::~CRaceBuffManager()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffManager*);
        (org_ptr(0x1403b7ef0L))(this);
    };
    void CRaceBuffManager::dtor_CRaceBuffManager()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffManager*);
        (org_ptr(0x1403b7ef0L))(this);
    };
END_ATF_NAMESPACE
