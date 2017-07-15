#include <TRC_AutoTrade.hpp>


START_ATF_NAMESPACE
    void TRC_AutoTrade::AddGDalant(char* pdata)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, char*);
        (org_ptr(0x1402d85c0L))(this, pdata);
    };
    unsigned int TRC_AutoTrade::CalcPrice(unsigned int nGuildSerial, unsigned int nPrice)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TRC_AutoTrade*, unsigned int, unsigned int);
        return (org_ptr(0x1402d8030L))(this, nGuildSerial, nPrice);
    };
    int TRC_AutoTrade::ChangeOwner(struct CGuild* pGuild)
    {
        using org_ptr = int (WINAPIV*)(struct TRC_AutoTrade*, struct CGuild*);
        return (org_ptr(0x1402d8c70L))(this, pGuild);
    };
    int TRC_AutoTrade::ChangeTaxRate(float fNewTaxRate)
    {
        using org_ptr = int (WINAPIV*)(struct TRC_AutoTrade*, float);
        return (org_ptr(0x1402d8ab0L))(this, fNewTaxRate);
    };
    void TRC_AutoTrade::ChangeTaxRate()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d88d0L))(this);
    };
    bool TRC_AutoTrade::Initialzie()
    {
        using org_ptr = bool (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x1402d7e00L))(this);
    };
    bool TRC_AutoTrade::IsMaster(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct TRC_AutoTrade*, unsigned int);
        return (org_ptr(0x1402d7ff0L))(this, dwSerial);
    };
    bool TRC_AutoTrade::IsOwnerGuild(unsigned int nGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct TRC_AutoTrade*, unsigned int);
        return (org_ptr(0x1402d7f80L))(this, nGuildSerial);
    };
    void TRC_AutoTrade::PushDQSData()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d8d30L))(this);
    };
    void TRC_AutoTrade::PushDQSData_GuildInMoney(unsigned int dwRetPrice, unsigned int dwSeller)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, unsigned int, unsigned int);
        (org_ptr(0x1402d8740L))(this, dwRetPrice, dwSeller);
    };
    void TRC_AutoTrade::SendMsg_PatriarchTaxRate(int n)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, int);
        (org_ptr(0x1402d8480L))(this, n);
    };
    void TRC_AutoTrade::SendMsg_UserLogInNotifyTaxRate(int n)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, int);
        (org_ptr(0x1402d8540L))(this, n);
    };
    void TRC_AutoTrade::SetGuildMaintainMoney(unsigned int dwTax, unsigned int dwSeller)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, unsigned int, unsigned int);
        (org_ptr(0x1402d8080L))(this, dwTax, dwSeller);
    };
    void TRC_AutoTrade::SetPatriarchTaxMoney(unsigned int dwTax)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, unsigned int);
        (org_ptr(0x1402d8120L))(this, dwTax);
    };
    TRC_AutoTrade::TRC_AutoTrade(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, char);
        (org_ptr(0x1402d7b70L))(this, byRace);
    };
    void TRC_AutoTrade::ctor_TRC_AutoTrade(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, char);
        (org_ptr(0x1402d7b70L))(this, byRace);
    };
    TRC_AutoTrade::TRC_AutoTrade()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d79c0L))(this);
    };
    void TRC_AutoTrade::ctor_TRC_AutoTrade()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d79c0L))(this);
    };
    bool TRC_AutoTrade::_db_load(char byRace)
    {
        using org_ptr = bool (WINAPIV*)(struct TRC_AutoTrade*, char);
        return (org_ptr(0x1402d8ea0L))(this, byRace);
    };
    char TRC_AutoTrade::_insert_info(char* pdata)
    {
        using org_ptr = char (WINAPIV*)(char*);
        return (org_ptr(0x1402d9050L))(pdata);
    };
    int TRC_AutoTrade::check(unsigned int dwAvatorSerial, unsigned int dwGuildSerial)
    {
        using org_ptr = int (WINAPIV*)(struct TRC_AutoTrade*, unsigned int, unsigned int);
        return (org_ptr(0x1402d8850L))(this, dwAvatorSerial, dwGuildSerial);
    };
    struct CGuild* TRC_AutoTrade::getOwnerGuild()
    {
        using org_ptr = struct CGuild* (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x1402d99f0L))(this);
    };
    unsigned int TRC_AutoTrade::getSuggestedTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x14038efa0L))(this);
    };
    char* TRC_AutoTrade::get_guidlname()
    {
        using org_ptr = char* (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x1402d9a10L))(this);
    };
    float TRC_AutoTrade::get_next_tax()
    {
        using org_ptr = float (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x1402d9ae0L))(this);
    };
    char TRC_AutoTrade::get_race()
    {
        using org_ptr = char (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x1402d9b30L))(this);
    };
    float TRC_AutoTrade::get_taxrate()
    {
        using org_ptr = float (WINAPIV*)(struct TRC_AutoTrade*);
        return (org_ptr(0x1402d99a0L))(this);
    };
    void TRC_AutoTrade::his_income_money()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d8250L))(this);
    };
    void TRC_AutoTrade::history_used_cheet_changetaxrate(unsigned int dwProb, char* pName)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, unsigned int, char*);
        (org_ptr(0x14038efc0L))(this, dwProb, pName);
    };
    void TRC_AutoTrade::sendmsg_taxrate(int n, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, int, char);
        (org_ptr(0x1402d8320L))(this, n, byRet);
    };
    void TRC_AutoTrade::set_owner(struct CGuild* pGuild)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, struct CGuild*);
        (org_ptr(0x14038ee40L))(this, pGuild);
    };
    void TRC_AutoTrade::set_suggested(char byMatterType, unsigned int dwMatterDst, char* wszMatterDst, unsigned int dwNext)
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*, char, unsigned int, char*, unsigned int);
        (org_ptr(0x14038ee70L))(this, byMatterType, dwMatterDst, wszMatterDst, dwNext);
    };
    TRC_AutoTrade::~TRC_AutoTrade()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d7d30L))(this);
    };
    void TRC_AutoTrade::dtor_TRC_AutoTrade()
    {
        using org_ptr = void (WINAPIV*)(struct TRC_AutoTrade*);
        (org_ptr(0x1402d7d30L))(this);
    };
END_ATF_NAMESPACE
