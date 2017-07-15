#include <_dh_mission_setup.hpp>


START_ATF_NAMESPACE
    _dh_mission_setup::_dh_mission_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_setup*);
        (org_ptr(0x140270dc0L))(this);
    };
    void _dh_mission_setup::ctor__dh_mission_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_setup*);
        (org_ptr(0x140270dc0L))(this);
    };
    _dh_mission_setup::~_dh_mission_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_setup*);
        (org_ptr(0x1402710d0L))(this);
    };
    void _dh_mission_setup::dtor__dh_mission_setup()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_setup*);
        (org_ptr(0x1402710d0L))(this);
    };
END_ATF_NAMESPACE
