#include <CRFCashItemDatabase.hpp>


START_ATF_NAMESPACE
    CRFCashItemDatabase::CRFCashItemDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFCashItemDatabase*);
        (org_ptr(0x1402f2ae0L))(this);
    };
    void CRFCashItemDatabase::ctor_CRFCashItemDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFCashItemDatabase*);
        (org_ptr(0x1402f2ae0L))(this);
    };
    bool CRFCashItemDatabase::CallProc_InsertCashItemLog(unsigned int dwSerial, char byLv, char* szItemCode, char* szItemName, char byNum, unsigned int dwCost)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFCashItemDatabase*, unsigned int, char, char*, char*, char, unsigned int);
        return (org_ptr(0x140483530L))(this, dwSerial, byLv, szItemCode, szItemName, byNum, dwCost);
    };
    int CRFCashItemDatabase::CallProc_RFONLINE_Cancel(struct _param_cash_rollback::__list* list)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, struct _param_cash_rollback::__list*);
        return (org_ptr(0x140482d90L))(this, list);
    };
    int CRFCashItemDatabase::CallProc_RFONLINE_Cancel_Jap(struct _param_cash_rollback* list, int iIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, struct _param_cash_rollback*, int);
        return (org_ptr(0x140484090L))(this, list, iIndex);
    };
    int CRFCashItemDatabase::CallProc_RFOnlineAuth(struct _param_cash_select* rParam)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, struct _param_cash_select*);
        return (org_ptr(0x140482430L))(this, rParam);
    };
    int CRFCashItemDatabase::CallProc_RFOnlineAuth_Jap(struct _param_cash_select* rParam)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, struct _param_cash_select*);
        return (org_ptr(0x1404836a0L))(this, rParam);
    };
    int CRFCashItemDatabase::CallProc_RFOnlineAvg_Event(unsigned int* iAvgCashSelling)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, unsigned int*);
        return (org_ptr(0x1404832b0L))(this, iAvgCashSelling);
    };
    int CRFCashItemDatabase::CallProc_RFOnlineUse(struct _param_cash_update* rParam, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, struct _param_cash_update*, int);
        return (org_ptr(0x140482840L))(this, rParam, nIdx);
    };
    int CRFCashItemDatabase::CallProc_RFOnlineUse_Jap(struct _param_cash_update* rParam, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CRFCashItemDatabase*, struct _param_cash_update*, int);
        return (org_ptr(0x140483a70L))(this, rParam, nIdx);
    };
    void CRFCashItemDatabase::dhRExtractSubString(char* szSub, char* szFull, int n)
    {
        using org_ptr = void (WINAPIV*)(struct CRFCashItemDatabase*, char*, char*, int);
        (org_ptr(0x140483420L))(this, szSub, szFull, n);
    };
    CRFCashItemDatabase::~CRFCashItemDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFCashItemDatabase*);
        (org_ptr(0x1402f2bb0L))(this);
    };
    void CRFCashItemDatabase::dtor_CRFCashItemDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFCashItemDatabase*);
        (org_ptr(0x1402f2bb0L))(this);
    };
END_ATF_NAMESPACE
