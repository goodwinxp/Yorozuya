// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_target_player_damage_contsf_allinform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_target_player_damage_contsf_allinform_zoclInit2_ptr _target_player_damage_contsf_allinform_zoclInit2_next(nullptr);
        info::_target_player_damage_contsf_allinform_zoclInit2_clbk _target_player_damage_contsf_allinform_zoclInit2_user(nullptr);
        info::_target_player_damage_contsf_allinform_zoclIsSame4_ptr _target_player_damage_contsf_allinform_zoclIsSame4_next(nullptr);
        info::_target_player_damage_contsf_allinform_zoclIsSame4_clbk _target_player_damage_contsf_allinform_zoclIsSame4_user(nullptr);
        info::_target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_ptr _target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_next(nullptr);
        info::_target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_clbk _target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_user(nullptr);
        info::_target_player_damage_contsf_allinform_zoclsize8_ptr _target_player_damage_contsf_allinform_zoclsize8_next(nullptr);
        info::_target_player_damage_contsf_allinform_zoclsize8_clbk _target_player_damage_contsf_allinform_zoclsize8_user(nullptr);
        
        void _target_player_damage_contsf_allinform_zoclInit2_wrapper(struct _target_player_damage_contsf_allinform_zocl* _this)
        {
           _target_player_damage_contsf_allinform_zoclInit2_user(_this, _target_player_damage_contsf_allinform_zoclInit2_next);
        };
        bool _target_player_damage_contsf_allinform_zoclIsSame4_wrapper(struct _target_player_damage_contsf_allinform_zocl* src1, struct _target_player_damage_contsf_allinform_zocl* src2)
        {
           return _target_player_damage_contsf_allinform_zoclIsSame4_user(src1, src2, _target_player_damage_contsf_allinform_zoclIsSame4_next);
        };
        void _target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_wrapper(struct _target_player_damage_contsf_allinform_zocl* _this)
        {
           _target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_user(_this, _target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_next);
        };
        int _target_player_damage_contsf_allinform_zoclsize8_wrapper(struct _target_player_damage_contsf_allinform_zocl* _this)
        {
           return _target_player_damage_contsf_allinform_zoclsize8_user(_this, _target_player_damage_contsf_allinform_zoclsize8_next);
        };
        
        hook_record _target_player_damage_contsf_allinform_zocl_functions[] = {
        {   (LPVOID)0x140074110L,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclInit2_user,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclInit2_next,
            (LPVOID)cast_pointer_function(_target_player_damage_contsf_allinform_zoclInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_target_player_damage_contsf_allinform_zocl::*)())&_target_player_damage_contsf_allinform_zocl::Init) },
        {   (LPVOID)0x1400f02b0L,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclIsSame4_user,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclIsSame4_next,
            (LPVOID)cast_pointer_function(_target_player_damage_contsf_allinform_zoclIsSame4_wrapper),
            (LPVOID)cast_pointer_function((bool(*)(struct _target_player_damage_contsf_allinform_zocl*, struct _target_player_damage_contsf_allinform_zocl*))&_target_player_damage_contsf_allinform_zocl::IsSame) },
        {   (LPVOID)0x1400740c0L,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_user,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_next,
            (LPVOID)cast_pointer_function(_target_player_damage_contsf_allinform_zoclctor__target_player_damage_contsf_allinform_zocl6_wrapper),
            (LPVOID)cast_pointer_function((void(_target_player_damage_contsf_allinform_zocl::*)())&_target_player_damage_contsf_allinform_zocl::ctor__target_player_damage_contsf_allinform_zocl) },
        {   (LPVOID)0x1400f0250L,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclsize8_user,
            (LPVOID *)&_target_player_damage_contsf_allinform_zoclsize8_next,
            (LPVOID)cast_pointer_function(_target_player_damage_contsf_allinform_zoclsize8_wrapper),
            (LPVOID)cast_pointer_function((int(_target_player_damage_contsf_allinform_zocl::*)())&_target_player_damage_contsf_allinform_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE