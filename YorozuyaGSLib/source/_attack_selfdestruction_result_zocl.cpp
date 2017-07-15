#include <_attack_selfdestruction_result_zocl.hpp>


START_ATF_NAMESPACE
    _attack_selfdestruction_result_zocl::_attack_selfdestruction_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_selfdestruction_result_zocl*);
        (org_ptr(0x1400eef50L))(this);
    };
    void _attack_selfdestruction_result_zocl::ctor__attack_selfdestruction_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_selfdestruction_result_zocl*);
        (org_ptr(0x1400eef50L))(this);
    };
    int _attack_selfdestruction_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _attack_selfdestruction_result_zocl*);
        return (org_ptr(0x1400eef70L))(this);
    };
END_ATF_NAMESPACE
