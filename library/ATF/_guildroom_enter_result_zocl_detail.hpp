// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guildroom_enter_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_guildroom_enter_result_zoclsize2_ptr _guildroom_enter_result_zoclsize2_next(nullptr);
        info::_guildroom_enter_result_zoclsize2_clbk _guildroom_enter_result_zoclsize2_user(nullptr);
        
        int _guildroom_enter_result_zoclsize2_wrapper(struct _guildroom_enter_result_zocl* _this)
        {
           return _guildroom_enter_result_zoclsize2_user(_this, _guildroom_enter_result_zoclsize2_next);
        };
        
        hook_record _guildroom_enter_result_zocl_functions[] = {
        {   (LPVOID)0x1400f03a0L,
            (LPVOID *)&_guildroom_enter_result_zoclsize2_user,
            (LPVOID *)&_guildroom_enter_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_guildroom_enter_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_guildroom_enter_result_zocl::*)())&_guildroom_enter_result_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE