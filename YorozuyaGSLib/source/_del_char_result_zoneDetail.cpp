#include <_del_char_result_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_del_char_result_zonesize2_ptr _del_char_result_zonesize2_next(nullptr);
        Info::_del_char_result_zonesize2_clbk _del_char_result_zonesize2_user(nullptr);
        
        int _del_char_result_zonesize2_wrapper(struct _del_char_result_zone* _this)
        {
           return _del_char_result_zonesize2_user(_this, _del_char_result_zonesize2_next);
        };
        
        ::std::array<hook_record, 1> _del_char_result_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f880L,
                (LPVOID *)&_del_char_result_zonesize2_user,
                (LPVOID *)&_del_char_result_zonesize2_next,
                (LPVOID)cast_pointer_function(_del_char_result_zonesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_del_char_result_zone::*)())&_del_char_result_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
