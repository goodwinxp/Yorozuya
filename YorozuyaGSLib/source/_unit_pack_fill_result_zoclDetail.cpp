#include <_unit_pack_fill_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_ptr _unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_next(nullptr);
        Info::_unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_clbk _unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_user(nullptr);
        
        
        void _unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_wrapper(struct _unit_pack_fill_result_zocl* _this)
        {
           _unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_user(_this, _unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _unit_pack_fill_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efa30L,
                (LPVOID *)&_unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_user,
                (LPVOID *)&_unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_next,
                (LPVOID)cast_pointer_function(_unit_pack_fill_result_zoclctor__unit_pack_fill_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_unit_pack_fill_result_zocl::*)())&_unit_pack_fill_result_zocl::ctor__unit_pack_fill_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
