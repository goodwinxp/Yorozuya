#include <_guild_member_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guild_member_infoIsFill2_ptr _guild_member_infoIsFill2_next(nullptr);
        Info::_guild_member_infoIsFill2_clbk _guild_member_infoIsFill2_user(nullptr);
        
        
        Info::_guild_member_infoctor__guild_member_info4_ptr _guild_member_infoctor__guild_member_info4_next(nullptr);
        Info::_guild_member_infoctor__guild_member_info4_clbk _guild_member_infoctor__guild_member_info4_user(nullptr);
        
        Info::_guild_member_infoinit6_ptr _guild_member_infoinit6_next(nullptr);
        Info::_guild_member_infoinit6_clbk _guild_member_infoinit6_user(nullptr);
        
        bool _guild_member_infoIsFill2_wrapper(struct _guild_member_info* _this)
        {
           return _guild_member_infoIsFill2_user(_this, _guild_member_infoIsFill2_next);
        };
        
        void _guild_member_infoctor__guild_member_info4_wrapper(struct _guild_member_info* _this)
        {
           _guild_member_infoctor__guild_member_info4_user(_this, _guild_member_infoctor__guild_member_info4_next);
        };
        void _guild_member_infoinit6_wrapper(struct _guild_member_info* _this)
        {
           _guild_member_infoinit6_user(_this, _guild_member_infoinit6_next);
        };
        
        ::std::array<hook_record, 3> _guild_member_info_functions = 
        {
            _hook_record {
                (LPVOID)0x140095050L,
                (LPVOID *)&_guild_member_infoIsFill2_user,
                (LPVOID *)&_guild_member_infoIsFill2_next,
                (LPVOID)cast_pointer_function(_guild_member_infoIsFill2_wrapper),
                (LPVOID)cast_pointer_function((bool(_guild_member_info::*)())&_guild_member_info::IsFill)
            },
            _hook_record {
                (LPVOID)0x1400ad350L,
                (LPVOID *)&_guild_member_infoctor__guild_member_info4_user,
                (LPVOID *)&_guild_member_infoctor__guild_member_info4_next,
                (LPVOID)cast_pointer_function(_guild_member_infoctor__guild_member_info4_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_member_info::*)())&_guild_member_info::ctor__guild_member_info)
            },
            _hook_record {
                (LPVOID)0x1400ad3a0L,
                (LPVOID *)&_guild_member_infoinit6_user,
                (LPVOID *)&_guild_member_infoinit6_next,
                (LPVOID)cast_pointer_function(_guild_member_infoinit6_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_member_info::*)())&_guild_member_info::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
