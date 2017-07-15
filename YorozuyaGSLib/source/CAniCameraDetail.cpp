#include <CAniCameraDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CAniCameraGetCameraIndex1_ptr CAniCameraGetCameraIndex1_next(nullptr);
        Info::CAniCameraGetCameraIndex1_clbk CAniCameraGetCameraIndex1_user(nullptr);
        
        Info::CAniCameraGetCameraName2_ptr CAniCameraGetCameraName2_next(nullptr);
        Info::CAniCameraGetCameraName2_clbk CAniCameraGetCameraName2_user(nullptr);
        
        Info::CAniCameraGetDummyID3_ptr CAniCameraGetDummyID3_next(nullptr);
        Info::CAniCameraGetDummyID3_clbk CAniCameraGetDummyID3_user(nullptr);
        
        Info::CAniCameraGetDummyMatrix4_ptr CAniCameraGetDummyMatrix4_next(nullptr);
        Info::CAniCameraGetDummyMatrix4_clbk CAniCameraGetDummyMatrix4_user(nullptr);
        
        Info::CAniCameraGetDummyMatrixSub5_ptr CAniCameraGetDummyMatrixSub5_next(nullptr);
        Info::CAniCameraGetDummyMatrixSub5_clbk CAniCameraGetDummyMatrixSub5_user(nullptr);
        
        Info::CAniCameraGetDummyParentID6_ptr CAniCameraGetDummyParentID6_next(nullptr);
        Info::CAniCameraGetDummyParentID6_clbk CAniCameraGetDummyParentID6_user(nullptr);
        
        Info::CAniCameraGetMatrixAniCamera7_ptr CAniCameraGetMatrixAniCamera7_next(nullptr);
        Info::CAniCameraGetMatrixAniCamera7_clbk CAniCameraGetMatrixAniCamera7_user(nullptr);
        
        Info::CAniCameraIsLoadedAniCamera8_ptr CAniCameraIsLoadedAniCamera8_next(nullptr);
        Info::CAniCameraIsLoadedAniCamera8_clbk CAniCameraIsLoadedAniCamera8_user(nullptr);
        
        Info::CAniCameraLoadAniCamera9_ptr CAniCameraLoadAniCamera9_next(nullptr);
        Info::CAniCameraLoadAniCamera9_clbk CAniCameraLoadAniCamera9_user(nullptr);
        
        Info::CAniCameraPlayAniCamera10_ptr CAniCameraPlayAniCamera10_next(nullptr);
        Info::CAniCameraPlayAniCamera10_clbk CAniCameraPlayAniCamera10_user(nullptr);
        
        Info::CAniCameraReleaseAniCamera11_ptr CAniCameraReleaseAniCamera11_next(nullptr);
        Info::CAniCameraReleaseAniCamera11_clbk CAniCameraReleaseAniCamera11_user(nullptr);
        
        Info::CAniCameraSetExtCamAni12_ptr CAniCameraSetExtCamAni12_next(nullptr);
        Info::CAniCameraSetExtCamAni12_clbk CAniCameraSetExtCamAni12_user(nullptr);
        
        Info::CAniCameraSetNowFrame13_ptr CAniCameraSetNowFrame13_next(nullptr);
        Info::CAniCameraSetNowFrame13_clbk CAniCameraSetNowFrame13_user(nullptr);
        
        Info::CAniCameraSetPrePlayCamera14_ptr CAniCameraSetPrePlayCamera14_next(nullptr);
        Info::CAniCameraSetPrePlayCamera14_clbk CAniCameraSetPrePlayCamera14_user(nullptr);
        
        
        Info::CAniCameradtor_CAniCamera15_ptr CAniCameradtor_CAniCamera15_next(nullptr);
        Info::CAniCameradtor_CAniCamera15_clbk CAniCameradtor_CAniCamera15_user(nullptr);
        
        uint32_t CAniCameraGetCameraIndex1_wrapper(struct CAniCamera* _this, char* arg_0)
        {
           return CAniCameraGetCameraIndex1_user(_this, arg_0, CAniCameraGetCameraIndex1_next);
        };
        char* CAniCameraGetCameraName2_wrapper(struct CAniCamera* _this, uint32_t arg_0)
        {
           return CAniCameraGetCameraName2_user(_this, arg_0, CAniCameraGetCameraName2_next);
        };
        uint32_t CAniCameraGetDummyID3_wrapper(struct CAniCamera* _this, char* arg_0, int arg_1)
        {
           return CAniCameraGetDummyID3_user(_this, arg_0, arg_1, CAniCameraGetDummyID3_next);
        };
        void CAniCameraGetDummyMatrix4_wrapper(struct CAniCamera* _this, float** arg_0, uint32_t arg_1, float arg_2)
        {
           CAniCameraGetDummyMatrix4_user(_this, arg_0, arg_1, arg_2, CAniCameraGetDummyMatrix4_next);
        };
        void CAniCameraGetDummyMatrixSub5_wrapper(struct CAniCamera* _this, float** arg_0, uint32_t arg_1, float arg_2)
        {
           CAniCameraGetDummyMatrixSub5_user(_this, arg_0, arg_1, arg_2, CAniCameraGetDummyMatrixSub5_next);
        };
        char* CAniCameraGetDummyParentID6_wrapper(struct CAniCamera* _this, uint32_t arg_0)
        {
           return CAniCameraGetDummyParentID6_user(_this, arg_0, CAniCameraGetDummyParentID6_next);
        };
        float* CAniCameraGetMatrixAniCamera7_wrapper(struct CAniCamera* _this, float arg_0)
        {
           return CAniCameraGetMatrixAniCamera7_user(_this, arg_0, CAniCameraGetMatrixAniCamera7_next);
        };
        int64_t CAniCameraIsLoadedAniCamera8_wrapper(struct CAniCamera* _this)
        {
           return CAniCameraIsLoadedAniCamera8_user(_this, CAniCameraIsLoadedAniCamera8_next);
        };
        void CAniCameraLoadAniCamera9_wrapper(struct CAniCamera* _this, char* Filename)
        {
           CAniCameraLoadAniCamera9_user(_this, Filename, CAniCameraLoadAniCamera9_next);
        };
        int64_t CAniCameraPlayAniCamera10_wrapper(struct CAniCamera* _this, float** arg_0, float arg_1, int arg_2)
        {
           return CAniCameraPlayAniCamera10_user(_this, arg_0, arg_1, arg_2, CAniCameraPlayAniCamera10_next);
        };
        void CAniCameraReleaseAniCamera11_wrapper(struct CAniCamera* _this)
        {
           CAniCameraReleaseAniCamera11_user(_this, CAniCameraReleaseAniCamera11_next);
        };
        int64_t CAniCameraSetExtCamAni12_wrapper(struct CAniCamera* _this)
        {
           return CAniCameraSetExtCamAni12_user(_this, CAniCameraSetExtCamAni12_next);
        };
        void CAniCameraSetNowFrame13_wrapper(struct CAniCamera* _this, float arg_0)
        {
           CAniCameraSetNowFrame13_user(_this, arg_0, CAniCameraSetNowFrame13_next);
        };
        void CAniCameraSetPrePlayCamera14_wrapper(struct CAniCamera* _this, uint32_t arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
        {
           CAniCameraSetPrePlayCamera14_user(_this, arg_0, arg_1, arg_2, arg_3, CAniCameraSetPrePlayCamera14_next);
        };
        
        int64_t CAniCameradtor_CAniCamera15_wrapper(struct CAniCamera* _this)
        {
           return CAniCameradtor_CAniCamera15_user(_this, CAniCameradtor_CAniCamera15_next);
        };
        
        ::std::array<hook_record, 15> CAniCamera_functions = 
        {
            _hook_record {
                (LPVOID)0x14050e600L,
                (LPVOID *)&CAniCameraGetCameraIndex1_user,
                (LPVOID *)&CAniCameraGetCameraIndex1_next,
                (LPVOID)cast_pointer_function(CAniCameraGetCameraIndex1_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CAniCamera::*)(char*))&CAniCamera::GetCameraIndex)
            },
            _hook_record {
                (LPVOID)0x14050e5e0L,
                (LPVOID *)&CAniCameraGetCameraName2_user,
                (LPVOID *)&CAniCameraGetCameraName2_next,
                (LPVOID)cast_pointer_function(CAniCameraGetCameraName2_wrapper),
                (LPVOID)cast_pointer_function((char*(CAniCamera::*)(uint32_t))&CAniCamera::GetCameraName)
            },
            _hook_record {
                (LPVOID)0x14050e6e0L,
                (LPVOID *)&CAniCameraGetDummyID3_user,
                (LPVOID *)&CAniCameraGetDummyID3_next,
                (LPVOID)cast_pointer_function(CAniCameraGetDummyID3_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CAniCamera::*)(char*, int))&CAniCamera::GetDummyID)
            },
            _hook_record {
                (LPVOID)0x14050ea00L,
                (LPVOID *)&CAniCameraGetDummyMatrix4_user,
                (LPVOID *)&CAniCameraGetDummyMatrix4_next,
                (LPVOID)cast_pointer_function(CAniCameraGetDummyMatrix4_wrapper),
                (LPVOID)cast_pointer_function((void(CAniCamera::*)(float**, uint32_t, float))&CAniCamera::GetDummyMatrix)
            },
            _hook_record {
                (LPVOID)0x14050e950L,
                (LPVOID *)&CAniCameraGetDummyMatrixSub5_user,
                (LPVOID *)&CAniCameraGetDummyMatrixSub5_next,
                (LPVOID)cast_pointer_function(CAniCameraGetDummyMatrixSub5_wrapper),
                (LPVOID)cast_pointer_function((void(CAniCamera::*)(float**, uint32_t, float))&CAniCamera::GetDummyMatrixSub)
            },
            _hook_record {
                (LPVOID)0x14050e6c0L,
                (LPVOID *)&CAniCameraGetDummyParentID6_user,
                (LPVOID *)&CAniCameraGetDummyParentID6_next,
                (LPVOID)cast_pointer_function(CAniCameraGetDummyParentID6_wrapper),
                (LPVOID)cast_pointer_function((char*(CAniCamera::*)(uint32_t))&CAniCamera::GetDummyParentID)
            },
            _hook_record {
                (LPVOID)0x14050eab0L,
                (LPVOID *)&CAniCameraGetMatrixAniCamera7_user,
                (LPVOID *)&CAniCameraGetMatrixAniCamera7_next,
                (LPVOID)cast_pointer_function(CAniCameraGetMatrixAniCamera7_wrapper),
                (LPVOID)cast_pointer_function((float*(CAniCamera::*)(float))&CAniCamera::GetMatrixAniCamera)
            },
            _hook_record {
                (LPVOID)0x14050e5d0L,
                (LPVOID *)&CAniCameraIsLoadedAniCamera8_user,
                (LPVOID *)&CAniCameraIsLoadedAniCamera8_next,
                (LPVOID)cast_pointer_function(CAniCameraIsLoadedAniCamera8_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)())&CAniCamera::IsLoadedAniCamera)
            },
            _hook_record {
                (LPVOID)0x14050efb0L,
                (LPVOID *)&CAniCameraLoadAniCamera9_user,
                (LPVOID *)&CAniCameraLoadAniCamera9_next,
                (LPVOID)cast_pointer_function(CAniCameraLoadAniCamera9_wrapper),
                (LPVOID)cast_pointer_function((void(CAniCamera::*)(char*))&CAniCamera::LoadAniCamera)
            },
            _hook_record {
                (LPVOID)0x14050ed60L,
                (LPVOID *)&CAniCameraPlayAniCamera10_user,
                (LPVOID *)&CAniCameraPlayAniCamera10_next,
                (LPVOID)cast_pointer_function(CAniCameraPlayAniCamera10_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)(float**, float, int))&CAniCamera::PlayAniCamera)
            },
            _hook_record {
                (LPVOID)0x14050e810L,
                (LPVOID *)&CAniCameraReleaseAniCamera11_user,
                (LPVOID *)&CAniCameraReleaseAniCamera11_next,
                (LPVOID)cast_pointer_function(CAniCameraReleaseAniCamera11_wrapper),
                (LPVOID)cast_pointer_function((void(CAniCamera::*)())&CAniCamera::ReleaseAniCamera)
            },
            _hook_record {
                (LPVOID)0x14050ef00L,
                (LPVOID *)&CAniCameraSetExtCamAni12_user,
                (LPVOID *)&CAniCameraSetExtCamAni12_next,
                (LPVOID)cast_pointer_function(CAniCameraSetExtCamAni12_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)())&CAniCamera::SetExtCamAni)
            },
            _hook_record {
                (LPVOID)0x14050ed20L,
                (LPVOID *)&CAniCameraSetNowFrame13_user,
                (LPVOID *)&CAniCameraSetNowFrame13_next,
                (LPVOID)cast_pointer_function(CAniCameraSetNowFrame13_wrapper),
                (LPVOID)cast_pointer_function((void(CAniCamera::*)(float))&CAniCamera::SetNowFrame)
            },
            _hook_record {
                (LPVOID)0x14050ec80L,
                (LPVOID *)&CAniCameraSetPrePlayCamera14_user,
                (LPVOID *)&CAniCameraSetPrePlayCamera14_next,
                (LPVOID)cast_pointer_function(CAniCameraSetPrePlayCamera14_wrapper),
                (LPVOID)cast_pointer_function((void(CAniCamera::*)(uint32_t, uint32_t, uint32_t, uint32_t))&CAniCamera::SetPrePlayCamera)
            },
            _hook_record {
                (LPVOID)0x14050e5c0L,
                (LPVOID *)&CAniCameradtor_CAniCamera15_user,
                (LPVOID *)&CAniCameradtor_CAniCamera15_next,
                (LPVOID)cast_pointer_function(CAniCameradtor_CAniCamera15_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)())&CAniCamera::dtor_CAniCamera)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
