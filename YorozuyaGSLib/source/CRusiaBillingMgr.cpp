#include <CRusiaBillingMgr.hpp>


START_ATF_NAMESPACE
    void CRusiaBillingMgr::ArrangeString(char* szDest, char* szSorc, char cToken)
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*, char*, char*, char);
        (org_ptr(0x140321a90L))(this, szDest, szSorc, cToken);
    };
    CRusiaBillingMgr::CRusiaBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*);
        (org_ptr(0x140320dc0L))(this);
    };
    void CRusiaBillingMgr::ctor_CRusiaBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*);
        (org_ptr(0x140320dc0L))(this);
    };
    int CRusiaBillingMgr::CallFunc_Item_Buy(struct _param_cash_update* rParam, int nIdx)
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*, struct _param_cash_update*, int);
        return (org_ptr(0x140321190L))(this, rParam, nIdx);
    };
    int CRusiaBillingMgr::CallFunc_Item_Cancel(struct _param_cash_rollback::__list* list, char* szUserID)
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*, struct _param_cash_rollback::__list*, char*);
        return (org_ptr(0x140321300L))(this, list, szUserID);
    };
    int CRusiaBillingMgr::CallFunc_RFOnline_Auth(struct _param_cash_select* rParam)
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*, struct _param_cash_select*);
        return (org_ptr(0x1403213a0L))(this, rParam);
    };
    int CRusiaBillingMgr::ConfigUserODBC(char* szDSN, char* szServer, char* szDatabase, uint16_t wPort)
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*, char*, char*, char*, uint16_t);
        return (org_ptr(0x140321710L))(this, szDSN, szServer, szDatabase, wPort);
    };
    void CRusiaBillingMgr::DeleteMem()
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*);
        (org_ptr(0x140321180L))(this);
    };
    int CRusiaBillingMgr::Free()
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*);
        return (org_ptr(0x140320eb0L))(this);
    };
    int CRusiaBillingMgr::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*);
        return (org_ptr(0x140320e40L))(this);
    };
    struct CRusiaBillingMgr* CRusiaBillingMgr::Instance()
    {
        using org_ptr = struct CRusiaBillingMgr* (WINAPIV*)(struct CRusiaBillingMgr*);
        return (org_ptr(0x140320f20L))(this);
    };
    int CRusiaBillingMgr::LoadINIFile()
    {
        using org_ptr = int (WINAPIV*)(struct CRusiaBillingMgr*);
        return (org_ptr(0x140321430L))(this);
    };
    void CRusiaBillingMgr::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*);
        (org_ptr(0x1403210f0L))(this);
    };
    char* CRusiaBillingMgr::dhExtractSubString(char* szSub, char* szFull, char cToken)
    {
        using org_ptr = char* (WINAPIV*)(struct CRusiaBillingMgr*, char*, char*, char);
        return (org_ptr(0x1403218a0L))(this, szSub, szFull, cToken);
    };
    void CRusiaBillingMgr::dhRExtractSubString(char* szSub, char* szFull, char cToken)
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*, char*, char*, char);
        (org_ptr(0x140321980L))(this, szSub, szFull, cToken);
    };
    CRusiaBillingMgr::~CRusiaBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*);
        (org_ptr(0x140320e00L))(this);
    };
    void CRusiaBillingMgr::dtor_CRusiaBillingMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CRusiaBillingMgr*);
        (org_ptr(0x140320e00L))(this);
    };
END_ATF_NAMESPACE
