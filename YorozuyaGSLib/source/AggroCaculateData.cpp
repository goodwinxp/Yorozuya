#include <AggroCaculateData.hpp>


START_ATF_NAMESPACE
    AggroCaculateData::AggroCaculateData()
    {
        using org_ptr = void (WINAPIV*)(struct AggroCaculateData*);
        (org_ptr(0x14015beb0L))(this);
    };
    void AggroCaculateData::ctor_AggroCaculateData()
    {
        using org_ptr = void (WINAPIV*)(struct AggroCaculateData*);
        (org_ptr(0x14015beb0L))(this);
    };
    int AggroCaculateData::GetDefault(unsigned int dwKind)
    {
        using org_ptr = int (WINAPIV*)(struct AggroCaculateData*, unsigned int);
        return (org_ptr(0x1401616b0L))(this, dwKind);
    };
    int AggroCaculateData::GetSize()
    {
        using org_ptr = int (WINAPIV*)(struct AggroCaculateData*);
        return (org_ptr(0x140161690L))(this);
    };
    int AggroCaculateData::GetSpecialData(char byAttackType, uint16_t wIndex)
    {
        using org_ptr = int (WINAPIV*)(struct AggroCaculateData*, char, uint16_t);
        return (org_ptr(0x14015c710L))(this, byAttackType, wIndex);
    };
    void AggroCaculateData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct AggroCaculateData*);
        (org_ptr(0x14015bef0L))(this);
    };
    int AggroCaculateData::Load(char* strFileName)
    {
        using org_ptr = int (WINAPIV*)(struct AggroCaculateData*, char*);
        return (org_ptr(0x14015bf70L))(this, strFileName);
    };
    int AggroCaculateData::PushSpecialData(char byAttackType, uint16_t wIndex, int nValue)
    {
        using org_ptr = int (WINAPIV*)(struct AggroCaculateData*, char, uint16_t, int);
        return (org_ptr(0x14015c660L))(this, byAttackType, wIndex, nValue);
    };
    
    
END_ATF_NAMESPACE
