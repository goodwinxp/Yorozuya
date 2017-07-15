#include <ATL__CFileTimeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CFileTimector_CFileTime1_ptr ATL__CFileTimector_CFileTime1_next(nullptr);
            Info::ATL__CFileTimector_CFileTime1_clbk ATL__CFileTimector_CFileTime1_user(nullptr);
            
            
            Info::ATL__CFileTimector_CFileTime2_ptr ATL__CFileTimector_CFileTime2_next(nullptr);
            Info::ATL__CFileTimector_CFileTime2_clbk ATL__CFileTimector_CFileTime2_user(nullptr);
            
            
            Info::ATL__CFileTimector_CFileTime3_ptr ATL__CFileTimector_CFileTime3_next(nullptr);
            Info::ATL__CFileTimector_CFileTime3_clbk ATL__CFileTimector_CFileTime3_user(nullptr);
            
            Info::ATL__CFileTimeGetTickCount4_ptr ATL__CFileTimeGetTickCount4_next(nullptr);
            Info::ATL__CFileTimeGetTickCount4_clbk ATL__CFileTimeGetTickCount4_user(nullptr);
            
            Info::ATL__CFileTimeGetTime5_ptr ATL__CFileTimeGetTime5_next(nullptr);
            Info::ATL__CFileTimeGetTime5_clbk ATL__CFileTimeGetTime5_user(nullptr);
            
            Info::ATL__CFileTimeLocalToUTC6_ptr ATL__CFileTimeLocalToUTC6_next(nullptr);
            Info::ATL__CFileTimeLocalToUTC6_clbk ATL__CFileTimeLocalToUTC6_user(nullptr);
            
            Info::ATL__CFileTimeSetTime7_ptr ATL__CFileTimeSetTime7_next(nullptr);
            Info::ATL__CFileTimeSetTime7_clbk ATL__CFileTimeSetTime7_user(nullptr);
            
            Info::ATL__CFileTimeUTCToLocal8_ptr ATL__CFileTimeUTCToLocal8_next(nullptr);
            Info::ATL__CFileTimeUTCToLocal8_clbk ATL__CFileTimeUTCToLocal8_user(nullptr);
            
            
            void ATL__CFileTimector_CFileTime1_wrapper(struct ATL::CFileTime* _this, struct _FILETIME* ft)
            {
               ATL__CFileTimector_CFileTime1_user(_this, ft, ATL__CFileTimector_CFileTime1_next);
            };
            
            void ATL__CFileTimector_CFileTime2_wrapper(struct ATL::CFileTime* _this, uint64_t nTime)
            {
               ATL__CFileTimector_CFileTime2_user(_this, nTime, ATL__CFileTimector_CFileTime2_next);
            };
            
            void ATL__CFileTimector_CFileTime3_wrapper(struct ATL::CFileTime* _this)
            {
               ATL__CFileTimector_CFileTime3_user(_this, ATL__CFileTimector_CFileTime3_next);
            };
            struct ATL::CFileTime* ATL__CFileTimeGetTickCount4_wrapper(struct ATL::CFileTime* result)
            {
               return ATL__CFileTimeGetTickCount4_user(result, ATL__CFileTimeGetTickCount4_next);
            };
            uint64_t ATL__CFileTimeGetTime5_wrapper(struct ATL::CFileTime* _this)
            {
               return ATL__CFileTimeGetTime5_user(_this, ATL__CFileTimeGetTime5_next);
            };
            struct ATL::CFileTime* ATL__CFileTimeLocalToUTC6_wrapper(struct ATL::CFileTime* _this, struct ATL::CFileTime* result)
            {
               return ATL__CFileTimeLocalToUTC6_user(_this, result, ATL__CFileTimeLocalToUTC6_next);
            };
            void ATL__CFileTimeSetTime7_wrapper(struct ATL::CFileTime* _this, uint64_t nTime)
            {
               ATL__CFileTimeSetTime7_user(_this, nTime, ATL__CFileTimeSetTime7_next);
            };
            struct ATL::CFileTime* ATL__CFileTimeUTCToLocal8_wrapper(struct ATL::CFileTime* _this, struct ATL::CFileTime* result)
            {
               return ATL__CFileTimeUTCToLocal8_user(_this, result, ATL__CFileTimeUTCToLocal8_next);
            };
            
            ::std::array<hook_record, 8> CFileTime_functions = 
            {
                _hook_record {
                    (LPVOID)0x140673920L,
                    (LPVOID *)&ATL__CFileTimector_CFileTime1_user,
                    (LPVOID *)&ATL__CFileTimector_CFileTime1_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimector_CFileTime1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTime::*)(struct _FILETIME*))&ATL::CFileTime::ctor_CFileTime)
                },
                _hook_record {
                    (LPVOID)0x140673960L,
                    (LPVOID *)&ATL__CFileTimector_CFileTime2_user,
                    (LPVOID *)&ATL__CFileTimector_CFileTime2_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimector_CFileTime2_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTime::*)(uint64_t))&ATL::CFileTime::ctor_CFileTime)
                },
                _hook_record {
                    (LPVOID)0x1406738f0L,
                    (LPVOID *)&ATL__CFileTimector_CFileTime3_user,
                    (LPVOID *)&ATL__CFileTimector_CFileTime3_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimector_CFileTime3_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTime::*)())&ATL::CFileTime::ctor_CFileTime)
                },
                _hook_record {
                    (LPVOID)0x1406739e0L,
                    (LPVOID *)&ATL__CFileTimeGetTickCount4_user,
                    (LPVOID *)&ATL__CFileTimeGetTickCount4_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeGetTickCount4_wrapper),
                    (LPVOID)cast_pointer_function((struct ATL::CFileTime*(*)(struct ATL::CFileTime*))&ATL::CFileTime::GetTickCount)
                },
                _hook_record {
                    (LPVOID)0x140673e20L,
                    (LPVOID *)&ATL__CFileTimeGetTime5_user,
                    (LPVOID *)&ATL__CFileTimeGetTime5_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeGetTime5_wrapper),
                    (LPVOID)cast_pointer_function((uint64_t(ATL::CFileTime::*)())&ATL::CFileTime::GetTime)
                },
                _hook_record {
                    (LPVOID)0x140673ed0L,
                    (LPVOID *)&ATL__CFileTimeLocalToUTC6_user,
                    (LPVOID *)&ATL__CFileTimeLocalToUTC6_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeLocalToUTC6_wrapper),
                    (LPVOID)cast_pointer_function((struct ATL::CFileTime*(ATL::CFileTime::*)(struct ATL::CFileTime*))&ATL::CFileTime::LocalToUTC)
                },
                _hook_record {
                    (LPVOID)0x140673e50L,
                    (LPVOID *)&ATL__CFileTimeSetTime7_user,
                    (LPVOID *)&ATL__CFileTimeSetTime7_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeSetTime7_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTime::*)(uint64_t))&ATL::CFileTime::SetTime)
                },
                _hook_record {
                    (LPVOID)0x140673e80L,
                    (LPVOID *)&ATL__CFileTimeUTCToLocal8_user,
                    (LPVOID *)&ATL__CFileTimeUTCToLocal8_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeUTCToLocal8_wrapper),
                    (LPVOID)cast_pointer_function((struct ATL::CFileTime*(ATL::CFileTime::*)(struct ATL::CFileTime*))&ATL::CFileTime::UTCToLocal)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
