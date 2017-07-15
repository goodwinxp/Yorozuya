#include <_not_arranged_char_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_ptr _not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_next(nullptr);
        Info::_not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_clbk _not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_user(nullptr);
        
        Info::_not_arranged_char_inform_zoclsize4_ptr _not_arranged_char_inform_zoclsize4_next(nullptr);
        Info::_not_arranged_char_inform_zoclsize4_clbk _not_arranged_char_inform_zoclsize4_user(nullptr);
        
        
        void _not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_wrapper(struct _not_arranged_char_inform_zocl* _this)
        {
           _not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_user(_this, _not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_next);
        };
        int _not_arranged_char_inform_zoclsize4_wrapper(struct _not_arranged_char_inform_zocl* _this)
        {
           return _not_arranged_char_inform_zoclsize4_user(_this, _not_arranged_char_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _not_arranged_char_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f750L,
                (LPVOID *)&_not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_user,
                (LPVOID *)&_not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_not_arranged_char_inform_zoclctor__not_arranged_char_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_not_arranged_char_inform_zocl::*)())&_not_arranged_char_inform_zocl::ctor__not_arranged_char_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x14011f7c0L,
                (LPVOID *)&_not_arranged_char_inform_zoclsize4_user,
                (LPVOID *)&_not_arranged_char_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_not_arranged_char_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_not_arranged_char_inform_zocl::*)())&_not_arranged_char_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
