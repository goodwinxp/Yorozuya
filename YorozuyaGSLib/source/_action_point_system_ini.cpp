#include <_action_point_system_ini.hpp>


START_ATF_NAMESPACE
    _action_point_system_ini::_action_point_system_ini()
    {
        using org_ptr = void (WINAPIV*)(struct _action_point_system_ini*);
        (org_ptr(0x140411de0L))(this);
    };
    void _action_point_system_ini::ctor__action_point_system_ini()
    {
        using org_ptr = void (WINAPIV*)(struct _action_point_system_ini*);
        (org_ptr(0x140411de0L))(this);
    };
END_ATF_NAMESPACE
