#include <CR3FontDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CR3FontCalcStrIndexPitInWidthA1_ptr CR3FontCalcStrIndexPitInWidthA1_next(nullptr);
        Info::CR3FontCalcStrIndexPitInWidthA1_clbk CR3FontCalcStrIndexPitInWidthA1_user(nullptr);
        
        Info::CR3FontCalcStrIndexPitInWidthW2_ptr CR3FontCalcStrIndexPitInWidthW2_next(nullptr);
        Info::CR3FontCalcStrIndexPitInWidthW2_clbk CR3FontCalcStrIndexPitInWidthW2_user(nullptr);
        
        Info::CR3FontCalcStrPixelSizeA3_ptr CR3FontCalcStrPixelSizeA3_next(nullptr);
        Info::CR3FontCalcStrPixelSizeA3_clbk CR3FontCalcStrPixelSizeA3_user(nullptr);
        
        Info::CR3FontCalcStrPixelSizeW4_ptr CR3FontCalcStrPixelSizeW4_next(nullptr);
        Info::CR3FontCalcStrPixelSizeW4_clbk CR3FontCalcStrPixelSizeW4_user(nullptr);
        
        Info::CR3FontClearCache5_ptr CR3FontClearCache5_next(nullptr);
        Info::CR3FontClearCache5_clbk CR3FontClearCache5_user(nullptr);
        
        Info::CR3FontDeleteDeviceObjects6_ptr CR3FontDeleteDeviceObjects6_next(nullptr);
        Info::CR3FontDeleteDeviceObjects6_clbk CR3FontDeleteDeviceObjects6_user(nullptr);
        
        Info::CR3FontDrawFullText7_ptr CR3FontDrawFullText7_next(nullptr);
        Info::CR3FontDrawFullText7_clbk CR3FontDrawFullText7_user(nullptr);
        
        Info::CR3FontDrawTextA8_ptr CR3FontDrawTextA8_next(nullptr);
        Info::CR3FontDrawTextA8_clbk CR3FontDrawTextA8_user(nullptr);
        
        Info::CR3FontDrawTextA9_ptr CR3FontDrawTextA9_next(nullptr);
        Info::CR3FontDrawTextA9_clbk CR3FontDrawTextA9_user(nullptr);
        
        Info::CR3FontDrawTextA10_ptr CR3FontDrawTextA10_next(nullptr);
        Info::CR3FontDrawTextA10_clbk CR3FontDrawTextA10_user(nullptr);
        
        Info::CR3FontDrawTextW11_ptr CR3FontDrawTextW11_next(nullptr);
        Info::CR3FontDrawTextW11_clbk CR3FontDrawTextW11_user(nullptr);
        
        Info::CR3FontDrawTextW12_ptr CR3FontDrawTextW12_next(nullptr);
        Info::CR3FontDrawTextW12_clbk CR3FontDrawTextW12_user(nullptr);
        
        Info::CR3FontDrawTextW13_ptr CR3FontDrawTextW13_next(nullptr);
        Info::CR3FontDrawTextW13_clbk CR3FontDrawTextW13_user(nullptr);
        
        Info::CR3FontFillItA14_ptr CR3FontFillItA14_next(nullptr);
        Info::CR3FontFillItA14_clbk CR3FontFillItA14_user(nullptr);
        
        Info::CR3FontFillItW15_ptr CR3FontFillItW15_next(nullptr);
        Info::CR3FontFillItW15_clbk CR3FontFillItW15_user(nullptr);
        
        Info::CR3FontGetBestPosCacheA16_ptr CR3FontGetBestPosCacheA16_next(nullptr);
        Info::CR3FontGetBestPosCacheA16_clbk CR3FontGetBestPosCacheA16_user(nullptr);
        
        Info::CR3FontGetBestPosCacheW17_ptr CR3FontGetBestPosCacheW17_next(nullptr);
        Info::CR3FontGetBestPosCacheW17_clbk CR3FontGetBestPosCacheW17_user(nullptr);
        
        Info::CR3FontGetOutLineColor18_ptr CR3FontGetOutLineColor18_next(nullptr);
        Info::CR3FontGetOutLineColor18_clbk CR3FontGetOutLineColor18_user(nullptr);
        
        Info::CR3FontInitDeviceObjects19_ptr CR3FontInitDeviceObjects19_next(nullptr);
        Info::CR3FontInitDeviceObjects19_clbk CR3FontInitDeviceObjects19_user(nullptr);
        
        Info::CR3FontInvalidateDeviceObjects20_ptr CR3FontInvalidateDeviceObjects20_next(nullptr);
        Info::CR3FontInvalidateDeviceObjects20_clbk CR3FontInvalidateDeviceObjects20_user(nullptr);
        
        Info::CR3FontIsExistCacheA21_ptr CR3FontIsExistCacheA21_next(nullptr);
        Info::CR3FontIsExistCacheA21_clbk CR3FontIsExistCacheA21_user(nullptr);
        
        Info::CR3FontIsExistCacheW22_ptr CR3FontIsExistCacheW22_next(nullptr);
        Info::CR3FontIsExistCacheW22_clbk CR3FontIsExistCacheW22_user(nullptr);
        
        Info::CR3FontMemAllocate23_ptr CR3FontMemAllocate23_next(nullptr);
        Info::CR3FontMemAllocate23_clbk CR3FontMemAllocate23_user(nullptr);
        
        Info::CR3FontMemFree24_ptr CR3FontMemFree24_next(nullptr);
        Info::CR3FontMemFree24_clbk CR3FontMemFree24_user(nullptr);
        
        Info::CR3FontPrepareDrawText25_ptr CR3FontPrepareDrawText25_next(nullptr);
        Info::CR3FontPrepareDrawText25_clbk CR3FontPrepareDrawText25_user(nullptr);
        
        Info::CR3FontPrivateInit26_ptr CR3FontPrivateInit26_next(nullptr);
        Info::CR3FontPrivateInit26_clbk CR3FontPrivateInit26_user(nullptr);
        
        Info::CR3FontPrivateRelease27_ptr CR3FontPrivateRelease27_next(nullptr);
        Info::CR3FontPrivateRelease27_clbk CR3FontPrivateRelease27_user(nullptr);
        
        Info::CR3FontRestoreDeviceObjects28_ptr CR3FontRestoreDeviceObjects28_next(nullptr);
        Info::CR3FontRestoreDeviceObjects28_clbk CR3FontRestoreDeviceObjects28_user(nullptr);
        
        Info::CR3FontSetCacheA29_ptr CR3FontSetCacheA29_next(nullptr);
        Info::CR3FontSetCacheA29_clbk CR3FontSetCacheA29_user(nullptr);
        
        Info::CR3FontSetCacheW30_ptr CR3FontSetCacheW30_next(nullptr);
        Info::CR3FontSetCacheW30_clbk CR3FontSetCacheW30_user(nullptr);
        
        Info::CR3FontSetCharSet31_ptr CR3FontSetCharSet31_next(nullptr);
        Info::CR3FontSetCharSet31_clbk CR3FontSetCharSet31_user(nullptr);
        
        Info::CR3FontSetFont32_ptr CR3FontSetFont32_next(nullptr);
        Info::CR3FontSetFont32_clbk CR3FontSetFont32_user(nullptr);
        
        Info::CR3FontSetOutLineColor33_ptr CR3FontSetOutLineColor33_next(nullptr);
        Info::CR3FontSetOutLineColor33_clbk CR3FontSetOutLineColor33_user(nullptr);
        
        
        Info::CR3Fontdtor_CR3Font34_ptr CR3Fontdtor_CR3Font34_next(nullptr);
        Info::CR3Fontdtor_CR3Font34_clbk CR3Fontdtor_CR3Font34_user(nullptr);
        
        int CR3FontCalcStrIndexPitInWidthA1_wrapper(struct CR3Font* _this, char* arg_0, int arg_1, int arg_2)
        {
           return CR3FontCalcStrIndexPitInWidthA1_user(_this, arg_0, arg_1, arg_2, CR3FontCalcStrIndexPitInWidthA1_next);
        };
        int CR3FontCalcStrIndexPitInWidthW2_wrapper(struct CR3Font* _this, wchar_t* arg_0, int arg_1, int arg_2)
        {
           return CR3FontCalcStrIndexPitInWidthW2_user(_this, arg_0, arg_1, arg_2, CR3FontCalcStrIndexPitInWidthW2_next);
        };
        void CR3FontCalcStrPixelSizeA3_wrapper(struct CR3Font* _this, char* arg_0, struct tagSIZE* arg_1, int arg_2)
        {
           CR3FontCalcStrPixelSizeA3_user(_this, arg_0, arg_1, arg_2, CR3FontCalcStrPixelSizeA3_next);
        };
        void CR3FontCalcStrPixelSizeW4_wrapper(struct CR3Font* _this, wchar_t* arg_0, struct tagSIZE* arg_1, int arg_2)
        {
           CR3FontCalcStrPixelSizeW4_user(_this, arg_0, arg_1, arg_2, CR3FontCalcStrPixelSizeW4_next);
        };
        void CR3FontClearCache5_wrapper(struct CR3Font* _this)
        {
           CR3FontClearCache5_user(_this, CR3FontClearCache5_next);
        };
        int32_t CR3FontDeleteDeviceObjects6_wrapper(struct CR3Font* _this)
        {
           return CR3FontDeleteDeviceObjects6_user(_this, CR3FontDeleteDeviceObjects6_next);
        };
        void CR3FontDrawFullText7_wrapper(struct CR3Font* _this, struct FONT2DVERTEX* arg_0)
        {
           CR3FontDrawFullText7_user(_this, arg_0, CR3FontDrawFullText7_next);
        };
        int32_t CR3FontDrawTextA8_wrapper(struct CR3Font* _this, float* arg_0, uint32_t arg_1, char* arg_2, uint32_t arg_3, float arg_4)
        {
           return CR3FontDrawTextA8_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, CR3FontDrawTextA8_next);
        };
        int32_t CR3FontDrawTextA9_wrapper(struct CR3Font* _this, float arg_0, float arg_1, uint32_t arg_2, char* arg_3, float** arg_4, uint32_t arg_5, float arg_6)
        {
           return CR3FontDrawTextA9_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, CR3FontDrawTextA9_next);
        };
        int32_t CR3FontDrawTextA10_wrapper(struct CR3Font* _this, float arg_0, float arg_1, uint32_t arg_2, char* arg_3, uint32_t arg_4, float arg_5)
        {
           return CR3FontDrawTextA10_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CR3FontDrawTextA10_next);
        };
        int32_t CR3FontDrawTextW11_wrapper(struct CR3Font* _this, float* arg_0, uint32_t arg_1, wchar_t* arg_2, uint32_t arg_3, float arg_4)
        {
           return CR3FontDrawTextW11_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, CR3FontDrawTextW11_next);
        };
        int32_t CR3FontDrawTextW12_wrapper(struct CR3Font* _this, float arg_0, float arg_1, uint32_t arg_2, wchar_t* arg_3, float** arg_4, uint32_t arg_5, float arg_6)
        {
           return CR3FontDrawTextW12_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, CR3FontDrawTextW12_next);
        };
        int32_t CR3FontDrawTextW13_wrapper(struct CR3Font* _this, float arg_0, float arg_1, uint32_t arg_2, wchar_t* arg_3, uint32_t arg_4, float arg_5)
        {
           return CR3FontDrawTextW13_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CR3FontDrawTextW13_next);
        };
        int32_t CR3FontFillItA14_wrapper(struct CR3Font* _this, struct FONT2DVERTEX* arg_0, float* arg_1, uint32_t arg_2, char* arg_3, uint32_t arg_4, float arg_5)
        {
           return CR3FontFillItA14_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CR3FontFillItA14_next);
        };
        int32_t CR3FontFillItW15_wrapper(struct CR3Font* _this, wchar_t* arg_0, float* arg_1, uint32_t arg_2, wchar_t* arg_3, uint32_t arg_4, float arg_5)
        {
           return CR3FontFillItW15_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CR3FontFillItW15_next);
        };
        void CR3FontGetBestPosCacheA16_wrapper(struct CR3Font* _this, uint32_t arg_0, uint32_t* arg_1, uint32_t* arg_2, uint32_t* arg_3)
        {
           CR3FontGetBestPosCacheA16_user(_this, arg_0, arg_1, arg_2, arg_3, CR3FontGetBestPosCacheA16_next);
        };
        void CR3FontGetBestPosCacheW17_wrapper(struct CR3Font* _this, wchar_t* arg_0, uint32_t arg_1, int* arg_2, int* arg_3, int* arg_4, int* arg_5)
        {
           CR3FontGetBestPosCacheW17_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CR3FontGetBestPosCacheW17_next);
        };
        uint32_t CR3FontGetOutLineColor18_wrapper(struct CR3Font* _this)
        {
           return CR3FontGetOutLineColor18_user(_this, CR3FontGetOutLineColor18_next);
        };
        int32_t CR3FontInitDeviceObjects19_wrapper(struct CR3Font* _this, struct IDirect3DDevice8* arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
        {
           return CR3FontInitDeviceObjects19_user(_this, arg_0, arg_1, arg_2, arg_3, CR3FontInitDeviceObjects19_next);
        };
        int32_t CR3FontInvalidateDeviceObjects20_wrapper(struct CR3Font* _this)
        {
           return CR3FontInvalidateDeviceObjects20_user(_this, CR3FontInvalidateDeviceObjects20_next);
        };
        int64_t CR3FontIsExistCacheA21_wrapper(struct CR3Font* _this, char* arg_0, uint32_t arg_1, uint32_t* arg_2, uint32_t* arg_3)
        {
           return CR3FontIsExistCacheA21_user(_this, arg_0, arg_1, arg_2, arg_3, CR3FontIsExistCacheA21_next);
        };
        int64_t CR3FontIsExistCacheW22_wrapper(struct CR3Font* _this, wchar_t* arg_0, uint32_t arg_1, int* arg_2, int* arg_3)
        {
           return CR3FontIsExistCacheW22_user(_this, arg_0, arg_1, arg_2, arg_3, CR3FontIsExistCacheW22_next);
        };
        void CR3FontMemAllocate23_wrapper(struct CR3Font* _this)
        {
           CR3FontMemAllocate23_user(_this, CR3FontMemAllocate23_next);
        };
        void CR3FontMemFree24_wrapper(struct CR3Font* _this)
        {
           CR3FontMemFree24_user(_this, CR3FontMemFree24_next);
        };
        void CR3FontPrepareDrawText25_wrapper(struct CR3Font* _this)
        {
           CR3FontPrepareDrawText25_user(_this, CR3FontPrepareDrawText25_next);
        };
        void CR3FontPrivateInit26_wrapper(struct CR3Font* _this)
        {
           CR3FontPrivateInit26_user(_this, CR3FontPrivateInit26_next);
        };
        void CR3FontPrivateRelease27_wrapper(struct CR3Font* _this)
        {
           CR3FontPrivateRelease27_user(_this, CR3FontPrivateRelease27_next);
        };
        int32_t CR3FontRestoreDeviceObjects28_wrapper(struct CR3Font* _this)
        {
           return CR3FontRestoreDeviceObjects28_user(_this, CR3FontRestoreDeviceObjects28_next);
        };
        void CR3FontSetCacheA29_wrapper(struct CR3Font* _this, char* arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3, uint32_t arg_4)
        {
           CR3FontSetCacheA29_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, CR3FontSetCacheA29_next);
        };
        void CR3FontSetCacheW30_wrapper(struct CR3Font* _this, wchar_t* arg_0, uint32_t arg_1, int arg_2, int arg_3, int arg_4, int arg_5)
        {
           CR3FontSetCacheW30_user(_this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, CR3FontSetCacheW30_next);
        };
        void CR3FontSetCharSet31_wrapper(struct CR3Font* _this, uint32_t arg_0)
        {
           CR3FontSetCharSet31_user(_this, arg_0, CR3FontSetCharSet31_next);
        };
        void CR3FontSetFont32_wrapper(struct CR3Font* _this, char* arg_0)
        {
           CR3FontSetFont32_user(_this, arg_0, CR3FontSetFont32_next);
        };
        void CR3FontSetOutLineColor33_wrapper(struct CR3Font* _this, uint32_t arg_0)
        {
           CR3FontSetOutLineColor33_user(_this, arg_0, CR3FontSetOutLineColor33_next);
        };
        
        int64_t CR3Fontdtor_CR3Font34_wrapper(struct CR3Font* _this)
        {
           return CR3Fontdtor_CR3Font34_user(_this, CR3Fontdtor_CR3Font34_next);
        };
        
        ::std::array<hook_record, 34> CR3Font_functions = 
        {
            _hook_record {
                (LPVOID)0x140527dd0L,
                (LPVOID *)&CR3FontCalcStrIndexPitInWidthA1_user,
                (LPVOID *)&CR3FontCalcStrIndexPitInWidthA1_next,
                (LPVOID)cast_pointer_function(CR3FontCalcStrIndexPitInWidthA1_wrapper),
                (LPVOID)cast_pointer_function((int(CR3Font::*)(char*, int, int))&CR3Font::CalcStrIndexPitInWidthA)
            },
            _hook_record {
                (LPVOID)0x140527d80L,
                (LPVOID *)&CR3FontCalcStrIndexPitInWidthW2_user,
                (LPVOID *)&CR3FontCalcStrIndexPitInWidthW2_next,
                (LPVOID)cast_pointer_function(CR3FontCalcStrIndexPitInWidthW2_wrapper),
                (LPVOID)cast_pointer_function((int(CR3Font::*)(wchar_t*, int, int))&CR3Font::CalcStrIndexPitInWidthW)
            },
            _hook_record {
                (LPVOID)0x140527d30L,
                (LPVOID *)&CR3FontCalcStrPixelSizeA3_user,
                (LPVOID *)&CR3FontCalcStrPixelSizeA3_next,
                (LPVOID)cast_pointer_function(CR3FontCalcStrPixelSizeA3_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(char*, struct tagSIZE*, int))&CR3Font::CalcStrPixelSizeA)
            },
            _hook_record {
                (LPVOID)0x140527ce0L,
                (LPVOID *)&CR3FontCalcStrPixelSizeW4_user,
                (LPVOID *)&CR3FontCalcStrPixelSizeW4_next,
                (LPVOID)cast_pointer_function(CR3FontCalcStrPixelSizeW4_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(wchar_t*, struct tagSIZE*, int))&CR3Font::CalcStrPixelSizeW)
            },
            _hook_record {
                (LPVOID)0x140527000L,
                (LPVOID *)&CR3FontClearCache5_user,
                (LPVOID *)&CR3FontClearCache5_next,
                (LPVOID)cast_pointer_function(CR3FontClearCache5_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)())&CR3Font::ClearCache)
            },
            _hook_record {
                (LPVOID)0x140526fc0L,
                (LPVOID *)&CR3FontDeleteDeviceObjects6_user,
                (LPVOID *)&CR3FontDeleteDeviceObjects6_next,
                (LPVOID)cast_pointer_function(CR3FontDeleteDeviceObjects6_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)())&CR3Font::DeleteDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x140526f70L,
                (LPVOID *)&CR3FontDrawFullText7_user,
                (LPVOID *)&CR3FontDrawFullText7_next,
                (LPVOID)cast_pointer_function(CR3FontDrawFullText7_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(struct FONT2DVERTEX*))&CR3Font::DrawFullText)
            },
            _hook_record {
                (LPVOID)0x1405282a0L,
                (LPVOID *)&CR3FontDrawTextA8_user,
                (LPVOID *)&CR3FontDrawTextA8_next,
                (LPVOID)cast_pointer_function(CR3FontDrawTextA8_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(float*, uint32_t, char*, uint32_t, float))&CR3Font::DrawTextA)
            },
            _hook_record {
                (LPVOID)0x140528790L,
                (LPVOID *)&CR3FontDrawTextA9_user,
                (LPVOID *)&CR3FontDrawTextA9_next,
                (LPVOID)cast_pointer_function(CR3FontDrawTextA9_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(float, float, uint32_t, char*, float**, uint32_t, float))&CR3Font::DrawTextA)
            },
            _hook_record {
                (LPVOID)0x140528730L,
                (LPVOID *)&CR3FontDrawTextA10_user,
                (LPVOID *)&CR3FontDrawTextA10_next,
                (LPVOID)cast_pointer_function(CR3FontDrawTextA10_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(float, float, uint32_t, char*, uint32_t, float))&CR3Font::DrawTextA)
            },
            _hook_record {
                (LPVOID)0x140529250L,
                (LPVOID *)&CR3FontDrawTextW11_user,
                (LPVOID *)&CR3FontDrawTextW11_next,
                (LPVOID)cast_pointer_function(CR3FontDrawTextW11_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(float*, uint32_t, wchar_t*, uint32_t, float))&CR3Font::DrawTextW)
            },
            _hook_record {
                (LPVOID)0x140529730L,
                (LPVOID *)&CR3FontDrawTextW12_user,
                (LPVOID *)&CR3FontDrawTextW12_next,
                (LPVOID)cast_pointer_function(CR3FontDrawTextW12_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(float, float, uint32_t, wchar_t*, float**, uint32_t, float))&CR3Font::DrawTextW)
            },
            _hook_record {
                (LPVOID)0x1405296d0L,
                (LPVOID *)&CR3FontDrawTextW13_user,
                (LPVOID *)&CR3FontDrawTextW13_next,
                (LPVOID)cast_pointer_function(CR3FontDrawTextW13_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(float, float, uint32_t, wchar_t*, uint32_t, float))&CR3Font::DrawTextW)
            },
            _hook_record {
                (LPVOID)0x140527730L,
                (LPVOID *)&CR3FontFillItA14_user,
                (LPVOID *)&CR3FontFillItA14_next,
                (LPVOID)cast_pointer_function(CR3FontFillItA14_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(struct FONT2DVERTEX*, float*, uint32_t, char*, uint32_t, float))&CR3Font::FillItA)
            },
            _hook_record {
                (LPVOID)0x140528c90L,
                (LPVOID *)&CR3FontFillItW15_user,
                (LPVOID *)&CR3FontFillItW15_next,
                (LPVOID)cast_pointer_function(CR3FontFillItW15_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(wchar_t*, float*, uint32_t, wchar_t*, uint32_t, float))&CR3Font::FillItW)
            },
            _hook_record {
                (LPVOID)0x140527390L,
                (LPVOID *)&CR3FontGetBestPosCacheA16_user,
                (LPVOID *)&CR3FontGetBestPosCacheA16_next,
                (LPVOID)cast_pointer_function(CR3FontGetBestPosCacheA16_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(uint32_t, uint32_t*, uint32_t*, uint32_t*))&CR3Font::GetBestPosCacheA)
            },
            _hook_record {
                (LPVOID)0x140528870L,
                (LPVOID *)&CR3FontGetBestPosCacheW17_user,
                (LPVOID *)&CR3FontGetBestPosCacheW17_next,
                (LPVOID)cast_pointer_function(CR3FontGetBestPosCacheW17_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(wchar_t*, uint32_t, int*, int*, int*, int*))&CR3Font::GetBestPosCacheW)
            },
            _hook_record {
                (LPVOID)0x140510c40L,
                (LPVOID *)&CR3FontGetOutLineColor18_user,
                (LPVOID *)&CR3FontGetOutLineColor18_next,
                (LPVOID)cast_pointer_function(CR3FontGetOutLineColor18_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CR3Font::*)())&CR3Font::GetOutLineColor)
            },
            _hook_record {
                (LPVOID)0x140526d30L,
                (LPVOID *)&CR3FontInitDeviceObjects19_user,
                (LPVOID *)&CR3FontInitDeviceObjects19_next,
                (LPVOID)cast_pointer_function(CR3FontInitDeviceObjects19_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)(struct IDirect3DDevice8*, uint32_t, uint32_t, uint32_t))&CR3Font::InitDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x140528820L,
                (LPVOID *)&CR3FontInvalidateDeviceObjects20_user,
                (LPVOID *)&CR3FontInvalidateDeviceObjects20_next,
                (LPVOID)cast_pointer_function(CR3FontInvalidateDeviceObjects20_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)())&CR3Font::InvalidateDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x140527290L,
                (LPVOID *)&CR3FontIsExistCacheA21_user,
                (LPVOID *)&CR3FontIsExistCacheA21_next,
                (LPVOID)cast_pointer_function(CR3FontIsExistCacheA21_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CR3Font::*)(char*, uint32_t, uint32_t*, uint32_t*))&CR3Font::IsExistCacheA)
            },
            _hook_record {
                (LPVOID)0x140527190L,
                (LPVOID *)&CR3FontIsExistCacheW22_user,
                (LPVOID *)&CR3FontIsExistCacheW22_next,
                (LPVOID)cast_pointer_function(CR3FontIsExistCacheW22_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CR3Font::*)(wchar_t*, uint32_t, int*, int*))&CR3Font::IsExistCacheW)
            },
            _hook_record {
                (LPVOID)0x140526c00L,
                (LPVOID *)&CR3FontMemAllocate23_user,
                (LPVOID *)&CR3FontMemAllocate23_next,
                (LPVOID)cast_pointer_function(CR3FontMemAllocate23_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)())&CR3Font::MemAllocate)
            },
            _hook_record {
                (LPVOID)0x140526ce0L,
                (LPVOID *)&CR3FontMemFree24_user,
                (LPVOID *)&CR3FontMemFree24_next,
                (LPVOID)cast_pointer_function(CR3FontMemFree24_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)())&CR3Font::MemFree)
            },
            _hook_record {
                (LPVOID)0x140526de0L,
                (LPVOID *)&CR3FontPrepareDrawText25_user,
                (LPVOID *)&CR3FontPrepareDrawText25_next,
                (LPVOID)cast_pointer_function(CR3FontPrepareDrawText25_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)())&CR3Font::PrepareDrawText)
            },
            _hook_record {
                (LPVOID)0x140527e80L,
                (LPVOID *)&CR3FontPrivateInit26_user,
                (LPVOID *)&CR3FontPrivateInit26_next,
                (LPVOID)cast_pointer_function(CR3FontPrivateInit26_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)())&CR3Font::PrivateInit)
            },
            _hook_record {
                (LPVOID)0x1405280c0L,
                (LPVOID *)&CR3FontPrivateRelease27_user,
                (LPVOID *)&CR3FontPrivateRelease27_next,
                (LPVOID)cast_pointer_function(CR3FontPrivateRelease27_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)())&CR3Font::PrivateRelease)
            },
            _hook_record {
                (LPVOID)0x140528110L,
                (LPVOID *)&CR3FontRestoreDeviceObjects28_user,
                (LPVOID *)&CR3FontRestoreDeviceObjects28_next,
                (LPVOID)cast_pointer_function(CR3FontRestoreDeviceObjects28_wrapper),
                (LPVOID)cast_pointer_function((int32_t(CR3Font::*)())&CR3Font::RestoreDeviceObjects)
            },
            _hook_record {
                (LPVOID)0x1405274f0L,
                (LPVOID *)&CR3FontSetCacheA29_user,
                (LPVOID *)&CR3FontSetCacheA29_next,
                (LPVOID)cast_pointer_function(CR3FontSetCacheA29_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(char*, uint32_t, uint32_t, uint32_t, uint32_t))&CR3Font::SetCacheA)
            },
            _hook_record {
                (LPVOID)0x140528a80L,
                (LPVOID *)&CR3FontSetCacheW30_user,
                (LPVOID *)&CR3FontSetCacheW30_next,
                (LPVOID)cast_pointer_function(CR3FontSetCacheW30_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(wchar_t*, uint32_t, int, int, int, int))&CR3Font::SetCacheW)
            },
            _hook_record {
                (LPVOID)0x140526bf0L,
                (LPVOID *)&CR3FontSetCharSet31_user,
                (LPVOID *)&CR3FontSetCharSet31_next,
                (LPVOID)cast_pointer_function(CR3FontSetCharSet31_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(uint32_t))&CR3Font::SetCharSet)
            },
            _hook_record {
                (LPVOID)0x140526bd0L,
                (LPVOID *)&CR3FontSetFont32_user,
                (LPVOID *)&CR3FontSetFont32_next,
                (LPVOID)cast_pointer_function(CR3FontSetFont32_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(char*))&CR3Font::SetFont)
            },
            _hook_record {
                (LPVOID)0x140510c30L,
                (LPVOID *)&CR3FontSetOutLineColor33_user,
                (LPVOID *)&CR3FontSetOutLineColor33_next,
                (LPVOID)cast_pointer_function(CR3FontSetOutLineColor33_wrapper),
                (LPVOID)cast_pointer_function((void(CR3Font::*)(uint32_t))&CR3Font::SetOutLineColor)
            },
            _hook_record {
                (LPVOID)0x140526bc0L,
                (LPVOID *)&CR3Fontdtor_CR3Font34_user,
                (LPVOID *)&CR3Fontdtor_CR3Font34_next,
                (LPVOID)cast_pointer_function(CR3Fontdtor_CR3Font34_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CR3Font::*)())&CR3Font::dtor_CR3Font)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
