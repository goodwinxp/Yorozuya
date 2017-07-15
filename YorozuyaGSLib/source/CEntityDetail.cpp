#include <CEntityDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CEntityAddFlag1_ptr CEntityAddFlag1_next(nullptr);
        Info::CEntityAddFlag1_clbk CEntityAddFlag1_user(nullptr);
        
        Info::CEntityDrawEntity2_ptr CEntityDrawEntity2_next(nullptr);
        Info::CEntityDrawEntity2_clbk CEntityDrawEntity2_user(nullptr);
        
        Info::CEntityDrawEntityVS3_ptr CEntityDrawEntityVS3_next(nullptr);
        Info::CEntityDrawEntityVS3_clbk CEntityDrawEntityVS3_user(nullptr);
        
        Info::CEntityDrawOneMatGroup4_ptr CEntityDrawOneMatGroup4_next(nullptr);
        Info::CEntityDrawOneMatGroup4_clbk CEntityDrawOneMatGroup4_user(nullptr);
        
        Info::CEntityDrawOneMatGroupVS5_ptr CEntityDrawOneMatGroupVS5_next(nullptr);
        Info::CEntityDrawOneMatGroupVS5_clbk CEntityDrawOneMatGroupVS5_user(nullptr);
        
        Info::CEntityGetAnimationMatrix6_ptr CEntityGetAnimationMatrix6_next(nullptr);
        Info::CEntityGetAnimationMatrix6_clbk CEntityGetAnimationMatrix6_user(nullptr);
        
        Info::CEntityGetMatGroup7_ptr CEntityGetMatGroup7_next(nullptr);
        Info::CEntityGetMatGroup7_clbk CEntityGetMatGroup7_user(nullptr);
        
        Info::CEntityGetMatGroupNum8_ptr CEntityGetMatGroupNum8_next(nullptr);
        Info::CEntityGetMatGroupNum8_clbk CEntityGetMatGroupNum8_user(nullptr);
        
        Info::CEntityGetMatNum9_ptr CEntityGetMatNum9_next(nullptr);
        Info::CEntityGetMatNum9_clbk CEntityGetMatNum9_user(nullptr);
        
        Info::CEntityGetObjectA10_ptr CEntityGetObjectA10_next(nullptr);
        Info::CEntityGetObjectA10_clbk CEntityGetObjectA10_user(nullptr);
        
        Info::CEntityGetStaticIndexedBuffer11_ptr CEntityGetStaticIndexedBuffer11_next(nullptr);
        Info::CEntityGetStaticIndexedBuffer11_clbk CEntityGetStaticIndexedBuffer11_user(nullptr);
        
        Info::CEntityGetStaticVertexBuffer12_ptr CEntityGetStaticVertexBuffer12_next(nullptr);
        Info::CEntityGetStaticVertexBuffer12_clbk CEntityGetStaticVertexBuffer12_user(nullptr);
        
        Info::CEntityGetUsedVertexBufferSize13_ptr CEntityGetUsedVertexBufferSize13_next(nullptr);
        Info::CEntityGetUsedVertexBufferSize13_clbk CEntityGetUsedVertexBufferSize13_user(nullptr);
        
        Info::CEntityIsAlpha14_ptr CEntityIsAlpha14_next(nullptr);
        Info::CEntityIsAlpha14_clbk CEntityIsAlpha14_user(nullptr);
        
        Info::CEntityIsEnableShaderID15_ptr CEntityIsEnableShaderID15_next(nullptr);
        Info::CEntityIsEnableShaderID15_clbk CEntityIsEnableShaderID15_user(nullptr);
        
        Info::CEntityIsFirstAlpha16_ptr CEntityIsFirstAlpha16_next(nullptr);
        Info::CEntityIsFirstAlpha16_clbk CEntityIsFirstAlpha16_user(nullptr);
        
        Info::CEntityLoadEntity17_ptr CEntityLoadEntity17_next(nullptr);
        Info::CEntityLoadEntity17_clbk CEntityLoadEntity17_user(nullptr);
        
        Info::CEntityOnceDrawEntity18_ptr CEntityOnceDrawEntity18_next(nullptr);
        Info::CEntityOnceDrawEntity18_clbk CEntityOnceDrawEntity18_user(nullptr);
        
        Info::CEntityPrepareAnimation19_ptr CEntityPrepareAnimation19_next(nullptr);
        Info::CEntityPrepareAnimation19_clbk CEntityPrepareAnimation19_user(nullptr);
        
        Info::CEntityReleaseEntity20_ptr CEntityReleaseEntity20_next(nullptr);
        Info::CEntityReleaseEntity20_clbk CEntityReleaseEntity20_user(nullptr);
        
        Info::CEntityReleaseTexMem21_ptr CEntityReleaseTexMem21_next(nullptr);
        Info::CEntityReleaseTexMem21_clbk CEntityReleaseTexMem21_user(nullptr);
        
        Info::CEntityRestoreTexMem22_ptr CEntityRestoreTexMem22_next(nullptr);
        Info::CEntityRestoreTexMem22_clbk CEntityRestoreTexMem22_user(nullptr);
        
        Info::CEntitySetMapColor23_ptr CEntitySetMapColor23_next(nullptr);
        Info::CEntitySetMapColor23_clbk CEntitySetMapColor23_user(nullptr);
        
        Info::CEntitySetMaterialAndLight24_ptr CEntitySetMaterialAndLight24_next(nullptr);
        Info::CEntitySetMaterialAndLight24_clbk CEntitySetMaterialAndLight24_user(nullptr);
        
        Info::CEntitySetVertexShaderID25_ptr CEntitySetVertexShaderID25_next(nullptr);
        Info::CEntitySetVertexShaderID25_clbk CEntitySetVertexShaderID25_user(nullptr);
        
        
        Info::CEntitydtor_CEntity27_ptr CEntitydtor_CEntity27_next(nullptr);
        Info::CEntitydtor_CEntity27_clbk CEntitydtor_CEntity27_user(nullptr);
        
        void CEntityAddFlag1_wrapper(struct CEntity* _this, uint32_t arg_0)
        {
           CEntityAddFlag1_user(_this, arg_0, CEntityAddFlag1_next);
        };
        int64_t CEntityDrawEntity2_wrapper(struct CEntity* _this, float** arg_0, uint32_t arg_1, float arg_2)
        {
           return CEntityDrawEntity2_user(_this, arg_0, arg_1, arg_2, CEntityDrawEntity2_next);
        };
        int64_t CEntityDrawEntityVS3_wrapper(struct CEntity* _this, struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2)
        {
           return CEntityDrawEntityVS3_user(_this, arg_0, arg_1, arg_2, CEntityDrawEntityVS3_next);
        };
        void CEntityDrawOneMatGroup4_wrapper(struct CEntity* _this, struct _ENTITY_M_GROUP* arg_0)
        {
           CEntityDrawOneMatGroup4_user(_this, arg_0, CEntityDrawOneMatGroup4_next);
        };
        void CEntityDrawOneMatGroupVS5_wrapper(struct CEntity* _this, struct _ENTITY_M_GROUP* arg_0)
        {
           CEntityDrawOneMatGroupVS5_user(_this, arg_0, CEntityDrawOneMatGroupVS5_next);
        };
        void CEntityGetAnimationMatrix6_wrapper(struct CEntity* _this, float** arg_0, struct _ANI_OBJECT* arg_1, float arg_2)
        {
           CEntityGetAnimationMatrix6_user(_this, arg_0, arg_1, arg_2, CEntityGetAnimationMatrix6_next);
        };
        struct _ENTITY_M_GROUP* CEntityGetMatGroup7_wrapper(struct CEntity* _this)
        {
           return CEntityGetMatGroup7_user(_this, CEntityGetMatGroup7_next);
        };
        int64_t CEntityGetMatGroupNum8_wrapper(struct CEntity* _this)
        {
           return CEntityGetMatGroupNum8_user(_this, CEntityGetMatGroupNum8_next);
        };
        int64_t CEntityGetMatNum9_wrapper(struct CEntity* _this)
        {
           return CEntityGetMatNum9_user(_this, CEntityGetMatNum9_next);
        };
        struct _ANI_OBJECT* CEntityGetObjectA10_wrapper(struct CEntity* _this)
        {
           return CEntityGetObjectA10_user(_this, CEntityGetObjectA10_next);
        };
        struct CIndexBuffer* CEntityGetStaticIndexedBuffer11_wrapper(struct CEntity* _this)
        {
           return CEntityGetStaticIndexedBuffer11_user(_this, CEntityGetStaticIndexedBuffer11_next);
        };
        struct CVertexBuffer* CEntityGetStaticVertexBuffer12_wrapper(struct CEntity* _this)
        {
           return CEntityGetStaticVertexBuffer12_user(_this, CEntityGetStaticVertexBuffer12_next);
        };
        int64_t CEntityGetUsedVertexBufferSize13_wrapper(struct CEntity* _this)
        {
           return CEntityGetUsedVertexBufferSize13_user(_this, CEntityGetUsedVertexBufferSize13_next);
        };
        int64_t CEntityIsAlpha14_wrapper(struct CEntity* _this)
        {
           return CEntityIsAlpha14_user(_this, CEntityIsAlpha14_next);
        };
        int64_t CEntityIsEnableShaderID15_wrapper(struct CEntity* _this, uint32_t arg_0)
        {
           return CEntityIsEnableShaderID15_user(_this, arg_0, CEntityIsEnableShaderID15_next);
        };
        int64_t CEntityIsFirstAlpha16_wrapper(struct CEntity* _this)
        {
           return CEntityIsFirstAlpha16_user(_this, CEntityIsFirstAlpha16_next);
        };
        int64_t CEntityLoadEntity17_wrapper(struct CEntity* _this, char* arg_0, uint32_t arg_1)
        {
           return CEntityLoadEntity17_user(_this, arg_0, arg_1, CEntityLoadEntity17_next);
        };
        int64_t CEntityOnceDrawEntity18_wrapper(struct CEntity* _this, float** arg_0, uint32_t arg_1)
        {
           return CEntityOnceDrawEntity18_user(_this, arg_0, arg_1, CEntityOnceDrawEntity18_next);
        };
        void CEntityPrepareAnimation19_wrapper(struct CEntity* _this)
        {
           CEntityPrepareAnimation19_user(_this, CEntityPrepareAnimation19_next);
        };
        void CEntityReleaseEntity20_wrapper(struct CEntity* _this)
        {
           CEntityReleaseEntity20_user(_this, CEntityReleaseEntity20_next);
        };
        void CEntityReleaseTexMem21_wrapper(struct CEntity* _this)
        {
           CEntityReleaseTexMem21_user(_this, CEntityReleaseTexMem21_next);
        };
        void CEntityRestoreTexMem22_wrapper(struct CEntity* _this)
        {
           CEntityRestoreTexMem22_user(_this, CEntityRestoreTexMem22_next);
        };
        void CEntitySetMapColor23_wrapper(struct CEntity* _this, uint32_t arg_0)
        {
           CEntitySetMapColor23_user(_this, arg_0, CEntitySetMapColor23_next);
        };
        void CEntitySetMaterialAndLight24_wrapper(struct CEntity* _this, uint32_t arg_0)
        {
           CEntitySetMaterialAndLight24_user(_this, arg_0, CEntitySetMaterialAndLight24_next);
        };
        void CEntitySetVertexShaderID25_wrapper(struct CEntity* _this, struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2)
        {
           CEntitySetVertexShaderID25_user(_this, arg_0, arg_1, arg_2, CEntitySetVertexShaderID25_next);
        };
        
        int64_t CEntitydtor_CEntity27_wrapper(struct CEntity* _this)
        {
           return CEntitydtor_CEntity27_user(_this, CEntitydtor_CEntity27_next);
        };
        
        ::std::array<hook_record, 26> CEntity_functions = 
        {
            _hook_record {
                (LPVOID)0x14051d530L,
                (LPVOID *)&CEntityAddFlag1_user,
                (LPVOID *)&CEntityAddFlag1_next,
                (LPVOID)cast_pointer_function(CEntityAddFlag1_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(uint32_t))&CEntity::AddFlag)
            },
            _hook_record {
                (LPVOID)0x14051efb0L,
                (LPVOID *)&CEntityDrawEntity2_user,
                (LPVOID *)&CEntityDrawEntity2_next,
                (LPVOID)cast_pointer_function(CEntityDrawEntity2_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)(float**, uint32_t, float))&CEntity::DrawEntity)
            },
            _hook_record {
                (LPVOID)0x14051f6f0L,
                (LPVOID *)&CEntityDrawEntityVS3_user,
                (LPVOID *)&CEntityDrawEntityVS3_next,
                (LPVOID)cast_pointer_function(CEntityDrawEntityVS3_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)(struct _ENTITY_LIST*, float**, uint32_t))&CEntity::DrawEntityVS)
            },
            _hook_record {
                (LPVOID)0x14051e8b0L,
                (LPVOID *)&CEntityDrawOneMatGroup4_user,
                (LPVOID *)&CEntityDrawOneMatGroup4_next,
                (LPVOID)cast_pointer_function(CEntityDrawOneMatGroup4_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(struct _ENTITY_M_GROUP*))&CEntity::DrawOneMatGroup)
            },
            _hook_record {
                (LPVOID)0x14051f3a0L,
                (LPVOID *)&CEntityDrawOneMatGroupVS5_user,
                (LPVOID *)&CEntityDrawOneMatGroupVS5_next,
                (LPVOID)cast_pointer_function(CEntityDrawOneMatGroupVS5_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(struct _ENTITY_M_GROUP*))&CEntity::DrawOneMatGroupVS)
            },
            _hook_record {
                (LPVOID)0x14051d0a0L,
                (LPVOID *)&CEntityGetAnimationMatrix6_user,
                (LPVOID *)&CEntityGetAnimationMatrix6_next,
                (LPVOID)cast_pointer_function(CEntityGetAnimationMatrix6_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(float**, struct _ANI_OBJECT*, float))&CEntity::GetAnimationMatrix)
            },
            _hook_record {
                (LPVOID)0x1404f5910L,
                (LPVOID *)&CEntityGetMatGroup7_user,
                (LPVOID *)&CEntityGetMatGroup7_next,
                (LPVOID)cast_pointer_function(CEntityGetMatGroup7_wrapper),
                (LPVOID)cast_pointer_function((struct _ENTITY_M_GROUP*(CEntity::*)())&CEntity::GetMatGroup)
            },
            _hook_record {
                (LPVOID)0x1404f58f0L,
                (LPVOID *)&CEntityGetMatGroupNum8_user,
                (LPVOID *)&CEntityGetMatGroupNum8_next,
                (LPVOID)cast_pointer_function(CEntityGetMatGroupNum8_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)())&CEntity::GetMatGroupNum)
            },
            _hook_record {
                (LPVOID)0x1404f5900L,
                (LPVOID *)&CEntityGetMatNum9_user,
                (LPVOID *)&CEntityGetMatNum9_next,
                (LPVOID)cast_pointer_function(CEntityGetMatNum9_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)())&CEntity::GetMatNum)
            },
            _hook_record {
                (LPVOID)0x1404f58e0L,
                (LPVOID *)&CEntityGetObjectA10_user,
                (LPVOID *)&CEntityGetObjectA10_next,
                (LPVOID)cast_pointer_function(CEntityGetObjectA10_wrapper),
                (LPVOID)cast_pointer_function((struct _ANI_OBJECT*(CEntity::*)())&CEntity::GetObjectA)
            },
            _hook_record {
                (LPVOID)0x1404f5930L,
                (LPVOID *)&CEntityGetStaticIndexedBuffer11_user,
                (LPVOID *)&CEntityGetStaticIndexedBuffer11_next,
                (LPVOID)cast_pointer_function(CEntityGetStaticIndexedBuffer11_wrapper),
                (LPVOID)cast_pointer_function((struct CIndexBuffer*(CEntity::*)())&CEntity::GetStaticIndexedBuffer)
            },
            _hook_record {
                (LPVOID)0x1404f5920L,
                (LPVOID *)&CEntityGetStaticVertexBuffer12_user,
                (LPVOID *)&CEntityGetStaticVertexBuffer12_next,
                (LPVOID)cast_pointer_function(CEntityGetStaticVertexBuffer12_wrapper),
                (LPVOID)cast_pointer_function((struct CVertexBuffer*(CEntity::*)())&CEntity::GetStaticVertexBuffer)
            },
            _hook_record {
                (LPVOID)0x14051d090L,
                (LPVOID *)&CEntityGetUsedVertexBufferSize13_user,
                (LPVOID *)&CEntityGetUsedVertexBufferSize13_next,
                (LPVOID)cast_pointer_function(CEntityGetUsedVertexBufferSize13_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)())&CEntity::GetUsedVertexBufferSize)
            },
            _hook_record {
                (LPVOID)0x1404f6150L,
                (LPVOID *)&CEntityIsAlpha14_user,
                (LPVOID *)&CEntityIsAlpha14_next,
                (LPVOID)cast_pointer_function(CEntityIsAlpha14_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)())&CEntity::IsAlpha)
            },
            _hook_record {
                (LPVOID)0x14051f550L,
                (LPVOID *)&CEntityIsEnableShaderID15_user,
                (LPVOID *)&CEntityIsEnableShaderID15_next,
                (LPVOID)cast_pointer_function(CEntityIsEnableShaderID15_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)(uint32_t))&CEntity::IsEnableShaderID)
            },
            _hook_record {
                (LPVOID)0x14051d6b0L,
                (LPVOID *)&CEntityIsFirstAlpha16_user,
                (LPVOID *)&CEntityIsFirstAlpha16_next,
                (LPVOID)cast_pointer_function(CEntityIsFirstAlpha16_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)())&CEntity::IsFirstAlpha)
            },
            _hook_record {
                (LPVOID)0x14051d770L,
                (LPVOID *)&CEntityLoadEntity17_user,
                (LPVOID *)&CEntityLoadEntity17_next,
                (LPVOID)cast_pointer_function(CEntityLoadEntity17_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)(char*, uint32_t))&CEntity::LoadEntity)
            },
            _hook_record {
                (LPVOID)0x14051f340L,
                (LPVOID *)&CEntityOnceDrawEntity18_user,
                (LPVOID *)&CEntityOnceDrawEntity18_next,
                (LPVOID)cast_pointer_function(CEntityOnceDrawEntity18_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)(float**, uint32_t))&CEntity::OnceDrawEntity)
            },
            _hook_record {
                (LPVOID)0x14051d540L,
                (LPVOID *)&CEntityPrepareAnimation19_user,
                (LPVOID *)&CEntityPrepareAnimation19_next,
                (LPVOID)cast_pointer_function(CEntityPrepareAnimation19_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)())&CEntity::PrepareAnimation)
            },
            _hook_record {
                (LPVOID)0x14051d6e0L,
                (LPVOID *)&CEntityReleaseEntity20_user,
                (LPVOID *)&CEntityReleaseEntity20_next,
                (LPVOID)cast_pointer_function(CEntityReleaseEntity20_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)())&CEntity::ReleaseEntity)
            },
            _hook_record {
                (LPVOID)0x14051d600L,
                (LPVOID *)&CEntityReleaseTexMem21_user,
                (LPVOID *)&CEntityReleaseTexMem21_next,
                (LPVOID)cast_pointer_function(CEntityReleaseTexMem21_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)())&CEntity::ReleaseTexMem)
            },
            _hook_record {
                (LPVOID)0x14051d590L,
                (LPVOID *)&CEntityRestoreTexMem22_user,
                (LPVOID *)&CEntityRestoreTexMem22_next,
                (LPVOID)cast_pointer_function(CEntityRestoreTexMem22_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)())&CEntity::RestoreTexMem)
            },
            _hook_record {
                (LPVOID)0x1404f6160L,
                (LPVOID *)&CEntitySetMapColor23_user,
                (LPVOID *)&CEntitySetMapColor23_next,
                (LPVOID)cast_pointer_function(CEntitySetMapColor23_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(uint32_t))&CEntity::SetMapColor)
            },
            _hook_record {
                (LPVOID)0x14051eb60L,
                (LPVOID *)&CEntitySetMaterialAndLight24_user,
                (LPVOID *)&CEntitySetMaterialAndLight24_next,
                (LPVOID)cast_pointer_function(CEntitySetMaterialAndLight24_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(uint32_t))&CEntity::SetMaterialAndLight)
            },
            _hook_record {
                (LPVOID)0x14051f580L,
                (LPVOID *)&CEntitySetVertexShaderID25_user,
                (LPVOID *)&CEntitySetVertexShaderID25_next,
                (LPVOID)cast_pointer_function(CEntitySetVertexShaderID25_wrapper),
                (LPVOID)cast_pointer_function((void(CEntity::*)(struct _ENTITY_LIST*, float**, uint32_t))&CEntity::SetVertexShaderID)
            },
            _hook_record {
                (LPVOID)0x14051d030L,
                (LPVOID *)&CEntitydtor_CEntity27_user,
                (LPVOID *)&CEntitydtor_CEntity27_next,
                (LPVOID)cast_pointer_function(CEntitydtor_CEntity27_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CEntity::*)())&CEntity::dtor_CEntity)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
