#include <_pt_automine_info_zocl.hpp>


START_ATF_NAMESPACE
    _pt_automine_info_zocl::_pt_automine_info_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_automine_info_zocl*);
        (org_ptr(0x1402d40b0L))(this);
    };
    void _pt_automine_info_zocl::ctor__pt_automine_info_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _pt_automine_info_zocl*);
        (org_ptr(0x1402d40b0L))(this);
    };
    int _pt_automine_info_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _pt_automine_info_zocl*);
        return (org_ptr(0x1402d4030L))(this);
    };
END_ATF_NAMESPACE
