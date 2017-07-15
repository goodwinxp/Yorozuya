#include <_attack_siege_result_zocl.hpp>


START_ATF_NAMESPACE
    _attack_siege_result_zocl::_attack_siege_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_siege_result_zocl*);
        (org_ptr(0x1400eefd0L))(this);
    };
    void _attack_siege_result_zocl::ctor__attack_siege_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_siege_result_zocl*);
        (org_ptr(0x1400eefd0L))(this);
    };
    int _attack_siege_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _attack_siege_result_zocl*);
        return (org_ptr(0x1400eeff0L))(this);
    };
END_ATF_NAMESPACE
