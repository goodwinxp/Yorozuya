#include <MonsterSetInfoData.hpp>


START_ATF_NAMESPACE
    char MonsterSetInfoData::GetLevelContSFTime(char byEffectCode, char byLevel)
    {
        using org_ptr = char (WINAPIV*)(struct MonsterSetInfoData*, char, char);
        return (org_ptr(0x14015d4a0L))(this, byEffectCode, byLevel);
    };
    int MonsterSetInfoData::GetLostMonsterTargetDistance()
    {
        using org_ptr = int (WINAPIV*)(struct MonsterSetInfoData*);
        return (org_ptr(0x140155670L))(this);
    };
    float MonsterSetInfoData::GetMaxToleranceProbMax(int nMonGrade)
    {
        using org_ptr = float (WINAPIV*)(struct MonsterSetInfoData*, int);
        return (org_ptr(0x14014bdf0L))(this, nMonGrade);
    };
    unsigned int MonsterSetInfoData::GetMonsterDropRate(int iDiffLevel)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct MonsterSetInfoData*, int);
        return (org_ptr(0x14015d510L))(this, iDiffLevel);
    };
    float MonsterSetInfoData::GetMonsterForcePowerRate()
    {
        using org_ptr = float (WINAPIV*)(struct MonsterSetInfoData*);
        return (org_ptr(0x140161640L))(this);
    };
    void MonsterSetInfoData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSetInfoData*);
        (org_ptr(0x14015d010L))(this);
    };
    bool MonsterSetInfoData::IsRotateBlock(struct _mon_block* pBlock)
    {
        using org_ptr = bool (WINAPIV*)(struct MonsterSetInfoData*, struct _mon_block*);
        return (org_ptr(0x14015d110L))(this, pBlock);
    };
    int MonsterSetInfoData::Load(char* strFileName)
    {
        using org_ptr = int (WINAPIV*)(struct MonsterSetInfoData*, char*);
        return (org_ptr(0x14015c7e0L))(this, strFileName);
    };
    MonsterSetInfoData::MonsterSetInfoData()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSetInfoData*);
        (org_ptr(0x140161980L))(this);
    };
    void MonsterSetInfoData::ctor_MonsterSetInfoData()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSetInfoData*);
        (org_ptr(0x140161980L))(this);
    };
END_ATF_NAMESPACE
