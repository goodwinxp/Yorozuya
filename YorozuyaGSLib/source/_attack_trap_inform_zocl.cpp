#include <_attack_trap_inform_zocl.hpp>


START_ATF_NAMESPACE
    _attack_trap_inform_zocl::_attack_trap_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_trap_inform_zocl*);
        (org_ptr(0x140141400L))(this);
    };
    void _attack_trap_inform_zocl::ctor__attack_trap_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_trap_inform_zocl*);
        (org_ptr(0x140141400L))(this);
    };
    int _attack_trap_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _attack_trap_inform_zocl*);
        return (org_ptr(0x140141420L))(this);
    };
END_ATF_NAMESPACE
