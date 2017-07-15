#include <CNationSettingDataNULL.hpp>


START_ATF_NAMESPACE
    CNationSettingDataNULL::CNationSettingDataNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*);
        (org_ptr(0x140212f50L))(this);
    };
    void CNationSettingDataNULL::ctor_CNationSettingDataNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*);
        (org_ptr(0x140212f50L))(this);
    };
    bool CNationSettingDataNULL::CheckEnterWorldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataNULL*, int, char*);
        return (org_ptr(0x140213070L))(this, n, pBuf);
    };
    struct CBilling* CNationSettingDataNULL::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataNULL*);
        return (org_ptr(0x140212fe0L))(this);
    };
    void CNationSettingDataNULL::CreateComplete(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*, struct CPlayer*);
        (org_ptr(0x140213090L))(this, pOne);
    };
    struct CashDbWorker* CNationSettingDataNULL::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataNULL*);
        return (org_ptr(0x140212fd0L))(this);
    };
    int CNationSettingDataNULL::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataNULL*, struct _CashShop_str_fld*);
        return (org_ptr(0x1402130b0L))(this, pFld);
    };
    char* CNationSettingDataNULL::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataNULL*, struct _NameTxt_fld*);
        return (org_ptr(0x140212ff0L))(this, pFld);
    };
    int CNationSettingDataNULL::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataNULL*);
        return (org_ptr(0x140212fb0L))(this);
    };
    bool CNationSettingDataNULL::IsApplyPcbangPrimium(struct CPlayer* pUser)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataNULL*, struct CPlayer*);
        return (org_ptr(0x1402130d0L))(this, pUser);
    };
    bool CNationSettingDataNULL::IsNormalChar(wchar_t wcChar)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataNULL*, wchar_t);
        return (org_ptr(0x140213020L))(this, wcChar);
    };
    bool CNationSettingDataNULL::IsPersonalFreeFixedAmountBillingType(int16_t* pDest1, int16_t* pDest2)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataNULL*, int16_t*, int16_t*);
        return (org_ptr(0x140213050L))(this, pDest1, pDest2);
    };
    void CNationSettingDataNULL::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*);
        (org_ptr(0x140212fc0L))(this);
    };
    void CNationSettingDataNULL::NetClose(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*, struct CPlayer*);
        (org_ptr(0x1402130a0L))(this, pOne);
    };
    void CNationSettingDataNULL::SendCashDBDSNRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*);
        (org_ptr(0x1402130f0L))(this);
    };
    void CNationSettingDataNULL::SetUnitPassiveValue(float* fUnitPv_DefFc)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*, float*);
        (org_ptr(0x140213040L))(this, fUnitPv_DefFc);
    };
    bool CNationSettingDataNULL::ValidMacAddress()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataNULL*);
        return (org_ptr(0x140213010L))(this);
    };
    CNationSettingDataNULL::~CNationSettingDataNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*);
        (org_ptr(0x140213100L))(this);
    };
    void CNationSettingDataNULL::dtor_CNationSettingDataNULL()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataNULL*);
        (org_ptr(0x140213100L))(this);
    };
END_ATF_NAMESPACE
