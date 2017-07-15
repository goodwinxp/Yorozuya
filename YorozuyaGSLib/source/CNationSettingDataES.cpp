#include <CNationSettingDataES.hpp>


START_ATF_NAMESPACE
    CNationSettingDataES::CNationSettingDataES()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataES*);
        (org_ptr(0x140231de0L))(this);
    };
    void CNationSettingDataES::ctor_CNationSettingDataES()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataES*);
        (org_ptr(0x140231de0L))(this);
    };
    struct CashDbWorker* CNationSettingDataES::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataES*);
        return (org_ptr(0x140231840L))(this);
    };
    int CNationSettingDataES::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataES*, struct _CashShop_str_fld*);
        return (org_ptr(0x1402318f0L))(this, pFld);
    };
    char* CNationSettingDataES::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataES*, struct _NameTxt_fld*);
        return (org_ptr(0x140231820L))(this, pFld);
    };
    int CNationSettingDataES::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataES*);
        return (org_ptr(0x140231730L))(this);
    };
    bool CNationSettingDataES::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataES*);
        return (org_ptr(0x140231910L))(this);
    };
END_ATF_NAMESPACE
