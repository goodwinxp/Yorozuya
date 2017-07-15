#include <_alter_action_point_zocl.hpp>


START_ATF_NAMESPACE
    _alter_action_point_zocl::_alter_action_point_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _alter_action_point_zocl*);
        (org_ptr(0x1400f07a0L))(this);
    };
    void _alter_action_point_zocl::ctor__alter_action_point_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _alter_action_point_zocl*);
        (org_ptr(0x1400f07a0L))(this);
    };
END_ATF_NAMESPACE
