#include <_moveout_user_result_zoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_moveout_user_result_zonesize2_ptr _moveout_user_result_zonesize2_next(nullptr);
        Info::_moveout_user_result_zonesize2_clbk _moveout_user_result_zonesize2_user(nullptr);
        
        int _moveout_user_result_zonesize2_wrapper(struct _moveout_user_result_zone* _this)
        {
           return _moveout_user_result_zonesize2_user(_this, _moveout_user_result_zonesize2_next);
        };
        
        ::std::array<hook_record, 1> _moveout_user_result_zone_functions = 
        {
            _hook_record {
                (LPVOID)0x14011fbd0L,
                (LPVOID *)&_moveout_user_result_zonesize2_user,
                (LPVOID *)&_moveout_user_result_zonesize2_next,
                (LPVOID)cast_pointer_function(_moveout_user_result_zonesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_moveout_user_result_zone::*)())&_moveout_user_result_zone::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
