#include <_limit_amount_info.hpp>


START_ATF_NAMESPACE
    _limit_amount_info::_limit_amount_info()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_amount_info*);
        (org_ptr(0x1400f7780L))(this);
    };
    void _limit_amount_info::ctor__limit_amount_info()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_amount_info*);
        (org_ptr(0x1400f7780L))(this);
    };
    
END_ATF_NAMESPACE
