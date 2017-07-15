#include <_WAIT_ENTER_ACCOUNT.hpp>


START_ATF_NAMESPACE
    void _WAIT_ENTER_ACCOUNT::Release()
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*);
        (org_ptr(0x14011f260L))(this);
    };
    void _WAIT_ENTER_ACCOUNT::SetAgeLimitFlag(bool bAgeLimit)
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*, bool);
        (org_ptr(0x140207bd0L))(this, bAgeLimit);
    };
    void _WAIT_ENTER_ACCOUNT::SetBillingInfo(int16_t iType, char* szCMS, int lRemainTime, struct _SYSTEMTIME* pstEndDate)
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*, int16_t, char*, int, struct _SYSTEMTIME*);
        (org_ptr(0x140207ac0L))(this, iType, szCMS, lRemainTime, pstEndDate);
    };
    void _WAIT_ENTER_ACCOUNT::SetData(unsigned int dwAccountSerial, char* pszAccountID, char byUserDgr, char bySubDgr, struct _GLBID* pgidGlobal, unsigned int* pdwKey, bool bChatLock)
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*, unsigned int, char*, char, char, struct _GLBID*, unsigned int*, bool);
        (org_ptr(0x1402079b0L))(this, dwAccountSerial, pszAccountID, byUserDgr, bySubDgr, pgidGlobal, pdwKey, bChatLock);
    };
    void _WAIT_ENTER_ACCOUNT::SetPcBangFlag(bool bIsPcBang)
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*, bool);
        (org_ptr(0x140207b80L))(this, bIsPcBang);
    };
    void _WAIT_ENTER_ACCOUNT::SetTransFlag(int nTrans)
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*, int);
        (org_ptr(0x140207bb0L))(this, nTrans);
    };
    void _WAIT_ENTER_ACCOUNT::SetUILock(char byUILock, char* szUILockPW, char byUILockFailCnt, char* szAccountPW, char byHintIndex, char* uszHintAnswer, char byUILockFindPassFailCount)
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*, char, char*, char, char*, char, char*, char);
        (org_ptr(0x140207c00L))(this, byUILock, szUILockPW, byUILockFailCnt, szAccountPW, byHintIndex, uszHintAnswer, byUILockFindPassFailCount);
    };
    _WAIT_ENTER_ACCOUNT::_WAIT_ENTER_ACCOUNT()
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*);
        (org_ptr(0x140203000L))(this);
    };
    void _WAIT_ENTER_ACCOUNT::ctor__WAIT_ENTER_ACCOUNT()
    {
        using org_ptr = void (WINAPIV*)(struct _WAIT_ENTER_ACCOUNT*);
        (org_ptr(0x140203000L))(this);
    };
END_ATF_NAMESPACE
