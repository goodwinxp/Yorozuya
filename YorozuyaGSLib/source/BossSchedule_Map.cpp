#include <BossSchedule_Map.hpp>


START_ATF_NAMESPACE
    BossSchedule_Map::BossSchedule_Map()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_Map*);
        (org_ptr(0x14041b720L))(this);
    };
    void BossSchedule_Map::ctor_BossSchedule_Map()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_Map*);
        (org_ptr(0x14041b720L))(this);
    };
    void BossSchedule_Map::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_Map*);
        (org_ptr(0x14041b4d0L))(this);
    };
    bool BossSchedule_Map::LoadAll()
    {
        using org_ptr = bool (WINAPIV*)(struct BossSchedule_Map*);
        return (org_ptr(0x14041a070L))(this);
    };
    bool BossSchedule_Map::SaveAll()
    {
        using org_ptr = bool (WINAPIV*)(struct BossSchedule_Map*);
        return (org_ptr(0x140419fb0L))(this);
    };
    BossSchedule_Map::~BossSchedule_Map()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_Map*);
        (org_ptr(0x14041b430L))(this);
    };
    void BossSchedule_Map::dtor_BossSchedule_Map()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_Map*);
        (org_ptr(0x14041b430L))(this);
    };
END_ATF_NAMESPACE
