#include <_add_char_result_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_add_char_result_zonesize2_ptr _add_char_result_zonesize2_next(nullptr);
        Info::_add_char_result_zonesize2_clbk _add_char_result_zonesize2_user(nullptr);
        
        int _add_char_result_zonesize2_wrapper(struct _add_char_result_zone* _this)
        {
           return _add_char_result_zonesize2_user(_this, _add_char_result_zonesize2_next);
        };
        
        ::std::array<hook_record, 1> _add_char_result_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f870L,
                (LPVOID *)&_add_char_result_zonesize2_user,
                (LPVOID *)&_add_char_result_zonesize2_next,
                (LPVOID)cast_pointer_function(_add_char_result_zonesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_add_char_result_zone::*)())&_add_char_result_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
