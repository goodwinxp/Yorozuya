#include <_effect_parameterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_effect_parameterAllocEffParam2_ptr _effect_parameterAllocEffParam2_next(nullptr);
        Info::_effect_parameterAllocEffParam2_clbk _effect_parameterAllocEffParam2_user(nullptr);
        
        Info::_effect_parameterGetEff_Have4_ptr _effect_parameterGetEff_Have4_next(nullptr);
        Info::_effect_parameterGetEff_Have4_clbk _effect_parameterGetEff_Have4_user(nullptr);
        
        Info::_effect_parameterGetEff_Plus6_ptr _effect_parameterGetEff_Plus6_next(nullptr);
        Info::_effect_parameterGetEff_Plus6_clbk _effect_parameterGetEff_Plus6_user(nullptr);
        
        Info::_effect_parameterGetEff_Rate8_ptr _effect_parameterGetEff_Rate8_next(nullptr);
        Info::_effect_parameterGetEff_Rate8_clbk _effect_parameterGetEff_Rate8_user(nullptr);
        
        Info::_effect_parameterGetEff_State10_ptr _effect_parameterGetEff_State10_next(nullptr);
        Info::_effect_parameterGetEff_State10_clbk _effect_parameterGetEff_State10_user(nullptr);
        
        Info::_effect_parameterInitEffHave12_ptr _effect_parameterInitEffHave12_next(nullptr);
        Info::_effect_parameterInitEffHave12_clbk _effect_parameterInitEffHave12_user(nullptr);
        
        Info::_effect_parameterInitEffParam14_ptr _effect_parameterInitEffParam14_next(nullptr);
        Info::_effect_parameterInitEffParam14_clbk _effect_parameterInitEffParam14_user(nullptr);
        
        Info::_effect_parameterSetEff_Plus16_ptr _effect_parameterSetEff_Plus16_next(nullptr);
        Info::_effect_parameterSetEff_Plus16_clbk _effect_parameterSetEff_Plus16_user(nullptr);
        
        Info::_effect_parameterSetEff_Rate18_ptr _effect_parameterSetEff_Rate18_next(nullptr);
        Info::_effect_parameterSetEff_Rate18_clbk _effect_parameterSetEff_Rate18_user(nullptr);
        
        Info::_effect_parameterSetEff_State20_ptr _effect_parameterSetEff_State20_next(nullptr);
        Info::_effect_parameterSetEff_State20_clbk _effect_parameterSetEff_State20_user(nullptr);
        
        Info::_effect_parameterSetLock22_ptr _effect_parameterSetLock22_next(nullptr);
        Info::_effect_parameterSetLock22_clbk _effect_parameterSetLock22_user(nullptr);
        
        
        Info::_effect_parameterctor__effect_parameter24_ptr _effect_parameterctor__effect_parameter24_next(nullptr);
        Info::_effect_parameterctor__effect_parameter24_clbk _effect_parameterctor__effect_parameter24_user(nullptr);
        
        
        Info::_effect_parameterdtor__effect_parameter26_ptr _effect_parameterdtor__effect_parameter26_next(nullptr);
        Info::_effect_parameterdtor__effect_parameter26_clbk _effect_parameterdtor__effect_parameter26_user(nullptr);
        
        void _effect_parameterAllocEffParam2_wrapper(struct _effect_parameter* _this)
        {
           _effect_parameterAllocEffParam2_user(_this, _effect_parameterAllocEffParam2_next);
        };
        float _effect_parameterGetEff_Have4_wrapper(struct _effect_parameter* _this, int nParamIndex)
        {
           return _effect_parameterGetEff_Have4_user(_this, nParamIndex, _effect_parameterGetEff_Have4_next);
        };
        float _effect_parameterGetEff_Plus6_wrapper(struct _effect_parameter* _this, int nParamIndex)
        {
           return _effect_parameterGetEff_Plus6_user(_this, nParamIndex, _effect_parameterGetEff_Plus6_next);
        };
        float _effect_parameterGetEff_Rate8_wrapper(struct _effect_parameter* _this, int nParamIndex)
        {
           return _effect_parameterGetEff_Rate8_user(_this, nParamIndex, _effect_parameterGetEff_Rate8_next);
        };
        bool _effect_parameterGetEff_State10_wrapper(struct _effect_parameter* _this, int nParamIndex)
        {
           return _effect_parameterGetEff_State10_user(_this, nParamIndex, _effect_parameterGetEff_State10_next);
        };
        void _effect_parameterInitEffHave12_wrapper(struct _effect_parameter* _this)
        {
           _effect_parameterInitEffHave12_user(_this, _effect_parameterInitEffHave12_next);
        };
        void _effect_parameterInitEffParam14_wrapper(struct _effect_parameter* _this)
        {
           _effect_parameterInitEffParam14_user(_this, _effect_parameterInitEffParam14_next);
        };
        bool _effect_parameterSetEff_Plus16_wrapper(struct _effect_parameter* _this, int nParamIndex, float fVar, bool bAdd)
        {
           return _effect_parameterSetEff_Plus16_user(_this, nParamIndex, fVar, bAdd, _effect_parameterSetEff_Plus16_next);
        };
        bool _effect_parameterSetEff_Rate18_wrapper(struct _effect_parameter* _this, int nParamIndex, float fVar, bool bAdd)
        {
           return _effect_parameterSetEff_Rate18_user(_this, nParamIndex, fVar, bAdd, _effect_parameterSetEff_Rate18_next);
        };
        bool _effect_parameterSetEff_State20_wrapper(struct _effect_parameter* _this, int nParamIndex, bool bVar)
        {
           return _effect_parameterSetEff_State20_user(_this, nParamIndex, bVar, _effect_parameterSetEff_State20_next);
        };
        void _effect_parameterSetLock22_wrapper(struct _effect_parameter* _this, bool bLock)
        {
           _effect_parameterSetLock22_user(_this, bLock, _effect_parameterSetLock22_next);
        };
        
        void _effect_parameterctor__effect_parameter24_wrapper(struct _effect_parameter* _this)
        {
           _effect_parameterctor__effect_parameter24_user(_this, _effect_parameterctor__effect_parameter24_next);
        };
        
        void _effect_parameterdtor__effect_parameter26_wrapper(struct _effect_parameter* _this)
        {
           _effect_parameterdtor__effect_parameter26_user(_this, _effect_parameterdtor__effect_parameter26_next);
        };
        
        ::std::array<hook_record, 13> _effect_parameter_functions = 
        {
            _hook_record {
                (LPVOID)0x1400748f0L,
                (LPVOID *)&_effect_parameterAllocEffParam2_user,
                (LPVOID *)&_effect_parameterAllocEffParam2_next,
                (LPVOID)cast_pointer_function(_effect_parameterAllocEffParam2_wrapper),
                (LPVOID)cast_pointer_function((void(_effect_parameter::*)())&_effect_parameter::AllocEffParam)
            },
            _hook_record {
                (LPVOID)0x140078d80L,
                (LPVOID *)&_effect_parameterGetEff_Have4_user,
                (LPVOID *)&_effect_parameterGetEff_Have4_next,
                (LPVOID)cast_pointer_function(_effect_parameterGetEff_Have4_wrapper),
                (LPVOID)cast_pointer_function((float(_effect_parameter::*)(int))&_effect_parameter::GetEff_Have)
            },
            _hook_record {
                (LPVOID)0x1400789f0L,
                (LPVOID *)&_effect_parameterGetEff_Plus6_user,
                (LPVOID *)&_effect_parameterGetEff_Plus6_next,
                (LPVOID)cast_pointer_function(_effect_parameterGetEff_Plus6_wrapper),
                (LPVOID)cast_pointer_function((float(_effect_parameter::*)(int))&_effect_parameter::GetEff_Plus)
            },
            _hook_record {
                (LPVOID)0x1400742c0L,
                (LPVOID *)&_effect_parameterGetEff_Rate8_user,
                (LPVOID *)&_effect_parameterGetEff_Rate8_next,
                (LPVOID)cast_pointer_function(_effect_parameterGetEff_Rate8_wrapper),
                (LPVOID)cast_pointer_function((float(_effect_parameter::*)(int))&_effect_parameter::GetEff_Rate)
            },
            _hook_record {
                (LPVOID)0x14007a590L,
                (LPVOID *)&_effect_parameterGetEff_State10_user,
                (LPVOID *)&_effect_parameterGetEff_State10_next,
                (LPVOID)cast_pointer_function(_effect_parameterGetEff_State10_wrapper),
                (LPVOID)cast_pointer_function((bool(_effect_parameter::*)(int))&_effect_parameter::GetEff_State)
            },
            _hook_record {
                (LPVOID)0x14007aa90L,
                (LPVOID *)&_effect_parameterInitEffHave12_user,
                (LPVOID *)&_effect_parameterInitEffHave12_next,
                (LPVOID)cast_pointer_function(_effect_parameterInitEffHave12_wrapper),
                (LPVOID)cast_pointer_function((void(_effect_parameter::*)())&_effect_parameter::InitEffHave)
            },
            _hook_record {
                (LPVOID)0x140074960L,
                (LPVOID *)&_effect_parameterInitEffParam14_user,
                (LPVOID *)&_effect_parameterInitEffParam14_next,
                (LPVOID)cast_pointer_function(_effect_parameterInitEffParam14_wrapper),
                (LPVOID)cast_pointer_function((void(_effect_parameter::*)())&_effect_parameter::InitEffParam)
            },
            _hook_record {
                (LPVOID)0x14007ad40L,
                (LPVOID *)&_effect_parameterSetEff_Plus16_user,
                (LPVOID *)&_effect_parameterSetEff_Plus16_next,
                (LPVOID)cast_pointer_function(_effect_parameterSetEff_Plus16_wrapper),
                (LPVOID)cast_pointer_function((bool(_effect_parameter::*)(int, float, bool))&_effect_parameter::SetEff_Plus)
            },
            _hook_record {
                (LPVOID)0x14007ac80L,
                (LPVOID *)&_effect_parameterSetEff_Rate18_user,
                (LPVOID *)&_effect_parameterSetEff_Rate18_next,
                (LPVOID)cast_pointer_function(_effect_parameterSetEff_Rate18_wrapper),
                (LPVOID)cast_pointer_function((bool(_effect_parameter::*)(int, float, bool))&_effect_parameter::SetEff_Rate)
            },
            _hook_record {
                (LPVOID)0x14007ae20L,
                (LPVOID *)&_effect_parameterSetEff_State20_user,
                (LPVOID *)&_effect_parameterSetEff_State20_next,
                (LPVOID)cast_pointer_function(_effect_parameterSetEff_State20_wrapper),
                (LPVOID)cast_pointer_function((bool(_effect_parameter::*)(int, bool))&_effect_parameter::SetEff_State)
            },
            _hook_record {
                (LPVOID)0x14007a8b0L,
                (LPVOID *)&_effect_parameterSetLock22_user,
                (LPVOID *)&_effect_parameterSetLock22_next,
                (LPVOID)cast_pointer_function(_effect_parameterSetLock22_wrapper),
                (LPVOID)cast_pointer_function((void(_effect_parameter::*)(bool))&_effect_parameter::SetLock)
            },
            _hook_record {
                (LPVOID)0x14017a410L,
                (LPVOID *)&_effect_parameterctor__effect_parameter24_user,
                (LPVOID *)&_effect_parameterctor__effect_parameter24_next,
                (LPVOID)cast_pointer_function(_effect_parameterctor__effect_parameter24_wrapper),
                (LPVOID)cast_pointer_function((void(_effect_parameter::*)())&_effect_parameter::ctor__effect_parameter)
            },
            _hook_record {
                (LPVOID)0x14017a450L,
                (LPVOID *)&_effect_parameterdtor__effect_parameter26_user,
                (LPVOID *)&_effect_parameterdtor__effect_parameter26_next,
                (LPVOID)cast_pointer_function(_effect_parameterdtor__effect_parameter26_wrapper),
                (LPVOID)cast_pointer_function((void(_effect_parameter::*)())&_effect_parameter::dtor__effect_parameter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
