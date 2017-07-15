#include <_ore_cutting_result_zocl.hpp>


START_ATF_NAMESPACE
    _ore_cutting_result_zocl::_ore_cutting_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _ore_cutting_result_zocl*);
        (org_ptr(0x1400efa50L))(this);
    };
    void _ore_cutting_result_zocl::ctor__ore_cutting_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _ore_cutting_result_zocl*);
        (org_ptr(0x1400efa50L))(this);
    };
    int _ore_cutting_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _ore_cutting_result_zocl*);
        return (org_ptr(0x1400efa70L))(this);
    };
    
END_ATF_NAMESPACE
