#include <_param_cash_total_selling.hpp>


START_ATF_NAMESPACE
    int _param_cash_total_selling::size()
    {
        using org_ptr = int (WINAPIV*)(struct _param_cash_total_selling*);
        return (org_ptr(0x140304bb0L))(this);
    };
END_ATF_NAMESPACE
