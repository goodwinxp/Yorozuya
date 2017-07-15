#include <_guild_query_info_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guild_query_info_result_zoclClear2_ptr _guild_query_info_result_zoclClear2_next(nullptr);
        Info::_guild_query_info_result_zoclClear2_clbk _guild_query_info_result_zoclClear2_user(nullptr);
        
        void _guild_query_info_result_zoclClear2_wrapper(struct _guild_query_info_result_zocl* _this)
        {
           _guild_query_info_result_zoclClear2_user(_this, _guild_query_info_result_zoclClear2_next);
        };
        
        ::std::array<hook_record, 1> _guild_query_info_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d190L,
                (LPVOID *)&_guild_query_info_result_zoclClear2_user,
                (LPVOID *)&_guild_query_info_result_zoclClear2_next,
                (LPVOID)cast_pointer_function(_guild_query_info_result_zoclClear2_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_query_info_result_zocl::*)())&_guild_query_info_result_zocl::Clear)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
