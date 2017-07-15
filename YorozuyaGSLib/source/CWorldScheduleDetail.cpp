#include <CWorldScheduleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CWorldSchedulector_CWorldSchedule2_ptr CWorldSchedulector_CWorldSchedule2_next(nullptr);
        Info::CWorldSchedulector_CWorldSchedule2_clbk CWorldSchedulector_CWorldSchedule2_user(nullptr);
        
        Info::CWorldScheduleCalcScheduleCursor4_ptr CWorldScheduleCalcScheduleCursor4_next(nullptr);
        Info::CWorldScheduleCalcScheduleCursor4_clbk CWorldScheduleCalcScheduleCursor4_user(nullptr);
        
        Info::CWorldScheduleChangeSchCursor6_ptr CWorldScheduleChangeSchCursor6_next(nullptr);
        Info::CWorldScheduleChangeSchCursor6_clbk CWorldScheduleChangeSchCursor6_user(nullptr);
        
        Info::CWorldScheduleCheckSch8_ptr CWorldScheduleCheckSch8_next(nullptr);
        Info::CWorldScheduleCheckSch8_clbk CWorldScheduleCheckSch8_user(nullptr);
        
        Info::CWorldScheduleDataCheck10_ptr CWorldScheduleDataCheck10_next(nullptr);
        Info::CWorldScheduleDataCheck10_clbk CWorldScheduleDataCheck10_user(nullptr);
        
        Info::CWorldScheduleInit12_ptr CWorldScheduleInit12_next(nullptr);
        Info::CWorldScheduleInit12_clbk CWorldScheduleInit12_user(nullptr);
        
        Info::CWorldScheduleLoop14_ptr CWorldScheduleLoop14_next(nullptr);
        Info::CWorldScheduleLoop14_clbk CWorldScheduleLoop14_user(nullptr);
        
        Info::CWorldSchedulePassOneStep16_ptr CWorldSchedulePassOneStep16_next(nullptr);
        Info::CWorldSchedulePassOneStep16_clbk CWorldSchedulePassOneStep16_user(nullptr);
        
        
        Info::CWorldScheduledtor_CWorldSchedule18_ptr CWorldScheduledtor_CWorldSchedule18_next(nullptr);
        Info::CWorldScheduledtor_CWorldSchedule18_clbk CWorldScheduledtor_CWorldSchedule18_user(nullptr);
        
        
        void CWorldSchedulector_CWorldSchedule2_wrapper(struct CWorldSchedule* _this)
        {
           CWorldSchedulector_CWorldSchedule2_user(_this, CWorldSchedulector_CWorldSchedule2_next);
        };
        int CWorldScheduleCalcScheduleCursor4_wrapper(struct CWorldSchedule* _this, int nHour, int nMin)
        {
           return CWorldScheduleCalcScheduleCursor4_user(_this, nHour, nMin, CWorldScheduleCalcScheduleCursor4_next);
        };
        void CWorldScheduleChangeSchCursor6_wrapper(struct CWorldSchedule* _this, struct _WorldSchedule_fld* pFld, int nPassMin)
        {
           CWorldScheduleChangeSchCursor6_user(_this, pFld, nPassMin, CWorldScheduleChangeSchCursor6_next);
        };
        void CWorldScheduleCheckSch8_wrapper(struct CWorldSchedule* _this)
        {
           CWorldScheduleCheckSch8_user(_this, CWorldScheduleCheckSch8_next);
        };
        bool CWorldScheduleDataCheck10_wrapper(struct CWorldSchedule* _this)
        {
           return CWorldScheduleDataCheck10_user(_this, CWorldScheduleDataCheck10_next);
        };
        bool CWorldScheduleInit12_wrapper(struct CWorldSchedule* _this)
        {
           return CWorldScheduleInit12_user(_this, CWorldScheduleInit12_next);
        };
        void CWorldScheduleLoop14_wrapper(struct CWorldSchedule* _this)
        {
           CWorldScheduleLoop14_user(_this, CWorldScheduleLoop14_next);
        };
        void CWorldSchedulePassOneStep16_wrapper(struct CWorldSchedule* _this)
        {
           CWorldSchedulePassOneStep16_user(_this, CWorldSchedulePassOneStep16_next);
        };
        
        void CWorldScheduledtor_CWorldSchedule18_wrapper(struct CWorldSchedule* _this)
        {
           CWorldScheduledtor_CWorldSchedule18_user(_this, CWorldScheduledtor_CWorldSchedule18_next);
        };
        
        ::std::array<hook_record, 9> CWorldSchedule_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f34f0L,
                (LPVOID *)&CWorldSchedulector_CWorldSchedule2_user,
                (LPVOID *)&CWorldSchedulector_CWorldSchedule2_next,
                (LPVOID)cast_pointer_function(CWorldSchedulector_CWorldSchedule2_wrapper),
                (LPVOID)cast_pointer_function((void(CWorldSchedule::*)())&CWorldSchedule::ctor_CWorldSchedule)
            },
            _hook_record {
                (LPVOID)0x1403f4180L,
                (LPVOID *)&CWorldScheduleCalcScheduleCursor4_user,
                (LPVOID *)&CWorldScheduleCalcScheduleCursor4_next,
                (LPVOID)cast_pointer_function(CWorldScheduleCalcScheduleCursor4_wrapper),
                (LPVOID)cast_pointer_function((int(CWorldSchedule::*)(int, int))&CWorldSchedule::CalcScheduleCursor)
            },
            _hook_record {
                (LPVOID)0x1403f3ee0L,
                (LPVOID *)&CWorldScheduleChangeSchCursor6_user,
                (LPVOID *)&CWorldScheduleChangeSchCursor6_next,
                (LPVOID)cast_pointer_function(CWorldScheduleChangeSchCursor6_wrapper),
                (LPVOID)cast_pointer_function((void(CWorldSchedule::*)(struct _WorldSchedule_fld*, int))&CWorldSchedule::ChangeSchCursor)
            },
            _hook_record {
                (LPVOID)0x1403f3aa0L,
                (LPVOID *)&CWorldScheduleCheckSch8_user,
                (LPVOID *)&CWorldScheduleCheckSch8_next,
                (LPVOID)cast_pointer_function(CWorldScheduleCheckSch8_wrapper),
                (LPVOID)cast_pointer_function((void(CWorldSchedule::*)())&CWorldSchedule::CheckSch)
            },
            _hook_record {
                (LPVOID)0x1403f3ff0L,
                (LPVOID *)&CWorldScheduleDataCheck10_user,
                (LPVOID *)&CWorldScheduleDataCheck10_next,
                (LPVOID)cast_pointer_function(CWorldScheduleDataCheck10_wrapper),
                (LPVOID)cast_pointer_function((bool(CWorldSchedule::*)())&CWorldSchedule::DataCheck)
            },
            _hook_record {
                (LPVOID)0x1403f3590L,
                (LPVOID *)&CWorldScheduleInit12_user,
                (LPVOID *)&CWorldScheduleInit12_next,
                (LPVOID)cast_pointer_function(CWorldScheduleInit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CWorldSchedule::*)())&CWorldSchedule::Init)
            },
            _hook_record {
                (LPVOID)0x1403f3a30L,
                (LPVOID *)&CWorldScheduleLoop14_user,
                (LPVOID *)&CWorldScheduleLoop14_next,
                (LPVOID)cast_pointer_function(CWorldScheduleLoop14_wrapper),
                (LPVOID)cast_pointer_function((void(CWorldSchedule::*)())&CWorldSchedule::Loop)
            },
            _hook_record {
                (LPVOID)0x1403f3e30L,
                (LPVOID *)&CWorldSchedulePassOneStep16_user,
                (LPVOID *)&CWorldSchedulePassOneStep16_next,
                (LPVOID)cast_pointer_function(CWorldSchedulePassOneStep16_wrapper),
                (LPVOID)cast_pointer_function((void(CWorldSchedule::*)())&CWorldSchedule::PassOneStep)
            },
            _hook_record {
                (LPVOID)0x1403f4630L,
                (LPVOID *)&CWorldScheduledtor_CWorldSchedule18_user,
                (LPVOID *)&CWorldScheduledtor_CWorldSchedule18_next,
                (LPVOID)cast_pointer_function(CWorldScheduledtor_CWorldSchedule18_wrapper),
                (LPVOID)cast_pointer_function((void(CWorldSchedule::*)())&CWorldSchedule::dtor_CWorldSchedule)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
