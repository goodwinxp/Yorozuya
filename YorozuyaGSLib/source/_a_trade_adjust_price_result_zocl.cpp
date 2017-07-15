#include <_a_trade_adjust_price_result_zocl.hpp>


START_ATF_NAMESPACE
    int _a_trade_adjust_price_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _a_trade_adjust_price_result_zocl*);
        return (org_ptr(0x14035fd90L))(this);
    };
END_ATF_NAMESPACE
