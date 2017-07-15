#include <CMoneySupplyMgr.hpp>


START_ATF_NAMESPACE
    CMoneySupplyMgr::CMoneySupplyMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*);
        (org_ptr(0x14042b630L))(this);
    };
    void CMoneySupplyMgr::ctor_CMoneySupplyMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*);
        (org_ptr(0x14042b630L))(this);
    };
    void CMoneySupplyMgr::Initialize()
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*);
        (org_ptr(0x14042b680L))(this);
    };
    struct CMoneySupplyMgr* CMoneySupplyMgr::Instance()
    {
        using org_ptr = struct CMoneySupplyMgr* (WINAPIV*)();
        return (org_ptr(0x140095070L))();
    };
    void CMoneySupplyMgr::LoopMoneySupply()
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*);
        (org_ptr(0x14042b6e0L))(this);
    };
    void CMoneySupplyMgr::SendMsg_MoneySupplyDataToWeb(struct _MONEY_SUPPLY_DATA* pMSData)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, struct _MONEY_SUPPLY_DATA*);
        (org_ptr(0x14042f5f0L))(this, pMSData);
    };
    void CMoneySupplyMgr::UpdateBuyData(char byRace, int nLv, char* szClass, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, char, int, char*, unsigned int);
        (org_ptr(0x14042c4c0L))(this, byRace, nLv, szClass, nAmount);
    };
    void CMoneySupplyMgr::UpdateBuyUnitData(int nLv, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, int, unsigned int);
        (org_ptr(0x14042f470L))(this, nLv, nAmount);
    };
    void CMoneySupplyMgr::UpdateFeeMoneyData(char byRace, int nLv, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, char, int, unsigned int);
        (org_ptr(0x14042f1b0L))(this, byRace, nLv, nAmount);
    };
    void CMoneySupplyMgr::UpdateGateRewardMoneyData(char byRace, int nLv, char* szClass, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, char, int, char*, unsigned int);
        (org_ptr(0x14042e520L))(this, byRace, nLv, szClass, nAmount);
    };
    void CMoneySupplyMgr::UpdateHonorGuildMoneyData(char byTradeType, char byRace, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, char, char, unsigned int);
        (org_ptr(0x14042f2d0L))(this, byTradeType, byRace, nAmount);
    };
    void CMoneySupplyMgr::UpdateQuestRewardMoneyData(char byRace, int nLv, char* szClass, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, char, int, char*, unsigned int);
        (org_ptr(0x14042d890L))(this, byRace, nLv, szClass, nAmount);
    };
    void CMoneySupplyMgr::UpdateSellData(char byRace, int nLv, char* szClass, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, char, int, char*, unsigned int);
        (org_ptr(0x14042b7d0L))(this, byRace, nLv, szClass, nAmount);
    };
    void CMoneySupplyMgr::UpdateUnitRepairingChargesData(int nLv, unsigned int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*, int, unsigned int);
        (org_ptr(0x14042f530L))(this, nLv, nAmount);
    };
    CMoneySupplyMgr::~CMoneySupplyMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*);
        (org_ptr(0x14042b660L))(this);
    };
    void CMoneySupplyMgr::dtor_CMoneySupplyMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMoneySupplyMgr*);
        (org_ptr(0x14042b660L))(this);
    };
END_ATF_NAMESPACE
