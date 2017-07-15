#include <_guild_master_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guild_master_infoIsFill2_ptr _guild_master_infoIsFill2_next(nullptr);
        Info::_guild_master_infoIsFill2_clbk _guild_master_infoIsFill2_user(nullptr);
        
        
        Info::_guild_master_infoctor__guild_master_info4_ptr _guild_master_infoctor__guild_master_info4_next(nullptr);
        Info::_guild_master_infoctor__guild_master_info4_clbk _guild_master_infoctor__guild_master_info4_user(nullptr);
        
        Info::_guild_master_infoinit6_ptr _guild_master_infoinit6_next(nullptr);
        Info::_guild_master_infoinit6_clbk _guild_master_infoinit6_user(nullptr);
        
        bool _guild_master_infoIsFill2_wrapper(struct _guild_master_info* _this)
        {
           return _guild_master_infoIsFill2_user(_this, _guild_master_infoIsFill2_next);
        };
        
        void _guild_master_infoctor__guild_master_info4_wrapper(struct _guild_master_info* _this)
        {
           _guild_master_infoctor__guild_master_info4_user(_this, _guild_master_infoctor__guild_master_info4_next);
        };
        void _guild_master_infoinit6_wrapper(struct _guild_master_info* _this)
        {
           _guild_master_infoinit6_user(_this, _guild_master_infoinit6_next);
        };
        
        ::std::array<hook_record, 3> _guild_master_info_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ad1e0L,
                (LPVOID *)&_guild_master_infoIsFill2_user,
                (LPVOID *)&_guild_master_infoIsFill2_next,
                (LPVOID)cast_pointer_function(_guild_master_infoIsFill2_wrapper),
                (LPVOID)cast_pointer_function((bool(_guild_master_info::*)())&_guild_master_info::IsFill)
            },
            _hook_record {
                (LPVOID)0x14025ce30L,
                (LPVOID *)&_guild_master_infoctor__guild_master_info4_user,
                (LPVOID *)&_guild_master_infoctor__guild_master_info4_next,
                (LPVOID)cast_pointer_function(_guild_master_infoctor__guild_master_info4_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_master_info::*)())&_guild_master_info::ctor__guild_master_info)
            },
            _hook_record {
                (LPVOID)0x14025ce80L,
                (LPVOID *)&_guild_master_infoinit6_user,
                (LPVOID *)&_guild_master_infoinit6_next,
                (LPVOID)cast_pointer_function(_guild_master_infoinit6_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_master_info::*)())&_guild_master_info::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
