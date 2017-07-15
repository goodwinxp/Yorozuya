#include <_worlddb_sf_delay_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_ptr _worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_next(nullptr);
        Info::_worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_clbk _worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_user(nullptr);
        
        
        void _worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_wrapper(struct _worlddb_sf_delay_info* _this)
        {
           _worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_user(_this, _worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_next);
        };
        
        ::std::array<hook_record, 1> _worlddb_sf_delay_info_functions = 
        {
            _hook_record {
                (LPVOID)0x140077e60L,
                (LPVOID *)&_worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_user,
                (LPVOID *)&_worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_next,
                (LPVOID)cast_pointer_function(_worlddb_sf_delay_infoctor__worlddb_sf_delay_info2_wrapper),
                (LPVOID)cast_pointer_function((void(_worlddb_sf_delay_info::*)())&_worlddb_sf_delay_info::ctor__worlddb_sf_delay_info)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
