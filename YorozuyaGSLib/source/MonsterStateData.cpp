#include <MonsterStateData.hpp>


START_ATF_NAMESPACE
    uint16_t MonsterStateData::GetStateChunk()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct MonsterStateData*);
        return (org_ptr(0x14014c450L))(this);
    };
    MonsterStateData::MonsterStateData()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterStateData*);
        (org_ptr(0x14014b700L))(this);
    };
    void MonsterStateData::ctor_MonsterStateData()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterStateData*);
        (org_ptr(0x14014b700L))(this);
    };
END_ATF_NAMESPACE
