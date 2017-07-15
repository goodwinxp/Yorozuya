#include <_money_supply_gatering_inform_zowb.hpp>


START_ATF_NAMESPACE
    void _money_supply_gatering_inform_zowb::init()
    {
        using org_ptr = void (WINAPIV*)(struct _money_supply_gatering_inform_zowb*);
        (org_ptr(0x1404307a0L))(this);
    };
    
END_ATF_NAMESPACE
