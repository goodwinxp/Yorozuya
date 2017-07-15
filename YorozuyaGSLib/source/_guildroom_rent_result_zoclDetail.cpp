#include <_guildroom_rent_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guildroom_rent_result_zoclsize2_ptr _guildroom_rent_result_zoclsize2_next(nullptr);
        Info::_guildroom_rent_result_zoclsize2_clbk _guildroom_rent_result_zoclsize2_user(nullptr);
        
        int _guildroom_rent_result_zoclsize2_wrapper(struct _guildroom_rent_result_zocl* _this)
        {
           return _guildroom_rent_result_zoclsize2_user(_this, _guildroom_rent_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _guildroom_rent_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f0390L,
                (LPVOID *)&_guildroom_rent_result_zoclsize2_user,
                (LPVOID *)&_guildroom_rent_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_guildroom_rent_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_guildroom_rent_result_zocl::*)())&_guildroom_rent_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
