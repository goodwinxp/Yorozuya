#include <_attack_force_result_zocl.hpp>


START_ATF_NAMESPACE
    _attack_force_result_zocl::_attack_force_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_force_result_zocl*);
        (org_ptr(0x1400eedd0L))(this);
    };
    void _attack_force_result_zocl::ctor__attack_force_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_force_result_zocl*);
        (org_ptr(0x1400eedd0L))(this);
    };
    int _attack_force_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _attack_force_result_zocl*);
        return (org_ptr(0x1400eedf0L))(this);
    };
END_ATF_NAMESPACE
