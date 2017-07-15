#include <CBillingPH.hpp>


START_ATF_NAMESPACE
    CBillingPH::CBillingPH()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingPH*);
        (org_ptr(0x14022e260L))(this);
    };
    void CBillingPH::ctor_CBillingPH()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingPH*);
        (org_ptr(0x14022e260L))(this);
    };
    CBillingPH::~CBillingPH()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingPH*);
        (org_ptr(0x14022e330L))(this);
    };
    void CBillingPH::dtor_CBillingPH()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingPH*);
        (org_ptr(0x14022e330L))(this);
    };
END_ATF_NAMESPACE
