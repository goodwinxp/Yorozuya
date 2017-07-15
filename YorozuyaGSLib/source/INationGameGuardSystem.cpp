#include <INationGameGuardSystem.hpp>


START_ATF_NAMESPACE
    INationGameGuardSystem::INationGameGuardSystem()
    {
        using org_ptr = void (WINAPIV*)(struct INationGameGuardSystem*);
        (org_ptr(0x140417660L))(this);
    };
    void INationGameGuardSystem::ctor_INationGameGuardSystem()
    {
        using org_ptr = void (WINAPIV*)(struct INationGameGuardSystem*);
        (org_ptr(0x140417660L))(this);
    };
    INationGameGuardSystem::~INationGameGuardSystem()
    {
        using org_ptr = void (WINAPIV*)(struct INationGameGuardSystem*);
        (org_ptr(0x140417690L))(this);
    };
    void INationGameGuardSystem::dtor_INationGameGuardSystem()
    {
        using org_ptr = void (WINAPIV*)(struct INationGameGuardSystem*);
        (org_ptr(0x140417690L))(this);
    };
END_ATF_NAMESPACE
