#include <_attack_param.hpp>


START_ATF_NAMESPACE
    _attack_param::_attack_param()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_param*);
        (org_ptr(0x14008e4a0L))(this);
    };
    void _attack_param::ctor__attack_param()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_param*);
        (org_ptr(0x14008e4a0L))(this);
    };
END_ATF_NAMESPACE
