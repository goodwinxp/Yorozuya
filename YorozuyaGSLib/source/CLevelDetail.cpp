#include <CLevelDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CLevelCalcR3Fog1_ptr CLevelCalcR3Fog1_next(nullptr);
        Info::CLevelCalcR3Fog1_clbk CLevelCalcR3Fog1_user(nullptr);
        
        Info::CLevelDrawBBox2_ptr CLevelDrawBBox2_next(nullptr);
        Info::CLevelDrawBBox2_clbk CLevelDrawBBox2_user(nullptr);
        
        Info::CLevelDrawBBox3_ptr CLevelDrawBBox3_next(nullptr);
        Info::CLevelDrawBBox3_clbk CLevelDrawBBox3_user(nullptr);
        
        Info::CLevelDrawLeafBBox4_ptr CLevelDrawLeafBBox4_next(nullptr);
        Info::CLevelDrawLeafBBox4_clbk CLevelDrawLeafBBox4_user(nullptr);
        
        Info::CLevelDrawMapAlphaRender5_ptr CLevelDrawMapAlphaRender5_next(nullptr);
        Info::CLevelDrawMapAlphaRender5_clbk CLevelDrawMapAlphaRender5_user(nullptr);
        
        Info::CLevelDrawMapEntitiesRender6_ptr CLevelDrawMapEntitiesRender6_next(nullptr);
        Info::CLevelDrawMapEntitiesRender6_clbk CLevelDrawMapEntitiesRender6_user(nullptr);
        
        Info::CLevelDrawMapRender7_ptr CLevelDrawMapRender7_next(nullptr);
        Info::CLevelDrawMapRender7_clbk CLevelDrawMapRender7_user(nullptr);
        
        Info::CLevelDrawMatBBox8_ptr CLevelDrawMatBBox8_next(nullptr);
        Info::CLevelDrawMatBBox8_clbk CLevelDrawMatBBox8_user(nullptr);
        
        Info::CLevelDrawShadowRender9_ptr CLevelDrawShadowRender9_next(nullptr);
        Info::CLevelDrawShadowRender9_clbk CLevelDrawShadowRender9_user(nullptr);
        
        Info::CLevelDrawSkyBoxRender10_ptr CLevelDrawSkyBoxRender10_next(nullptr);
        Info::CLevelDrawSkyBoxRender10_clbk CLevelDrawSkyBoxRender10_user(nullptr);
        
        Info::CLevelDrawTestBox11_ptr CLevelDrawTestBox11_next(nullptr);
        Info::CLevelDrawTestBox11_clbk CLevelDrawTestBox11_user(nullptr);
        
        Info::CLevelFrameMove12_ptr CLevelFrameMove12_next(nullptr);
        Info::CLevelFrameMove12_clbk CLevelFrameMove12_user(nullptr);
        
        Info::CLevelGetEnvironment14_ptr CLevelGetEnvironment14_next(nullptr);
        Info::CLevelGetEnvironment14_clbk CLevelGetEnvironment14_user(nullptr);
        
        Info::CLevelGetFirstYpos15_ptr CLevelGetFirstYpos15_next(nullptr);
        Info::CLevelGetFirstYpos15_clbk CLevelGetFirstYpos15_user(nullptr);
        
        Info::CLevelGetFirstYpos16_ptr CLevelGetFirstYpos16_next(nullptr);
        Info::CLevelGetFirstYpos16_clbk CLevelGetFirstYpos16_user(nullptr);
        
        Info::CLevelGetFirstYpos17_ptr CLevelGetFirstYpos17_next(nullptr);
        Info::CLevelGetFirstYpos17_clbk CLevelGetFirstYpos17_user(nullptr);
        
        Info::CLevelGetFrustumNormalPlane18_ptr CLevelGetFrustumNormalPlane18_next(nullptr);
        Info::CLevelGetFrustumNormalPlane18_clbk CLevelGetFrustumNormalPlane18_user(nullptr);
        
        Info::CLevelGetMapName19_ptr CLevelGetMapName19_next(nullptr);
        Info::CLevelGetMapName19_clbk CLevelGetMapName19_user(nullptr);
        
        Info::CLevelGetNextYpos20_ptr CLevelGetNextYpos20_next(nullptr);
        Info::CLevelGetNextYpos20_clbk CLevelGetNextYpos20_user(nullptr);
        
        Info::CLevelGetNextYposFar21_ptr CLevelGetNextYposFar21_next(nullptr);
        Info::CLevelGetNextYposFar21_clbk CLevelGetNextYposFar21_user(nullptr);
        
        Info::CLevelGetNextYposFarProgress22_ptr CLevelGetNextYposFarProgress22_next(nullptr);
        Info::CLevelGetNextYposFarProgress22_clbk CLevelGetNextYposFarProgress22_user(nullptr);
        
        Info::CLevelGetNextYposForServer23_ptr CLevelGetNextYposForServer23_next(nullptr);
        Info::CLevelGetNextYposForServer23_clbk CLevelGetNextYposForServer23_user(nullptr);
        
        Info::CLevelGetNextYposForServerFar24_ptr CLevelGetNextYposForServerFar24_next(nullptr);
        Info::CLevelGetNextYposForServerFar24_clbk CLevelGetNextYposForServerFar24_user(nullptr);
        
        Info::CLevelGetNextYposNoAttr25_ptr CLevelGetNextYposNoAttr25_next(nullptr);
        Info::CLevelGetNextYposNoAttr25_clbk CLevelGetNextYposNoAttr25_user(nullptr);
        
        Info::CLevelGetPath26_ptr CLevelGetPath26_next(nullptr);
        Info::CLevelGetPath26_clbk CLevelGetPath26_user(nullptr);
        
        Info::CLevelGetPathFromDepth27_ptr CLevelGetPathFromDepth27_next(nullptr);
        Info::CLevelGetPathFromDepth27_clbk CLevelGetPathFromDepth27_user(nullptr);
        
        Info::CLevelGetPointFromScreenRay28_ptr CLevelGetPointFromScreenRay28_next(nullptr);
        Info::CLevelGetPointFromScreenRay28_clbk CLevelGetPointFromScreenRay28_user(nullptr);
        
        Info::CLevelGetPointFromScreenRayFar29_ptr CLevelGetPointFromScreenRayFar29_next(nullptr);
        Info::CLevelGetPointFromScreenRayFar29_clbk CLevelGetPointFromScreenRayFar29_user(nullptr);
        
        Info::CLevelHearMapSound30_ptr CLevelHearMapSound30_next(nullptr);
        Info::CLevelHearMapSound30_clbk CLevelHearMapSound30_user(nullptr);
        
        Info::CLevelIsCollisionRayAABB31_ptr CLevelIsCollisionRayAABB31_next(nullptr);
        Info::CLevelIsCollisionRayAABB31_clbk CLevelIsCollisionRayAABB31_user(nullptr);
        
        Info::CLevelIsLoadedBsp33_ptr CLevelIsLoadedBsp33_next(nullptr);
        Info::CLevelIsLoadedBsp33_clbk CLevelIsLoadedBsp33_user(nullptr);
        
        Info::CLevelLoadLevel34_ptr CLevelLoadLevel34_next(nullptr);
        Info::CLevelLoadLevel34_clbk CLevelLoadLevel34_user(nullptr);
        
        Info::CLevelPrepareShadowRender35_ptr CLevelPrepareShadowRender35_next(nullptr);
        Info::CLevelPrepareShadowRender35_clbk CLevelPrepareShadowRender35_user(nullptr);
        
        Info::CLevelReLoadAllMaterial36_ptr CLevelReLoadAllMaterial36_next(nullptr);
        Info::CLevelReLoadAllMaterial36_clbk CLevelReLoadAllMaterial36_user(nullptr);
        
        Info::CLevelReleaseLevel37_ptr CLevelReleaseLevel37_next(nullptr);
        Info::CLevelReleaseLevel37_clbk CLevelReleaseLevel37_user(nullptr);
        
        Info::CLevelScreenShot38_ptr CLevelScreenShot38_next(nullptr);
        Info::CLevelScreenShot38_clbk CLevelScreenShot38_user(nullptr);
        
        Info::CLevelSetCameraPos39_ptr CLevelSetCameraPos39_next(nullptr);
        Info::CLevelSetCameraPos39_clbk CLevelSetCameraPos39_user(nullptr);
        
        Info::CLevelSetEnvironment40_ptr CLevelSetEnvironment40_next(nullptr);
        Info::CLevelSetEnvironment40_clbk CLevelSetEnvironment40_user(nullptr);
        
        Info::CLevelSetViewMatrix41_ptr CLevelSetViewMatrix41_next(nullptr);
        Info::CLevelSetViewMatrix41_clbk CLevelSetViewMatrix41_user(nullptr);
        
        
        Info::CLeveldtor_CLevel43_ptr CLeveldtor_CLevel43_next(nullptr);
        Info::CLeveldtor_CLevel43_clbk CLeveldtor_CLevel43_user(nullptr);
        
        void CLevelCalcR3Fog1_wrapper(struct CLevel* _this)
        {
           CLevelCalcR3Fog1_user(_this, CLevelCalcR3Fog1_next);
        };
        void CLevelDrawBBox2_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, uint32_t arg_2)
        {
           CLevelDrawBBox2_user(_this, arg_0, arg_1, arg_2, CLevelDrawBBox2_next);
        };
        void CLevelDrawBBox3_wrapper(struct CLevel* _this, int16_t* arg_0, int16_t* arg_1, uint32_t arg_2)
        {
           CLevelDrawBBox3_user(_this, arg_0, arg_1, arg_2, CLevelDrawBBox3_next);
        };
        void CLevelDrawLeafBBox4_wrapper(struct CLevel* _this)
        {
           CLevelDrawLeafBBox4_user(_this, CLevelDrawLeafBBox4_next);
        };
        void CLevelDrawMapAlphaRender5_wrapper(struct CLevel* _this, float* arg_0)
        {
           CLevelDrawMapAlphaRender5_user(_this, arg_0, CLevelDrawMapAlphaRender5_next);
        };
        void CLevelDrawMapEntitiesRender6_wrapper(struct CLevel* _this)
        {
           CLevelDrawMapEntitiesRender6_user(_this, CLevelDrawMapEntitiesRender6_next);
        };
        void CLevelDrawMapRender7_wrapper(struct CLevel* _this)
        {
           CLevelDrawMapRender7_user(_this, CLevelDrawMapRender7_next);
        };
        void CLevelDrawMatBBox8_wrapper(struct CLevel* _this)
        {
           CLevelDrawMatBBox8_user(_this, CLevelDrawMatBBox8_next);
        };
        void CLevelDrawShadowRender9_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, float* arg_2)
        {
           CLevelDrawShadowRender9_user(_this, arg_0, arg_1, arg_2, CLevelDrawShadowRender9_next);
        };
        void CLevelDrawSkyBoxRender10_wrapper(struct CLevel* _this)
        {
           CLevelDrawSkyBoxRender10_user(_this, CLevelDrawSkyBoxRender10_next);
        };
        void CLevelDrawTestBox11_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, uint32_t arg_2)
        {
           CLevelDrawTestBox11_user(_this, arg_0, arg_1, arg_2, CLevelDrawTestBox11_next);
        };
        void CLevelFrameMove12_wrapper(struct CLevel* _this)
        {
           CLevelFrameMove12_user(_this, CLevelFrameMove12_next);
        };
        unsigned int CLevelGetEnvironment14_wrapper(struct CLevel* _this)
        {
           return CLevelGetEnvironment14_user(_this, CLevelGetEnvironment14_next);
        };
        float CLevelGetFirstYpos15_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, float* arg_2)
        {
           return CLevelGetFirstYpos15_user(_this, arg_0, arg_1, arg_2, CLevelGetFirstYpos15_next);
        };
        float CLevelGetFirstYpos16_wrapper(struct CLevel* _this, float* arg_0, int arg_1)
        {
           return CLevelGetFirstYpos16_user(_this, arg_0, arg_1, CLevelGetFirstYpos16_next);
        };
        float CLevelGetFirstYpos17_wrapper(struct CLevel* _this, float* arg_0, int16_t* arg_1, int16_t* arg_2)
        {
           return CLevelGetFirstYpos17_user(_this, arg_0, arg_1, arg_2, CLevelGetFirstYpos17_next);
        };
        void CLevelGetFrustumNormalPlane18_wrapper(struct CLevel* _this, float** arg_0)
        {
           CLevelGetFrustumNormalPlane18_user(_this, arg_0, CLevelGetFrustumNormalPlane18_next);
        };
        char* CLevelGetMapName19_wrapper(struct CLevel* _this)
        {
           return CLevelGetMapName19_user(_this, CLevelGetMapName19_next);
        };
        int CLevelGetNextYpos20_wrapper(struct CLevel* _this, float* arg_0, float* arg_1)
        {
           return CLevelGetNextYpos20_user(_this, arg_0, arg_1, CLevelGetNextYpos20_next);
        };
        int64_t CLevelGetNextYposFar21_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, float* arg_2)
        {
           return CLevelGetNextYposFar21_user(_this, arg_0, arg_1, arg_2, CLevelGetNextYposFar21_next);
        };
        int64_t CLevelGetNextYposFarProgress22_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, float* arg_2)
        {
           return CLevelGetNextYposFarProgress22_user(_this, arg_0, arg_1, arg_2, CLevelGetNextYposFarProgress22_next);
        };
        int CLevelGetNextYposForServer23_wrapper(struct CLevel* _this, float* arg_0, float* arg_1)
        {
           return CLevelGetNextYposForServer23_user(_this, arg_0, arg_1, CLevelGetNextYposForServer23_next);
        };
        int64_t CLevelGetNextYposForServerFar24_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, float* arg_2)
        {
           return CLevelGetNextYposForServerFar24_user(_this, arg_0, arg_1, arg_2, CLevelGetNextYposForServerFar24_next);
        };
        int CLevelGetNextYposNoAttr25_wrapper(struct CLevel* _this, float* arg_0, float* arg_1)
        {
           return CLevelGetNextYposNoAttr25_user(_this, arg_0, arg_1, CLevelGetNextYposNoAttr25_next);
        };
        uint32_t CLevelGetPath26_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, float** arg_2, uint32_t* arg_3, int arg_4)
        {
           return CLevelGetPath26_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, CLevelGetPath26_next);
        };
        uint32_t CLevelGetPathFromDepth27_wrapper(struct CLevel* _this, float* arg_0, float* arg_1, int arg_2, float** arg_3, uint32_t* arg_4)
        {
           return CLevelGetPathFromDepth27_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, CLevelGetPathFromDepth27_next);
        };
        int64_t CLevelGetPointFromScreenRay28_wrapper(struct CLevel* _this, int32_t arg_0, int32_t arg_1, float** arg_2)
        {
           return CLevelGetPointFromScreenRay28_user(_this, arg_0, arg_1, arg_2, CLevelGetPointFromScreenRay28_next);
        };
        int64_t CLevelGetPointFromScreenRayFar29_wrapper(struct CLevel* _this, int32_t arg_0, int32_t arg_1, float** arg_2)
        {
           return CLevelGetPointFromScreenRayFar29_user(_this, arg_0, arg_1, arg_2, CLevelGetPointFromScreenRayFar29_next);
        };
        void CLevelHearMapSound30_wrapper(struct CLevel* _this)
        {
           CLevelHearMapSound30_user(_this, CLevelHearMapSound30_next);
        };
        int CLevelIsCollisionRayAABB31_wrapper(struct CLevel* _this, int32_t arg_0, int32_t arg_1, float* arg_2, float* arg_3, float** arg_4)
        {
           return CLevelIsCollisionRayAABB31_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, CLevelIsCollisionRayAABB31_next);
        };
        int CLevelIsLoadedBsp33_wrapper(struct CLevel* _this)
        {
           return CLevelIsLoadedBsp33_user(_this, CLevelIsLoadedBsp33_next);
        };
        void CLevelLoadLevel34_wrapper(struct CLevel* _this, char* arg_0)
        {
           CLevelLoadLevel34_user(_this, arg_0, CLevelLoadLevel34_next);
        };
        void CLevelPrepareShadowRender35_wrapper(struct CLevel* _this, float* arg_0, void* arg_1, float arg_2, uint32_t arg_3, float arg_4, float arg_5)
        {
           CLevelPrepareShadowRender35_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CLevelPrepareShadowRender35_next);
        };
        void CLevelReLoadAllMaterial36_wrapper(struct CLevel* _this)
        {
           CLevelReLoadAllMaterial36_user(_this, CLevelReLoadAllMaterial36_next);
        };
        void CLevelReleaseLevel37_wrapper(struct CLevel* _this)
        {
           CLevelReleaseLevel37_user(_this, CLevelReleaseLevel37_next);
        };
        void CLevelScreenShot38_wrapper(struct CLevel* _this)
        {
           CLevelScreenShot38_user(_this, CLevelScreenShot38_next);
        };
        void CLevelSetCameraPos39_wrapper(struct CLevel* _this, float* arg_0)
        {
           CLevelSetCameraPos39_user(_this, arg_0, CLevelSetCameraPos39_next);
        };
        void CLevelSetEnvironment40_wrapper(struct CLevel* _this, uint32_t arg_0)
        {
           CLevelSetEnvironment40_user(_this, arg_0, CLevelSetEnvironment40_next);
        };
        void CLevelSetViewMatrix41_wrapper(struct CLevel* _this, struct D3DXMATRIX* arg_0)
        {
           CLevelSetViewMatrix41_user(_this, arg_0, CLevelSetViewMatrix41_next);
        };
        
        int64_t CLeveldtor_CLevel43_wrapper(struct CLevel* _this)
        {
           return CLeveldtor_CLevel43_user(_this, CLeveldtor_CLevel43_next);
        };
        
        ::std::array<hook_record, 40> CLevel_functions = 
        {
            _hook_record {
                (LPVOID)0x1404e26f0L,
                (LPVOID *)&CLevelCalcR3Fog1_user,
                (LPVOID *)&CLevelCalcR3Fog1_next,
                (LPVOID)cast_pointer_function(CLevelCalcR3Fog1_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::CalcR3Fog)
            },
            _hook_record {
                (LPVOID)0x1404e2250L,
                (LPVOID *)&CLevelDrawBBox2_user,
                (LPVOID *)&CLevelDrawBBox2_next,
                (LPVOID)cast_pointer_function(CLevelDrawBBox2_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float*, float*, uint32_t))&CLevel::DrawBBox)
            },
            _hook_record {
                (LPVOID)0x1404e2670L,
                (LPVOID *)&CLevelDrawBBox3_user,
                (LPVOID *)&CLevelDrawBBox3_next,
                (LPVOID)cast_pointer_function(CLevelDrawBBox3_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(int16_t*, int16_t*, uint32_t))&CLevel::DrawBBox)
            },
            _hook_record {
                (LPVOID)0x1404e0b50L,
                (LPVOID *)&CLevelDrawLeafBBox4_user,
                (LPVOID *)&CLevelDrawLeafBBox4_next,
                (LPVOID)cast_pointer_function(CLevelDrawLeafBBox4_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::DrawLeafBBox)
            },
            _hook_record {
                (LPVOID)0x1404e08b0L,
                (LPVOID *)&CLevelDrawMapAlphaRender5_user,
                (LPVOID *)&CLevelDrawMapAlphaRender5_next,
                (LPVOID)cast_pointer_function(CLevelDrawMapAlphaRender5_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float*))&CLevel::DrawMapAlphaRender)
            },
            _hook_record {
                (LPVOID)0x1404e07d0L,
                (LPVOID *)&CLevelDrawMapEntitiesRender6_user,
                (LPVOID *)&CLevelDrawMapEntitiesRender6_next,
                (LPVOID)cast_pointer_function(CLevelDrawMapEntitiesRender6_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::DrawMapEntitiesRender)
            },
            _hook_record {
                (LPVOID)0x1404e0850L,
                (LPVOID *)&CLevelDrawMapRender7_user,
                (LPVOID *)&CLevelDrawMapRender7_next,
                (LPVOID)cast_pointer_function(CLevelDrawMapRender7_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::DrawMapRender)
            },
            _hook_record {
                (LPVOID)0x1404e0b60L,
                (LPVOID *)&CLevelDrawMatBBox8_user,
                (LPVOID *)&CLevelDrawMatBBox8_next,
                (LPVOID)cast_pointer_function(CLevelDrawMatBBox8_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::DrawMatBBox)
            },
            _hook_record {
                (LPVOID)0x1404e0820L,
                (LPVOID *)&CLevelDrawShadowRender9_user,
                (LPVOID *)&CLevelDrawShadowRender9_next,
                (LPVOID)cast_pointer_function(CLevelDrawShadowRender9_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float*, float*, float*))&CLevel::DrawShadowRender)
            },
            _hook_record {
                (LPVOID)0x1404e0700L,
                (LPVOID *)&CLevelDrawSkyBoxRender10_user,
                (LPVOID *)&CLevelDrawSkyBoxRender10_next,
                (LPVOID)cast_pointer_function(CLevelDrawSkyBoxRender10_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::DrawSkyBoxRender)
            },
            _hook_record {
                (LPVOID)0x1404e09b0L,
                (LPVOID *)&CLevelDrawTestBox11_user,
                (LPVOID *)&CLevelDrawTestBox11_next,
                (LPVOID)cast_pointer_function(CLevelDrawTestBox11_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float*, float*, uint32_t))&CLevel::DrawTestBox)
            },
            _hook_record {
                (LPVOID)0x1404e2e60L,
                (LPVOID *)&CLevelFrameMove12_user,
                (LPVOID *)&CLevelFrameMove12_next,
                (LPVOID)cast_pointer_function(CLevelFrameMove12_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::FrameMove)
            },
            _hook_record {
                (LPVOID)0x140074ea0L,
                (LPVOID *)&CLevelGetEnvironment14_user,
                (LPVOID *)&CLevelGetEnvironment14_next,
                (LPVOID)cast_pointer_function(CLevelGetEnvironment14_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CLevel::*)())&CLevel::GetEnvironment)
            },
            _hook_record {
                (LPVOID)0x1404e0b10L,
                (LPVOID *)&CLevelGetFirstYpos15_user,
                (LPVOID *)&CLevelGetFirstYpos15_next,
                (LPVOID)cast_pointer_function(CLevelGetFirstYpos15_wrapper),
                (LPVOID)cast_pointer_function((float(CLevel::*)(float*, float*, float*))&CLevel::GetFirstYpos)
            },
            _hook_record {
                (LPVOID)0x1404e0af0L,
                (LPVOID *)&CLevelGetFirstYpos16_user,
                (LPVOID *)&CLevelGetFirstYpos16_next,
                (LPVOID)cast_pointer_function(CLevelGetFirstYpos16_wrapper),
                (LPVOID)cast_pointer_function((float(CLevel::*)(float*, int))&CLevel::GetFirstYpos)
            },
            _hook_record {
                (LPVOID)0x1404e0b30L,
                (LPVOID *)&CLevelGetFirstYpos17_user,
                (LPVOID *)&CLevelGetFirstYpos17_next,
                (LPVOID)cast_pointer_function(CLevelGetFirstYpos17_wrapper),
                (LPVOID)cast_pointer_function((float(CLevel::*)(float*, int16_t*, int16_t*))&CLevel::GetFirstYpos)
            },
            _hook_record {
                (LPVOID)0x1404e26d0L,
                (LPVOID *)&CLevelGetFrustumNormalPlane18_user,
                (LPVOID *)&CLevelGetFrustumNormalPlane18_next,
                (LPVOID)cast_pointer_function(CLevelGetFrustumNormalPlane18_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float**))&CLevel::GetFrustumNormalPlane)
            },
            _hook_record {
                (LPVOID)0x1404e26c0L,
                (LPVOID *)&CLevelGetMapName19_user,
                (LPVOID *)&CLevelGetMapName19_next,
                (LPVOID)cast_pointer_function(CLevelGetMapName19_wrapper),
                (LPVOID)cast_pointer_function((char*(CLevel::*)())&CLevel::GetMapName)
            },
            _hook_record {
                (LPVOID)0x1404e0b70L,
                (LPVOID *)&CLevelGetNextYpos20_user,
                (LPVOID *)&CLevelGetNextYpos20_next,
                (LPVOID)cast_pointer_function(CLevelGetNextYpos20_wrapper),
                (LPVOID)cast_pointer_function((int(CLevel::*)(float*, float*))&CLevel::GetNextYpos)
            },
            _hook_record {
                (LPVOID)0x1404e1100L,
                (LPVOID *)&CLevelGetNextYposFar21_user,
                (LPVOID *)&CLevelGetNextYposFar21_next,
                (LPVOID)cast_pointer_function(CLevelGetNextYposFar21_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CLevel::*)(float*, float*, float*))&CLevel::GetNextYposFar)
            },
            _hook_record {
                (LPVOID)0x1404e15b0L,
                (LPVOID *)&CLevelGetNextYposFarProgress22_user,
                (LPVOID *)&CLevelGetNextYposFarProgress22_next,
                (LPVOID)cast_pointer_function(CLevelGetNextYposFarProgress22_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CLevel::*)(float*, float*, float*))&CLevel::GetNextYposFarProgress)
            },
            _hook_record {
                (LPVOID)0x1404e0f50L,
                (LPVOID *)&CLevelGetNextYposForServer23_user,
                (LPVOID *)&CLevelGetNextYposForServer23_next,
                (LPVOID)cast_pointer_function(CLevelGetNextYposForServer23_wrapper),
                (LPVOID)cast_pointer_function((int(CLevel::*)(float*, float*))&CLevel::GetNextYposForServer)
            },
            _hook_record {
                (LPVOID)0x1404e1b00L,
                (LPVOID *)&CLevelGetNextYposForServerFar24_user,
                (LPVOID *)&CLevelGetNextYposForServerFar24_next,
                (LPVOID)cast_pointer_function(CLevelGetNextYposForServerFar24_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CLevel::*)(float*, float*, float*))&CLevel::GetNextYposForServerFar)
            },
            _hook_record {
                (LPVOID)0x1404e0d60L,
                (LPVOID *)&CLevelGetNextYposNoAttr25_user,
                (LPVOID *)&CLevelGetNextYposNoAttr25_next,
                (LPVOID)cast_pointer_function(CLevelGetNextYposNoAttr25_wrapper),
                (LPVOID)cast_pointer_function((int(CLevel::*)(float*, float*))&CLevel::GetNextYposNoAttr)
            },
            _hook_record {
                (LPVOID)0x1404e2110L,
                (LPVOID *)&CLevelGetPath26_user,
                (LPVOID *)&CLevelGetPath26_next,
                (LPVOID)cast_pointer_function(CLevelGetPath26_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CLevel::*)(float*, float*, float**, uint32_t*, int))&CLevel::GetPath)
            },
            _hook_record {
                (LPVOID)0x1404e21b0L,
                (LPVOID *)&CLevelGetPathFromDepth27_user,
                (LPVOID *)&CLevelGetPathFromDepth27_next,
                (LPVOID)cast_pointer_function(CLevelGetPathFromDepth27_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CLevel::*)(float*, float*, int, float**, uint32_t*))&CLevel::GetPathFromDepth)
            },
            _hook_record {
                (LPVOID)0x1404e0a70L,
                (LPVOID *)&CLevelGetPointFromScreenRay28_user,
                (LPVOID *)&CLevelGetPointFromScreenRay28_next,
                (LPVOID)cast_pointer_function(CLevelGetPointFromScreenRay28_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CLevel::*)(int32_t, int32_t, float**))&CLevel::GetPointFromScreenRay)
            },
            _hook_record {
                (LPVOID)0x1404e0ab0L,
                (LPVOID *)&CLevelGetPointFromScreenRayFar29_user,
                (LPVOID *)&CLevelGetPointFromScreenRayFar29_next,
                (LPVOID)cast_pointer_function(CLevelGetPointFromScreenRayFar29_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CLevel::*)(int32_t, int32_t, float**))&CLevel::GetPointFromScreenRayFar)
            },
            _hook_record {
                (LPVOID)0x1404e26e0L,
                (LPVOID *)&CLevelHearMapSound30_user,
                (LPVOID *)&CLevelHearMapSound30_next,
                (LPVOID)cast_pointer_function(CLevelHearMapSound30_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::HearMapSound)
            },
            _hook_record {
                (LPVOID)0x1404e1f60L,
                (LPVOID *)&CLevelIsCollisionRayAABB31_user,
                (LPVOID *)&CLevelIsCollisionRayAABB31_next,
                (LPVOID)cast_pointer_function(CLevelIsCollisionRayAABB31_wrapper),
                (LPVOID)cast_pointer_function((int(CLevel::*)(int32_t, int32_t, float*, float*, float**))&CLevel::IsCollisionRayAABB)
            },
            _hook_record {
                (LPVOID)0x140189120L,
                (LPVOID *)&CLevelIsLoadedBsp33_user,
                (LPVOID *)&CLevelIsLoadedBsp33_next,
                (LPVOID)cast_pointer_function(CLevelIsLoadedBsp33_wrapper),
                (LPVOID)cast_pointer_function((int(CLevel::*)())&CLevel::IsLoadedBsp)
            },
            _hook_record {
                (LPVOID)0x1404dfd00L,
                (LPVOID *)&CLevelLoadLevel34_user,
                (LPVOID *)&CLevelLoadLevel34_next,
                (LPVOID)cast_pointer_function(CLevelLoadLevel34_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(char*))&CLevel::LoadLevel)
            },
            _hook_record {
                (LPVOID)0x1404e07e0L,
                (LPVOID *)&CLevelPrepareShadowRender35_user,
                (LPVOID *)&CLevelPrepareShadowRender35_next,
                (LPVOID)cast_pointer_function(CLevelPrepareShadowRender35_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float*, void*, float, uint32_t, float, float))&CLevel::PrepareShadowRender)
            },
            _hook_record {
                (LPVOID)0x1404e0580L,
                (LPVOID *)&CLevelReLoadAllMaterial36_user,
                (LPVOID *)&CLevelReLoadAllMaterial36_next,
                (LPVOID)cast_pointer_function(CLevelReLoadAllMaterial36_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::ReLoadAllMaterial)
            },
            _hook_record {
                (LPVOID)0x1404dfc40L,
                (LPVOID *)&CLevelReleaseLevel37_user,
                (LPVOID *)&CLevelReleaseLevel37_next,
                (LPVOID)cast_pointer_function(CLevelReleaseLevel37_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::ReleaseLevel)
            },
            _hook_record {
                (LPVOID)0x1404e0910L,
                (LPVOID *)&CLevelScreenShot38_user,
                (LPVOID *)&CLevelScreenShot38_next,
                (LPVOID)cast_pointer_function(CLevelScreenShot38_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)())&CLevel::ScreenShot)
            },
            _hook_record {
                (LPVOID)0x1404e0830L,
                (LPVOID *)&CLevelSetCameraPos39_user,
                (LPVOID *)&CLevelSetCameraPos39_next,
                (LPVOID)cast_pointer_function(CLevelSetCameraPos39_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(float*))&CLevel::SetCameraPos)
            },
            _hook_record {
                (LPVOID)0x1404dfce0L,
                (LPVOID *)&CLevelSetEnvironment40_user,
                (LPVOID *)&CLevelSetEnvironment40_next,
                (LPVOID)cast_pointer_function(CLevelSetEnvironment40_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(uint32_t))&CLevel::SetEnvironment)
            },
            _hook_record {
                (LPVOID)0x1404e0610L,
                (LPVOID *)&CLevelSetViewMatrix41_user,
                (LPVOID *)&CLevelSetViewMatrix41_next,
                (LPVOID)cast_pointer_function(CLevelSetViewMatrix41_wrapper),
                (LPVOID)cast_pointer_function((void(CLevel::*)(struct D3DXMATRIX*))&CLevel::SetViewMatrix)
            },
            _hook_record {
                (LPVOID)0x1404e2d90L,
                (LPVOID *)&CLeveldtor_CLevel43_user,
                (LPVOID *)&CLeveldtor_CLevel43_next,
                (LPVOID)cast_pointer_function(CLeveldtor_CLevel43_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CLevel::*)())&CLevel::dtor_CLevel)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
