#include <CBillingRU.hpp>


START_ATF_NAMESPACE
    CBillingRU::CBillingRU()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingRU*);
        (org_ptr(0x14022eba0L))(this);
    };
    void CBillingRU::ctor_CBillingRU()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingRU*);
        (org_ptr(0x14022eba0L))(this);
    };
    CBillingRU::~CBillingRU()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingRU*);
        (org_ptr(0x14022ec70L))(this);
    };
    void CBillingRU::dtor_CBillingRU()
    {
        using org_ptr = void (WINAPIV*)(struct CBillingRU*);
        (org_ptr(0x14022ec70L))(this);
    };
END_ATF_NAMESPACE
