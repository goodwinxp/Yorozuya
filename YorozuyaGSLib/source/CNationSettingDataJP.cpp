#include <CNationSettingDataJP.hpp>


START_ATF_NAMESPACE
    CNationSettingDataJP::CNationSettingDataJP()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataJP*);
        (org_ptr(0x14022d0c0L))(this);
    };
    void CNationSettingDataJP::ctor_CNationSettingDataJP()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataJP*);
        (org_ptr(0x14022d0c0L))(this);
    };
    struct CBilling* CNationSettingDataJP::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataJP*);
        return (org_ptr(0x14022d330L))(this);
    };
    struct CashDbWorker* CNationSettingDataJP::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataJP*);
        return (org_ptr(0x14022d280L))(this);
    };
    int CNationSettingDataJP::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataJP*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022d3e0L))(this, pFld);
    };
    char* CNationSettingDataJP::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataJP*, struct _NameTxt_fld*);
        return (org_ptr(0x14022d230L))(this, pFld);
    };
    int CNationSettingDataJP::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataJP*);
        return (org_ptr(0x14022d120L))(this);
    };
    void CNationSettingDataJP::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataJP*);
        (org_ptr(0x14022d220L))(this);
    };
    bool CNationSettingDataJP::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataJP*);
        return (org_ptr(0x14022d400L))(this);
    };
    void CNationSettingDataJP::SetUnitPassiveValue(float* fUnitPv_DefFc)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataJP*, float*);
        (org_ptr(0x14022d250L))(this, fUnitPv_DefFc);
    };
END_ATF_NAMESPACE
