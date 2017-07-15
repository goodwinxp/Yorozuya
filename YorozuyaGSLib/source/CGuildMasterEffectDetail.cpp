#include <CGuildMasterEffectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CGuildMasterEffectctor_CGuildMasterEffect2_ptr CGuildMasterEffectctor_CGuildMasterEffect2_next(nullptr);
        Info::CGuildMasterEffectctor_CGuildMasterEffect2_clbk CGuildMasterEffectctor_CGuildMasterEffect2_user(nullptr);
        
        Info::CGuildMasterEffectGetInstance4_ptr CGuildMasterEffectGetInstance4_next(nullptr);
        Info::CGuildMasterEffectGetInstance4_clbk CGuildMasterEffectGetInstance4_user(nullptr);
        
        Info::CGuildMasterEffectadjust_effect6_ptr CGuildMasterEffectadjust_effect6_next(nullptr);
        Info::CGuildMasterEffectadjust_effect6_clbk CGuildMasterEffectadjust_effect6_user(nullptr);
        
        Info::CGuildMasterEffectchange_player8_ptr CGuildMasterEffectchange_player8_next(nullptr);
        Info::CGuildMasterEffectchange_player8_clbk CGuildMasterEffectchange_player8_user(nullptr);
        
        Info::CGuildMasterEffectget_AdjustableGrade10_ptr CGuildMasterEffectget_AdjustableGrade10_next(nullptr);
        Info::CGuildMasterEffectget_AdjustableGrade10_clbk CGuildMasterEffectget_AdjustableGrade10_user(nullptr);
        
        Info::CGuildMasterEffectget_AttactValueByGrade12_ptr CGuildMasterEffectget_AttactValueByGrade12_next(nullptr);
        Info::CGuildMasterEffectget_AttactValueByGrade12_clbk CGuildMasterEffectget_AttactValueByGrade12_user(nullptr);
        
        Info::CGuildMasterEffectget_DefenceValueByGrade14_ptr CGuildMasterEffectget_DefenceValueByGrade14_next(nullptr);
        Info::CGuildMasterEffectget_DefenceValueByGrade14_clbk CGuildMasterEffectget_DefenceValueByGrade14_user(nullptr);
        
        Info::CGuildMasterEffectin_player16_ptr CGuildMasterEffectin_player16_next(nullptr);
        Info::CGuildMasterEffectin_player16_clbk CGuildMasterEffectin_player16_user(nullptr);
        
        Info::CGuildMasterEffectinit18_ptr CGuildMasterEffectinit18_next(nullptr);
        Info::CGuildMasterEffectinit18_clbk CGuildMasterEffectinit18_user(nullptr);
        
        Info::CGuildMasterEffectout_player20_ptr CGuildMasterEffectout_player20_next(nullptr);
        Info::CGuildMasterEffectout_player20_clbk CGuildMasterEffectout_player20_user(nullptr);
        
        Info::CGuildMasterEffectshow_to_all22_ptr CGuildMasterEffectshow_to_all22_next(nullptr);
        Info::CGuildMasterEffectshow_to_all22_clbk CGuildMasterEffectshow_to_all22_user(nullptr);
        
        
        void CGuildMasterEffectctor_CGuildMasterEffect2_wrapper(struct CGuildMasterEffect* _this)
        {
           CGuildMasterEffectctor_CGuildMasterEffect2_user(_this, CGuildMasterEffectctor_CGuildMasterEffect2_next);
        };
        struct CGuildMasterEffect* CGuildMasterEffectGetInstance4_wrapper()
        {
           return CGuildMasterEffectGetInstance4_user(CGuildMasterEffectGetInstance4_next);
        };
        void CGuildMasterEffectadjust_effect6_wrapper(struct CGuildMasterEffect* _this, struct CPlayer* pP, char byGrade, bool bAdd)
        {
           CGuildMasterEffectadjust_effect6_user(_this, pP, byGrade, bAdd, CGuildMasterEffectadjust_effect6_next);
        };
        bool CGuildMasterEffectchange_player8_wrapper(struct CGuildMasterEffect* _this, struct CPlayer* pP, char byBeforeGrade, char byAfterGrade)
        {
           return CGuildMasterEffectchange_player8_user(_this, pP, byBeforeGrade, byAfterGrade, CGuildMasterEffectchange_player8_next);
        };
        char CGuildMasterEffectget_AdjustableGrade10_wrapper(struct CGuildMasterEffect* _this)
        {
           return CGuildMasterEffectget_AdjustableGrade10_user(_this, CGuildMasterEffectget_AdjustableGrade10_next);
        };
        char CGuildMasterEffectget_AttactValueByGrade12_wrapper(struct CGuildMasterEffect* _this, char byGrade)
        {
           return CGuildMasterEffectget_AttactValueByGrade12_user(_this, byGrade, CGuildMasterEffectget_AttactValueByGrade12_next);
        };
        char CGuildMasterEffectget_DefenceValueByGrade14_wrapper(struct CGuildMasterEffect* _this, char byGrade)
        {
           return CGuildMasterEffectget_DefenceValueByGrade14_user(_this, byGrade, CGuildMasterEffectget_DefenceValueByGrade14_next);
        };
        bool CGuildMasterEffectin_player16_wrapper(struct CGuildMasterEffect* _this, struct CPlayer* pP, char byGrade)
        {
           return CGuildMasterEffectin_player16_user(_this, pP, byGrade, CGuildMasterEffectin_player16_next);
        };
        bool CGuildMasterEffectinit18_wrapper(struct CGuildMasterEffect* _this)
        {
           return CGuildMasterEffectinit18_user(_this, CGuildMasterEffectinit18_next);
        };
        bool CGuildMasterEffectout_player20_wrapper(struct CGuildMasterEffect* _this, struct CPlayer* pP, char byGrade)
        {
           return CGuildMasterEffectout_player20_user(_this, pP, byGrade, CGuildMasterEffectout_player20_next);
        };
        void CGuildMasterEffectshow_to_all22_wrapper(struct CGuildMasterEffect* _this, struct CPlayer* pP, char byBeforeGrade, char byGrade, char byState)
        {
           CGuildMasterEffectshow_to_all22_user(_this, pP, byBeforeGrade, byGrade, byState, CGuildMasterEffectshow_to_all22_next);
        };
        
        ::std::array<hook_record, 11> CGuildMasterEffect_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f46e0L,
                (LPVOID *)&CGuildMasterEffectctor_CGuildMasterEffect2_user,
                (LPVOID *)&CGuildMasterEffectctor_CGuildMasterEffect2_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectctor_CGuildMasterEffect2_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildMasterEffect::*)())&CGuildMasterEffect::ctor_CGuildMasterEffect)
            },
            _hook_record {
                (LPVOID)0x140078f80L,
                (LPVOID *)&CGuildMasterEffectGetInstance4_user,
                (LPVOID *)&CGuildMasterEffectGetInstance4_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectGetInstance4_wrapper),
                (LPVOID)cast_pointer_function((struct CGuildMasterEffect*(*)())&CGuildMasterEffect::GetInstance)
            },
            _hook_record {
                (LPVOID)0x1403f4b10L,
                (LPVOID *)&CGuildMasterEffectadjust_effect6_user,
                (LPVOID *)&CGuildMasterEffectadjust_effect6_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectadjust_effect6_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildMasterEffect::*)(struct CPlayer*, char, bool))&CGuildMasterEffect::adjust_effect)
            },
            _hook_record {
                (LPVOID)0x1403f4a00L,
                (LPVOID *)&CGuildMasterEffectchange_player8_user,
                (LPVOID *)&CGuildMasterEffectchange_player8_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectchange_player8_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildMasterEffect::*)(struct CPlayer*, char, char))&CGuildMasterEffect::change_player)
            },
            _hook_record {
                (LPVOID)0x1400ef310L,
                (LPVOID *)&CGuildMasterEffectget_AdjustableGrade10_user,
                (LPVOID *)&CGuildMasterEffectget_AdjustableGrade10_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectget_AdjustableGrade10_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildMasterEffect::*)())&CGuildMasterEffect::get_AdjustableGrade)
            },
            _hook_record {
                (LPVOID)0x1403f4bd0L,
                (LPVOID *)&CGuildMasterEffectget_AttactValueByGrade12_user,
                (LPVOID *)&CGuildMasterEffectget_AttactValueByGrade12_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectget_AttactValueByGrade12_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildMasterEffect::*)(char))&CGuildMasterEffect::get_AttactValueByGrade)
            },
            _hook_record {
                (LPVOID)0x1403f4c60L,
                (LPVOID *)&CGuildMasterEffectget_DefenceValueByGrade14_user,
                (LPVOID *)&CGuildMasterEffectget_DefenceValueByGrade14_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectget_DefenceValueByGrade14_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildMasterEffect::*)(char))&CGuildMasterEffect::get_DefenceValueByGrade)
            },
            _hook_record {
                (LPVOID)0x1403f4850L,
                (LPVOID *)&CGuildMasterEffectin_player16_user,
                (LPVOID *)&CGuildMasterEffectin_player16_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectin_player16_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildMasterEffect::*)(struct CPlayer*, char))&CGuildMasterEffect::in_player)
            },
            _hook_record {
                (LPVOID)0x1403f4720L,
                (LPVOID *)&CGuildMasterEffectinit18_user,
                (LPVOID *)&CGuildMasterEffectinit18_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectinit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildMasterEffect::*)())&CGuildMasterEffect::init)
            },
            _hook_record {
                (LPVOID)0x1403f4940L,
                (LPVOID *)&CGuildMasterEffectout_player20_user,
                (LPVOID *)&CGuildMasterEffectout_player20_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectout_player20_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildMasterEffect::*)(struct CPlayer*, char))&CGuildMasterEffect::out_player)
            },
            _hook_record {
                (LPVOID)0x1403f4cf0L,
                (LPVOID *)&CGuildMasterEffectshow_to_all22_user,
                (LPVOID *)&CGuildMasterEffectshow_to_all22_next,
                (LPVOID)cast_pointer_function(CGuildMasterEffectshow_to_all22_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildMasterEffect::*)(struct CPlayer*, char, char, char))&CGuildMasterEffect::show_to_all)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
