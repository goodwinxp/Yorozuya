#include <_atrade_taxrate_result_zocl.hpp>


START_ATF_NAMESPACE
    int _atrade_taxrate_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _atrade_taxrate_result_zocl*);
        return (org_ptr(0x1402d9990L))(this);
    };
END_ATF_NAMESPACE
