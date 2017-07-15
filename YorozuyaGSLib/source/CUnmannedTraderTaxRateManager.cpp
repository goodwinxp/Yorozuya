#include <CUnmannedTraderTaxRateManager.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderTaxRateManager::CUnmannedTraderTaxRateManager()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        (org_ptr(0x14038ecd0L))(this);
    };
    void CUnmannedTraderTaxRateManager::ctor_CUnmannedTraderTaxRateManager()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        (org_ptr(0x14038ecd0L))(this);
    };
    int CUnmannedTraderTaxRateManager::ChangeOwner(char byRace, struct CGuild* pGuild)
    {
        using org_ptr = int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, struct CGuild*);
        return (org_ptr(0x14038df40L))(this, byRace, pGuild);
    };
    bool CUnmannedTraderTaxRateManager::CheatChangeTaxRate(char byRace, unsigned int dwNewTaxRate, char* pCheaterName)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, char*);
        return (org_ptr(0x14038e6d0L))(this, byRace, dwNewTaxRate, pCheaterName);
    };
    void CUnmannedTraderTaxRateManager::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        (org_ptr(0x14038e7c0L))(this);
    };
    void CUnmannedTraderTaxRateManager::CompleteCreate(uint16_t wInx)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, uint16_t);
        (org_ptr(0x14038e5e0L))(this, wInx);
    };
    void CUnmannedTraderTaxRateManager::DQSCompleteInAtradTaxMoney(char byRace, char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, char*);
        (org_ptr(0x14038e390L))(this, byRace, pdata);
    };
    void CUnmannedTraderTaxRateManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14038daf0L))();
    };
    unsigned int CUnmannedTraderTaxRateManager::GetSuggestedTime(char byRace)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char);
        return (org_ptr(0x14038e550L))(this, byRace);
    };
    unsigned int CUnmannedTraderTaxRateManager::GetTax(char byRace, unsigned int dwGuildSerial, unsigned int dwPrice)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, unsigned int);
        return (org_ptr(0x14038e110L))(this, byRace, dwGuildSerial, dwPrice);
    };
    float CUnmannedTraderTaxRateManager::GetTaxRate(char byRace)
    {
        using org_ptr = float (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char);
        return (org_ptr(0x14038e080L))(this, byRace);
    };
    bool CUnmannedTraderTaxRateManager::Init(struct CLogFile* pkLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, struct CLogFile*);
        return (org_ptr(0x14038db70L))(this, pkLogger);
    };
    struct CUnmannedTraderTaxRateManager* CUnmannedTraderTaxRateManager::Instance()
    {
        using org_ptr = struct CUnmannedTraderTaxRateManager* (WINAPIV*)();
        return (org_ptr(0x14038da30L))();
    };
    bool CUnmannedTraderTaxRateManager::IsOwnerGuild(char byRace, unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int);
        return (org_ptr(0x14038dfe0L))(this, byRace, dwGuildSerial);
    };
    bool CUnmannedTraderTaxRateManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        return (org_ptr(0x14038dd80L))(this);
    };
    void CUnmannedTraderTaxRateManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        (org_ptr(0x14038de90L))(this);
    };
    void CUnmannedTraderTaxRateManager::SendTaxRate(int n, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, int, char);
        (org_ptr(0x14038e420L))(this, n, byRace);
    };
    void CUnmannedTraderTaxRateManager::SendTaxRatePatriarch(int n, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, int, char);
        (org_ptr(0x14038e4c0L))(this, n, byRace);
    };
    void CUnmannedTraderTaxRateManager::SetGuildMaintainMoney(char byRace, unsigned int dwTax, unsigned int dwSeller)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int, unsigned int);
        (org_ptr(0x14038e260L))(this, byRace, dwTax, dwSeller);
    };
    void CUnmannedTraderTaxRateManager::SetPatriarchTaxMoney(char byRace, unsigned int dwTax)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, unsigned int);
        (org_ptr(0x14038e300L))(this, byRace, dwTax);
    };
    void CUnmannedTraderTaxRateManager::SetSuggested(char byRace, char byMatterType, unsigned int dwMatterDst, char* wszMatterDst, unsigned int dwNext)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*, char, char, unsigned int, char*, unsigned int);
        (org_ptr(0x14038e1b0L))(this, byRace, byMatterType, dwMatterDst, wszMatterDst, dwNext);
    };
    CUnmannedTraderTaxRateManager::~CUnmannedTraderTaxRateManager()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        (org_ptr(0x14038eda0L))(this);
    };
    void CUnmannedTraderTaxRateManager::dtor_CUnmannedTraderTaxRateManager()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTaxRateManager*);
        (org_ptr(0x14038eda0L))(this);
    };
END_ATF_NAMESPACE
