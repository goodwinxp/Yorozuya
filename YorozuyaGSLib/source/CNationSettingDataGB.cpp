#include <CNationSettingDataGB.hpp>


START_ATF_NAMESPACE
    CNationSettingDataGB::CNationSettingDataGB()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        (org_ptr(0x14022be10L))(this);
    };
    void CNationSettingDataGB::ctor_CNationSettingDataGB()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        (org_ptr(0x14022be10L))(this);
    };
    struct CashDbWorker* CNationSettingDataGB::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataGB*);
        return (org_ptr(0x14022c020L))(this);
    };
    int CNationSettingDataGB::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataGB*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022c0d0L))(this, pFld);
    };
    char* CNationSettingDataGB::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataGB*, struct _NameTxt_fld*);
        return (org_ptr(0x14022c000L))(this, pFld);
    };
    int CNationSettingDataGB::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataGB*);
        return (org_ptr(0x14022be70L))(this);
    };
    void CNationSettingDataGB::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        (org_ptr(0x14022bfa0L))(this);
    };
    bool CNationSettingDataGB::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataGB*);
        return (org_ptr(0x14022c100L))(this);
    };
    void CNationSettingDataGB::SendCashDBDSNRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        (org_ptr(0x14022c0f0L))(this);
    };
END_ATF_NAMESPACE
