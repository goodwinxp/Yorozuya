#include <_total_guild_rank_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_total_guild_rank_result_zoclsize2_ptr _total_guild_rank_result_zoclsize2_next(nullptr);
        Info::_total_guild_rank_result_zoclsize2_clbk _total_guild_rank_result_zoclsize2_user(nullptr);
        
        int _total_guild_rank_result_zoclsize2_wrapper(struct _total_guild_rank_result_zocl* _this)
        {
           return _total_guild_rank_result_zoclsize2_user(_this, _total_guild_rank_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _total_guild_rank_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ca390L,
                (LPVOID *)&_total_guild_rank_result_zoclsize2_user,
                (LPVOID *)&_total_guild_rank_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_total_guild_rank_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_total_guild_rank_result_zocl::*)())&_total_guild_rank_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
