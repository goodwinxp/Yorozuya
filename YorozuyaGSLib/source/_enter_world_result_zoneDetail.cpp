#include <_enter_world_result_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_enter_world_result_zonesize2_ptr _enter_world_result_zonesize2_next(nullptr);
        Info::_enter_world_result_zonesize2_clbk _enter_world_result_zonesize2_user(nullptr);
        
        int _enter_world_result_zonesize2_wrapper(struct _enter_world_result_zone* _this)
        {
           return _enter_world_result_zonesize2_user(_this, _enter_world_result_zonesize2_next);
        };
        
        ::std::array<hook_record, 1> _enter_world_result_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f250L,
                (LPVOID *)&_enter_world_result_zonesize2_user,
                (LPVOID *)&_enter_world_result_zonesize2_next,
                (LPVOID)cast_pointer_function(_enter_world_result_zonesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_enter_world_result_zone::*)())&_enter_world_result_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
