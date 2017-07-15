#include <_pt_inform_tax_rate_zocl.hpp>


START_ATF_NAMESPACE
    _pt_inform_tax_rate_zocl::_pt_inform_tax_rate_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_inform_tax_rate_zocl*);
        (org_ptr(0x1402d9a80L))(this);
    };
    void _pt_inform_tax_rate_zocl::ctor__pt_inform_tax_rate_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_inform_tax_rate_zocl*);
        (org_ptr(0x1402d9a80L))(this);
    };
    int _pt_inform_tax_rate_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_inform_tax_rate_zocl*);
        return (org_ptr(0x1402d9ad0L))(this);
    };
END_ATF_NAMESPACE
