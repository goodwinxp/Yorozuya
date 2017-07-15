#include <CAniCamera.hpp>


START_ATF_NAMESPACE
    uint32_t CAniCamera::GetCameraIndex(char* arg_0)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CAniCamera*, char*);
        return (org_ptr(0x14050e600L))(this, arg_0);
    };
    char* CAniCamera::GetCameraName(uint32_t arg_0)
    {
        using org_ptr = char* (WINAPIV*)(struct CAniCamera*, uint32_t);
        return (org_ptr(0x14050e5e0L))(this, arg_0);
    };
    uint32_t CAniCamera::GetDummyID(char* arg_0, int arg_1)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CAniCamera*, char*, int);
        return (org_ptr(0x14050e6e0L))(this, arg_0, arg_1);
    };
    void CAniCamera::GetDummyMatrix(float** arg_0, uint32_t arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CAniCamera*, float**, uint32_t, float);
        (org_ptr(0x14050ea00L))(this, arg_0, arg_1, arg_2);
    };
    void CAniCamera::GetDummyMatrixSub(float** arg_0, uint32_t arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CAniCamera*, float**, uint32_t, float);
        (org_ptr(0x14050e950L))(this, arg_0, arg_1, arg_2);
    };
    char* CAniCamera::GetDummyParentID(uint32_t arg_0)
    {
        using org_ptr = char* (WINAPIV*)(struct CAniCamera*, uint32_t);
        return (org_ptr(0x14050e6c0L))(this, arg_0);
    };
    float* CAniCamera::GetMatrixAniCamera(float arg_0)
    {
        using org_ptr = float* (WINAPIV*)(struct CAniCamera*, float);
        return (org_ptr(0x14050eab0L))(this, arg_0);
    };
    int64_t CAniCamera::IsLoadedAniCamera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        return (org_ptr(0x14050e5d0L))(this);
    };
    void CAniCamera::LoadAniCamera(char* Filename)
    {
        using org_ptr = void (WINAPIV*)(struct CAniCamera*, char*);
        (org_ptr(0x14050efb0L))(this, Filename);
    };
    int64_t CAniCamera::PlayAniCamera(float** arg_0, float arg_1, int arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAniCamera*, float**, float, int);
        return (org_ptr(0x14050ed60L))(this, arg_0, arg_1, arg_2);
    };
    void CAniCamera::ReleaseAniCamera()
    {
        using org_ptr = void (WINAPIV*)(struct CAniCamera*);
        (org_ptr(0x14050e810L))(this);
    };
    int64_t CAniCamera::SetExtCamAni()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        return (org_ptr(0x14050ef00L))(this);
    };
    void CAniCamera::SetNowFrame(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CAniCamera*, float);
        (org_ptr(0x14050ed20L))(this, arg_0);
    };
    void CAniCamera::SetPrePlayCamera(uint32_t arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
    {
        using org_ptr = void (WINAPIV*)(struct CAniCamera*, uint32_t, uint32_t, uint32_t, uint32_t);
        (org_ptr(0x14050ec80L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    CAniCamera::~CAniCamera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        (org_ptr(0x14050e5c0L))(this);
    };
    int64_t CAniCamera::dtor_CAniCamera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        return (org_ptr(0x14050e5c0L))(this);
    };
END_ATF_NAMESPACE
