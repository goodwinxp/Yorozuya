#include <_pt_automine_state_zocl.hpp>


START_ATF_NAMESPACE
    _pt_automine_state_zocl::_pt_automine_state_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_automine_state_zocl*);
        (org_ptr(0x1402d3fd0L))(this);
    };
    void _pt_automine_state_zocl::ctor__pt_automine_state_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_automine_state_zocl*);
        (org_ptr(0x1402d3fd0L))(this);
    };
    int _pt_automine_state_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_automine_state_zocl*);
        return (org_ptr(0x1402d3fb0L))(this);
    };
END_ATF_NAMESPACE
