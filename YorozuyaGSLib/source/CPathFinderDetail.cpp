#include <CPathFinderDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPathFinderAddPath1_ptr CPathFinderAddPath1_next(nullptr);
        Info::CPathFinderAddPath1_clbk CPathFinderAddPath1_user(nullptr);
        
        Info::CPathFinderCompletePath2_ptr CPathFinderCompletePath2_next(nullptr);
        Info::CPathFinderCompletePath2_clbk CPathFinderCompletePath2_user(nullptr);
        
        Info::CPathFinderGetBackLineId3_ptr CPathFinderGetBackLineId3_next(nullptr);
        Info::CPathFinderGetBackLineId3_clbk CPathFinderGetBackLineId3_user(nullptr);
        
        Info::CPathFinderGetFrontLineId4_ptr CPathFinderGetFrontLineId4_next(nullptr);
        Info::CPathFinderGetFrontLineId4_clbk CPathFinderGetFrontLineId4_user(nullptr);
        
        Info::CPathFinderGetPathCnt5_ptr CPathFinderGetPathCnt5_next(nullptr);
        Info::CPathFinderGetPathCnt5_clbk CPathFinderGetPathCnt5_user(nullptr);
        
        Info::CPathFinderGetPathDirection6_ptr CPathFinderGetPathDirection6_next(nullptr);
        Info::CPathFinderGetPathDirection6_clbk CPathFinderGetPathDirection6_user(nullptr);
        
        Info::CPathFinderPopPathStack7_ptr CPathFinderPopPathStack7_next(nullptr);
        Info::CPathFinderPopPathStack7_clbk CPathFinderPopPathStack7_user(nullptr);
        
        Info::CPathFinderPushPathStack8_ptr CPathFinderPushPathStack8_next(nullptr);
        Info::CPathFinderPushPathStack8_clbk CPathFinderPushPathStack8_user(nullptr);
        
        Info::CPathFinderSetBackLineId9_ptr CPathFinderSetBackLineId9_next(nullptr);
        Info::CPathFinderSetBackLineId9_clbk CPathFinderSetBackLineId9_user(nullptr);
        
        Info::CPathFinderSetFrontLineId10_ptr CPathFinderSetFrontLineId10_next(nullptr);
        Info::CPathFinderSetFrontLineId10_clbk CPathFinderSetFrontLineId10_user(nullptr);
        
        Info::CPathFinderSetPathDirection11_ptr CPathFinderSetPathDirection11_next(nullptr);
        Info::CPathFinderSetPathDirection11_clbk CPathFinderSetPathDirection11_user(nullptr);
        
        int64_t CPathFinderAddPath1_wrapper(struct CPathFinder* _this, float* arg_0, int arg_1)
        {
           return CPathFinderAddPath1_user(_this, arg_0, arg_1, CPathFinderAddPath1_next);
        };
        void CPathFinderCompletePath2_wrapper(struct CPathFinder* _this, int arg_0)
        {
           CPathFinderCompletePath2_user(_this, arg_0, CPathFinderCompletePath2_next);
        };
        uint16_t CPathFinderGetBackLineId3_wrapper(struct CPathFinder* _this, int arg_0)
        {
           return CPathFinderGetBackLineId3_user(_this, arg_0, CPathFinderGetBackLineId3_next);
        };
        uint16_t CPathFinderGetFrontLineId4_wrapper(struct CPathFinder* _this, int arg_0)
        {
           return CPathFinderGetFrontLineId4_user(_this, arg_0, CPathFinderGetFrontLineId4_next);
        };
        int64_t CPathFinderGetPathCnt5_wrapper(struct CPathFinder* _this, int arg_0)
        {
           return CPathFinderGetPathCnt5_user(_this, arg_0, CPathFinderGetPathCnt5_next);
        };
        int64_t CPathFinderGetPathDirection6_wrapper(struct CPathFinder* _this, int arg_0)
        {
           return CPathFinderGetPathDirection6_user(_this, arg_0, CPathFinderGetPathDirection6_next);
        };
        void CPathFinderPopPathStack7_wrapper(struct CPathFinder* _this, int arg_0)
        {
           CPathFinderPopPathStack7_user(_this, arg_0, CPathFinderPopPathStack7_next);
        };
        void CPathFinderPushPathStack8_wrapper(struct CPathFinder* _this, int arg_0)
        {
           CPathFinderPushPathStack8_user(_this, arg_0, CPathFinderPushPathStack8_next);
        };
        void CPathFinderSetBackLineId9_wrapper(struct CPathFinder* _this, int arg_0, int arg_1)
        {
           CPathFinderSetBackLineId9_user(_this, arg_0, arg_1, CPathFinderSetBackLineId9_next);
        };
        void CPathFinderSetFrontLineId10_wrapper(struct CPathFinder* _this, int arg_0, int arg_1)
        {
           CPathFinderSetFrontLineId10_user(_this, arg_0, arg_1, CPathFinderSetFrontLineId10_next);
        };
        void CPathFinderSetPathDirection11_wrapper(struct CPathFinder* _this, int arg_0, int arg_1)
        {
           CPathFinderSetPathDirection11_user(_this, arg_0, arg_1, CPathFinderSetPathDirection11_next);
        };
        
        ::std::array<hook_record, 11> CPathFinder_functions = 
        {
            _hook_record {
                (LPVOID)0x14050c710L,
                (LPVOID *)&CPathFinderAddPath1_user,
                (LPVOID *)&CPathFinderAddPath1_next,
                (LPVOID)cast_pointer_function(CPathFinderAddPath1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CPathFinder::*)(float*, int))&CPathFinder::AddPath)
            },
            _hook_record {
                (LPVOID)0x14050c550L,
                (LPVOID *)&CPathFinderCompletePath2_user,
                (LPVOID *)&CPathFinderCompletePath2_next,
                (LPVOID)cast_pointer_function(CPathFinderCompletePath2_wrapper),
                (LPVOID)cast_pointer_function((void(CPathFinder::*)(int))&CPathFinder::CompletePath)
            },
            _hook_record {
                (LPVOID)0x14050c630L,
                (LPVOID *)&CPathFinderGetBackLineId3_user,
                (LPVOID *)&CPathFinderGetBackLineId3_next,
                (LPVOID)cast_pointer_function(CPathFinderGetBackLineId3_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPathFinder::*)(int))&CPathFinder::GetBackLineId)
            },
            _hook_record {
                (LPVOID)0x14050c610L,
                (LPVOID *)&CPathFinderGetFrontLineId4_user,
                (LPVOID *)&CPathFinderGetFrontLineId4_next,
                (LPVOID)cast_pointer_function(CPathFinderGetFrontLineId4_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPathFinder::*)(int))&CPathFinder::GetFrontLineId)
            },
            _hook_record {
                (LPVOID)0x14050c570L,
                (LPVOID *)&CPathFinderGetPathCnt5_user,
                (LPVOID *)&CPathFinderGetPathCnt5_next,
                (LPVOID)cast_pointer_function(CPathFinderGetPathCnt5_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CPathFinder::*)(int))&CPathFinder::GetPathCnt)
            },
            _hook_record {
                (LPVOID)0x14050c5b0L,
                (LPVOID *)&CPathFinderGetPathDirection6_user,
                (LPVOID *)&CPathFinderGetPathDirection6_next,
                (LPVOID)cast_pointer_function(CPathFinderGetPathDirection6_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CPathFinder::*)(int))&CPathFinder::GetPathDirection)
            },
            _hook_record {
                (LPVOID)0x14050c8a0L,
                (LPVOID *)&CPathFinderPopPathStack7_user,
                (LPVOID *)&CPathFinderPopPathStack7_next,
                (LPVOID)cast_pointer_function(CPathFinderPopPathStack7_wrapper),
                (LPVOID)cast_pointer_function((void(CPathFinder::*)(int))&CPathFinder::PopPathStack)
            },
            _hook_record {
                (LPVOID)0x14050c830L,
                (LPVOID *)&CPathFinderPushPathStack8_user,
                (LPVOID *)&CPathFinderPushPathStack8_next,
                (LPVOID)cast_pointer_function(CPathFinderPushPathStack8_wrapper),
                (LPVOID)cast_pointer_function((void(CPathFinder::*)(int))&CPathFinder::PushPathStack)
            },
            _hook_record {
                (LPVOID)0x14050c5f0L,
                (LPVOID *)&CPathFinderSetBackLineId9_user,
                (LPVOID *)&CPathFinderSetBackLineId9_next,
                (LPVOID)cast_pointer_function(CPathFinderSetBackLineId9_wrapper),
                (LPVOID)cast_pointer_function((void(CPathFinder::*)(int, int))&CPathFinder::SetBackLineId)
            },
            _hook_record {
                (LPVOID)0x14050c5d0L,
                (LPVOID *)&CPathFinderSetFrontLineId10_user,
                (LPVOID *)&CPathFinderSetFrontLineId10_next,
                (LPVOID)cast_pointer_function(CPathFinderSetFrontLineId10_wrapper),
                (LPVOID)cast_pointer_function((void(CPathFinder::*)(int, int))&CPathFinder::SetFrontLineId)
            },
            _hook_record {
                (LPVOID)0x14050c590L,
                (LPVOID *)&CPathFinderSetPathDirection11_user,
                (LPVOID *)&CPathFinderSetPathDirection11_next,
                (LPVOID)cast_pointer_function(CPathFinderSetPathDirection11_wrapper),
                (LPVOID)cast_pointer_function((void(CPathFinder::*)(int, int))&CPathFinder::SetPathDirection)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
