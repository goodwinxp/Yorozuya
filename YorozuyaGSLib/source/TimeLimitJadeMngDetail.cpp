#include <TimeLimitJadeMngDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TimeLimitJadeMngDeleteList2_ptr TimeLimitJadeMngDeleteList2_next(nullptr);
        Info::TimeLimitJadeMngDeleteList2_clbk TimeLimitJadeMngDeleteList2_user(nullptr);
        
        Info::TimeLimitJadeMngGetSheet4_ptr TimeLimitJadeMngGetSheet4_next(nullptr);
        Info::TimeLimitJadeMngGetSheet4_clbk TimeLimitJadeMngGetSheet4_user(nullptr);
        
        Info::TimeLimitJadeMngInit6_ptr TimeLimitJadeMngInit6_next(nullptr);
        Info::TimeLimitJadeMngInit6_clbk TimeLimitJadeMngInit6_user(nullptr);
        
        Info::TimeLimitJadeMngInsertList8_ptr TimeLimitJadeMngInsertList8_next(nullptr);
        Info::TimeLimitJadeMngInsertList8_clbk TimeLimitJadeMngInsertList8_user(nullptr);
        
        Info::TimeLimitJadeMngInstance10_ptr TimeLimitJadeMngInstance10_next(nullptr);
        Info::TimeLimitJadeMngInstance10_clbk TimeLimitJadeMngInstance10_user(nullptr);
        
        Info::TimeLimitJadeMngRelease12_ptr TimeLimitJadeMngRelease12_next(nullptr);
        Info::TimeLimitJadeMngRelease12_clbk TimeLimitJadeMngRelease12_user(nullptr);
        
        Info::TimeLimitJadeMngReleaseAll14_ptr TimeLimitJadeMngReleaseAll14_next(nullptr);
        Info::TimeLimitJadeMngReleaseAll14_clbk TimeLimitJadeMngReleaseAll14_user(nullptr);
        
        
        Info::TimeLimitJadeMngctor_TimeLimitJadeMng16_ptr TimeLimitJadeMngctor_TimeLimitJadeMng16_next(nullptr);
        Info::TimeLimitJadeMngctor_TimeLimitJadeMng16_clbk TimeLimitJadeMngctor_TimeLimitJadeMng16_user(nullptr);
        
        
        Info::TimeLimitJadeMngdtor_TimeLimitJadeMng20_ptr TimeLimitJadeMngdtor_TimeLimitJadeMng20_next(nullptr);
        Info::TimeLimitJadeMngdtor_TimeLimitJadeMng20_clbk TimeLimitJadeMngdtor_TimeLimitJadeMng20_user(nullptr);
        
        bool TimeLimitJadeMngDeleteList2_wrapper(struct TimeLimitJadeMng* _this, uint16_t wIdx, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return TimeLimitJadeMngDeleteList2_user(_this, wIdx, pkItem, TimeLimitJadeMngDeleteList2_next);
        };
        struct TimeLimitJade* TimeLimitJadeMngGetSheet4_wrapper(struct TimeLimitJadeMng* _this, uint16_t wIndex)
        {
           return TimeLimitJadeMngGetSheet4_user(_this, wIndex, TimeLimitJadeMngGetSheet4_next);
        };
        bool TimeLimitJadeMngInit6_wrapper(struct TimeLimitJadeMng* _this)
        {
           return TimeLimitJadeMngInit6_user(_this, TimeLimitJadeMngInit6_next);
        };
        bool TimeLimitJadeMngInsertList8_wrapper(struct TimeLimitJadeMng* _this, uint16_t wIdx, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return TimeLimitJadeMngInsertList8_user(_this, wIdx, pkItem, TimeLimitJadeMngInsertList8_next);
        };
        struct TimeLimitJadeMng* TimeLimitJadeMngInstance10_wrapper()
        {
           return TimeLimitJadeMngInstance10_user(TimeLimitJadeMngInstance10_next);
        };
        void TimeLimitJadeMngRelease12_wrapper(struct TimeLimitJadeMng* _this, uint16_t wIdx)
        {
           TimeLimitJadeMngRelease12_user(_this, wIdx, TimeLimitJadeMngRelease12_next);
        };
        void TimeLimitJadeMngReleaseAll14_wrapper(struct TimeLimitJadeMng* _this)
        {
           TimeLimitJadeMngReleaseAll14_user(_this, TimeLimitJadeMngReleaseAll14_next);
        };
        
        void TimeLimitJadeMngctor_TimeLimitJadeMng16_wrapper(struct TimeLimitJadeMng* _this)
        {
           TimeLimitJadeMngctor_TimeLimitJadeMng16_user(_this, TimeLimitJadeMngctor_TimeLimitJadeMng16_next);
        };
        
        void TimeLimitJadeMngdtor_TimeLimitJadeMng20_wrapper(struct TimeLimitJadeMng* _this)
        {
           TimeLimitJadeMngdtor_TimeLimitJadeMng20_user(_this, TimeLimitJadeMngdtor_TimeLimitJadeMng20_next);
        };
        
        ::std::array<hook_record, 9> TimeLimitJadeMng_functions = 
        {
            _hook_record {
                (LPVOID)0x1403fac50L,
                (LPVOID *)&TimeLimitJadeMngDeleteList2_user,
                (LPVOID *)&TimeLimitJadeMngDeleteList2_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngDeleteList2_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJadeMng::*)(uint16_t, struct _STORAGE_LIST::_db_con*))&TimeLimitJadeMng::DeleteList)
            },
            _hook_record {
                (LPVOID)0x14007c160L,
                (LPVOID *)&TimeLimitJadeMngGetSheet4_user,
                (LPVOID *)&TimeLimitJadeMngGetSheet4_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngGetSheet4_wrapper),
                (LPVOID)cast_pointer_function((struct TimeLimitJade*(TimeLimitJadeMng::*)(uint16_t))&TimeLimitJadeMng::GetSheet)
            },
            _hook_record {
                (LPVOID)0x1403fa980L,
                (LPVOID *)&TimeLimitJadeMngInit6_user,
                (LPVOID *)&TimeLimitJadeMngInit6_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngInit6_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJadeMng::*)())&TimeLimitJadeMng::Init)
            },
            _hook_record {
                (LPVOID)0x1403fabd0L,
                (LPVOID *)&TimeLimitJadeMngInsertList8_user,
                (LPVOID *)&TimeLimitJadeMngInsertList8_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngInsertList8_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJadeMng::*)(uint16_t, struct _STORAGE_LIST::_db_con*))&TimeLimitJadeMng::InsertList)
            },
            _hook_record {
                (LPVOID)0x14007a2d0L,
                (LPVOID *)&TimeLimitJadeMngInstance10_user,
                (LPVOID *)&TimeLimitJadeMngInstance10_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngInstance10_wrapper),
                (LPVOID)cast_pointer_function((struct TimeLimitJadeMng*(*)())&TimeLimitJadeMng::Instance)
            },
            _hook_record {
                (LPVOID)0x1403fad40L,
                (LPVOID *)&TimeLimitJadeMngRelease12_user,
                (LPVOID *)&TimeLimitJadeMngRelease12_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngRelease12_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJadeMng::*)(uint16_t))&TimeLimitJadeMng::Release)
            },
            _hook_record {
                (LPVOID)0x1403fada0L,
                (LPVOID *)&TimeLimitJadeMngReleaseAll14_user,
                (LPVOID *)&TimeLimitJadeMngReleaseAll14_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngReleaseAll14_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJadeMng::*)())&TimeLimitJadeMng::ReleaseAll)
            },
            _hook_record {
                (LPVOID)0x14007a3b0L,
                (LPVOID *)&TimeLimitJadeMngctor_TimeLimitJadeMng16_user,
                (LPVOID *)&TimeLimitJadeMngctor_TimeLimitJadeMng16_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngctor_TimeLimitJadeMng16_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJadeMng::*)())&TimeLimitJadeMng::ctor_TimeLimitJadeMng)
            },
            _hook_record {
                (LPVOID)0x1403fba90L,
                (LPVOID *)&TimeLimitJadeMngdtor_TimeLimitJadeMng20_user,
                (LPVOID *)&TimeLimitJadeMngdtor_TimeLimitJadeMng20_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeMngdtor_TimeLimitJadeMng20_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJadeMng::*)())&TimeLimitJadeMng::dtor_TimeLimitJadeMng)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
