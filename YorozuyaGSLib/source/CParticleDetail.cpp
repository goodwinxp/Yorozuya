#include <CParticleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CParticleCheckCollision1_ptr CParticleCheckCollision1_next(nullptr);
        Info::CParticleCheckCollision1_clbk CParticleCheckCollision1_user(nullptr);
        
        Info::CParticleCopyParticleToSaveParticle2_ptr CParticleCopyParticleToSaveParticle2_next(nullptr);
        Info::CParticleCopyParticleToSaveParticle2_clbk CParticleCopyParticleToSaveParticle2_user(nullptr);
        
        Info::CParticleCopySaveParticleToParticle3_ptr CParticleCopySaveParticleToParticle3_next(nullptr);
        Info::CParticleCopySaveParticleToParticle3_clbk CParticleCopySaveParticleToParticle3_user(nullptr);
        
        Info::CParticleGetBBox4_ptr CParticleGetBBox4_next(nullptr);
        Info::CParticleGetBBox4_clbk CParticleGetBBox4_user(nullptr);
        
        Info::CParticleGetFlickerARGB5_ptr CParticleGetFlickerARGB5_next(nullptr);
        Info::CParticleGetFlickerARGB5_clbk CParticleGetFlickerARGB5_user(nullptr);
        
        Info::CParticleGetPartcleStep6_ptr CParticleGetPartcleStep6_next(nullptr);
        Info::CParticleGetPartcleStep6_clbk CParticleGetPartcleStep6_user(nullptr);
        
        Info::CParticleGetParticleState7_ptr CParticleGetParticleState7_next(nullptr);
        Info::CParticleGetParticleState7_clbk CParticleGetParticleState7_user(nullptr);
        
        Info::CParticleInitElement8_ptr CParticleInitElement8_next(nullptr);
        Info::CParticleInitElement8_clbk CParticleInitElement8_user(nullptr);
        
        Info::CParticleInitParticle9_ptr CParticleInitParticle9_next(nullptr);
        Info::CParticleInitParticle9_clbk CParticleInitParticle9_user(nullptr);
        
        Info::CParticleLoadParticleSPT10_ptr CParticleLoadParticleSPT10_next(nullptr);
        Info::CParticleLoadParticleSPT10_clbk CParticleLoadParticleSPT10_user(nullptr);
        
        Info::CParticleLoop11_ptr CParticleLoop11_next(nullptr);
        Info::CParticleLoop11_clbk CParticleLoop11_user(nullptr);
        
        Info::CParticleReInitParticle12_ptr CParticleReInitParticle12_next(nullptr);
        Info::CParticleReInitParticle12_clbk CParticleReInitParticle12_user(nullptr);
        
        Info::CParticleRealLoop13_ptr CParticleRealLoop13_next(nullptr);
        Info::CParticleRealLoop13_clbk CParticleRealLoop13_user(nullptr);
        
        Info::CParticleReleaseEntity14_ptr CParticleReleaseEntity14_next(nullptr);
        Info::CParticleReleaseEntity14_clbk CParticleReleaseEntity14_user(nullptr);
        
        Info::CParticleReleaseParticle15_ptr CParticleReleaseParticle15_next(nullptr);
        Info::CParticleReleaseParticle15_clbk CParticleReleaseParticle15_user(nullptr);
        
        Info::CParticleResetOnePerTime16_ptr CParticleResetOnePerTime16_next(nullptr);
        Info::CParticleResetOnePerTime16_clbk CParticleResetOnePerTime16_user(nullptr);
        
        Info::CParticleSetCreatePos17_ptr CParticleSetCreatePos17_next(nullptr);
        Info::CParticleSetCreatePos17_clbk CParticleSetCreatePos17_user(nullptr);
        
        Info::CParticleSetParticleState18_ptr CParticleSetParticleState18_next(nullptr);
        Info::CParticleSetParticleState18_clbk CParticleSetParticleState18_user(nullptr);
        
        Info::CParticleSetPreCalcParticle19_ptr CParticleSetPreCalcParticle19_next(nullptr);
        Info::CParticleSetPreCalcParticle19_clbk CParticleSetPreCalcParticle19_user(nullptr);
        
        Info::CParticleSetStartBoxArea20_ptr CParticleSetStartBoxArea20_next(nullptr);
        Info::CParticleSetStartBoxArea20_clbk CParticleSetStartBoxArea20_user(nullptr);
        
        Info::CParticleSpecialLoop21_ptr CParticleSpecialLoop21_next(nullptr);
        Info::CParticleSpecialLoop21_clbk CParticleSpecialLoop21_user(nullptr);
        
        Info::CParticleSpecialLoop222_ptr CParticleSpecialLoop222_next(nullptr);
        Info::CParticleSpecialLoop222_clbk CParticleSpecialLoop222_user(nullptr);
        
        
        Info::CParticledtor_CParticle24_ptr CParticledtor_CParticle24_next(nullptr);
        Info::CParticledtor_CParticle24_clbk CParticledtor_CParticle24_user(nullptr);
        
        void CParticleCheckCollision1_wrapper(struct CParticle* _this, int arg_0, float arg_1)
        {
           CParticleCheckCollision1_user(_this, arg_0, arg_1, CParticleCheckCollision1_next);
        };
        void CParticleCopyParticleToSaveParticle2_wrapper(struct CParticle* _this, struct _SAVE_PARTICLE* arg_0)
        {
           CParticleCopyParticleToSaveParticle2_user(_this, arg_0, CParticleCopyParticleToSaveParticle2_next);
        };
        void CParticleCopySaveParticleToParticle3_wrapper(struct CParticle* _this, struct _SAVE_PARTICLE* arg_0)
        {
           CParticleCopySaveParticleToParticle3_user(_this, arg_0, CParticleCopySaveParticleToParticle3_next);
        };
        void CParticleGetBBox4_wrapper(struct CParticle* _this, float* arg_0, float* arg_1)
        {
           CParticleGetBBox4_user(_this, arg_0, arg_1, CParticleGetBBox4_next);
        };
        void CParticleGetFlickerARGB5_wrapper(struct CParticle* _this, int arg_0, uint32_t* arg_1)
        {
           CParticleGetFlickerARGB5_user(_this, arg_0, arg_1, CParticleGetFlickerARGB5_next);
        };
        void CParticleGetPartcleStep6_wrapper(struct CParticle* _this, int arg_0, float arg_1)
        {
           CParticleGetPartcleStep6_user(_this, arg_0, arg_1, CParticleGetPartcleStep6_next);
        };
        uint32_t CParticleGetParticleState7_wrapper(struct CParticle* _this)
        {
           return CParticleGetParticleState7_user(_this, CParticleGetParticleState7_next);
        };
        void CParticleInitElement8_wrapper(struct CParticle* _this, int arg_0, float arg_1)
        {
           CParticleInitElement8_user(_this, arg_0, arg_1, CParticleInitElement8_next);
        };
        void CParticleInitParticle9_wrapper(struct CParticle* _this)
        {
           CParticleInitParticle9_user(_this, CParticleInitParticle9_next);
        };
        int64_t CParticleLoadParticleSPT10_wrapper(struct CParticle* _this, char* arg_0, uint32_t arg_1)
        {
           return CParticleLoadParticleSPT10_user(_this, arg_0, arg_1, CParticleLoadParticleSPT10_next);
        };
        int32_t CParticleLoop11_wrapper(struct CParticle* _this)
        {
           return CParticleLoop11_user(_this, CParticleLoop11_next);
        };
        void CParticleReInitParticle12_wrapper(struct CParticle* _this, int arg_0)
        {
           CParticleReInitParticle12_user(_this, arg_0, CParticleReInitParticle12_next);
        };
        int32_t CParticleRealLoop13_wrapper(struct CParticle* _this)
        {
           return CParticleRealLoop13_user(_this, CParticleRealLoop13_next);
        };
        void CParticleReleaseEntity14_wrapper(struct CParticle* _this)
        {
           CParticleReleaseEntity14_user(_this, CParticleReleaseEntity14_next);
        };
        void CParticleReleaseParticle15_wrapper(struct CParticle* _this)
        {
           CParticleReleaseParticle15_user(_this, CParticleReleaseParticle15_next);
        };
        void CParticleResetOnePerTime16_wrapper(struct CParticle* _this)
        {
           CParticleResetOnePerTime16_user(_this, CParticleResetOnePerTime16_next);
        };
        void CParticleSetCreatePos17_wrapper(struct CParticle* _this, float* arg_0)
        {
           CParticleSetCreatePos17_user(_this, arg_0, CParticleSetCreatePos17_next);
        };
        void CParticleSetParticleState18_wrapper(struct CParticle* _this, uint32_t arg_0)
        {
           CParticleSetParticleState18_user(_this, arg_0, CParticleSetParticleState18_next);
        };
        void CParticleSetPreCalcParticle19_wrapper(struct CParticle* _this, uint32_t arg_0)
        {
           CParticleSetPreCalcParticle19_user(_this, arg_0, CParticleSetPreCalcParticle19_next);
        };
        void CParticleSetStartBoxArea20_wrapper(struct CParticle* _this)
        {
           CParticleSetStartBoxArea20_user(_this, CParticleSetStartBoxArea20_next);
        };
        int32_t CParticleSpecialLoop21_wrapper(struct CParticle* _this)
        {
           return CParticleSpecialLoop21_user(_this, CParticleSpecialLoop21_next);
        };
        int32_t CParticleSpecialLoop222_wrapper(struct CParticle* _this)
        {
           return CParticleSpecialLoop222_user(_this, CParticleSpecialLoop222_next);
        };
        
        int64_t CParticledtor_CParticle24_wrapper(struct CParticle* _this)
        {
           return CParticledtor_CParticle24_user(_this, CParticledtor_CParticle24_next);
        };
        
        ::std::array<hook_record, 23> CParticle_functions = 
        {
            _hook_record {
                (LPVOID)0x140518ef0L,
                (LPVOID *)&CParticleCheckCollision1_user,
                (LPVOID *)&CParticleCheckCollision1_next,
                (LPVOID)cast_pointer_function(CParticleCheckCollision1_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(int, float))&CParticle::CheckCollision)
            },
            _hook_record {
                (LPVOID)0x140517070L,
                (LPVOID *)&CParticleCopyParticleToSaveParticle2_user,
                (LPVOID *)&CParticleCopyParticleToSaveParticle2_next,
                (LPVOID)cast_pointer_function(CParticleCopyParticleToSaveParticle2_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(struct _SAVE_PARTICLE*))&CParticle::CopyParticleToSaveParticle)
            },
            _hook_record {
                (LPVOID)0x140517140L,
                (LPVOID *)&CParticleCopySaveParticleToParticle3_user,
                (LPVOID *)&CParticleCopySaveParticleToParticle3_next,
                (LPVOID)cast_pointer_function(CParticleCopySaveParticleToParticle3_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(struct _SAVE_PARTICLE*))&CParticle::CopySaveParticleToParticle)
            },
            _hook_record {
                (LPVOID)0x14051a760L,
                (LPVOID *)&CParticleGetBBox4_user,
                (LPVOID *)&CParticleGetBBox4_next,
                (LPVOID)cast_pointer_function(CParticleGetBBox4_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(float*, float*))&CParticle::GetBBox)
            },
            _hook_record {
                (LPVOID)0x140518580L,
                (LPVOID *)&CParticleGetFlickerARGB5_user,
                (LPVOID *)&CParticleGetFlickerARGB5_next,
                (LPVOID)cast_pointer_function(CParticleGetFlickerARGB5_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(int, uint32_t*))&CParticle::GetFlickerARGB)
            },
            _hook_record {
                (LPVOID)0x140519560L,
                (LPVOID *)&CParticleGetPartcleStep6_user,
                (LPVOID *)&CParticleGetPartcleStep6_next,
                (LPVOID)cast_pointer_function(CParticleGetPartcleStep6_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(int, float))&CParticle::GetPartcleStep)
            },
            _hook_record {
                (LPVOID)0x1405173a0L,
                (LPVOID *)&CParticleGetParticleState7_user,
                (LPVOID *)&CParticleGetParticleState7_next,
                (LPVOID)cast_pointer_function(CParticleGetParticleState7_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CParticle::*)())&CParticle::GetParticleState)
            },
            _hook_record {
                (LPVOID)0x140519af0L,
                (LPVOID *)&CParticleInitElement8_user,
                (LPVOID *)&CParticleInitElement8_next,
                (LPVOID)cast_pointer_function(CParticleInitElement8_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(int, float))&CParticle::InitElement)
            },
            _hook_record {
                (LPVOID)0x14051ad20L,
                (LPVOID *)&CParticleInitParticle9_user,
                (LPVOID *)&CParticleInitParticle9_next,
                (LPVOID)cast_pointer_function(CParticleInitParticle9_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)())&CParticle::InitParticle)
            },
            _hook_record {
                (LPVOID)0x140517750L,
                (LPVOID *)&CParticleLoadParticleSPT10_user,
                (LPVOID *)&CParticleLoadParticleSPT10_next,
                (LPVOID)cast_pointer_function(CParticleLoadParticleSPT10_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CParticle::*)(char*, uint32_t))&CParticle::LoadParticleSPT)
            },
            _hook_record {
                (LPVOID)0x14051a710L,
                (LPVOID *)&CParticleLoop11_user,
                (LPVOID *)&CParticleLoop11_next,
                (LPVOID)cast_pointer_function(CParticleLoop11_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CParticle::*)())&CParticle::Loop)
            },
            _hook_record {
                (LPVOID)0x14051ae00L,
                (LPVOID *)&CParticleReInitParticle12_user,
                (LPVOID *)&CParticleReInitParticle12_next,
                (LPVOID)cast_pointer_function(CParticleReInitParticle12_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(int))&CParticle::ReInitParticle)
            },
            _hook_record {
                (LPVOID)0x14051a3c0L,
                (LPVOID *)&CParticleRealLoop13_user,
                (LPVOID *)&CParticleRealLoop13_next,
                (LPVOID)cast_pointer_function(CParticleRealLoop13_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CParticle::*)())&CParticle::RealLoop)
            },
            _hook_record {
                (LPVOID)0x140518e90L,
                (LPVOID *)&CParticleReleaseEntity14_user,
                (LPVOID *)&CParticleReleaseEntity14_next,
                (LPVOID)cast_pointer_function(CParticleReleaseEntity14_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)())&CParticle::ReleaseEntity)
            },
            _hook_record {
                (LPVOID)0x140517260L,
                (LPVOID *)&CParticleReleaseParticle15_user,
                (LPVOID *)&CParticleReleaseParticle15_next,
                (LPVOID)cast_pointer_function(CParticleReleaseParticle15_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)())&CParticle::ReleaseParticle)
            },
            _hook_record {
                (LPVOID)0x140517230L,
                (LPVOID *)&CParticleResetOnePerTime16_user,
                (LPVOID *)&CParticleResetOnePerTime16_next,
                (LPVOID)cast_pointer_function(CParticleResetOnePerTime16_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)())&CParticle::ResetOnePerTime)
            },
            _hook_record {
                (LPVOID)0x1404ede00L,
                (LPVOID *)&CParticleSetCreatePos17_user,
                (LPVOID *)&CParticleSetCreatePos17_next,
                (LPVOID)cast_pointer_function(CParticleSetCreatePos17_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(float*))&CParticle::SetCreatePos)
            },
            _hook_record {
                (LPVOID)0x14051aeb0L,
                (LPVOID *)&CParticleSetParticleState18_user,
                (LPVOID *)&CParticleSetParticleState18_next,
                (LPVOID)cast_pointer_function(CParticleSetParticleState18_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(uint32_t))&CParticle::SetParticleState)
            },
            _hook_record {
                (LPVOID)0x1405171e0L,
                (LPVOID *)&CParticleSetPreCalcParticle19_user,
                (LPVOID *)&CParticleSetPreCalcParticle19_next,
                (LPVOID)cast_pointer_function(CParticleSetPreCalcParticle19_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)(uint32_t))&CParticle::SetPreCalcParticle)
            },
            _hook_record {
                (LPVOID)0x140518600L,
                (LPVOID *)&CParticleSetStartBoxArea20_user,
                (LPVOID *)&CParticleSetStartBoxArea20_next,
                (LPVOID)cast_pointer_function(CParticleSetStartBoxArea20_wrapper),
                (LPVOID)cast_pointer_function((void(CParticle::*)())&CParticle::SetStartBoxArea)
            },
            _hook_record {
                (LPVOID)0x14052ac70L,
                (LPVOID *)&CParticleSpecialLoop21_user,
                (LPVOID *)&CParticleSpecialLoop21_next,
                (LPVOID)cast_pointer_function(CParticleSpecialLoop21_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CParticle::*)())&CParticle::SpecialLoop)
            },
            _hook_record {
                (LPVOID)0x14052a1a0L,
                (LPVOID *)&CParticleSpecialLoop222_user,
                (LPVOID *)&CParticleSpecialLoop222_next,
                (LPVOID)cast_pointer_function(CParticleSpecialLoop222_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CParticle::*)())&CParticle::SpecialLoop2)
            },
            _hook_record {
                (LPVOID)0x140516fe0L,
                (LPVOID *)&CParticledtor_CParticle24_user,
                (LPVOID *)&CParticledtor_CParticle24_next,
                (LPVOID)cast_pointer_function(CParticledtor_CParticle24_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CParticle::*)())&CParticle::dtor_CParticle)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
