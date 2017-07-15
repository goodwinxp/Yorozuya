#include <SunDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::SunComputeAttenuation1_ptr SunComputeAttenuation1_next(nullptr);
        Info::SunComputeAttenuation1_clbk SunComputeAttenuation1_user(nullptr);
        
        Info::SunDump22_ptr SunDump22_next(nullptr);
        Info::SunDump22_clbk SunDump22_user(nullptr);
        
        Info::SunFrameMove3_ptr SunFrameMove3_next(nullptr);
        Info::SunFrameMove3_clbk SunFrameMove3_user(nullptr);
        
        Info::SunGetAlpha4_ptr SunGetAlpha4_next(nullptr);
        Info::SunGetAlpha4_clbk SunGetAlpha4_user(nullptr);
        
        Info::SunGetColor5_ptr SunGetColor5_next(nullptr);
        Info::SunGetColor5_clbk SunGetColor5_user(nullptr);
        
        Info::SunGetColorAndIntensity6_ptr SunGetColorAndIntensity6_next(nullptr);
        Info::SunGetColorAndIntensity6_clbk SunGetColorAndIntensity6_user(nullptr);
        
        Info::SunGetColorWithIntensity7_ptr SunGetColorWithIntensity7_next(nullptr);
        Info::SunGetColorWithIntensity7_clbk SunGetColorWithIntensity7_user(nullptr);
        
        Info::SunGetDirection8_ptr SunGetDirection8_next(nullptr);
        Info::SunGetDirection8_clbk SunGetDirection8_user(nullptr);
        
        Info::SunGetDirection9_ptr SunGetDirection9_next(nullptr);
        Info::SunGetDirection9_clbk SunGetDirection9_user(nullptr);
        
        Info::SunGetIntensity10_ptr SunGetIntensity10_next(nullptr);
        Info::SunGetIntensity10_clbk SunGetIntensity10_user(nullptr);
        
        Info::SunGetNightAlpha11_ptr SunGetNightAlpha11_next(nullptr);
        Info::SunGetNightAlpha11_clbk SunGetNightAlpha11_user(nullptr);
        
        Info::SunInterpolate12_ptr SunInterpolate12_next(nullptr);
        Info::SunInterpolate12_clbk SunInterpolate12_user(nullptr);
        
        Info::SunInvalidateSun13_ptr SunInvalidateSun13_next(nullptr);
        Info::SunInvalidateSun13_clbk SunInvalidateSun13_user(nullptr);
        
        Info::SunRead214_ptr SunRead214_next(nullptr);
        Info::SunRead214_clbk SunRead214_user(nullptr);
        
        Info::SunRender15_ptr SunRender15_next(nullptr);
        Info::SunRender15_clbk SunRender15_user(nullptr);
        
        Info::SunRestoreSun16_ptr SunRestoreSun16_next(nullptr);
        Info::SunRestoreSun16_clbk SunRestoreSun16_user(nullptr);
        
        Info::SunSetAlpha17_ptr SunSetAlpha17_next(nullptr);
        Info::SunSetAlpha17_clbk SunSetAlpha17_user(nullptr);
        
        Info::SunSetNightAlpha18_ptr SunSetNightAlpha18_next(nullptr);
        Info::SunSetNightAlpha18_clbk SunSetNightAlpha18_user(nullptr);
        
        Info::SunSetScale19_ptr SunSetScale19_next(nullptr);
        Info::SunSetScale19_clbk SunSetScale19_user(nullptr);
        
        Info::SunSetSunThetaPhi20_ptr SunSetSunThetaPhi20_next(nullptr);
        Info::SunSetSunThetaPhi20_clbk SunSetSunThetaPhi20_user(nullptr);
        
        Info::SunSetTime21_ptr SunSetTime21_next(nullptr);
        Info::SunSetTime21_clbk SunSetTime21_user(nullptr);
        
        
        Info::Sundtor_Sun22_ptr Sundtor_Sun22_next(nullptr);
        Info::Sundtor_Sun22_clbk Sundtor_Sun22_user(nullptr);
        
        struct D3DXVECTOR4* SunComputeAttenuation1_wrapper(struct Sun* _this, short retstr, struct D3DXVECTOR4* arg_0, float arg_1)
        {
           return SunComputeAttenuation1_user(_this, retstr, arg_0, arg_1, SunComputeAttenuation1_next);
        };
        void SunDump22_wrapper(struct Sun* _this, struct _iobuf* arg_0)
        {
           SunDump22_user(_this, arg_0, SunDump22_next);
        };
        void SunFrameMove3_wrapper(struct Sun* _this)
        {
           SunFrameMove3_user(_this, SunFrameMove3_next);
        };
        float SunGetAlpha4_wrapper(struct Sun* _this)
        {
           return SunGetAlpha4_user(_this, SunGetAlpha4_next);
        };
        struct D3DXVECTOR4* SunGetColor5_wrapper(struct Sun* _this, short retstr)
        {
           return SunGetColor5_user(_this, retstr, SunGetColor5_next);
        };
        struct D3DXVECTOR4* SunGetColorAndIntensity6_wrapper(struct Sun* _this, short retstr)
        {
           return SunGetColorAndIntensity6_user(_this, retstr, SunGetColorAndIntensity6_next);
        };
        struct D3DXVECTOR4* SunGetColorWithIntensity7_wrapper(struct Sun* _this, short retstr)
        {
           return SunGetColorWithIntensity7_user(_this, retstr, SunGetColorWithIntensity7_next);
        };
        void SunGetDirection8_wrapper(struct Sun* _this, float* arg_0)
        {
           SunGetDirection8_user(_this, arg_0, SunGetDirection8_next);
        };
        struct D3DXVECTOR4* SunGetDirection9_wrapper(struct Sun* _this, short retstr)
        {
           return SunGetDirection9_user(_this, retstr, SunGetDirection9_next);
        };
        float SunGetIntensity10_wrapper(struct Sun* _this)
        {
           return SunGetIntensity10_user(_this, SunGetIntensity10_next);
        };
        float SunGetNightAlpha11_wrapper(struct Sun* _this)
        {
           return SunGetNightAlpha11_user(_this, SunGetNightAlpha11_next);
        };
        void SunInterpolate12_wrapper(struct Sun* _this, struct Sun* arg_0, struct Sun* arg_1, float arg_2)
        {
           SunInterpolate12_user(_this, arg_0, arg_1, arg_2, SunInterpolate12_next);
        };
        void SunInvalidateSun13_wrapper(struct Sun* _this)
        {
           SunInvalidateSun13_user(_this, SunInvalidateSun13_next);
        };
        void SunRead214_wrapper(struct Sun* _this, struct _iobuf* arg_0)
        {
           SunRead214_user(_this, arg_0, SunRead214_next);
        };
        void SunRender15_wrapper(struct Sun* _this)
        {
           SunRender15_user(_this, SunRender15_next);
        };
        void SunRestoreSun16_wrapper(struct Sun* _this)
        {
           SunRestoreSun16_user(_this, SunRestoreSun16_next);
        };
        void SunSetAlpha17_wrapper(struct Sun* _this, float arg_0)
        {
           SunSetAlpha17_user(_this, arg_0, SunSetAlpha17_next);
        };
        void SunSetNightAlpha18_wrapper(struct Sun* _this, float arg_0)
        {
           SunSetNightAlpha18_user(_this, arg_0, SunSetNightAlpha18_next);
        };
        void SunSetScale19_wrapper(struct Sun* _this, float arg_0)
        {
           SunSetScale19_user(_this, arg_0, SunSetScale19_next);
        };
        void SunSetSunThetaPhi20_wrapper(struct Sun* _this, float arg_0, float arg_1)
        {
           SunSetSunThetaPhi20_user(_this, arg_0, arg_1, SunSetSunThetaPhi20_next);
        };
        void SunSetTime21_wrapper(struct Sun* _this, float arg_0)
        {
           SunSetTime21_user(_this, arg_0, SunSetTime21_next);
        };
        
        int64_t Sundtor_Sun22_wrapper(struct Sun* _this)
        {
           return Sundtor_Sun22_user(_this, Sundtor_Sun22_next);
        };
        
        ::std::array<hook_record, 22> Sun_functions = 
        {
            _hook_record {
                (LPVOID)0x140521fb0L,
                (LPVOID *)&SunComputeAttenuation1_user,
                (LPVOID *)&SunComputeAttenuation1_next,
                (LPVOID)cast_pointer_function(SunComputeAttenuation1_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR4*(Sun::*)(short, struct D3DXVECTOR4*, float))&Sun::ComputeAttenuation)
            },
            _hook_record {
                (LPVOID)0x1405227f0L,
                (LPVOID *)&SunDump22_user,
                (LPVOID *)&SunDump22_next,
                (LPVOID)cast_pointer_function(SunDump22_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(struct _iobuf*))&Sun::Dump2)
            },
            _hook_record {
                (LPVOID)0x140522210L,
                (LPVOID *)&SunFrameMove3_user,
                (LPVOID *)&SunFrameMove3_next,
                (LPVOID)cast_pointer_function(SunFrameMove3_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)())&Sun::FrameMove)
            },
            _hook_record {
                (LPVOID)0x1404ede20L,
                (LPVOID *)&SunGetAlpha4_user,
                (LPVOID *)&SunGetAlpha4_next,
                (LPVOID)cast_pointer_function(SunGetAlpha4_wrapper),
                (LPVOID)cast_pointer_function((float(Sun::*)())&Sun::GetAlpha)
            },
            _hook_record {
                (LPVOID)0x140522180L,
                (LPVOID *)&SunGetColor5_user,
                (LPVOID *)&SunGetColor5_next,
                (LPVOID)cast_pointer_function(SunGetColor5_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR4*(Sun::*)(short))&Sun::GetColor)
            },
            _hook_record {
                (LPVOID)0x140522630L,
                (LPVOID *)&SunGetColorAndIntensity6_user,
                (LPVOID *)&SunGetColorAndIntensity6_next,
                (LPVOID)cast_pointer_function(SunGetColorAndIntensity6_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR4*(Sun::*)(short))&Sun::GetColorAndIntensity)
            },
            _hook_record {
                (LPVOID)0x140522660L,
                (LPVOID *)&SunGetColorWithIntensity7_user,
                (LPVOID *)&SunGetColorWithIntensity7_next,
                (LPVOID)cast_pointer_function(SunGetColorWithIntensity7_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR4*(Sun::*)(short))&Sun::GetColorWithIntensity)
            },
            _hook_record {
                (LPVOID)0x140504da0L,
                (LPVOID *)&SunGetDirection8_user,
                (LPVOID *)&SunGetDirection8_next,
                (LPVOID)cast_pointer_function(SunGetDirection8_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(float*))&Sun::GetDirection)
            },
            _hook_record {
                (LPVOID)0x140521f90L,
                (LPVOID *)&SunGetDirection9_user,
                (LPVOID *)&SunGetDirection9_next,
                (LPVOID)cast_pointer_function(SunGetDirection9_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR4*(Sun::*)(short))&Sun::GetDirection)
            },
            _hook_record {
                (LPVOID)0x140522170L,
                (LPVOID *)&SunGetIntensity10_user,
                (LPVOID *)&SunGetIntensity10_next,
                (LPVOID)cast_pointer_function(SunGetIntensity10_wrapper),
                (LPVOID)cast_pointer_function((float(Sun::*)())&Sun::GetIntensity)
            },
            _hook_record {
                (LPVOID)0x1404f5940L,
                (LPVOID *)&SunGetNightAlpha11_user,
                (LPVOID *)&SunGetNightAlpha11_next,
                (LPVOID)cast_pointer_function(SunGetNightAlpha11_wrapper),
                (LPVOID)cast_pointer_function((float(Sun::*)())&Sun::GetNightAlpha)
            },
            _hook_record {
                (LPVOID)0x1405226c0L,
                (LPVOID *)&SunInterpolate12_user,
                (LPVOID *)&SunInterpolate12_next,
                (LPVOID)cast_pointer_function(SunInterpolate12_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(struct Sun*, struct Sun*, float))&Sun::Interpolate)
            },
            _hook_record {
                (LPVOID)0x1405221e0L,
                (LPVOID *)&SunInvalidateSun13_user,
                (LPVOID *)&SunInvalidateSun13_next,
                (LPVOID)cast_pointer_function(SunInvalidateSun13_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)())&Sun::InvalidateSun)
            },
            _hook_record {
                (LPVOID)0x140522850L,
                (LPVOID *)&SunRead214_user,
                (LPVOID *)&SunRead214_next,
                (LPVOID)cast_pointer_function(SunRead214_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(struct _iobuf*))&Sun::Read2)
            },
            _hook_record {
                (LPVOID)0x1405222e0L,
                (LPVOID *)&SunRender15_user,
                (LPVOID *)&SunRender15_next,
                (LPVOID)cast_pointer_function(SunRender15_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)())&Sun::Render)
            },
            _hook_record {
                (LPVOID)0x1405221b0L,
                (LPVOID *)&SunRestoreSun16_user,
                (LPVOID *)&SunRestoreSun16_next,
                (LPVOID)cast_pointer_function(SunRestoreSun16_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)())&Sun::RestoreSun)
            },
            _hook_record {
                (LPVOID)0x140504d90L,
                (LPVOID *)&SunSetAlpha17_user,
                (LPVOID *)&SunSetAlpha17_next,
                (LPVOID)cast_pointer_function(SunSetAlpha17_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(float))&Sun::SetAlpha)
            },
            _hook_record {
                (LPVOID)0x140504dc0L,
                (LPVOID *)&SunSetNightAlpha18_user,
                (LPVOID *)&SunSetNightAlpha18_next,
                (LPVOID)cast_pointer_function(SunSetNightAlpha18_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(float))&Sun::SetNightAlpha)
            },
            _hook_record {
                (LPVOID)0x140504d80L,
                (LPVOID *)&SunSetScale19_user,
                (LPVOID *)&SunSetScale19_next,
                (LPVOID)cast_pointer_function(SunSetScale19_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(float))&Sun::SetScale)
            },
            _hook_record {
                (LPVOID)0x140504d60L,
                (LPVOID *)&SunSetSunThetaPhi20_user,
                (LPVOID *)&SunSetSunThetaPhi20_next,
                (LPVOID)cast_pointer_function(SunSetSunThetaPhi20_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(float, float))&Sun::SetSunThetaPhi)
            },
            _hook_record {
                (LPVOID)0x140504d70L,
                (LPVOID *)&SunSetTime21_user,
                (LPVOID *)&SunSetTime21_next,
                (LPVOID)cast_pointer_function(SunSetTime21_wrapper),
                (LPVOID)cast_pointer_function((void(Sun::*)(float))&Sun::SetTime)
            },
            _hook_record {
                (LPVOID)0x140504d50L,
                (LPVOID *)&Sundtor_Sun22_user,
                (LPVOID *)&Sundtor_Sun22_next,
                (LPVOID)cast_pointer_function(Sundtor_Sun22_wrapper),
                (LPVOID)cast_pointer_function((int64_t(Sun::*)())&Sun::dtor_Sun)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
