#include <_map_rateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_map_rateSetting2_ptr _map_rateSetting2_next(nullptr);
        Info::_map_rateSetting2_clbk _map_rateSetting2_user(nullptr);
        
        void _map_rateSetting2_wrapper(struct _map_rate* _this, int x, int y)
        {
           _map_rateSetting2_user(_this, x, y, _map_rateSetting2_next);
        };
        
        ::std::array<hook_record, 1> _map_rate_functions = 
        {
            _hook_record {
                (LPVOID)0x1401a2700L,
                (LPVOID *)&_map_rateSetting2_user,
                (LPVOID *)&_map_rateSetting2_next,
                (LPVOID)cast_pointer_function(_map_rateSetting2_wrapper),
                (LPVOID)cast_pointer_function((void(_map_rate::*)(int, int))&_map_rate::Setting)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
