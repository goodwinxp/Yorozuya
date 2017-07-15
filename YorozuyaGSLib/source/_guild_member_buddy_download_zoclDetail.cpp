#include <_guild_member_buddy_download_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_ptr _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_next(nullptr);
        Info::_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_clbk _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_user(nullptr);
        
        Info::_guild_member_buddy_download_zoclsize4_ptr _guild_member_buddy_download_zoclsize4_next(nullptr);
        Info::_guild_member_buddy_download_zoclsize4_clbk _guild_member_buddy_download_zoclsize4_user(nullptr);
        
        
        void _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_wrapper(struct _guild_member_buddy_download_zocl* _this)
        {
           _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_user(_this, _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_next);
        };
        int _guild_member_buddy_download_zoclsize4_wrapper(struct _guild_member_buddy_download_zocl* _this)
        {
           return _guild_member_buddy_download_zoclsize4_user(_this, _guild_member_buddy_download_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _guild_member_buddy_download_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14025ce10L,
                (LPVOID *)&_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_user,
                (LPVOID *)&_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_next,
                (LPVOID)cast_pointer_function(_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_member_buddy_download_zocl::*)())&_guild_member_buddy_download_zocl::ctor__guild_member_buddy_download_zocl)
            },
            _hook_record {
                (LPVOID)0x14025d480L,
                (LPVOID *)&_guild_member_buddy_download_zoclsize4_user,
                (LPVOID *)&_guild_member_buddy_download_zoclsize4_next,
                (LPVOID)cast_pointer_function(_guild_member_buddy_download_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_guild_member_buddy_download_zocl::*)())&_guild_member_buddy_download_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
