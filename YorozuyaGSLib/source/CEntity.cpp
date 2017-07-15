#include <CEntity.hpp>


START_ATF_NAMESPACE
    void CEntity::AddFlag(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
        (org_ptr(0x14051d530L))(this, arg_0);
    };
    int64_t CEntity::DrawEntity(float** arg_0, uint32_t arg_1, float arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t, float);
        return (org_ptr(0x14051efb0L))(this, arg_0, arg_1, arg_2);
    };
    int64_t CEntity::DrawEntityVS(struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t);
        return (org_ptr(0x14051f6f0L))(this, arg_0, arg_1, arg_2);
    };
    void CEntity::DrawOneMatGroup(struct _ENTITY_M_GROUP* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*);
        (org_ptr(0x14051e8b0L))(this, arg_0);
    };
    void CEntity::DrawOneMatGroupVS(struct _ENTITY_M_GROUP* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*);
        (org_ptr(0x14051f3a0L))(this, arg_0);
    };
    void CEntity::GetAnimationMatrix(float** arg_0, struct _ANI_OBJECT* arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, float**, struct _ANI_OBJECT*, float);
        (org_ptr(0x14051d0a0L))(this, arg_0, arg_1, arg_2);
    };
    struct _ENTITY_M_GROUP* CEntity::GetMatGroup()
    {
        using org_ptr = struct _ENTITY_M_GROUP* (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f5910L))(this);
    };
    int64_t CEntity::GetMatGroupNum()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f58f0L))(this);
    };
    int64_t CEntity::GetMatNum()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f5900L))(this);
    };
    struct _ANI_OBJECT* CEntity::GetObjectA()
    {
        using org_ptr = struct _ANI_OBJECT* (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f58e0L))(this);
    };
    struct CIndexBuffer* CEntity::GetStaticIndexedBuffer()
    {
        using org_ptr = struct CIndexBuffer* (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f5930L))(this);
    };
    struct CVertexBuffer* CEntity::GetStaticVertexBuffer()
    {
        using org_ptr = struct CVertexBuffer* (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f5920L))(this);
    };
    int64_t CEntity::GetUsedVertexBufferSize()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x14051d090L))(this);
    };
    int64_t CEntity::IsAlpha()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x1404f6150L))(this);
    };
    int64_t CEntity::IsEnableShaderID(uint32_t arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*, uint32_t);
        return (org_ptr(0x14051f550L))(this, arg_0);
    };
    int64_t CEntity::IsFirstAlpha()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x14051d6b0L))(this);
    };
    int64_t CEntity::LoadEntity(char* arg_0, uint32_t arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*, char*, uint32_t);
        return (org_ptr(0x14051d770L))(this, arg_0, arg_1);
    };
    int64_t CEntity::OnceDrawEntity(float** arg_0, uint32_t arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t);
        return (org_ptr(0x14051f340L))(this, arg_0, arg_1);
    };
    void CEntity::PrepareAnimation()
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*);
        (org_ptr(0x14051d540L))(this);
    };
    void CEntity::ReleaseEntity()
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*);
        (org_ptr(0x14051d6e0L))(this);
    };
    void CEntity::ReleaseTexMem()
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*);
        (org_ptr(0x14051d600L))(this);
    };
    void CEntity::RestoreTexMem()
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*);
        (org_ptr(0x14051d590L))(this);
    };
    void CEntity::SetMapColor(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
        (org_ptr(0x1404f6160L))(this, arg_0);
    };
    void CEntity::SetMaterialAndLight(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
        (org_ptr(0x14051eb60L))(this, arg_0);
    };
    void CEntity::SetVertexShaderID(struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t);
        (org_ptr(0x14051f580L))(this, arg_0, arg_1, arg_2);
    };
    CEntity::~CEntity()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        (org_ptr(0x14051d030L))(this);
    };
    int64_t CEntity::dtor_CEntity()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
        return (org_ptr(0x14051d030L))(this);
    };
END_ATF_NAMESPACE
