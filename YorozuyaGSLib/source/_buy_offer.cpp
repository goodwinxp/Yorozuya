#include <_buy_offer.hpp>


START_ATF_NAMESPACE
    _buy_offer::_buy_offer()
    {
        using org_ptr = void (WINAPIV*)(struct _buy_offer*);
        (org_ptr(0x1400f7820L))(this);
    };
    void _buy_offer::ctor__buy_offer()
    {
        using org_ptr = void (WINAPIV*)(struct _buy_offer*);
        (org_ptr(0x1400f7820L))(this);
    };
END_ATF_NAMESPACE
