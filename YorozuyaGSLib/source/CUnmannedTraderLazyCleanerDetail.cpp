#include <CUnmannedTraderLazyCleanerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_ptr CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_next(nullptr);
        Info::CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_clbk CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_user(nullptr);
        
        Info::CUnmannedTraderLazyCleanerCompleteUpdateClear4_ptr CUnmannedTraderLazyCleanerCompleteUpdateClear4_next(nullptr);
        Info::CUnmannedTraderLazyCleanerCompleteUpdateClear4_clbk CUnmannedTraderLazyCleanerCompleteUpdateClear4_user(nullptr);
        
        Info::CUnmannedTraderLazyCleanerInit6_ptr CUnmannedTraderLazyCleanerInit6_next(nullptr);
        Info::CUnmannedTraderLazyCleanerInit6_clbk CUnmannedTraderLazyCleanerInit6_user(nullptr);
        
        Info::CUnmannedTraderLazyCleanerLoop8_ptr CUnmannedTraderLazyCleanerLoop8_next(nullptr);
        Info::CUnmannedTraderLazyCleanerLoop8_clbk CUnmannedTraderLazyCleanerLoop8_user(nullptr);
        
        Info::CUnmannedTraderLazyCleanerProcUpdate10_ptr CUnmannedTraderLazyCleanerProcUpdate10_next(nullptr);
        Info::CUnmannedTraderLazyCleanerProcUpdate10_clbk CUnmannedTraderLazyCleanerProcUpdate10_user(nullptr);
        
        Info::CUnmannedTraderLazyCleanerUpdateClear12_ptr CUnmannedTraderLazyCleanerUpdateClear12_next(nullptr);
        Info::CUnmannedTraderLazyCleanerUpdateClear12_clbk CUnmannedTraderLazyCleanerUpdateClear12_user(nullptr);
        
        
        Info::CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_ptr CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_next(nullptr);
        Info::CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_clbk CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_user(nullptr);
        
        
        void CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_wrapper(struct CUnmannedTraderLazyCleaner* _this)
        {
           CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_user(_this, CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_next);
        };
        void CUnmannedTraderLazyCleanerCompleteUpdateClear4_wrapper(struct CUnmannedTraderLazyCleaner* _this, char* p)
        {
           CUnmannedTraderLazyCleanerCompleteUpdateClear4_user(_this, p, CUnmannedTraderLazyCleanerCompleteUpdateClear4_next);
        };
        bool CUnmannedTraderLazyCleanerInit6_wrapper(struct CUnmannedTraderLazyCleaner* _this)
        {
           return CUnmannedTraderLazyCleanerInit6_user(_this, CUnmannedTraderLazyCleanerInit6_next);
        };
        void CUnmannedTraderLazyCleanerLoop8_wrapper(struct CUnmannedTraderLazyCleaner* _this)
        {
           CUnmannedTraderLazyCleanerLoop8_user(_this, CUnmannedTraderLazyCleanerLoop8_next);
        };
        char CUnmannedTraderLazyCleanerProcUpdate10_wrapper(struct CUnmannedTraderLazyCleaner* _this, char byState, struct _SYSTEMTIME* pCurTime, bool* pbRemain)
        {
           return CUnmannedTraderLazyCleanerProcUpdate10_user(_this, byState, pCurTime, pbRemain, CUnmannedTraderLazyCleanerProcUpdate10_next);
        };
        char CUnmannedTraderLazyCleanerUpdateClear12_wrapper(struct CUnmannedTraderLazyCleaner* _this, char* p)
        {
           return CUnmannedTraderLazyCleanerUpdateClear12_user(_this, p, CUnmannedTraderLazyCleanerUpdateClear12_next);
        };
        
        void CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_wrapper(struct CUnmannedTraderLazyCleaner* _this)
        {
           CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_user(_this, CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_next);
        };
        
        ::std::array<hook_record, 7> CUnmannedTraderLazyCleaner_functions = 
        {
            _hook_record {
                (LPVOID)0x140392a50L,
                (LPVOID *)&CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerctor_CUnmannedTraderLazyCleaner2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderLazyCleaner::*)())&CUnmannedTraderLazyCleaner::ctor_CUnmannedTraderLazyCleaner)
            },
            _hook_record {
                (LPVOID)0x140392cf0L,
                (LPVOID *)&CUnmannedTraderLazyCleanerCompleteUpdateClear4_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerCompleteUpdateClear4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerCompleteUpdateClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderLazyCleaner::*)(char*))&CUnmannedTraderLazyCleaner::CompleteUpdateClear)
            },
            _hook_record {
                (LPVOID)0x140392980L,
                (LPVOID *)&CUnmannedTraderLazyCleanerInit6_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerInit6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerInit6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderLazyCleaner::*)())&CUnmannedTraderLazyCleaner::Init)
            },
            _hook_record {
                (LPVOID)0x140392b10L,
                (LPVOID *)&CUnmannedTraderLazyCleanerLoop8_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerLoop8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerLoop8_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderLazyCleaner::*)())&CUnmannedTraderLazyCleaner::Loop)
            },
            _hook_record {
                (LPVOID)0x140392e00L,
                (LPVOID *)&CUnmannedTraderLazyCleanerProcUpdate10_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerProcUpdate10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerProcUpdate10_wrapper),
                (LPVOID)cast_pointer_function((char(CUnmannedTraderLazyCleaner::*)(char, struct _SYSTEMTIME*, bool*))&CUnmannedTraderLazyCleaner::ProcUpdate)
            },
            _hook_record {
                (LPVOID)0x140392bd0L,
                (LPVOID *)&CUnmannedTraderLazyCleanerUpdateClear12_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerUpdateClear12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerUpdateClear12_wrapper),
                (LPVOID)cast_pointer_function((char(CUnmannedTraderLazyCleaner::*)(char*))&CUnmannedTraderLazyCleaner::UpdateClear)
            },
            _hook_record {
                (LPVOID)0x140392a90L,
                (LPVOID *)&CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_user,
                (LPVOID *)&CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderLazyCleanerdtor_CUnmannedTraderLazyCleaner14_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderLazyCleaner::*)())&CUnmannedTraderLazyCleaner::dtor_CUnmannedTraderLazyCleaner)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
