#include <CCheckSumGuildData.hpp>


START_ATF_NAMESPACE
    CCheckSumGuildData::CCheckSumGuildData(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*, unsigned int);
        (org_ptr(0x1401bf340L))(this, dwSerial);
    };
    void CCheckSumGuildData::ctor_CCheckSumGuildData(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*, unsigned int);
        (org_ptr(0x1401bf340L))(this, dwSerial);
    };
    int CCheckSumGuildData::CheckDiff(struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumGuildData* kSrcValue)
    {
        using org_ptr = int (WINAPIV*)(struct CCheckSumGuildData*, struct CRFWorldDatabase*, char*, struct CCheckSumGuildData*);
        return (org_ptr(0x1402c0f70L))(this, pkDB, wszName, kSrcValue);
    };
    void CCheckSumGuildData::Decode(long double dDalant, long double dGold)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*, long double, long double);
        (org_ptr(0x1402c11d0L))(this, dDalant, dGold);
    };
    void CCheckSumGuildData::Encode(long double dDalant, long double dGold)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*, long double, long double);
        (org_ptr(0x1402c1160L))(this, dDalant, dGold);
    };
    long double CCheckSumGuildData::GetDalant()
    {
        using org_ptr = long double (WINAPIV*)(struct CCheckSumGuildData*);
        return (org_ptr(0x1402c1240L))(this);
    };
    long double CCheckSumGuildData::GetGold()
    {
        using org_ptr = long double (WINAPIV*)(struct CCheckSumGuildData*);
        return (org_ptr(0x1402c12b0L))(this);
    };
    bool CCheckSumGuildData::Insert(struct CRFWorldDatabase* pkDB)
    {
        using org_ptr = bool (WINAPIV*)(struct CCheckSumGuildData*, struct CRFWorldDatabase*);
        return (org_ptr(0x1402c1320L))(this, pkDB);
    };
    int CCheckSumGuildData::Load(struct CRFWorldDatabase* pkDB, struct CCheckSumGuildData* kSrcValue)
    {
        using org_ptr = int (WINAPIV*)(struct CCheckSumGuildData*, struct CRFWorldDatabase*, struct CCheckSumGuildData*);
        return (org_ptr(0x1402c0ea0L))(this, pkDB, kSrcValue);
    };
    void CCheckSumGuildData::SetValue(CCheckSumGuildData::COLUMN_D_TYPE eType, long double dValue)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*, CCheckSumGuildData::COLUMN_D_TYPE, long double);
        (org_ptr(0x1402c1380L))(this, eType, dValue);
    };
    bool CCheckSumGuildData::Update(struct CRFWorldDatabase* pkDB)
    {
        using org_ptr = bool (WINAPIV*)(struct CCheckSumGuildData*, struct CRFWorldDatabase*);
        return (org_ptr(0x1402c10f0L))(this, pkDB);
    };
    CCheckSumGuildData::~CCheckSumGuildData()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*);
        (org_ptr(0x1401bf370L))(this);
    };
    void CCheckSumGuildData::dtor_CCheckSumGuildData()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumGuildData*);
        (org_ptr(0x1401bf370L))(this);
    };
    
END_ATF_NAMESPACE
