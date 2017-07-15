#include <CNationSettingDataPH.hpp>


START_ATF_NAMESPACE
    CNationSettingDataPH::CNationSettingDataPH()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataPH*);
        (org_ptr(0x14022da40L))(this);
    };
    void CNationSettingDataPH::ctor_CNationSettingDataPH()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataPH*);
        (org_ptr(0x14022da40L))(this);
    };
    bool CNationSettingDataPH::CheckEnterWorldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataPH*, int, char*);
        return (org_ptr(0x14022de70L))(this, n, pBuf);
    };
    struct CBilling* CNationSettingDataPH::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataPH*);
        return (org_ptr(0x14022ddc0L))(this);
    };
    struct CashDbWorker* CNationSettingDataPH::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataPH*);
        return (org_ptr(0x14022dd10L))(this);
    };
    int CNationSettingDataPH::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataPH*, struct _CashShop_str_fld*);
        return (org_ptr(0x14022de90L))(this, pFld);
    };
    char* CNationSettingDataPH::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingDataPH*, struct _NameTxt_fld*);
        return (org_ptr(0x14022dc50L))(this, pFld);
    };
    int CNationSettingDataPH::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingDataPH*);
        return (org_ptr(0x14022daa0L))(this);
    };
    bool CNationSettingDataPH::IsNormalString(char* szString)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataPH*, char*);
        return (org_ptr(0x14022dc70L))(this, szString);
    };
    bool CNationSettingDataPH::IsNormalString(wchar_t* wszString)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataPH*, wchar_t*);
        return (org_ptr(0x14022dcc0L))(this, wszString);
    };
    void CNationSettingDataPH::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingDataPH*);
        (org_ptr(0x14022dc40L))(this);
    };
    bool CNationSettingDataPH::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingDataPH*);
        return (org_ptr(0x14022deb0L))(this);
    };
END_ATF_NAMESPACE
