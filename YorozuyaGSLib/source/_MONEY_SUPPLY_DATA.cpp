#include <_MONEY_SUPPLY_DATA.hpp>


START_ATF_NAMESPACE
    void _MONEY_SUPPLY_DATA::init()
    {
        using org_ptr = void (WINAPIV*)(struct _MONEY_SUPPLY_DATA*);
        (org_ptr(0x140430740L))(this);
    };
    int _MONEY_SUPPLY_DATA::size()
    {
        using org_ptr = int (WINAPIV*)(struct _MONEY_SUPPLY_DATA*);
        return (org_ptr(0x140430790L))(this);
    };
    
END_ATF_NAMESPACE
