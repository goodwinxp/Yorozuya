#include <_personal_automine_stop_zocl.hpp>


START_ATF_NAMESPACE
    _personal_automine_stop_zocl::_personal_automine_stop_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _personal_automine_stop_zocl*);
        (org_ptr(0x1402de170L))(this);
    };
    void _personal_automine_stop_zocl::ctor__personal_automine_stop_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _personal_automine_stop_zocl*);
        (org_ptr(0x1402de170L))(this);
    };
    int _personal_automine_stop_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _personal_automine_stop_zocl*);
        return (org_ptr(0x1402de1c0L))(this);
    };
END_ATF_NAMESPACE
