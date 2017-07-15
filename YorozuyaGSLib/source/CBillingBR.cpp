#include <CBillingBR.hpp>


START_ATF_NAMESPACE
    CBillingBR::CBillingBR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingBR*);
        (org_ptr(0x14022f3c0L))(this);
    };
    void CBillingBR::ctor_CBillingBR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingBR*);
        (org_ptr(0x14022f3c0L))(this);
    };
    CBillingBR::~CBillingBR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingBR*);
        (org_ptr(0x14022f490L))(this);
    };
    void CBillingBR::dtor_CBillingBR()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingBR*);
        (org_ptr(0x14022f490L))(this);
    };
END_ATF_NAMESPACE
