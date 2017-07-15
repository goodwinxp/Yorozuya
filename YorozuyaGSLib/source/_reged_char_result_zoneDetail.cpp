#include <_reged_char_result_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_reged_char_result_zonector__reged_char_result_zone2_ptr _reged_char_result_zonector__reged_char_result_zone2_next(nullptr);
        Info::_reged_char_result_zonector__reged_char_result_zone2_clbk _reged_char_result_zonector__reged_char_result_zone2_user(nullptr);
        
        Info::_reged_char_result_zonesize4_ptr _reged_char_result_zonesize4_next(nullptr);
        Info::_reged_char_result_zonesize4_clbk _reged_char_result_zonesize4_user(nullptr);
        
        
        void _reged_char_result_zonector__reged_char_result_zone2_wrapper(struct _reged_char_result_zone* _this)
        {
           _reged_char_result_zonector__reged_char_result_zone2_user(_this, _reged_char_result_zonector__reged_char_result_zone2_next);
        };
        int _reged_char_result_zonesize4_wrapper(struct _reged_char_result_zone* _this)
        {
           return _reged_char_result_zonesize4_user(_this, _reged_char_result_zonesize4_next);
        };
        
        ::std::array<hook_record, 2> _reged_char_result_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f680L,
                (LPVOID *)&_reged_char_result_zonector__reged_char_result_zone2_user,
                (LPVOID *)&_reged_char_result_zonector__reged_char_result_zone2_next,
                (LPVOID)cast_pointer_function(_reged_char_result_zonector__reged_char_result_zone2_wrapper),
                (LPVOID)cast_pointer_function((void(_reged_char_result_zone::*)())&_reged_char_result_zone::ctor__reged_char_result_zone)
            },
            _hook_record {
                (LPVOID)0x14011f6f0L,
                (LPVOID *)&_reged_char_result_zonesize4_user,
                (LPVOID *)&_reged_char_result_zonesize4_next,
                (LPVOID)cast_pointer_function(_reged_char_result_zonesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_reged_char_result_zone::*)())&_reged_char_result_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
