#include <CNationSettingDataID.hpp>


START_ATF_NAMESPACE
    CNationSettingDataID::CNationSettingDataID()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataID*);
        (org_ptr(0x14022c760L))(this);
    };
    void CNationSettingDataID::ctor_CNationSettingDataID()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataID*);
        (org_ptr(0x14022c760L))(this);
    };
    bool CNationSettingDataID::CheckEnterWorldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataID*, int, char*);
        return (org_ptr(0x14022ca40L))(this, n, pBuf);
    };
    struct CBilling* CNationSettingDataID::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataID*);
        return (org_ptr(0x14022c990L))(this);
    };
    struct CashDbWorker* CNationSettingDataID::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataID*);
        return (org_ptr(0x14022c8e0L))(this);
    };
    int CNationSettingDataID::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataID*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022ca60L))(this, pFld);
    };
    char* CNationSettingDataID::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataID*, struct _NameTxt_fld*);
        return (org_ptr(0x14022c8c0L))(this, pFld);
    };
    int CNationSettingDataID::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataID*);
        return (org_ptr(0x14022c7c0L))(this);
    };
    void CNationSettingDataID::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataID*);
        (org_ptr(0x14022c8b0L))(this);
    };
    bool CNationSettingDataID::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataID*);
        return (org_ptr(0x14022ca80L))(this);
    };
END_ATF_NAMESPACE
