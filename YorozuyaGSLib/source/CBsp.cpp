#include <CBsp.hpp>


START_ATF_NAMESPACE
    CBsp::CBsp()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f62a0L))(this);
    };
    int64_t CBsp::ctor_CBsp()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*);
        return (org_ptr(0x1404f62a0L))(this);
    };
    void CBsp::CalcEntitiesMainColor()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f9bd0L))(this);
    };
    void CBsp::CalcObjectLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fdca0L))(this);
    };
    int64_t CBsp::CanYouGoThere(float* arg_0, float* arg_1, float** arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*, float**);
        return (org_ptr(0x1404e7580L))(this, arg_0, arg_1, arg_2);
    };
    void CBsp::ClearVariable()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f6190L))(this);
    };
    void CBsp::DrawAlphaRender(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*);
        (org_ptr(0x1404fbe80L))(this, arg_0);
    };
    void CBsp::DrawBspRender()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fbd10L))(this);
    };
    void CBsp::DrawCollisionPoly()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f2540L))(this);
    };
    void CBsp::DrawDynamicLightSub(float* arg_0, float* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, float*);
        (org_ptr(0x1404fedb0L))(this, arg_0, arg_1);
    };
    void CBsp::DrawDynamicLights()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404ff640L))(this);
    };
    void CBsp::DrawLeafBBox()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fc9c0L))(this);
    };
    void CBsp::DrawLeafCollisionPoly(int16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int16_t);
        (org_ptr(0x1404f2ae0L))(this, arg_0);
    };
    void CBsp::DrawMagicLightSub(float* arg_0, float* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, float*);
        (org_ptr(0x1404ff190L))(this, arg_0, arg_1);
    };
    void CBsp::DrawMapEntitiesRender()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fbbb0L))(this);
    };
    void CBsp::DrawMatBBox()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fd0f0L))(this);
    };
    void CBsp::DrawShadowRender(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, float*, float*);
        (org_ptr(0x1404fe7c0L))(this, arg_0, arg_1, arg_2);
    };
    int CBsp::EdgeTest(float* arg_0, int arg_1)
    {
        using org_ptr = int (WINAPIV*)(struct CBsp*, float*, int);
        return (org_ptr(0x14050c910L))(this, arg_0, arg_1);
    };
    void CBsp::FastWalkNodeForLeafListFromBBox(int8_t arg_0, int16_t arg_1, int16_t arg_2, float** arg_3)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int8_t, int16_t, int16_t, float**);
        (org_ptr(0x1404fc450L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    void CBsp::FrameMoveEnvironment()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f2ff0L))(this);
    };
    void CBsp::FrameMoveMapEntities()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fb7d0L))(this);
    };
    float CBsp::GetBestYposInLeaf(float* arg_0, float* arg_1, float arg_2, float arg_3, int arg_4)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, float*, float, float, int);
        return (org_ptr(0x1404e4720L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    void CBsp::GetBspObjectMatrix(float** arg_0, uint16_t arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float**, uint16_t);
        (org_ptr(0x1404fa360L))(this, arg_0, arg_1);
    };
    uint32_t CBsp::GetColorFromPoint(int arg_0, float* arg_1)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CBsp*, int, float*);
        return (org_ptr(0x1404e3b20L))(this, arg_0, arg_1);
    };
    void* CBsp::GetDynamicVertexBuffer()
    {
        using org_ptr = void* (WINAPIV*)(struct CBsp*);
        return (org_ptr(0x1404f64a0L))(this);
    };
    uint32_t CBsp::GetEventAnimationState(uint16_t arg_0)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CBsp*, uint16_t);
        return (org_ptr(0x1404fa310L))(this, arg_0);
    };
    void CBsp::GetFaceFrontPoint(float** arg_0, int arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float**, int);
        (org_ptr(0x14050d7a0L))(this, arg_0, arg_1);
    };
    void CBsp::GetFastLeafListFromBBox(float* arg_0, float* arg_1, int32_t* arg_2, int16_t* arg_3, uint32_t arg_4)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, float*, int32_t*, int16_t*, uint32_t);
        (org_ptr(0x1404fc8b0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int64_t CBsp::GetFinalPath(void* arg_0, float* arg_1, float** arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, void*, float*, float**);
        return (org_ptr(0x14050ded0L))(this, arg_0, arg_1, arg_2);
    };
    float CBsp::GetFirstYpos(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, float*, float*);
        return (org_ptr(0x1404e7500L))(this, arg_0, arg_1, arg_2);
    };
    float CBsp::GetFirstYpos(float* arg_0, int arg_1)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, int);
        return (org_ptr(0x1404e5620L))(this, arg_0, arg_1);
    };
    float CBsp::GetFirstYpos(float* arg_0, int16_t* arg_1, int16_t* arg_2)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, int16_t*, int16_t*);
        return (org_ptr(0x1404e5aa0L))(this, arg_0, arg_1, arg_2);
    };
    void CBsp::GetHeight(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*);
        (org_ptr(0x1404fbfa0L))(this, arg_0);
    };
    void CBsp::GetLeafList(float* arg_0, float* arg_1, int32_t* arg_2, int16_t* arg_3, uint32_t arg_4)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, float*, int32_t*, int16_t*, uint32_t);
        (org_ptr(0x1404fc350L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int16_t CBsp::GetLeafNum(float* arg_0)
    {
        using org_ptr = int16_t (WINAPIV*)(struct CBsp*, float*);
        return (org_ptr(0x1404fb510L))(this, arg_0);
    };
    uint32_t CBsp::GetLightFromPoint(float* arg_0, uint32_t arg_1)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CBsp*, float*, uint32_t);
        return (org_ptr(0x1404e50c0L))(this, arg_0, arg_1);
    };
    void CBsp::GetLightMapUVFromPoint(float* arg_0, int arg_1, float* arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, int, float*);
        (org_ptr(0x1404e3370L))(this, arg_0, arg_1, arg_2);
    };
    struct _BSP_MAT_GROUP* CBsp::GetMatGroup()
    {
        using org_ptr = struct _BSP_MAT_GROUP* (WINAPIV*)(struct CBsp*);
        return (org_ptr(0x1404f6490L))(this);
    };
    float CBsp::GetMatGroupPoint(uint16_t arg_0, float* arg_1)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, uint16_t, float*);
        return (org_ptr(0x1404fbf30L))(this, arg_0, arg_1);
    };
    void CBsp::GetPath(float* arg_0, float* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, float*);
        (org_ptr(0x14050d800L))(this, arg_0, arg_1);
    };
    int64_t CBsp::GetPathCrossPoint(float* arg_0, float* arg_1, float** arg_2, int arg_3, int arg_4)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*, float**, int, int);
        return (org_ptr(0x14050cbb0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    uint32_t CBsp::GetPathFind(float* arg_0, float* arg_1, float** arg_2, uint32_t* arg_3, int arg_4)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CBsp*, float*, float*, float**, uint32_t*, int);
        return (org_ptr(0x14050e210L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int64_t CBsp::GetPointFromScreenRay(float arg_0, float arg_1, float* arg_2, float* arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float, float, float*, float*);
        return (org_ptr(0x1404e75c0L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int64_t CBsp::GetPointFromScreenRayFar(float arg_0, float arg_1, float* arg_2, float* arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float, float, float*, float*);
        return (org_ptr(0x1404e7bd0L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    void CBsp::GetVertexNormal()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f64b0L))(this);
    };
    float CBsp::GetYposInLeaf(float* arg_0, float* arg_1, float arg_2, float arg_3, int arg_4)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, float*, float, float, int);
        return (org_ptr(0x1404e4360L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    float CBsp::GetYposInLeafNoAttr(float* arg_0, float* arg_1, float arg_2, float arg_3, int arg_4)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, float*, float, float, int);
        return (org_ptr(0x1404e4ab0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    float CBsp::GetYposInLeafUseEdgeNormal(float* arg_0, float* arg_1, float arg_2, float arg_3, int arg_4)
    {
        using org_ptr = float (WINAPIV*)(struct CBsp*, float*, float*, float, float, int);
        return (org_ptr(0x1404e4e70L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    void CBsp::HearMapSound()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fd620L))(this);
    };
    int64_t CBsp::IsCollisionFace(float* arg_0, float* arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*);
        return (org_ptr(0x1404e5ee0L))(this, arg_0, arg_1);
    };
    int64_t CBsp::IsCollisionFace(float* arg_0, float* arg_1, float** arg_2, float** arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*, float**, float**);
        return (org_ptr(0x1404e63f0L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int64_t CBsp::IsCollisionFace(float* arg_0, float* arg_1, float** arg_2, float arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*, float**, float);
        return (org_ptr(0x1404e6850L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int64_t CBsp::IsCollisionFaceForServer(float* arg_0, float* arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*);
        return (org_ptr(0x1404e6200L))(this, arg_0, arg_1);
    };
    int64_t CBsp::IsCollisionFaceForServer(float* arg_0, float* arg_1, float** arg_2, float arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*, float**, float);
        return (org_ptr(0x1404e7150L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int64_t CBsp::IsCollisionFromPath(float* arg_0, float* arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*);
        return (org_ptr(0x14050d2a0L))(this, arg_0, arg_1);
    };
    int64_t CBsp::IsExistSelfPoint(int arg_0, int arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, int, int);
        return (org_ptr(0x14050d600L))(this, arg_0, arg_1);
    };
    int64_t CBsp::IsInViewFrustum(uint16_t arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, uint16_t);
        return (org_ptr(0x1404fbce0L))(this, arg_0);
    };
    int64_t CBsp::IsInWater(float* arg_0, float* arg_1, float** arg_2, float arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, float*, float*, float**, float);
        return (org_ptr(0x1404e6d30L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    int64_t CBsp::IsLoaded()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*);
        return (org_ptr(0x140512d00L))(this);
    };
    void CBsp::LoadBsp(char* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, char*);
        (org_ptr(0x1404fe030L))(this, arg_0);
    };
    void CBsp::LoadEntities(struct _READ_MAP_ENTITIES_LIST* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, struct _READ_MAP_ENTITIES_LIST*);
        (org_ptr(0x1404f96c0L))(this, arg_0);
    };
    void CBsp::LoadEnvironment()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f8f70L))(this);
    };
    void CBsp::LoadExtBsp(char* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, char*);
        (org_ptr(0x1404ff7e0L))(this, arg_0);
    };
    void CBsp::LoadSoundEntities(struct _READ_SOUND_ENTITY_LIST* arg_0, struct _READ_SOUND_ENTITIES_LIST* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, struct _READ_SOUND_ENTITY_LIST*, struct _READ_SOUND_ENTITIES_LIST*);
        (org_ptr(0x1404f9200L))(this, arg_0, arg_1);
    };
    void CBsp::LoopInitRenderedMatGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fa020L))(this);
    };
    void CBsp::MakeEdgeNormal()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f6b10L))(this);
    };
    void CBsp::OnlyStoreCollisionStructure(struct _BSP_READ_M_GROUP* arg_0, char** arg_1, int16_t** arg_2, float** arg_3, uint32_t* arg_4, struct _BSP_READ_FACE* arg_5, uint32_t* arg_6)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, struct _BSP_READ_M_GROUP*, char**, int16_t**, float**, uint32_t*, struct _BSP_READ_FACE*, uint32_t*);
        (org_ptr(0x1404f65a0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6);
    };
    void CBsp::PrepareAnimation()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404fb560L))(this);
    };
    void CBsp::PrepareShadowRender(float* arg_0, void* arg_1, float arg_2, uint32_t arg_3, float arg_4, float arg_5)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*, void*, float, uint32_t, float, float);
        (org_ptr(0x1404fbe20L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    void CBsp::ReadDynamicDataExtBsp(FILE* File)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, FILE*);
        (org_ptr(0x1404fdf40L))(this, File);
    };
    void CBsp::ReadDynamicDataFillVertexBuffer(FILE* File)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, FILE*);
        (org_ptr(0x1404f7030L))(this, File);
    };
    void CBsp::ReadyBspRender(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float*);
        (org_ptr(0x1404fe720L))(this, arg_0);
    };
    void CBsp::ReleaseBsp()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f9e80L))(this);
    };
    void CBsp::ReleaseEntities()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f9cb0L))(this);
    };
    void CBsp::ReleaseEnvironment()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f9140L))(this);
    };
    void CBsp::ReleaseSoundEntities()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f9640L))(this);
    };
    void CBsp::RenderCollisionLeaf(int16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int16_t);
        (org_ptr(0x1404faff0L))(this, arg_0);
    };
    void CBsp::RenderEnvironment()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f3540L))(this);
    };
    void CBsp::RenderIndepentMatGroup(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, uint16_t);
        (org_ptr(0x1404fa8a0L))(this, arg_0);
    };
    void CBsp::RenderLeaf(int16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int16_t);
        (org_ptr(0x1404fae40L))(this, arg_0);
    };
    void CBsp::RenderMatGroup(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, uint16_t);
        (org_ptr(0x1404fa560L))(this, arg_0);
    };
    void CBsp::RenderOneEntityRender(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, uint16_t);
        (org_ptr(0x1404fb590L))(this, arg_0);
    };
    void CBsp::RenderReflectionMatGroup(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, uint16_t);
        (org_ptr(0x1404fadb0L))(this, arg_0);
    };
    void CBsp::RenderShadowMatGroup(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, uint16_t);
        (org_ptr(0x1404fa0d0L))(this, arg_0);
    };
    void CBsp::SaveExtBsp(char* arg_0, struct _ADD_BSP_SAVE* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, char*, struct _ADD_BSP_SAVE*);
        (org_ptr(0x1404fdcc0L))(this, arg_0, arg_1);
    };
    void CBsp::SearchNode(int16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int16_t);
        (org_ptr(0x1404fb410L))(this, arg_0);
    };
    int64_t CBsp::SetAllAnimationState(uint32_t arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, uint32_t);
        return (org_ptr(0x1404fa250L))(this, arg_0);
    };
    void CBsp::SetCFNormal()
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f8be0L))(this);
    };
    int64_t CBsp::SetEventAnimationState(uint16_t arg_0, uint32_t arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*, uint16_t, uint32_t);
        return (org_ptr(0x1404fa170L))(this, arg_0, arg_1);
    };
    void CBsp::SetIsLoaded(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int);
        (org_ptr(0x1404dfbd0L))(this, arg_0);
    };
    void CBsp::SubLeafList(float arg_0, struct _BSP_NODE* arg_1, float* arg_2, float* arg_3, int16_t* arg_4, int* arg_5)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float, struct _BSP_NODE*, float*, float*, int16_t*, int*);
        (org_ptr(0x1404fc0d0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    void CBsp::SubLeafListFromBBox(float arg_0, struct _BSP_NODE* arg_1, float** arg_2, int16_t* arg_3, int* arg_4)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, float, struct _BSP_NODE*, float**, int16_t*, int*);
        (org_ptr(0x1404fc3a0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    void CBsp::WalkLeaf(int16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int16_t);
        (org_ptr(0x1404faec0L))(this, arg_0);
    };
    void CBsp::WalkNode(int16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int16_t);
        (org_ptr(0x1404fb2f0L))(this, arg_0);
    };
    void CBsp::WalkNodeForLeafList(int8_t arg_0, int16_t arg_1, int16_t arg_2, float* arg_3, float arg_4)
    {
        using org_ptr = void (WINAPIV*)(struct CBsp*, int8_t, int16_t, int16_t, float*, float);
        (org_ptr(0x1404fc190L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    CBsp::~CBsp()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*);
        (org_ptr(0x1404f63b0L))(this);
    };
    int64_t CBsp::dtor_CBsp()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CBsp*);
        return (org_ptr(0x1404f63b0L))(this);
    };
END_ATF_NAMESPACE
