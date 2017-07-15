#include <CBillingKR.hpp>


START_ATF_NAMESPACE
    CBillingKR::CBillingKR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingKR*);
        (org_ptr(0x14022ba70L))(this);
    };
    void CBillingKR::ctor_CBillingKR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingKR*);
        (org_ptr(0x14022ba70L))(this);
    };
    CBillingKR::~CBillingKR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingKR*);
        (org_ptr(0x14022bc00L))(this);
    };
    void CBillingKR::dtor_CBillingKR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingKR*);
        (org_ptr(0x14022bc00L))(this);
    };
END_ATF_NAMESPACE
