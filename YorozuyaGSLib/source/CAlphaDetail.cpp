#include <CAlphaDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CAlphaCheckAlphaAlloc1_ptr CAlphaCheckAlphaAlloc1_next(nullptr);
        Info::CAlphaCheckAlphaAlloc1_clbk CAlphaCheckAlphaAlloc1_user(nullptr);
        
        Info::CAlphaGetAlphaFace2_ptr CAlphaGetAlphaFace2_next(nullptr);
        Info::CAlphaGetAlphaFace2_clbk CAlphaGetAlphaFace2_user(nullptr);
        
        Info::CAlphaGetAlphaFaceCnt3_ptr CAlphaGetAlphaFaceCnt3_next(nullptr);
        Info::CAlphaGetAlphaFaceCnt3_clbk CAlphaGetAlphaFaceCnt3_user(nullptr);
        
        Info::CAlphaInitAlpha4_ptr CAlphaInitAlpha4_next(nullptr);
        Info::CAlphaInitAlpha4_clbk CAlphaInitAlpha4_user(nullptr);
        
        Info::CAlphaLoopInitAlphaStack5_ptr CAlphaLoopInitAlphaStack5_next(nullptr);
        Info::CAlphaLoopInitAlphaStack5_clbk CAlphaLoopInitAlphaStack5_user(nullptr);
        
        Info::CAlphaSetAlphaEntityStack6_ptr CAlphaSetAlphaEntityStack6_next(nullptr);
        Info::CAlphaSetAlphaEntityStack6_clbk CAlphaSetAlphaEntityStack6_user(nullptr);
        
        Info::CAlphaSetAlphaStack7_ptr CAlphaSetAlphaStack7_next(nullptr);
        Info::CAlphaSetAlphaStack7_clbk CAlphaSetAlphaStack7_user(nullptr);
        
        Info::CAlphaSetCoronaStack8_ptr CAlphaSetCoronaStack8_next(nullptr);
        Info::CAlphaSetCoronaStack8_clbk CAlphaSetCoronaStack8_user(nullptr);
        
        Info::CAlphaSortAlphaStack9_ptr CAlphaSortAlphaStack9_next(nullptr);
        Info::CAlphaSortAlphaStack9_clbk CAlphaSortAlphaStack9_user(nullptr);
        
        
        Info::CAlphadtor_CAlpha10_ptr CAlphadtor_CAlpha10_next(nullptr);
        Info::CAlphadtor_CAlpha10_clbk CAlphadtor_CAlpha10_user(nullptr);
        
        void CAlphaCheckAlphaAlloc1_wrapper(struct CAlpha* _this)
        {
           CAlphaCheckAlphaAlloc1_user(_this, CAlphaCheckAlphaAlloc1_next);
        };
        uint32_t* CAlphaGetAlphaFace2_wrapper(struct CAlpha* _this)
        {
           return CAlphaGetAlphaFace2_user(_this, CAlphaGetAlphaFace2_next);
        };
        uint32_t CAlphaGetAlphaFaceCnt3_wrapper(struct CAlpha* _this)
        {
           return CAlphaGetAlphaFaceCnt3_user(_this, CAlphaGetAlphaFaceCnt3_next);
        };
        void CAlphaInitAlpha4_wrapper(struct CAlpha* _this, void* arg_0)
        {
           CAlphaInitAlpha4_user(_this, arg_0, CAlphaInitAlpha4_next);
        };
        void CAlphaLoopInitAlphaStack5_wrapper(struct CAlpha* _this)
        {
           CAlphaLoopInitAlphaStack5_user(_this, CAlphaLoopInitAlphaStack5_next);
        };
        void CAlphaSetAlphaEntityStack6_wrapper(struct CAlpha* _this, uint16_t arg_0)
        {
           CAlphaSetAlphaEntityStack6_user(_this, arg_0, CAlphaSetAlphaEntityStack6_next);
        };
        void CAlphaSetAlphaStack7_wrapper(struct CAlpha* _this, uint16_t arg_0)
        {
           CAlphaSetAlphaStack7_user(_this, arg_0, CAlphaSetAlphaStack7_next);
        };
        void CAlphaSetCoronaStack8_wrapper(struct CAlpha* _this, uint16_t arg_0)
        {
           CAlphaSetCoronaStack8_user(_this, arg_0, CAlphaSetCoronaStack8_next);
        };
        uint32_t* CAlphaSortAlphaStack9_wrapper(struct CAlpha* _this, float* arg_0)
        {
           return CAlphaSortAlphaStack9_user(_this, arg_0, CAlphaSortAlphaStack9_next);
        };
        
        int64_t CAlphadtor_CAlpha10_wrapper(struct CAlpha* _this)
        {
           return CAlphadtor_CAlpha10_user(_this, CAlphadtor_CAlpha10_next);
        };
        
        ::std::array<hook_record, 10> CAlpha_functions = 
        {
            _hook_record {
                (LPVOID)0x14051ccf0L,
                (LPVOID *)&CAlphaCheckAlphaAlloc1_user,
                (LPVOID *)&CAlphaCheckAlphaAlloc1_next,
                (LPVOID)cast_pointer_function(CAlphaCheckAlphaAlloc1_wrapper),
                (LPVOID)cast_pointer_function((void(CAlpha::*)())&CAlpha::CheckAlphaAlloc)
            },
            _hook_record {
                (LPVOID)0x14051cdd0L,
                (LPVOID *)&CAlphaGetAlphaFace2_user,
                (LPVOID *)&CAlphaGetAlphaFace2_next,
                (LPVOID)cast_pointer_function(CAlphaGetAlphaFace2_wrapper),
                (LPVOID)cast_pointer_function((uint32_t*(CAlpha::*)())&CAlpha::GetAlphaFace)
            },
            _hook_record {
                (LPVOID)0x14051cdc0L,
                (LPVOID *)&CAlphaGetAlphaFaceCnt3_user,
                (LPVOID *)&CAlphaGetAlphaFaceCnt3_next,
                (LPVOID)cast_pointer_function(CAlphaGetAlphaFaceCnt3_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CAlpha::*)())&CAlpha::GetAlphaFaceCnt)
            },
            _hook_record {
                (LPVOID)0x14051ccd0L,
                (LPVOID *)&CAlphaInitAlpha4_user,
                (LPVOID *)&CAlphaInitAlpha4_next,
                (LPVOID)cast_pointer_function(CAlphaInitAlpha4_wrapper),
                (LPVOID)cast_pointer_function((void(CAlpha::*)(void*))&CAlpha::InitAlpha)
            },
            _hook_record {
                (LPVOID)0x14051cce0L,
                (LPVOID *)&CAlphaLoopInitAlphaStack5_user,
                (LPVOID *)&CAlphaLoopInitAlphaStack5_next,
                (LPVOID)cast_pointer_function(CAlphaLoopInitAlphaStack5_wrapper),
                (LPVOID)cast_pointer_function((void(CAlpha::*)())&CAlpha::LoopInitAlphaStack)
            },
            _hook_record {
                (LPVOID)0x14051cf90L,
                (LPVOID *)&CAlphaSetAlphaEntityStack6_user,
                (LPVOID *)&CAlphaSetAlphaEntityStack6_next,
                (LPVOID)cast_pointer_function(CAlphaSetAlphaEntityStack6_wrapper),
                (LPVOID)cast_pointer_function((void(CAlpha::*)(uint16_t))&CAlpha::SetAlphaEntityStack)
            },
            _hook_record {
                (LPVOID)0x14051cda0L,
                (LPVOID *)&CAlphaSetAlphaStack7_user,
                (LPVOID *)&CAlphaSetAlphaStack7_next,
                (LPVOID)cast_pointer_function(CAlphaSetAlphaStack7_wrapper),
                (LPVOID)cast_pointer_function((void(CAlpha::*)(uint16_t))&CAlpha::SetAlphaStack)
            },
            _hook_record {
                (LPVOID)0x14051cf70L,
                (LPVOID *)&CAlphaSetCoronaStack8_user,
                (LPVOID *)&CAlphaSetCoronaStack8_next,
                (LPVOID)cast_pointer_function(CAlphaSetCoronaStack8_wrapper),
                (LPVOID)cast_pointer_function((void(CAlpha::*)(uint16_t))&CAlpha::SetCoronaStack)
            },
            _hook_record {
                (LPVOID)0x14051cde0L,
                (LPVOID *)&CAlphaSortAlphaStack9_user,
                (LPVOID *)&CAlphaSortAlphaStack9_next,
                (LPVOID)cast_pointer_function(CAlphaSortAlphaStack9_wrapper),
                (LPVOID)cast_pointer_function((uint32_t*(CAlpha::*)(float*))&CAlpha::SortAlphaStack)
            },
            _hook_record {
                (LPVOID)0x14051cc90L,
                (LPVOID *)&CAlphadtor_CAlpha10_user,
                (LPVOID *)&CAlphadtor_CAlpha10_next,
                (LPVOID)cast_pointer_function(CAlphadtor_CAlpha10_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CAlpha::*)())&CAlpha::dtor_CAlpha)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
