#include <_worlddb_potion_delay_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_ptr _worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_next(nullptr);
        Info::_worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_clbk _worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_user(nullptr);
        
        
        void _worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_wrapper(struct _worlddb_potion_delay_info* _this)
        {
           _worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_user(_this, _worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_next);
        };
        
        ::std::array<hook_record, 1> _worlddb_potion_delay_info_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf480L,
                (LPVOID *)&_worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_user,
                (LPVOID *)&_worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_next,
                (LPVOID)cast_pointer_function(_worlddb_potion_delay_infoctor__worlddb_potion_delay_info2_wrapper),
                (LPVOID)cast_pointer_function((void(_worlddb_potion_delay_info::*)())&_worlddb_potion_delay_info::ctor__worlddb_potion_delay_info)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
