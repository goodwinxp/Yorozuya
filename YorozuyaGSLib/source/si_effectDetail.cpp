#include <common/ATFCore.hpp>
#include <si_effectDetail.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::si_effectGetCountOfEffect2_ptr si_effectGetCountOfEffect2_next(nullptr);
        Info::si_effectGetCountOfEffect2_clbk si_effectGetCountOfEffect2_user(nullptr);
        
        Info::si_effectGetCountOfItem4_ptr si_effectGetCountOfItem4_next(nullptr);
        Info::si_effectGetCountOfItem4_clbk si_effectGetCountOfItem4_user(nullptr);
        
        Info::si_effectinit6_ptr si_effectinit6_next(nullptr);
        Info::si_effectinit6_clbk si_effectinit6_user(nullptr);
        
        Info::si_effectset_effect_count_info8_ptr si_effectset_effect_count_info8_next(nullptr);
        Info::si_effectset_effect_count_info8_clbk si_effectset_effect_count_info8_user(nullptr);
        
        
        Info::si_effectctor_si_effect10_ptr si_effectctor_si_effect10_next(nullptr);
        Info::si_effectctor_si_effect10_clbk si_effectctor_si_effect10_user(nullptr);
        
        char si_effectGetCountOfEffect2_wrapper(struct si_effect* _this)
        {
           return si_effectGetCountOfEffect2_user(_this, si_effectGetCountOfEffect2_next);
        };
        char si_effectGetCountOfItem4_wrapper(struct si_effect* _this)
        {
           return si_effectGetCountOfItem4_user(_this, si_effectGetCountOfItem4_next);
        };
        void si_effectinit6_wrapper(struct si_effect* _this)
        {
           si_effectinit6_user(_this, si_effectinit6_next);
        };
        void si_effectset_effect_count_info8_wrapper(struct si_effect* _this, char byCountOfItem, char byCountOfEffect)
        {
           si_effectset_effect_count_info8_user(_this, byCountOfItem, byCountOfEffect, si_effectset_effect_count_info8_next);
        };
        
        void si_effectctor_si_effect10_wrapper(struct si_effect* _this)
        {
           si_effectctor_si_effect10_user(_this, si_effectctor_si_effect10_next);
        };
        
        ::std::array<hook_record, 5> si_effect_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e3c90L,
                (LPVOID *)&si_effectGetCountOfEffect2_user,
                (LPVOID *)&si_effectGetCountOfEffect2_next,
                (LPVOID)cast_pointer_function(si_effectGetCountOfEffect2_wrapper),
                (LPVOID)cast_pointer_function((char(si_effect::*)())&si_effect::GetCountOfEffect)
            },
            _hook_record {
                (LPVOID)0x1402e3c00L,
                (LPVOID *)&si_effectGetCountOfItem4_user,
                (LPVOID *)&si_effectGetCountOfItem4_next,
                (LPVOID)cast_pointer_function(si_effectGetCountOfItem4_wrapper),
                (LPVOID)cast_pointer_function((char(si_effect::*)())&si_effect::GetCountOfItem)
            },
            _hook_record {
                (LPVOID)0x1402e3690L,
                (LPVOID *)&si_effectinit6_user,
                (LPVOID *)&si_effectinit6_next,
                (LPVOID)cast_pointer_function(si_effectinit6_wrapper),
                (LPVOID)cast_pointer_function((void(si_effect::*)())&si_effect::init)
            },
            _hook_record {
                (LPVOID)0x1402e3b30L,
                (LPVOID *)&si_effectset_effect_count_info8_user,
                (LPVOID *)&si_effectset_effect_count_info8_next,
                (LPVOID)cast_pointer_function(si_effectset_effect_count_info8_wrapper),
                (LPVOID)cast_pointer_function((void(si_effect::*)(char, char))&si_effect::set_effect_count_info)
            },
            _hook_record {
                (LPVOID)0x1402e3640L,
                (LPVOID *)&si_effectctor_si_effect10_user,
                (LPVOID *)&si_effectctor_si_effect10_next,
                (LPVOID)cast_pointer_function(si_effectctor_si_effect10_wrapper),
                (LPVOID)cast_pointer_function((void(si_effect::*)())&si_effect::ctor_si_effect)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
