#include <CMapItemStoreList.hpp>


START_ATF_NAMESPACE
    CMapItemStoreList::CMapItemStoreList()
    {
        using org_ptr = void (WINAPIV*)(struct CMapItemStoreList*);
        (org_ptr(0x14034be20L))(this);
    };
    void CMapItemStoreList::ctor_CMapItemStoreList()
    {
        using org_ptr = void (WINAPIV*)(struct CMapItemStoreList*);
        (org_ptr(0x14034be20L))(this);
    };
    bool CMapItemStoreList::CopyItemStoreData(struct CMapItemStoreList* pDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapItemStoreList*);
        return (org_ptr(0x14034c210L))(this, pDest);
    };
    bool CMapItemStoreList::CreateStores(struct CMapData* pMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapData*);
        return (org_ptr(0x14034bf40L))(this, pMap);
    };
    struct CItemStore* CMapItemStoreList::GetItemStoreFromRecIndex(unsigned int dwRecIndex)
    {
        using org_ptr = struct CItemStore* (WINAPIV*)(struct CMapItemStoreList*, unsigned int);
        return (org_ptr(0x14034c0a0L))(this, dwRecIndex);
    };
    bool CMapItemStoreList::SetItemStores(struct CMapData* pMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapItemStoreList*, struct CMapData*);
        return (org_ptr(0x14034c130L))(this, pMap);
    };
    void CMapItemStoreList::SetTypeNSerial(char byType, int nSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CMapItemStoreList*, char, int);
        (org_ptr(0x14034bf00L))(this, byType, nSerial);
    };
    CMapItemStoreList::~CMapItemStoreList()
    {
        using org_ptr = void (WINAPIV*)(struct CMapItemStoreList*);
        (org_ptr(0x14034be70L))(this);
    };
    void CMapItemStoreList::dtor_CMapItemStoreList()
    {
        using org_ptr = void (WINAPIV*)(struct CMapItemStoreList*);
        (org_ptr(0x14034be70L))(this);
    };
END_ATF_NAMESPACE
