#include <BossSchedule_TBL.hpp>


START_ATF_NAMESPACE
    BossSchedule_TBL::BossSchedule_TBL()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
        (org_ptr(0x14041b790L))(this);
    };
    void BossSchedule_TBL::ctor_BossSchedule_TBL()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
        (org_ptr(0x14041b790L))(this);
    };
    BossSchedule_TBL::~BossSchedule_TBL()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
        (org_ptr(0x14041b2b0L))(this);
    };
    void BossSchedule_TBL::dtor_BossSchedule_TBL()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule_TBL*);
        (org_ptr(0x14041b2b0L))(this);
    };
END_ATF_NAMESPACE
