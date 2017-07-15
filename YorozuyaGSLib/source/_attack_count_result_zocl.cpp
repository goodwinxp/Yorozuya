#include <_attack_count_result_zocl.hpp>


START_ATF_NAMESPACE
    _attack_count_result_zocl::_attack_count_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_count_result_zocl*);
        (org_ptr(0x1400eeed0L))(this);
    };
    void _attack_count_result_zocl::ctor__attack_count_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _attack_count_result_zocl*);
        (org_ptr(0x1400eeed0L))(this);
    };
    int _attack_count_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _attack_count_result_zocl*);
        return (org_ptr(0x1400eeef0L))(this);
    };
END_ATF_NAMESPACE
