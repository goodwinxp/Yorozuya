#include <CItemStoreManager.hpp>


START_ATF_NAMESPACE
    CItemStoreManager::CItemStoreManager()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x140348020L))(this);
    };
    void CItemStoreManager::ctor_CItemStoreManager()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x140348020L))(this);
    };
    void CItemStoreManager::CompleteDisableInstanceStore(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*, char*);
        (org_ptr(0x14034a710L))(this, pData);
    };
    void CItemStoreManager::CompleteStoreLimitItem()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x14034a4a0L))(this);
    };
    void CItemStoreManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140348430L))();
    };
    struct CMapItemStoreList* CItemStoreManager::GetEmptyInstanceItemStore()
    {
        using org_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*);
        return (org_ptr(0x140348ab0L))(this);
    };
    struct CMapItemStoreList* CItemStoreManager::GetInstanceStoreListBySerial(int nSerial)
    {
        using org_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int);
        return (org_ptr(0x140348b30L))(this, nSerial);
    };
    struct CItemStore* CItemStoreManager::GetMapItemStoreFromList(int nMapNum, int nStoreNum)
    {
        using org_ptr = struct CItemStore* (WINAPIV*)(struct CItemStoreManager*, int, int);
        return (org_ptr(0x140348a20L))(this, nMapNum, nStoreNum);
    };
    struct CMapItemStoreList* CItemStoreManager::GetMapItemStoreListByNum(int nNum)
    {
        using org_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int);
        return (org_ptr(0x140348940L))(this, nNum);
    };
    struct CMapItemStoreList* CItemStoreManager::GetMapItemStoreListBySerial(int nSerial)
    {
        using org_ptr = struct CMapItemStoreList* (WINAPIV*)(struct CItemStoreManager*, int);
        return (org_ptr(0x140348990L))(this, nSerial);
    };
    bool CItemStoreManager::Init(int nNormalListNum, int nInstanceListNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*, int, int);
        return (org_ptr(0x1403484b0L))(this, nNormalListNum, nInstanceListNum);
    };
    bool CItemStoreManager::InitLogger()
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*);
        return (org_ptr(0x140348f10L))(this);
    };
    bool CItemStoreManager::InsertNotEnoughLimitItemRecord(int nNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*, int);
        return (org_ptr(0x14034a020L))(this, nNum);
    };
    struct CItemStoreManager* CItemStoreManager::Instance()
    {
        using org_ptr = struct CItemStoreManager* (WINAPIV*)();
        return (org_ptr(0x140348370L))();
    };
    bool CItemStoreManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*);
        return (org_ptr(0x140349120L))(this);
    };
    void CItemStoreManager::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*, char*);
        (org_ptr(0x140349090L))(this, fmt);
    };
    void CItemStoreManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x140349350L))(this);
    };
    void CItemStoreManager::MakeLimitItemUpdateQuery(unsigned int dwSerial, char byStoreType, int nTypeSerial, unsigned int dwStoreIndex, struct _limit_item_db_data* pItemData, uint64_t dwLimitInitTime, char* pszQuery, int nBufSize)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*, unsigned int, char, int, unsigned int, struct _limit_item_db_data*, uint64_t, char*, int);
        (org_ptr(0x14034a7e0L))(this, dwSerial, byStoreType, nTypeSerial, dwStoreIndex, pItemData, dwLimitInitTime, pszQuery, nBufSize);
    };
    bool CItemStoreManager::ResetInstanceItemStore(char byStoreType, int nSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*, char, int);
        return (org_ptr(0x140348bd0L))(this, byStoreType, nSerial);
    };
    bool CItemStoreManager::SelectStoreLimitItem()
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*);
        return (org_ptr(0x14034a0c0L))(this);
    };
    bool CItemStoreManager::SelectTotalRecordNum(unsigned int* pdwTotalNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*, unsigned int*);
        return (org_ptr(0x140349fb0L))(this, pdwTotalNum);
    };
    bool CItemStoreManager::SelectUsedRecordNum(unsigned int* pdwUsedNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStoreManager*, unsigned int*);
        return (org_ptr(0x140349f40L))(this, pdwUsedNum);
    };
    void CItemStoreManager::SetEnforceInitNormalStore()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x14034a9f0L))(this);
    };
    void CItemStoreManager::SetNextEnforceInitTime()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x140349c40L))(this);
    };
    void CItemStoreManager::SetStoreLimitItemData(struct _qry_case_all_store_limit_item::__list* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*, struct _qry_case_all_store_limit_item::__list*);
        (org_ptr(0x140349d40L))(this, pData);
    };
    void CItemStoreManager::SetUpdateDBDataDoNotCheck()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x14034abb0L))(this);
    };
    char CItemStoreManager::UpdateDisableInstanceStore(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CItemStoreManager*, char*);
        return (org_ptr(0x14034a660L))(this, pData);
    };
    char CItemStoreManager::UpdateStoreLimitItem()
    {
        using org_ptr = char (WINAPIV*)(struct CItemStoreManager*);
        return (org_ptr(0x14034a130L))(this);
    };
    CItemStoreManager::~CItemStoreManager()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x140348170L))(this);
    };
    void CItemStoreManager::dtor_CItemStoreManager()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStoreManager*);
        (org_ptr(0x140348170L))(this);
    };
END_ATF_NAMESPACE
