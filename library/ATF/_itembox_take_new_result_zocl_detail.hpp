// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_itembox_take_new_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_itembox_take_new_result_zoclsize2_ptr _itembox_take_new_result_zoclsize2_next(nullptr);
        info::_itembox_take_new_result_zoclsize2_clbk _itembox_take_new_result_zoclsize2_user(nullptr);
        
        int _itembox_take_new_result_zoclsize2_wrapper(struct _itembox_take_new_result_zocl* _this)
        {
           return _itembox_take_new_result_zoclsize2_user(_this, _itembox_take_new_result_zoclsize2_next);
        };
        
        hook_record _itembox_take_new_result_zocl_functions[] = {
        {   (LPVOID)0x1400ef0b0L,
            (LPVOID *)&_itembox_take_new_result_zoclsize2_user,
            (LPVOID *)&_itembox_take_new_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_itembox_take_new_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_itembox_take_new_result_zocl::*)())&_itembox_take_new_result_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE