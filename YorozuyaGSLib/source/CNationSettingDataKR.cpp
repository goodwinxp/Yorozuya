#include <CNationSettingDataKR.hpp>


START_ATF_NAMESPACE
    CNationSettingDataKR::CNationSettingDataKR()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataKR*);
        (org_ptr(0x14022b160L))(this);
    };
    void CNationSettingDataKR::ctor_CNationSettingDataKR()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataKR*);
        (org_ptr(0x14022b160L))(this);
    };
    struct CBilling* CNationSettingDataKR::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataKR*);
        return (org_ptr(0x14022b3f0L))(this);
    };
    struct CashDbWorker* CNationSettingDataKR::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataKR*);
        return (org_ptr(0x14022b340L))(this);
    };
    int CNationSettingDataKR::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataKR*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022b4a0L))(this, pFld);
    };
    char* CNationSettingDataKR::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataKR*, struct _NameTxt_fld*);
        return (org_ptr(0x14022b320L))(this, pFld);
    };
    int CNationSettingDataKR::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataKR*);
        return (org_ptr(0x14022b230L))(this);
    };
    bool CNationSettingDataKR::IsNormalChar(wchar_t wcChar)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataKR*, wchar_t);
        return (org_ptr(0x14022b1c0L))(this, wcChar);
    };
    bool CNationSettingDataKR::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataKR*);
        return (org_ptr(0x14022b4d0L))(this);
    };
    void CNationSettingDataKR::SendCashDBDSNRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataKR*);
        (org_ptr(0x14022b4c0L))(this);
    };
END_ATF_NAMESPACE
