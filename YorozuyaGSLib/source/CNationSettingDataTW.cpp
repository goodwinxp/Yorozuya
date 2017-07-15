#include <CNationSettingDataTW.hpp>


START_ATF_NAMESPACE
    CNationSettingDataTW::CNationSettingDataTW()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataTW*);
        (org_ptr(0x14022f9b0L))(this);
    };
    void CNationSettingDataTW::ctor_CNationSettingDataTW()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataTW*);
        (org_ptr(0x14022f9b0L))(this);
    };
    struct CashDbWorker* CNationSettingDataTW::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataTW*);
        return (org_ptr(0x140230040L))(this);
    };
    int CNationSettingDataTW::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataTW*, struct _CashShop_str_fld*);
        return (org_ptr(0x1402300f0L))(this, pFld);
    };
    char* CNationSettingDataTW::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataTW*, struct _NameTxt_fld*);
        return (org_ptr(0x14022fb10L))(this, pFld);
    };
    int CNationSettingDataTW::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataTW*);
        return (org_ptr(0x14022fa10L))(this);
    };
    bool CNationSettingDataTW::IsPersonalFreeFixedAmountBillingType(int16_t* pDest1, int16_t* pDest2)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataTW*, int16_t*, int16_t*);
        return (org_ptr(0x14022fff0L))(this, pDest1, pDest2);
    };
    bool CNationSettingDataTW::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataTW*);
        return (org_ptr(0x140230110L))(this);
    };
    bool CNationSettingDataTW::ValidMacAddress()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataTW*);
        return (org_ptr(0x14022fb30L))(this);
    };
END_ATF_NAMESPACE
