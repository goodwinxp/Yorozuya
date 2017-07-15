#include <CNationSettingDataCN.hpp>


START_ATF_NAMESPACE
    CNationSettingDataCN::CNationSettingDataCN()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataCN*);
        (org_ptr(0x140230fc0L))(this);
    };
    void CNationSettingDataCN::ctor_CNationSettingDataCN()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataCN*);
        (org_ptr(0x140230fc0L))(this);
    };
    struct CBilling* CNationSettingDataCN::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataCN*);
        return (org_ptr(0x1402307c0L))(this);
    };
    void CNationSettingDataCN::CreateComplete(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataCN*, struct CPlayer*);
        (org_ptr(0x140230870L))(this, pOne);
    };
    struct CashDbWorker* CNationSettingDataCN::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataCN*);
        return (org_ptr(0x140230710L))(this);
    };
    int CNationSettingDataCN::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataCN*, struct _CashShop_str_fld*);
        return (org_ptr(0x140230920L))(this, pFld);
    };
    char* CNationSettingDataCN::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataCN*, struct _NameTxt_fld*);
        return (org_ptr(0x1402306f0L))(this, pFld);
    };
    int CNationSettingDataCN::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataCN*);
        return (org_ptr(0x140230570L))(this);
    };
    void CNationSettingDataCN::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataCN*);
        (org_ptr(0x1402306a0L))(this);
    };
    void CNationSettingDataCN::NetClose(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataCN*, struct CPlayer*);
        (org_ptr(0x1402308d0L))(this, pOne);
    };
    bool CNationSettingDataCN::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataCN*);
        return (org_ptr(0x140230940L))(this);
    };
END_ATF_NAMESPACE
