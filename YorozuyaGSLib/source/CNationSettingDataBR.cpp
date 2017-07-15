#include <CNationSettingDataBR.hpp>


START_ATF_NAMESPACE
    CNationSettingDataBR::CNationSettingDataBR()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataBR*);
        (org_ptr(0x14022f6a0L))(this);
    };
    void CNationSettingDataBR::ctor_CNationSettingDataBR()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataBR*);
        (org_ptr(0x14022f6a0L))(this);
    };
    bool CNationSettingDataBR::CheckEnterWorldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataBR*, int, char*);
        return (org_ptr(0x14022f000L))(this, n, pBuf);
    };
    struct CBilling* CNationSettingDataBR::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataBR*);
        return (org_ptr(0x14022ef50L))(this);
    };
    struct CashDbWorker* CNationSettingDataBR::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataBR*);
        return (org_ptr(0x14022eea0L))(this);
    };
    int CNationSettingDataBR::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataBR*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022f020L))(this, pFld);
    };
    char* CNationSettingDataBR::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataBR*, struct _NameTxt_fld*);
        return (org_ptr(0x14022ee80L))(this, pFld);
    };
    int CNationSettingDataBR::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataBR*);
        return (org_ptr(0x14022ecd0L))(this);
    };
    void CNationSettingDataBR::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataBR*);
        (org_ptr(0x14022ee70L))(this);
    };
    bool CNationSettingDataBR::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataBR*);
        return (org_ptr(0x14022f040L))(this);
    };
END_ATF_NAMESPACE
