#include <CItemStore.hpp>


START_ATF_NAMESPACE
    CItemStore::CItemStore()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x140260630L))(this);
    };
    void CItemStore::ctor_CItemStore()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x140260630L))(this);
    };
    float CItemStore::CalcBuyPrice(char byTableCode, uint16_t wItemIndex, char* pbyMoneyUnit)
    {
        using org_ptr = float (WINAPIV*)(struct CItemStore*, char, uint16_t, char*);
        return (org_ptr(0x140262600L))(this, byTableCode, wItemIndex, pbyMoneyUnit);
    };
    int CItemStore::CalcSecIndex(float x, float z)
    {
        using org_ptr = int (WINAPIV*)(struct CItemStore*, float, float);
        return (org_ptr(0x1402622b0L))(this, x, z);
    };
    int CItemStore::CalcSellPrice(int nGoodIndex, char* pbyMoneyUnit)
    {
        using org_ptr = int (WINAPIV*)(struct CItemStore*, int, char*);
        return (org_ptr(0x1402624b0L))(this, nGoodIndex, pbyMoneyUnit);
    };
    int CItemStore::GetLastTradeActPoint(char byActCode)
    {
        using org_ptr = int (WINAPIV*)(struct CItemStore*, char);
        return (org_ptr(0x140262220L))(this, byActCode);
    };
    int CItemStore::GetLastTradeDalant()
    {
        using org_ptr = int (WINAPIV*)(struct CItemStore*);
        return (org_ptr(0x1402621c0L))(this);
    };
    int CItemStore::GetLastTradeGold()
    {
        using org_ptr = int (WINAPIV*)(struct CItemStore*);
        return (org_ptr(0x1402621e0L))(this);
    };
    int CItemStore::GetLastTradePoint()
    {
        using org_ptr = int (WINAPIV*)(struct CItemStore*);
        return (org_ptr(0x140262200L))(this);
    };
    struct _limit_item_info* CItemStore::GetLimitItem(int nIndex)
    {
        using org_ptr = struct _limit_item_info* (WINAPIV*)(struct CItemStore*, int);
        return (org_ptr(0x140262a30L))(this, nIndex);
    };
    void CItemStore::GetLimitItemAmount(struct _limit_amount_info* pAmountInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*, struct _limit_amount_info*);
        (org_ptr(0x140262940L))(this, pAmountInfo);
    };
    char* CItemStore::GetNpcCode()
    {
        using org_ptr = char* (WINAPIV*)(struct CItemStore*);
        return (org_ptr(0x140262450L))(this);
    };
    bool CItemStore::GetNpcRaceCode(char* pbyRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStore*, char*);
        return (org_ptr(0x140262380L))(this, pbyRaceCode);
    };
    struct _base_fld* CItemStore::GetNpcRecord()
    {
        using org_ptr = struct _base_fld* (WINAPIV*)(struct CItemStore*);
        return (org_ptr(0x140262400L))(this);
    };
    float* CItemStore::GetStorePos()
    {
        using org_ptr = float* (WINAPIV*)(struct CItemStore*);
        return (org_ptr(0x140262480L))(this);
    };
    bool CItemStore::Init(int nIndex, struct CMapData* pExistMap, struct _store_dummy* pDum, struct _base_fld* pRec)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemStore*, int, struct CMapData*, struct _store_dummy*, struct _base_fld*);
        return (org_ptr(0x140260720L))(this, nIndex, pExistMap, pDum, pRec);
    };
    void CItemStore::InitLimitItemInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x1402626e0L))(this);
    };
    char CItemStore::IsBuy(char byOfferNum, struct _sell_offer* pOffer, float fDiscountRate, char byRace)
    {
        using org_ptr = char (WINAPIV*)(struct CItemStore*, char, struct _sell_offer*, float, char);
        return (org_ptr(0x140261c50L))(this, byOfferNum, pOffer, fDiscountRate, byRace);
    };
    char CItemStore::IsSell(char byOfferNum, struct _buy_offer* pOffer, unsigned int dwHasDalant, unsigned int dwHasGold, long double dHasPoint, unsigned int* dwHasActPoint, char* pbyActCode, float fDiscountRate, char byRace, char byGrade)
    {
        using org_ptr = char (WINAPIV*)(struct CItemStore*, char, struct _buy_offer*, unsigned int, unsigned int, long double, unsigned int*, char*, float, char, char);
        return (org_ptr(0x1402613b0L))(this, byOfferNum, pOffer, dwHasDalant, dwHasGold, dHasPoint, dwHasActPoint, pbyActCode, fDiscountRate, byRace, byGrade);
    };
    void CItemStore::SetLimitItemInitTime()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x140262a70L))(this);
    };
    void CItemStore::SetZeroTradeMoney()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x140262240L))(this);
    };
    void CItemStore::SubLimitItemNum(int nLimitItemIndex, int nSubNum)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*, int, int);
        (org_ptr(0x1402628b0L))(this, nLimitItemIndex, nSubNum);
    };
    void CItemStore::UpdateLimitItemNum(bool bUpdate)
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*, bool);
        (org_ptr(0x140262890L))(this, bUpdate);
    };
    CItemStore::~CItemStore()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x140260680L))(this);
    };
    void CItemStore::dtor_CItemStore()
    {
        using org_ptr = void (WINAPIV*)(struct CItemStore*);
        (org_ptr(0x140260680L))(this);
    };
END_ATF_NAMESPACE
