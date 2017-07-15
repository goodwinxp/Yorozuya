#include <CNationSettingDataTH.hpp>


START_ATF_NAMESPACE
    CNationSettingDataTH::CNationSettingDataTH()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*);
        (org_ptr(0x140232000L))(this);
    };
    void CNationSettingDataTH::ctor_CNationSettingDataTH()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*);
        (org_ptr(0x140232000L))(this);
    };
    struct CashDbWorker* CNationSettingDataTH::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataTH*);
        return (org_ptr(0x1402321c0L))(this);
    };
    int CNationSettingDataTH::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataTH*, struct _CashShop_str_fld*);
        return (org_ptr(0x140232270L))(this, pFld);
    };
    char* CNationSettingDataTH::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataTH*, struct _NameTxt_fld*);
        return (org_ptr(0x140232170L))(this, pFld);
    };
    int CNationSettingDataTH::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataTH*);
        return (org_ptr(0x140232060L))(this);
    };
    void CNationSettingDataTH::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*);
        (org_ptr(0x140232160L))(this);
    };
    bool CNationSettingDataTH::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataTH*);
        return (org_ptr(0x140232290L))(this);
    };
    void CNationSettingDataTH::SetUnitPassiveValue(float* fUnitPv_DefFc)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*, float*);
        (org_ptr(0x140232190L))(this, fUnitPv_DefFc);
    };
END_ATF_NAMESPACE
