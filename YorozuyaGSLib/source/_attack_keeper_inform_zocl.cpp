#include <_attack_keeper_inform_zocl.hpp>


START_ATF_NAMESPACE
    _attack_keeper_inform_zocl::_attack_keeper_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_keeper_inform_zocl*);
        (org_ptr(0x140136c00L))(this);
    };
    void _attack_keeper_inform_zocl::ctor__attack_keeper_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_keeper_inform_zocl*);
        (org_ptr(0x140136c00L))(this);
    };
    int _attack_keeper_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _attack_keeper_inform_zocl*);
        return (org_ptr(0x140136c20L))(this);
    };
END_ATF_NAMESPACE
