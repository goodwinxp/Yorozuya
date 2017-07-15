#include <_Init_action_point_zocl.hpp>


START_ATF_NAMESPACE
    _Init_action_point_zocl::_Init_action_point_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _Init_action_point_zocl*);
        (org_ptr(0x1400f07f0L))(this);
    };
    void _Init_action_point_zocl::ctor__Init_action_point_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _Init_action_point_zocl*);
        (org_ptr(0x1400f07f0L))(this);
    };
END_ATF_NAMESPACE
