#include <AtmosphereDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::AtmosphereCalculateScatteringConstants1_ptr AtmosphereCalculateScatteringConstants1_next(nullptr);
        Info::AtmosphereCalculateScatteringConstants1_clbk AtmosphereCalculateScatteringConstants1_user(nullptr);
        
        Info::AtmosphereDump22_ptr AtmosphereDump22_next(nullptr);
        Info::AtmosphereDump22_clbk AtmosphereDump22_user(nullptr);
        
        Info::AtmosphereGetBetaDashMie3_ptr AtmosphereGetBetaDashMie3_next(nullptr);
        Info::AtmosphereGetBetaDashMie3_clbk AtmosphereGetBetaDashMie3_user(nullptr);
        
        Info::AtmosphereGetBetaDashRayleigh4_ptr AtmosphereGetBetaDashRayleigh4_next(nullptr);
        Info::AtmosphereGetBetaDashRayleigh4_clbk AtmosphereGetBetaDashRayleigh4_user(nullptr);
        
        Info::AtmosphereGetBetaMie5_ptr AtmosphereGetBetaMie5_next(nullptr);
        Info::AtmosphereGetBetaMie5_clbk AtmosphereGetBetaMie5_user(nullptr);
        
        Info::AtmosphereGetBetaRayleigh6_ptr AtmosphereGetBetaRayleigh6_next(nullptr);
        Info::AtmosphereGetBetaRayleigh6_clbk AtmosphereGetBetaRayleigh6_user(nullptr);
        
        Info::AtmosphereInterpolate7_ptr AtmosphereInterpolate7_next(nullptr);
        Info::AtmosphereInterpolate7_clbk AtmosphereInterpolate7_user(nullptr);
        
        Info::AtmosphereRead28_ptr AtmosphereRead28_next(nullptr);
        Info::AtmosphereRead28_clbk AtmosphereRead28_user(nullptr);
        
        
        Info::Atmospheredtor_Atmosphere9_ptr Atmospheredtor_Atmosphere9_next(nullptr);
        Info::Atmospheredtor_Atmosphere9_clbk Atmospheredtor_Atmosphere9_user(nullptr);
        
        void AtmosphereCalculateScatteringConstants1_wrapper(struct Atmosphere* _this)
        {
           AtmosphereCalculateScatteringConstants1_user(_this, AtmosphereCalculateScatteringConstants1_next);
        };
        void AtmosphereDump22_wrapper(struct Atmosphere* _this, struct _iobuf* arg_0)
        {
           AtmosphereDump22_user(_this, arg_0, AtmosphereDump22_next);
        };
        struct D3DXVECTOR3* AtmosphereGetBetaDashMie3_wrapper(struct Atmosphere* _this, short retstr)
        {
           return AtmosphereGetBetaDashMie3_user(_this, retstr, AtmosphereGetBetaDashMie3_next);
        };
        struct D3DXVECTOR3* AtmosphereGetBetaDashRayleigh4_wrapper(struct Atmosphere* _this, short retstr)
        {
           return AtmosphereGetBetaDashRayleigh4_user(_this, retstr, AtmosphereGetBetaDashRayleigh4_next);
        };
        struct D3DXVECTOR3* AtmosphereGetBetaMie5_wrapper(struct Atmosphere* _this, short retstr)
        {
           return AtmosphereGetBetaMie5_user(_this, retstr, AtmosphereGetBetaMie5_next);
        };
        struct D3DXVECTOR3* AtmosphereGetBetaRayleigh6_wrapper(struct Atmosphere* _this, short retstr)
        {
           return AtmosphereGetBetaRayleigh6_user(_this, retstr, AtmosphereGetBetaRayleigh6_next);
        };
        void AtmosphereInterpolate7_wrapper(struct Atmosphere* _this, struct Atmosphere* arg_0, struct Atmosphere* arg_1, float arg_2)
        {
           AtmosphereInterpolate7_user(_this, arg_0, arg_1, arg_2, AtmosphereInterpolate7_next);
        };
        void AtmosphereRead28_wrapper(struct Atmosphere* _this, struct _iobuf* arg_0)
        {
           AtmosphereRead28_user(_this, arg_0, AtmosphereRead28_next);
        };
        
        int64_t Atmospheredtor_Atmosphere9_wrapper(struct Atmosphere* _this)
        {
           return Atmospheredtor_Atmosphere9_user(_this, Atmospheredtor_Atmosphere9_next);
        };
        
        ::std::array<hook_record, 9> Atmosphere_functions = 
        {
            _hook_record {
                (LPVOID)0x140522fd0L,
                (LPVOID *)&AtmosphereCalculateScatteringConstants1_user,
                (LPVOID *)&AtmosphereCalculateScatteringConstants1_next,
                (LPVOID)cast_pointer_function(AtmosphereCalculateScatteringConstants1_wrapper),
                (LPVOID)cast_pointer_function((void(Atmosphere::*)())&Atmosphere::CalculateScatteringConstants)
            },
            _hook_record {
                (LPVOID)0x1405231e0L,
                (LPVOID *)&AtmosphereDump22_user,
                (LPVOID *)&AtmosphereDump22_next,
                (LPVOID)cast_pointer_function(AtmosphereDump22_wrapper),
                (LPVOID)cast_pointer_function((void(Atmosphere::*)(struct _iobuf*))&Atmosphere::Dump2)
            },
            _hook_record {
                (LPVOID)0x140504e40L,
                (LPVOID *)&AtmosphereGetBetaDashMie3_user,
                (LPVOID *)&AtmosphereGetBetaDashMie3_next,
                (LPVOID)cast_pointer_function(AtmosphereGetBetaDashMie3_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR3*(Atmosphere::*)(short))&Atmosphere::GetBetaDashMie)
            },
            _hook_record {
                (LPVOID)0x140504e00L,
                (LPVOID *)&AtmosphereGetBetaDashRayleigh4_user,
                (LPVOID *)&AtmosphereGetBetaDashRayleigh4_next,
                (LPVOID)cast_pointer_function(AtmosphereGetBetaDashRayleigh4_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR3*(Atmosphere::*)(short))&Atmosphere::GetBetaDashRayleigh)
            },
            _hook_record {
                (LPVOID)0x140504e20L,
                (LPVOID *)&AtmosphereGetBetaMie5_user,
                (LPVOID *)&AtmosphereGetBetaMie5_next,
                (LPVOID)cast_pointer_function(AtmosphereGetBetaMie5_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR3*(Atmosphere::*)(short))&Atmosphere::GetBetaMie)
            },
            _hook_record {
                (LPVOID)0x140504de0L,
                (LPVOID *)&AtmosphereGetBetaRayleigh6_user,
                (LPVOID *)&AtmosphereGetBetaRayleigh6_next,
                (LPVOID)cast_pointer_function(AtmosphereGetBetaRayleigh6_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR3*(Atmosphere::*)(short))&Atmosphere::GetBetaRayleigh)
            },
            _hook_record {
                (LPVOID)0x140523160L,
                (LPVOID *)&AtmosphereInterpolate7_user,
                (LPVOID *)&AtmosphereInterpolate7_next,
                (LPVOID)cast_pointer_function(AtmosphereInterpolate7_wrapper),
                (LPVOID)cast_pointer_function((void(Atmosphere::*)(struct Atmosphere*, struct Atmosphere*, float))&Atmosphere::Interpolate)
            },
            _hook_record {
                (LPVOID)0x140523280L,
                (LPVOID *)&AtmosphereRead28_user,
                (LPVOID *)&AtmosphereRead28_next,
                (LPVOID)cast_pointer_function(AtmosphereRead28_wrapper),
                (LPVOID)cast_pointer_function((void(Atmosphere::*)(struct _iobuf*))&Atmosphere::Read2)
            },
            _hook_record {
                (LPVOID)0x140504dd0L,
                (LPVOID *)&Atmospheredtor_Atmosphere9_user,
                (LPVOID *)&Atmospheredtor_Atmosphere9_next,
                (LPVOID)cast_pointer_function(Atmospheredtor_Atmosphere9_wrapper),
                (LPVOID)cast_pointer_function((int64_t(Atmosphere::*)())&Atmosphere::dtor_Atmosphere)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
