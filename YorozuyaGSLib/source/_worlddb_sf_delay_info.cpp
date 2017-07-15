#include <_worlddb_sf_delay_info.hpp>


START_ATF_NAMESPACE
    _worlddb_sf_delay_info::_worlddb_sf_delay_info()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_sf_delay_info*);
        (org_ptr(0x140077e60L))(this);
    };
    void _worlddb_sf_delay_info::ctor__worlddb_sf_delay_info()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_sf_delay_info*);
        (org_ptr(0x140077e60L))(this);
    };
    _worlddb_sf_delay_info::_eff_list::_eff_list()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_sf_delay_info::_eff_list*);
        (org_ptr(0x140077ef0L))(this);
    };
    void _worlddb_sf_delay_info::_eff_list::ctor__eff_list()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_sf_delay_info::_eff_list*);
        (org_ptr(0x140077ef0L))(this);
    };
    _worlddb_sf_delay_info::_mas_list::_mas_list()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_sf_delay_info::_mas_list*);
        (org_ptr(0x140077f30L))(this);
    };
    void _worlddb_sf_delay_info::_mas_list::ctor__mas_list()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_sf_delay_info::_mas_list*);
        (org_ptr(0x140077f30L))(this);
    };
END_ATF_NAMESPACE
