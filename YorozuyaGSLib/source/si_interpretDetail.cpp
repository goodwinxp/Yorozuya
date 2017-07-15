#include <common/ATFCore.hpp>
#include <si_interpretDetail.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::si_interpretGetCountOfEffect2_ptr si_interpretGetCountOfEffect2_next(nullptr);
        Info::si_interpretGetCountOfEffect2_clbk si_interpretGetCountOfEffect2_user(nullptr);
        
        Info::si_interpretGetCountOfItem4_ptr si_interpretGetCountOfItem4_next(nullptr);
        Info::si_interpretGetCountOfItem4_clbk si_interpretGetCountOfItem4_user(nullptr);
        
        Info::si_interpretGetEffectCode6_ptr si_interpretGetEffectCode6_next(nullptr);
        Info::si_interpretGetEffectCode6_clbk si_interpretGetEffectCode6_user(nullptr);
        
        Info::si_interpretGetEffectTypeCount8_ptr si_interpretGetEffectTypeCount8_next(nullptr);
        Info::si_interpretGetEffectTypeCount8_clbk si_interpretGetEffectTypeCount8_user(nullptr);
        
        Info::si_interpretGetEffectValue10_ptr si_interpretGetEffectValue10_next(nullptr);
        Info::si_interpretGetEffectValue10_clbk si_interpretGetEffectValue10_user(nullptr);
        
        Info::si_interpretinit12_ptr si_interpretinit12_next(nullptr);
        Info::si_interpretinit12_clbk si_interpretinit12_user(nullptr);
        
        Info::si_interpretset_effect_interpret14_ptr si_interpretset_effect_interpret14_next(nullptr);
        Info::si_interpretset_effect_interpret14_clbk si_interpretset_effect_interpret14_user(nullptr);
        
        
        Info::si_interpretctor_si_interpret16_ptr si_interpretctor_si_interpret16_next(nullptr);
        Info::si_interpretctor_si_interpret16_clbk si_interpretctor_si_interpret16_user(nullptr);
        
        char si_interpretGetCountOfEffect2_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetCountOfEffect2_user(_this, idx, si_interpretGetCountOfEffect2_next);
        };
        char si_interpretGetCountOfItem4_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetCountOfItem4_user(_this, idx, si_interpretGetCountOfItem4_next);
        };
        int si_interpretGetEffectCode6_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetEffectCode6_user(_this, idx, si_interpretGetEffectCode6_next);
        };
        char si_interpretGetEffectTypeCount8_wrapper(struct si_interpret* _this)
        {
           return si_interpretGetEffectTypeCount8_user(_this, si_interpretGetEffectTypeCount8_next);
        };
        float si_interpretGetEffectValue10_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetEffectValue10_user(_this, idx, si_interpretGetEffectValue10_next);
        };
        void si_interpretinit12_wrapper(struct si_interpret* _this)
        {
           si_interpretinit12_user(_this, si_interpretinit12_next);
        };
        bool si_interpretset_effect_interpret14_wrapper(struct si_interpret* _this, struct _SetItemEff_fld* pFld)
        {
           return si_interpretset_effect_interpret14_user(_this, pFld, si_interpretset_effect_interpret14_next);
        };
        
        void si_interpretctor_si_interpret16_wrapper(struct si_interpret* _this)
        {
           si_interpretctor_si_interpret16_user(_this, si_interpretctor_si_interpret16_next);
        };
        
        ::std::array<hook_record, 8> si_interpret_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e3c20L,
                (LPVOID *)&si_interpretGetCountOfEffect2_user,
                (LPVOID *)&si_interpretGetCountOfEffect2_next,
                (LPVOID)cast_pointer_function(si_interpretGetCountOfEffect2_wrapper),
                (LPVOID)cast_pointer_function((char(si_interpret::*)(int))&si_interpret::GetCountOfEffect)
            },
            _hook_record {
                (LPVOID)0x1402e3b90L,
                (LPVOID *)&si_interpretGetCountOfItem4_user,
                (LPVOID *)&si_interpretGetCountOfItem4_next,
                (LPVOID)cast_pointer_function(si_interpretGetCountOfItem4_wrapper),
                (LPVOID)cast_pointer_function((char(si_interpret::*)(int))&si_interpret::GetCountOfItem)
            },
            _hook_record {
                (LPVOID)0x14007da60L,
                (LPVOID *)&si_interpretGetEffectCode6_user,
                (LPVOID *)&si_interpretGetEffectCode6_next,
                (LPVOID)cast_pointer_function(si_interpretGetEffectCode6_wrapper),
                (LPVOID)cast_pointer_function((int(si_interpret::*)(int))&si_interpret::GetEffectCode)
            },
            _hook_record {
                (LPVOID)0x1402e3b70L,
                (LPVOID *)&si_interpretGetEffectTypeCount8_user,
                (LPVOID *)&si_interpretGetEffectTypeCount8_next,
                (LPVOID)cast_pointer_function(si_interpretGetEffectTypeCount8_wrapper),
                (LPVOID)cast_pointer_function((char(si_interpret::*)())&si_interpret::GetEffectTypeCount)
            },
            _hook_record {
                (LPVOID)0x14007daa0L,
                (LPVOID *)&si_interpretGetEffectValue10_user,
                (LPVOID *)&si_interpretGetEffectValue10_next,
                (LPVOID)cast_pointer_function(si_interpretGetEffectValue10_wrapper),
                (LPVOID)cast_pointer_function((float(si_interpret::*)(int))&si_interpret::GetEffectValue)
            },
            _hook_record {
                (LPVOID)0x1402e36b0L,
                (LPVOID *)&si_interpretinit12_user,
                (LPVOID *)&si_interpretinit12_next,
                (LPVOID)cast_pointer_function(si_interpretinit12_wrapper),
                (LPVOID)cast_pointer_function((void(si_interpret::*)())&si_interpret::init)
            },
            _hook_record {
                (LPVOID)0x1402e3730L,
                (LPVOID *)&si_interpretset_effect_interpret14_user,
                (LPVOID *)&si_interpretset_effect_interpret14_next,
                (LPVOID)cast_pointer_function(si_interpretset_effect_interpret14_wrapper),
                (LPVOID)cast_pointer_function((bool(si_interpret::*)(struct _SetItemEff_fld*))&si_interpret::set_effect_interpret)
            },
            _hook_record {
                (LPVOID)0x1402e35c0L,
                (LPVOID *)&si_interpretctor_si_interpret16_user,
                (LPVOID *)&si_interpretctor_si_interpret16_next,
                (LPVOID)cast_pointer_function(si_interpretctor_si_interpret16_wrapper),
                (LPVOID)cast_pointer_function((void(si_interpret::*)())&si_interpret::ctor_si_interpret)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
