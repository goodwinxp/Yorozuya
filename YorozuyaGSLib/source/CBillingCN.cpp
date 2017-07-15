#include <CBillingCN.hpp>


START_ATF_NAMESPACE
    CBillingCN::CBillingCN()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingCN*);
        (org_ptr(0x140230ce0L))(this);
    };
    void CBillingCN::ctor_CBillingCN()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingCN*);
        (org_ptr(0x140230ce0L))(this);
    };
    CBillingCN::~CBillingCN()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingCN*);
        (org_ptr(0x140230db0L))(this);
    };
    void CBillingCN::dtor_CBillingCN()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingCN*);
        (org_ptr(0x140230db0L))(this);
    };
END_ATF_NAMESPACE
