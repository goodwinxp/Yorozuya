#include <CNationSettingData.hpp>


START_ATF_NAMESPACE
    CNationSettingData::CNationSettingData()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x1402119c0L))(this);
    };
    void CNationSettingData::ctor_CNationSettingData()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x1402119c0L))(this);
    };
    bool CNationSettingData::CheckDBCSCompleteString(int nCodePage, char* strData, uint64_t* pCharacterCount)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, int, char*, uint64_t*);
        return (org_ptr(0x140211e00L))(this, nCodePage, strData, pCharacterCount);
    };
    bool CNationSettingData::CheckEnterWorldRequest(int n, char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, int, char*);
        return (org_ptr(0x1402128d0L))(this, n, pBuf);
    };
    struct CBilling* CNationSettingData::CreateBilling()
    {
        using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140212870L))(this);
    };
    void CNationSettingData::CreateComplete(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*, struct CPlayer*);
        (org_ptr(0x1402128f0L))(this, pOne);
    };
    struct CashDbWorker* CNationSettingData::CreateWorker()
    {
        using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140211be0L))(this);
    };
    int CNationSettingData::GetCashItemPrice(struct _CashShop_str_fld* pFld)
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingData*, struct _CashShop_str_fld*);
        return (org_ptr(0x140212910L))(this, pFld);
    };
    bool CNationSettingData::GetFireGuardEnableSetting()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140212380L))(this);
    };
    struct INationGameGuardSystem* CNationSettingData::GetGameGuardSystem()
    {
        using org_ptr = struct INationGameGuardSystem* (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140229980L))(this);
    };
    char* CNationSettingData::GetItemName(struct _NameTxt_fld* pFld)
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingData*, struct _NameTxt_fld*);
        return (org_ptr(0x140212880L))(this, pFld);
    };
    char* CNationSettingData::GetNoneString()
    {
        using org_ptr = char* (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140123000L))(this);
    };
    bool CNationSettingData::GetTimeLimitEnableSetting()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140212480L))(this);
    };
    int CNationSettingData::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140211bc0L))(this);
    };
    bool CNationSettingData::IsApplyPcbangPrimium(struct CPlayer* pUser)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, struct CPlayer*);
        return (org_ptr(0x140211d00L))(this, pUser);
    };
    bool CNationSettingData::IsCashDBDSNSetted()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x1402f2d00L))(this);
    };
    bool CNationSettingData::IsCashDBInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x1402f26a0L))(this);
    };
    bool CNationSettingData::IsCashDBUseExtRef()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x1402f3680L))(this);
    };
    bool CNationSettingData::IsNormalChar(wchar_t wcChar)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, wchar_t);
        return (org_ptr(0x140211cb0L))(this, wcChar);
    };
    bool CNationSettingData::IsNormalString(char* szString)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, char*);
        return (org_ptr(0x140211bf0L))(this, szString);
    };
    bool CNationSettingData::IsNormalString(wchar_t* wszString)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, wchar_t*);
        return (org_ptr(0x140211c50L))(this, wszString);
    };
    bool CNationSettingData::IsNormalStringDefProc(char* szString, char* szException)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, char*, char*);
        return (org_ptr(0x140211f40L))(this, szString, szException);
    };
    bool CNationSettingData::IsNormalStringDefProc(wchar_t* wszString, wchar_t* wszException)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, wchar_t*, wchar_t*);
        return (org_ptr(0x1402121f0L))(this, wszString, wszException);
    };
    bool CNationSettingData::IsPersonalFreeFixedAmountBillingType(int16_t* pDest1, int16_t* pDest2)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, int16_t*, int16_t*);
        return (org_ptr(0x1402128b0L))(this, pDest1, pDest2);
    };
    void CNationSettingData::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x140211bd0L))(this);
    };
    void CNationSettingData::NetClose(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*, struct CPlayer*);
        (org_ptr(0x140212900L))(this, pOne);
    };
    bool CNationSettingData::ReadSystemPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x140212930L))(this);
    };
    void CNationSettingData::SendCashDBDSNRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x140211d80L))(this);
    };
    void CNationSettingData::SetCahsDBUseExtRefFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x14022c740L))(this);
    };
    void CNationSettingData::SetCashDBDSN(char* szIP, char* szDBName, char* szAccount, char* szPassword, unsigned int dwPort)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*, char*, char*, char*, char*, unsigned int);
        (org_ptr(0x140211b00L))(this, szIP, szDBName, szAccount, szPassword, dwPort);
    };
    void CNationSettingData::SetCashDBDSNSetFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x140212940L))(this);
    };
    void CNationSettingData::SetCashDBInitFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x1402f2db0L))(this);
    };
    void CNationSettingData::SetUnitPassiveValue(float* fUnitPv_DefFc)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*, float*);
        (org_ptr(0x140211cd0L))(this, fUnitPv_DefFc);
    };
    bool CNationSettingData::ValidMacAddress()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
        return (org_ptr(0x1402128a0L))(this);
    };
    CNationSettingData::~CNationSettingData()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x140213140L))(this);
    };
    void CNationSettingData::dtor_CNationSettingData()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
        (org_ptr(0x140213140L))(this);
    };
    
END_ATF_NAMESPACE
