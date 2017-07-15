#include <_weekly_guild_rank_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_weekly_guild_rank_result_zoclsize2_ptr _weekly_guild_rank_result_zoclsize2_next(nullptr);
        Info::_weekly_guild_rank_result_zoclsize2_clbk _weekly_guild_rank_result_zoclsize2_user(nullptr);
        
        int _weekly_guild_rank_result_zoclsize2_wrapper(struct _weekly_guild_rank_result_zocl* _this)
        {
           return _weekly_guild_rank_result_zoclsize2_user(_this, _weekly_guild_rank_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _weekly_guild_rank_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402cf9c0L,
                (LPVOID *)&_weekly_guild_rank_result_zoclsize2_user,
                (LPVOID *)&_weekly_guild_rank_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_weekly_guild_rank_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_weekly_guild_rank_result_zocl::*)())&_weekly_guild_rank_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
