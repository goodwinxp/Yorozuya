#include <CNationSettingDataRU.hpp>


START_ATF_NAMESPACE
    CNationSettingDataRU::CNationSettingDataRU()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataRU*);
        (org_ptr(0x14022e540L))(this);
    };
    void CNationSettingDataRU::ctor_CNationSettingDataRU()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataRU*);
        (org_ptr(0x14022e540L))(this);
    };
    struct CBilling* CNationSettingDataRU::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataRU*);
        return (org_ptr(0x14022e770L))(this);
    };
    struct CashDbWorker* CNationSettingDataRU::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataRU*);
        return (org_ptr(0x14022e6c0L))(this);
    };
    int CNationSettingDataRU::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataRU*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022e820L))(this, pFld);
    };
    char* CNationSettingDataRU::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataRU*, struct _NameTxt_fld*);
        return (org_ptr(0x14022e6a0L))(this, pFld);
    };
    int CNationSettingDataRU::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataRU*);
        return (org_ptr(0x14022e5a0L))(this);
    };
    bool CNationSettingDataRU::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataRU*);
        return (org_ptr(0x14022e850L))(this);
    };
    void CNationSettingDataRU::SendCashDBDSNRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataRU*);
        (org_ptr(0x14022e840L))(this);
    };
END_ATF_NAMESPACE
