#include <ScheduleMSG.hpp>


START_ATF_NAMESPACE
    void ScheduleMSG::Init()
    {
        using org_ptr = void (WINAPIV*)(struct ScheduleMSG*);
        (org_ptr(0x14041b8b0L))(this);
    };
    ScheduleMSG::ScheduleMSG()
    {
        using org_ptr = void (WINAPIV*)(struct ScheduleMSG*);
        (org_ptr(0x14041ec70L))(this);
    };
    void ScheduleMSG::ctor_ScheduleMSG()
    {
        using org_ptr = void (WINAPIV*)(struct ScheduleMSG*);
        (org_ptr(0x14041ec70L))(this);
    };
END_ATF_NAMESPACE
