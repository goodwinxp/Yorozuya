#include <_sel_char_result_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_sel_char_result_zonesize2_ptr _sel_char_result_zonesize2_next(nullptr);
        Info::_sel_char_result_zonesize2_clbk _sel_char_result_zonesize2_user(nullptr);
        
        int _sel_char_result_zonesize2_wrapper(struct _sel_char_result_zone* _this)
        {
           return _sel_char_result_zonesize2_user(_this, _sel_char_result_zonesize2_next);
        };
        
        ::std::array<hook_record, 1> _sel_char_result_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f8d0L,
                (LPVOID *)&_sel_char_result_zonesize2_user,
                (LPVOID *)&_sel_char_result_zonesize2_next,
                (LPVOID)cast_pointer_function(_sel_char_result_zonesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_sel_char_result_zone::*)())&_sel_char_result_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
