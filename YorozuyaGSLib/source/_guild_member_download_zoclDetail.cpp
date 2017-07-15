#include <_guild_member_download_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guild_member_download_zoclClear2_ptr _guild_member_download_zoclClear2_next(nullptr);
        Info::_guild_member_download_zoclClear2_clbk _guild_member_download_zoclClear2_user(nullptr);
        
        
        Info::_guild_member_download_zoclctor__guild_member_download_zocl4_ptr _guild_member_download_zoclctor__guild_member_download_zocl4_next(nullptr);
        Info::_guild_member_download_zoclctor__guild_member_download_zocl4_clbk _guild_member_download_zoclctor__guild_member_download_zocl4_user(nullptr);
        
        Info::_guild_member_download_zoclsize6_ptr _guild_member_download_zoclsize6_next(nullptr);
        Info::_guild_member_download_zoclsize6_clbk _guild_member_download_zoclsize6_user(nullptr);
        
        void _guild_member_download_zoclClear2_wrapper(struct _guild_member_download_zocl* _this)
        {
           _guild_member_download_zoclClear2_user(_this, _guild_member_download_zoclClear2_next);
        };
        
        void _guild_member_download_zoclctor__guild_member_download_zocl4_wrapper(struct _guild_member_download_zocl* _this)
        {
           _guild_member_download_zoclctor__guild_member_download_zocl4_user(_this, _guild_member_download_zoclctor__guild_member_download_zocl4_next);
        };
        int _guild_member_download_zoclsize6_wrapper(struct _guild_member_download_zocl* _this)
        {
           return _guild_member_download_zoclsize6_user(_this, _guild_member_download_zoclsize6_next);
        };
        
        ::std::array<hook_record, 3> _guild_member_download_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14025cce0L,
                (LPVOID *)&_guild_member_download_zoclClear2_user,
                (LPVOID *)&_guild_member_download_zoclClear2_next,
                (LPVOID)cast_pointer_function(_guild_member_download_zoclClear2_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_member_download_zocl::*)())&_guild_member_download_zocl::Clear)
            },
            _hook_record {
                (LPVOID)0x14025cc90L,
                (LPVOID *)&_guild_member_download_zoclctor__guild_member_download_zocl4_user,
                (LPVOID *)&_guild_member_download_zoclctor__guild_member_download_zocl4_next,
                (LPVOID)cast_pointer_function(_guild_member_download_zoclctor__guild_member_download_zocl4_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_member_download_zocl::*)())&_guild_member_download_zocl::ctor__guild_member_download_zocl)
            },
            _hook_record {
                (LPVOID)0x14025d380L,
                (LPVOID *)&_guild_member_download_zoclsize6_user,
                (LPVOID *)&_guild_member_download_zoclsize6_next,
                (LPVOID)cast_pointer_function(_guild_member_download_zoclsize6_wrapper),
                (LPVOID)cast_pointer_function((int(_guild_member_download_zocl::*)())&_guild_member_download_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
