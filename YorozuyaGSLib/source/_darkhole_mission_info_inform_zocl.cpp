#include <_darkhole_mission_info_inform_zocl.hpp>


START_ATF_NAMESPACE
    _darkhole_mission_info_inform_zocl::_darkhole_mission_info_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _darkhole_mission_info_inform_zocl*);
        (org_ptr(0x14026f500L))(this);
    };
    void _darkhole_mission_info_inform_zocl::ctor__darkhole_mission_info_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _darkhole_mission_info_inform_zocl*);
        (org_ptr(0x14026f500L))(this);
    };
    int _darkhole_mission_info_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_mission_info_inform_zocl*);
        return (org_ptr(0x14026f520L))(this);
    };
    
END_ATF_NAMESPACE
