#include <_nuclear_find_rader_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_ptr _nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_next(nullptr);
        Info::_nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_clbk _nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_user(nullptr);
        
        
        void _nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_wrapper(struct _nuclear_find_rader_result_zocl* _this)
        {
           _nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_user(_this, _nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _nuclear_find_rader_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e590L,
                (LPVOID *)&_nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_user,
                (LPVOID *)&_nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_next,
                (LPVOID)cast_pointer_function(_nuclear_find_rader_result_zoclctor__nuclear_find_rader_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_nuclear_find_rader_result_zocl::*)())&_nuclear_find_rader_result_zocl::ctor__nuclear_find_rader_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
