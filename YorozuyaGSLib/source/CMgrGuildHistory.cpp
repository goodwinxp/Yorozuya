#include <CMgrGuildHistory.hpp>


START_ATF_NAMESPACE
    CMgrGuildHistory::CMgrGuildHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        (org_ptr(0x140248460L))(this);
    };
    void CMgrGuildHistory::ctor_CMgrGuildHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        (org_ptr(0x140248460L))(this);
    };
    void CMgrGuildHistory::GetNewFileName(unsigned int dwGuildSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, unsigned int, char*);
        (org_ptr(0x1402488a0L))(this, dwGuildSerial, pszFileName);
    };
    int CMgrGuildHistory::GetTotalWaitSize()
    {
        using org_ptr = int (WINAPIV*)(struct CMgrGuildHistory*);
        return (org_ptr(0x140249a70L))(this);
    };
    void CMgrGuildHistory::IOThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140249890L))(pv);
    };
    void CMgrGuildHistory::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        (org_ptr(0x140248900L))(this);
    };
    void CMgrGuildHistory::WriteFile(char* pszFileName, char* pszLog)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, char*);
        (org_ptr(0x140249760L))(this, pszFileName, pszLog);
    };
    void CMgrGuildHistory::change_atrade_taxrate(char* pszSugerName, unsigned int dwSugerSerial, char byCurTax, char byNextTax, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, char, char, char*);
        (org_ptr(0x1402496b0L))(this, pszSugerName, dwSugerSerial, byCurTax, byNextTax, pszFileName);
    };
    void CMgrGuildHistory::join_member(char* pszJoinerName, unsigned int dwJoinerSerial, char* pszOKerName, unsigned int dwOKSerial, int nMemNum, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, char*, unsigned int, int, char*);
        (org_ptr(0x140248e30L))(this, pszJoinerName, dwJoinerSerial, pszOKerName, dwOKSerial, nMemNum, pszFileName);
    };
    void CMgrGuildHistory::leave_member(char* pszLeaverName, unsigned int dwLeaverSerial, bool bSelf, int nMemNum, char* pszFileName, bool bPunish)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, bool, int, char*, bool);
        (org_ptr(0x140248ee0L))(this, pszLeaverName, dwLeaverSerial, bSelf, nMemNum, pszFileName, bPunish);
    };
    void CMgrGuildHistory::load_guild(struct CGuild* pGuild, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, struct CGuild*, char*);
        (org_ptr(0x1402489f0L))(this, pGuild, pszFileName);
    };
    void CMgrGuildHistory::pop_money(char* pszIOerName, unsigned int dwIOerSerial, int nPopDalant, int nPopGold, long double dTotalDalant, long double dTotalGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, int, int, long double, long double, char*);
        (org_ptr(0x1402495e0L))(this, pszIOerName, dwIOerSerial, nPopDalant, nPopGold, dTotalDalant, dTotalGold, pszFileName);
    };
    void CMgrGuildHistory::push_money(char* pszIOerName, unsigned int dwIOerSerial, int nPushDalant, int nPushGold, long double dTotalDalant, long double dTotalGold, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, int, int, long double, long double, char*);
        (org_ptr(0x140249510L))(this, pszIOerName, dwIOerSerial, nPushDalant, nPushGold, dTotalDalant, dTotalGold, pszFileName);
    };
    void CMgrGuildHistory::start_guild(struct CGuild* pGuild, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, struct CGuild*, char*);
        (org_ptr(0x140248c10L))(this, pGuild, pszFileName);
    };
    void CMgrGuildHistory::suggest_cancel(char* pszSugerName, unsigned int dwSugerSerial, struct _suggested_matter* pMatter, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, char*);
        (org_ptr(0x140249480L))(this, pszSugerName, dwSugerSerial, pMatter, pszFileName);
    };
    void CMgrGuildHistory::suggest_complete(char* pszSugerName, unsigned int dwSugerSerial, struct _suggested_matter* pMatter, bool bPass, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, bool, char*);
        (org_ptr(0x140249380L))(this, pszSugerName, dwSugerSerial, pMatter, bPass, pszFileName);
    };
    void CMgrGuildHistory::suggest_vote(char* pszSugerName, unsigned int dwSugerSerial, struct _suggested_matter* pMatter, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, char*);
        (org_ptr(0x140249000L))(this, pszSugerName, dwSugerSerial, pMatter, pszFileName);
    };
    CMgrGuildHistory::~CMgrGuildHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        (org_ptr(0x1402487c0L))(this);
    };
    void CMgrGuildHistory::dtor_CMgrGuildHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        (org_ptr(0x1402487c0L))(this);
    };
    
END_ATF_NAMESPACE
