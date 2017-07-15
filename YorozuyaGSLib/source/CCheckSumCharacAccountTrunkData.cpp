#include <CCheckSumCharacAccountTrunkData.hpp>


START_ATF_NAMESPACE
    CCheckSumCharacAccountTrunkData::CCheckSumCharacAccountTrunkData(unsigned int dwSerial, unsigned int dwAccountSerial, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, unsigned int, unsigned int, char);
        (org_ptr(0x1402c06a0L))(this, dwSerial, dwAccountSerial, byRace);
    };
    void CCheckSumCharacAccountTrunkData::ctor_CCheckSumCharacAccountTrunkData(unsigned int dwSerial, unsigned int dwAccountSerial, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, unsigned int, unsigned int, char);
        (org_ptr(0x1402c06a0L))(this, dwSerial, dwAccountSerial, byRace);
    };
    int CCheckSumCharacAccountTrunkData::CheckDiff(struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumCharacAccountTrunkData* kSrcValue)
    {
        using org_ptr = int (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*, char*, struct CCheckSumCharacAccountTrunkData*);
        return (org_ptr(0x1402c08e0L))(this, pkDB, wszName, kSrcValue);
    };
    void CCheckSumCharacAccountTrunkData::Decode(struct _AVATOR_DATA* pAvator)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct _AVATOR_DATA*);
        (org_ptr(0x1402c0c60L))(this, pAvator);
    };
    void CCheckSumCharacAccountTrunkData::Encode(struct _AVATOR_DATA* pAvator)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct _AVATOR_DATA*);
        (org_ptr(0x1402c0c00L))(this, pAvator);
    };
    bool CCheckSumCharacAccountTrunkData::InsertCharacData(struct CRFWorldDatabase* pkDB)
    {
        using org_ptr = bool (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*);
        return (org_ptr(0x1402c0cc0L))(this, pkDB);
    };
    bool CCheckSumCharacAccountTrunkData::InsertTrunkData(struct CRFWorldDatabase* pkDB)
    {
        using org_ptr = bool (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*);
        return (org_ptr(0x1402c0d20L))(this, pkDB);
    };
    int CCheckSumCharacAccountTrunkData::Load(struct CRFWorldDatabase* pkDB, struct CCheckSumCharacAccountTrunkData* kSrcValue)
    {
        using org_ptr = int (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*, struct CCheckSumCharacAccountTrunkData*);
        return (org_ptr(0x1402c0750L))(this, pkDB, kSrcValue);
    };
    void CCheckSumCharacAccountTrunkData::SetValue(CCheckSumCharacAccountTrunkData::COLUMN_DW_TYPE eType, unsigned int dwValue)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, CCheckSumCharacAccountTrunkData::COLUMN_DW_TYPE, unsigned int);
        (org_ptr(0x1402c0e20L))(this, eType, dwValue);
    };
    void CCheckSumCharacAccountTrunkData::SetValue(CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE eType, long double dValue)
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE, long double);
        (org_ptr(0x1402c0e60L))(this, eType, dValue);
    };
    bool CCheckSumCharacAccountTrunkData::Update(struct CRFWorldDatabase* pkDB)
    {
        using org_ptr = bool (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*);
        return (org_ptr(0x1402c0b60L))(this, pkDB);
    };
    CCheckSumCharacAccountTrunkData::~CCheckSumCharacAccountTrunkData()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*);
        (org_ptr(0x1402c0740L))(this);
    };
    void CCheckSumCharacAccountTrunkData::dtor_CCheckSumCharacAccountTrunkData()
    {
        using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*);
        (org_ptr(0x1402c0740L))(this);
    };
    
    
END_ATF_NAMESPACE
