#include <CTalkCrystalCombineManager.hpp>


START_ATF_NAMESPACE
    CTalkCrystalCombineManager::CTalkCrystalCombineManager()
    {
        using org_ptr = void (WINAPIV*)(struct CTalkCrystalCombineManager*);
        (org_ptr(0x1404320b0L))(this);
    };
    void CTalkCrystalCombineManager::ctor_CTalkCrystalCombineManager()
    {
        using org_ptr = void (WINAPIV*)(struct CTalkCrystalCombineManager*);
        (org_ptr(0x1404320b0L))(this);
    };
    char CTalkCrystalCombineManager::CheckMixItem(struct _STORAGE_LIST::_db_con* pItem, int* pMixIndex, char* pbyTableCode, uint16_t* pwItemIndex, int* pnNeedItemCount)
    {
        using org_ptr = char (WINAPIV*)(struct CTalkCrystalCombineManager*, struct _STORAGE_LIST::_db_con*, int*, char*, uint16_t*, int*);
        return (org_ptr(0x140431140L))(this, pItem, pMixIndex, pbyTableCode, pwItemIndex, pnNeedItemCount);
    };
    char CTalkCrystalCombineManager::CombinePreProcess(struct CPlayer* pPlayer, char byExchangeNum, struct _talik_crystal_exchange_clzo::_list* pList)
    {
        using org_ptr = char (WINAPIV*)(struct CTalkCrystalCombineManager*, struct CPlayer*, char, struct _talik_crystal_exchange_clzo::_list*);
        return (org_ptr(0x140430f40L))(this, pPlayer, byExchangeNum, pList);
    };
    char CTalkCrystalCombineManager::CombineProcess()
    {
        using org_ptr = char (WINAPIV*)(struct CTalkCrystalCombineManager*);
        return (org_ptr(0x140431450L))(this);
    };
    void CTalkCrystalCombineManager::Destory()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140430ce0L))();
    };
    bool CTalkCrystalCombineManager::Doit(struct CPlayer* pPlayer, char byExchangeNum, struct _talik_crystal_exchange_clzo::_list* pList)
    {
        using org_ptr = bool (WINAPIV*)(struct CTalkCrystalCombineManager*, struct CPlayer*, char, struct _talik_crystal_exchange_clzo::_list*);
        return (org_ptr(0x1404315b0L))(this, pPlayer, byExchangeNum, pList);
    };
    struct _talk_crystal_matrial_combine_node* CTalkCrystalCombineManager::GetMixNode(int nMixIndex)
    {
        using org_ptr = struct _talk_crystal_matrial_combine_node* (WINAPIV*)(struct CTalkCrystalCombineManager*, int);
        return (org_ptr(0x140430dc0L))(this, nMixIndex);
    };
    void CTalkCrystalCombineManager::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CTalkCrystalCombineManager*);
        (org_ptr(0x140430d40L))(this);
    };
    struct CTalkCrystalCombineManager* CTalkCrystalCombineManager::Instance()
    {
        using org_ptr = struct CTalkCrystalCombineManager* (WINAPIV*)();
        return (org_ptr(0x140430c20L))();
    };
    struct _talk_crystal_matrial_combine_node* CTalkCrystalCombineManager::MakeMixNode(int nMixIndex, int nNeedItemNum, char byTableCode, uint16_t wItemIndex)
    {
        using org_ptr = struct _talk_crystal_matrial_combine_node* (WINAPIV*)(struct CTalkCrystalCombineManager*, int, int, char, uint16_t);
        return (org_ptr(0x140430e60L))(this, nMixIndex, nNeedItemNum, byTableCode, wItemIndex);
    };
    char CTalkCrystalCombineManager::Push(struct _STORAGE_LIST::_db_con* pItem, char byUseCount, char byClientIndex)
    {
        using org_ptr = char (WINAPIV*)(struct CTalkCrystalCombineManager*, struct _STORAGE_LIST::_db_con*, char, char);
        return (org_ptr(0x1404312e0L))(this, pItem, byUseCount, byClientIndex);
    };
END_ATF_NAMESPACE
