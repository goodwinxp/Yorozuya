#include <_guild_battle_reserved_schedule_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guild_battle_reserved_schedule_result_zoclsize2_ptr _guild_battle_reserved_schedule_result_zoclsize2_next(nullptr);
        Info::_guild_battle_reserved_schedule_result_zoclsize2_clbk _guild_battle_reserved_schedule_result_zoclsize2_user(nullptr);
        
        int _guild_battle_reserved_schedule_result_zoclsize2_wrapper(struct _guild_battle_reserved_schedule_result_zocl* _this)
        {
           return _guild_battle_reserved_schedule_result_zoclsize2_user(_this, _guild_battle_reserved_schedule_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _guild_battle_reserved_schedule_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403d0970L,
                (LPVOID *)&_guild_battle_reserved_schedule_result_zoclsize2_user,
                (LPVOID *)&_guild_battle_reserved_schedule_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_guild_battle_reserved_schedule_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_guild_battle_reserved_schedule_result_zocl::*)())&_guild_battle_reserved_schedule_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
