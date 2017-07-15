#include <CMgrAvatorLvHistory.hpp>


START_ATF_NAMESPACE
    CMgrAvatorLvHistory::CMgrAvatorLvHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*);
        (org_ptr(0x140243d60L))(this);
    };
    void CMgrAvatorLvHistory::ctor_CMgrAvatorLvHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*);
        (org_ptr(0x140243d60L))(this);
    };
    void CMgrAvatorLvHistory::GetNewFileName(unsigned int dwAvatorSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, unsigned int, char*);
        (org_ptr(0x140244500L))(this, dwAvatorSerial, pszFileName);
    };
    int CMgrAvatorLvHistory::GetTotalWaitSize()
    {
        using org_ptr = int (WINAPIV*)(struct CMgrAvatorLvHistory*);
        return (org_ptr(0x140246760L))(this);
    };
    void CMgrAvatorLvHistory::IOThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140246480L))(pv);
    };
    void CMgrAvatorLvHistory::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*);
        (org_ptr(0x1402447a0L))(this);
    };
    void CMgrAvatorLvHistory::WriteFile(char* pszFileName, char* pszLog)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, char*, char*);
        (org_ptr(0x140246210L))(this, pszFileName, pszLog);
    };
    void CMgrAvatorLvHistory::adjust_pvpcash(bool bAdjust, long double dPvpCash, long double dPvpTempCash, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, bool, long double, long double, char*);
        (org_ptr(0x140246150L))(this, bAdjust, dPvpCash, dPvpTempCash, pszFileName);
    };
    void CMgrAvatorLvHistory::alter_pvp(int n, long double dPvpVariation, struct CPartyPlayer* pParty, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, long double, struct CPartyPlayer*, char*);
        (org_ptr(0x140245e00L))(this, n, dPvpVariation, pParty, pszFileName);
    };
    void CMgrAvatorLvHistory::char_copy(int n, char* pszDstName, unsigned int dwDstSerial, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, char*, unsigned int, char*);
        (org_ptr(0x140246030L))(this, n, pszDstName, dwDstSerial, pszFileName);
    };
    void CMgrAvatorLvHistory::close(int n, char* pCloseCode, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, char*, char*);
        (org_ptr(0x140244d30L))(this, n, pCloseCode, pszFileName);
    };
    void CMgrAvatorLvHistory::die(int n, char* pszDstName, char* pszDeathName, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, char*, char*, char*);
        (org_ptr(0x140245d60L))(this, n, pszDstName, pszDeathName, pszFileName);
    };
    void CMgrAvatorLvHistory::down_animus_exp(uint64_t dw64OldExp, uint64_t dw64NewExp, int64_t i64Alter, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, uint64_t, uint64_t, int64_t, char*);
        (org_ptr(0x1402460b0L))(this, dw64OldExp, dw64NewExp, i64Alter, pszFileName);
    };
    void CMgrAvatorLvHistory::down_exp(int n, long double dOldExp, uint16_t wOldExpRate, long double dNewExp, uint16_t wNewExpRate, char* pCause, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, long double, uint16_t, long double, uint16_t, char*, char*);
        (org_ptr(0x140245ba0L))(this, n, dOldExp, wOldExpRate, dNewExp, wNewExpRate, pCause, pszFileName);
    };
    void CMgrAvatorLvHistory::downgrade_lv(int n, unsigned int dwLv, int nGrade, int* pnMaxPoint, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, unsigned int, int, int*, char*);
        (org_ptr(0x140245ad0L))(this, n, dwLv, nGrade, pnMaxPoint, pszFileName);
    };
    void CMgrAvatorLvHistory::recovery_exp(int n, long double dOldExp, uint16_t wOldExpRate, long double dNewExp, uint16_t wNewExpRate, long double dLossExp, int nProbPro, char* pCause, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, long double, uint16_t, long double, uint16_t, long double, int, char*, char*);
        (org_ptr(0x140245c70L))(this, n, dOldExp, wOldExpRate, dNewExp, wNewExpRate, dLossExp, nProbPro, pCause, pszFileName);
    };
    void CMgrAvatorLvHistory::start_mastery(int n, char* pszAvatorName, unsigned int dwLv, long double dExp, unsigned int dwExpRate, int nGrade, int* pnMaxPoint, struct _MASTERY_PARAM* pData, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, char*, unsigned int, long double, unsigned int, int, int*, struct _MASTERY_PARAM*, char*);
        (org_ptr(0x140244830L))(this, n, pszAvatorName, dwLv, dExp, dwExpRate, nGrade, pnMaxPoint, pData, pszFileName);
    };
    void CMgrAvatorLvHistory::update_mastery(int n, char byUserDgr, unsigned int dwLv, long double dExp, unsigned int dwExpRate, int nGrade, int* pnMaxPoint, struct _MASTERY_PARAM* pData, unsigned int* pdwAlter, char* pszFileName, char byLogType, char* pszTitle)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, char, unsigned int, long double, unsigned int, int, int*, struct _MASTERY_PARAM*, unsigned int*, char*, char, char*);
        (org_ptr(0x140244dc0L))(this, n, byUserDgr, dwLv, dExp, dwExpRate, nGrade, pnMaxPoint, pData, pdwAlter, pszFileName, byLogType, pszTitle);
    };
    void CMgrAvatorLvHistory::upgrade_lv(int n, unsigned int dwLv, int nGrade, int* pnMaxPoint, char* pszFileName)
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*, int, unsigned int, int, int*, char*);
        (org_ptr(0x140245a00L))(this, n, dwLv, nGrade, pnMaxPoint, pszFileName);
    };
    CMgrAvatorLvHistory::~CMgrAvatorLvHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*);
        (org_ptr(0x1402442d0L))(this);
    };
    void CMgrAvatorLvHistory::dtor_CMgrAvatorLvHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CMgrAvatorLvHistory*);
        (org_ptr(0x1402442d0L))(this);
    };
    
    
    
    
END_ATF_NAMESPACE
