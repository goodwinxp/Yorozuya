#include <ATL__CTraceDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CTracector_CTrace1_ptr ATL__CTracector_CTrace1_next(nullptr);
            Info::ATL__CTracector_CTrace1_clbk ATL__CTracector_CTrace1_user(nullptr);
            
            Info::ATL__CTraceChangeCategory2_ptr ATL__CTraceChangeCategory2_next(nullptr);
            Info::ATL__CTraceChangeCategory2_clbk ATL__CTraceChangeCategory2_user(nullptr);
            
            Info::ATL__CTraceRegisterCategory3_ptr ATL__CTraceRegisterCategory3_next(nullptr);
            Info::ATL__CTraceRegisterCategory3_clbk ATL__CTraceRegisterCategory3_user(nullptr);
            
            Info::ATL__CTraceTraceV5_ptr ATL__CTraceTraceV5_next(nullptr);
            Info::ATL__CTraceTraceV5_clbk ATL__CTraceTraceV5_user(nullptr);
            
            
            Info::ATL__CTracedtor_CTrace6_ptr ATL__CTracedtor_CTrace6_next(nullptr);
            Info::ATL__CTracedtor_CTrace6_clbk ATL__CTracedtor_CTrace6_user(nullptr);
            
            
            void ATL__CTracector_CTrace1_wrapper(struct ATL::CTrace* _this, int (WINAPIV* pfnCrtDbgReport)(int, char*, int, char*, char*))
            {
               ATL__CTracector_CTrace1_user(_this, pfnCrtDbgReport, ATL__CTracector_CTrace1_next);
            };
            bool ATL__CTraceChangeCategory2_wrapper(struct ATL::CTrace* _this, uint64_t dwCategory, unsigned int nLevel, ATLTRACESTATUS eStatus)
            {
               return ATL__CTraceChangeCategory2_user(_this, dwCategory, nLevel, eStatus, ATL__CTraceChangeCategory2_next);
            };
            uint64_t ATL__CTraceRegisterCategory3_wrapper(struct ATL::CTrace* _this, char* pszCategory)
            {
               return ATL__CTraceRegisterCategory3_user(_this, pszCategory, ATL__CTraceRegisterCategory3_next);
            };
            void ATL__CTraceTraceV5_wrapper(struct ATL::CTrace* _this, char* pszFileName, int nLine, uint64_t dwCategory, unsigned int nLevel, char* pszFmt, char* args)
            {
               ATL__CTraceTraceV5_user(_this, pszFileName, nLine, dwCategory, nLevel, pszFmt, args, ATL__CTraceTraceV5_next);
            };
            
            void ATL__CTracedtor_CTrace6_wrapper(struct ATL::CTrace* _this)
            {
               ATL__CTracedtor_CTrace6_user(_this, ATL__CTracedtor_CTrace6_next);
            };
            
            ::std::array<hook_record, 5> CTrace_functions = 
            {
                _hook_record {
                    (LPVOID)0x14066ddd0L,
                    (LPVOID *)&ATL__CTracector_CTrace1_user,
                    (LPVOID *)&ATL__CTracector_CTrace1_next,
                    (LPVOID)cast_pointer_function(ATL__CTracector_CTrace1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTrace::*)(int (WINAPIV*)(int, char*, int, char*, char*)))&ATL::CTrace::ctor_CTrace)
                },
                _hook_record {
                    (LPVOID)0x14066da60L,
                    (LPVOID *)&ATL__CTraceChangeCategory2_user,
                    (LPVOID *)&ATL__CTraceChangeCategory2_next,
                    (LPVOID)cast_pointer_function(ATL__CTraceChangeCategory2_wrapper),
                    (LPVOID)cast_pointer_function((bool(ATL::CTrace::*)(uint64_t, unsigned int, ATLTRACESTATUS))&ATL::CTrace::ChangeCategory)
                },
                _hook_record {
                    (LPVOID)0x14066dab0L,
                    (LPVOID *)&ATL__CTraceRegisterCategory3_user,
                    (LPVOID *)&ATL__CTraceRegisterCategory3_next,
                    (LPVOID)cast_pointer_function(ATL__CTraceRegisterCategory3_wrapper),
                    (LPVOID)cast_pointer_function((uint64_t(ATL::CTrace::*)(char*))&ATL::CTrace::RegisterCategory)
                },
                _hook_record {
                    (LPVOID)0x140025100L,
                    (LPVOID *)&ATL__CTraceTraceV5_user,
                    (LPVOID *)&ATL__CTraceTraceV5_next,
                    (LPVOID)cast_pointer_function(ATL__CTraceTraceV5_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTrace::*)(char*, int, uint64_t, unsigned int, char*, char*))&ATL::CTrace::TraceV)
                },
                _hook_record {
                    (LPVOID)0x14066dfa0L,
                    (LPVOID *)&ATL__CTracedtor_CTrace6_user,
                    (LPVOID *)&ATL__CTracedtor_CTrace6_next,
                    (LPVOID)cast_pointer_function(ATL__CTracedtor_CTrace6_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTrace::*)())&ATL::CTrace::dtor_CTrace)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
