#include <_alive_char_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_alive_char_result_zoclctor__alive_char_result_zocl2_ptr _alive_char_result_zoclctor__alive_char_result_zocl2_next(nullptr);
        Info::_alive_char_result_zoclctor__alive_char_result_zocl2_clbk _alive_char_result_zoclctor__alive_char_result_zocl2_user(nullptr);
        
        
        void _alive_char_result_zoclctor__alive_char_result_zocl2_wrapper(struct _alive_char_result_zocl* _this)
        {
           _alive_char_result_zoclctor__alive_char_result_zocl2_user(_this, _alive_char_result_zoclctor__alive_char_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _alive_char_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140120dd0L,
                (LPVOID *)&_alive_char_result_zoclctor__alive_char_result_zocl2_user,
                (LPVOID *)&_alive_char_result_zoclctor__alive_char_result_zocl2_next,
                (LPVOID)cast_pointer_function(_alive_char_result_zoclctor__alive_char_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_alive_char_result_zocl::*)())&_alive_char_result_zocl::ctor__alive_char_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
