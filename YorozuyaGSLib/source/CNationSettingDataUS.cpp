#include <CNationSettingDataUS.hpp>


START_ATF_NAMESPACE
    CNationSettingDataUS::CNationSettingDataUS()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataUS*);
        (org_ptr(0x1402311d0L))(this);
    };
    void CNationSettingDataUS::ctor_CNationSettingDataUS()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataUS*);
        (org_ptr(0x1402311d0L))(this);
    };
    struct CashDbWorker* CNationSettingDataUS::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataUS*);
        return (org_ptr(0x140231340L))(this);
    };
    int CNationSettingDataUS::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataUS*, struct _CashShop_str_fld*);
        return (org_ptr(0x1402313f0L))(this, pFld);
    };
    char* CNationSettingDataUS::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataUS*, struct _NameTxt_fld*);
        return (org_ptr(0x140231320L))(this, pFld);
    };
    int CNationSettingDataUS::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataUS*);
        return (org_ptr(0x140231230L))(this);
    };
    bool CNationSettingDataUS::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataUS*);
        return (org_ptr(0x140231410L))(this);
    };
END_ATF_NAMESPACE
