#include <TimeLimitJadeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TimeLimitJadeCheckEndTime2_ptr TimeLimitJadeCheckEndTime2_next(nullptr);
        Info::TimeLimitJadeCheckEndTime2_clbk TimeLimitJadeCheckEndTime2_user(nullptr);
        
        Info::TimeLimitJadeCheckStartTime4_ptr TimeLimitJadeCheckStartTime4_next(nullptr);
        Info::TimeLimitJadeCheckStartTime4_clbk TimeLimitJadeCheckStartTime4_user(nullptr);
        
        Info::TimeLimitJadeDeleteUseList6_ptr TimeLimitJadeDeleteUseList6_next(nullptr);
        Info::TimeLimitJadeDeleteUseList6_clbk TimeLimitJadeDeleteUseList6_user(nullptr);
        
        Info::TimeLimitJadeDeleteWaitList8_ptr TimeLimitJadeDeleteWaitList8_next(nullptr);
        Info::TimeLimitJadeDeleteWaitList8_clbk TimeLimitJadeDeleteWaitList8_user(nullptr);
        
        Info::TimeLimitJadeInit10_ptr TimeLimitJadeInit10_next(nullptr);
        Info::TimeLimitJadeInit10_clbk TimeLimitJadeInit10_user(nullptr);
        
        Info::TimeLimitJadeInitUse12_ptr TimeLimitJadeInitUse12_next(nullptr);
        Info::TimeLimitJadeInitUse12_clbk TimeLimitJadeInitUse12_user(nullptr);
        
        Info::TimeLimitJadeInitWait14_ptr TimeLimitJadeInitWait14_next(nullptr);
        Info::TimeLimitJadeInitWait14_clbk TimeLimitJadeInitWait14_user(nullptr);
        
        Info::TimeLimitJadeInsertUseList16_ptr TimeLimitJadeInsertUseList16_next(nullptr);
        Info::TimeLimitJadeInsertUseList16_clbk TimeLimitJadeInsertUseList16_user(nullptr);
        
        Info::TimeLimitJadeInsertWaitList18_ptr TimeLimitJadeInsertWaitList18_next(nullptr);
        Info::TimeLimitJadeInsertWaitList18_clbk TimeLimitJadeInsertWaitList18_user(nullptr);
        
        Info::TimeLimitJadeRelease20_ptr TimeLimitJadeRelease20_next(nullptr);
        Info::TimeLimitJadeRelease20_clbk TimeLimitJadeRelease20_user(nullptr);
        
        
        Info::TimeLimitJadector_TimeLimitJade22_ptr TimeLimitJadector_TimeLimitJade22_next(nullptr);
        Info::TimeLimitJadector_TimeLimitJade22_clbk TimeLimitJadector_TimeLimitJade22_user(nullptr);
        
        
        Info::TimeLimitJadedtor_TimeLimitJade26_ptr TimeLimitJadedtor_TimeLimitJade26_next(nullptr);
        Info::TimeLimitJadedtor_TimeLimitJade26_clbk TimeLimitJadedtor_TimeLimitJade26_user(nullptr);
        
        int TimeLimitJadeCheckEndTime2_wrapper(struct TimeLimitJade* _this)
        {
           return TimeLimitJadeCheckEndTime2_user(_this, TimeLimitJadeCheckEndTime2_next);
        };
        int TimeLimitJadeCheckStartTime4_wrapper(struct TimeLimitJade* _this)
        {
           return TimeLimitJadeCheckStartTime4_user(_this, TimeLimitJadeCheckStartTime4_next);
        };
        bool TimeLimitJadeDeleteUseList6_wrapper(struct TimeLimitJade* _this, struct _STORAGE_LIST::_db_con* pkItem, bool bItemDel)
        {
           return TimeLimitJadeDeleteUseList6_user(_this, pkItem, bItemDel, TimeLimitJadeDeleteUseList6_next);
        };
        bool TimeLimitJadeDeleteWaitList8_wrapper(struct TimeLimitJade* _this, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return TimeLimitJadeDeleteWaitList8_user(_this, pkItem, TimeLimitJadeDeleteWaitList8_next);
        };
        bool TimeLimitJadeInit10_wrapper(struct TimeLimitJade* _this)
        {
           return TimeLimitJadeInit10_user(_this, TimeLimitJadeInit10_next);
        };
        bool TimeLimitJadeInitUse12_wrapper(struct TimeLimitJade* _this)
        {
           return TimeLimitJadeInitUse12_user(_this, TimeLimitJadeInitUse12_next);
        };
        bool TimeLimitJadeInitWait14_wrapper(struct TimeLimitJade* _this)
        {
           return TimeLimitJadeInitWait14_user(_this, TimeLimitJadeInitWait14_next);
        };
        bool TimeLimitJadeInsertUseList16_wrapper(struct TimeLimitJade* _this, struct _STORAGE_LIST::_db_con* pkItem, unsigned int dwStart, unsigned int dwEnd)
        {
           return TimeLimitJadeInsertUseList16_user(_this, pkItem, dwStart, dwEnd, TimeLimitJadeInsertUseList16_next);
        };
        bool TimeLimitJadeInsertWaitList18_wrapper(struct TimeLimitJade* _this, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return TimeLimitJadeInsertWaitList18_user(_this, pkItem, TimeLimitJadeInsertWaitList18_next);
        };
        void TimeLimitJadeRelease20_wrapper(struct TimeLimitJade* _this)
        {
           TimeLimitJadeRelease20_user(_this, TimeLimitJadeRelease20_next);
        };
        
        void TimeLimitJadector_TimeLimitJade22_wrapper(struct TimeLimitJade* _this, struct CPlayer* p)
        {
           TimeLimitJadector_TimeLimitJade22_user(_this, p, TimeLimitJadector_TimeLimitJade22_next);
        };
        
        void TimeLimitJadedtor_TimeLimitJade26_wrapper(struct TimeLimitJade* _this)
        {
           TimeLimitJadedtor_TimeLimitJade26_user(_this, TimeLimitJadedtor_TimeLimitJade26_next);
        };
        
        ::std::array<hook_record, 12> TimeLimitJade_functions = 
        {
            _hook_record {
                (LPVOID)0x1403fa240L,
                (LPVOID *)&TimeLimitJadeCheckEndTime2_user,
                (LPVOID *)&TimeLimitJadeCheckEndTime2_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeCheckEndTime2_wrapper),
                (LPVOID)cast_pointer_function((int(TimeLimitJade::*)())&TimeLimitJade::CheckEndTime)
            },
            _hook_record {
                (LPVOID)0x1403fa340L,
                (LPVOID *)&TimeLimitJadeCheckStartTime4_user,
                (LPVOID *)&TimeLimitJadeCheckStartTime4_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeCheckStartTime4_wrapper),
                (LPVOID)cast_pointer_function((int(TimeLimitJade::*)())&TimeLimitJade::CheckStartTime)
            },
            _hook_record {
                (LPVOID)0x1403fa860L,
                (LPVOID *)&TimeLimitJadeDeleteUseList6_user,
                (LPVOID *)&TimeLimitJadeDeleteUseList6_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeDeleteUseList6_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)(struct _STORAGE_LIST::_db_con*, bool))&TimeLimitJade::DeleteUseList)
            },
            _hook_record {
                (LPVOID)0x1403fa710L,
                (LPVOID *)&TimeLimitJadeDeleteWaitList8_user,
                (LPVOID *)&TimeLimitJadeDeleteWaitList8_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeDeleteWaitList8_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)(struct _STORAGE_LIST::_db_con*))&TimeLimitJade::DeleteWaitList)
            },
            _hook_record {
                (LPVOID)0x1403fa1e0L,
                (LPVOID *)&TimeLimitJadeInit10_user,
                (LPVOID *)&TimeLimitJadeInit10_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)())&TimeLimitJade::Init)
            },
            _hook_record {
                (LPVOID)0x1403fb280L,
                (LPVOID *)&TimeLimitJadeInitUse12_user,
                (LPVOID *)&TimeLimitJadeInitUse12_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeInitUse12_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)())&TimeLimitJade::InitUse)
            },
            _hook_record {
                (LPVOID)0x1403fb230L,
                (LPVOID *)&TimeLimitJadeInitWait14_user,
                (LPVOID *)&TimeLimitJadeInitWait14_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeInitWait14_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)())&TimeLimitJade::InitWait)
            },
            _hook_record {
                (LPVOID)0x1403fa7d0L,
                (LPVOID *)&TimeLimitJadeInsertUseList16_user,
                (LPVOID *)&TimeLimitJadeInsertUseList16_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeInsertUseList16_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)(struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int))&TimeLimitJade::InsertUseList)
            },
            _hook_record {
                (LPVOID)0x1403fa640L,
                (LPVOID *)&TimeLimitJadeInsertWaitList18_user,
                (LPVOID *)&TimeLimitJadeInsertWaitList18_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeInsertWaitList18_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitJade::*)(struct _STORAGE_LIST::_db_con*))&TimeLimitJade::InsertWaitList)
            },
            _hook_record {
                (LPVOID)0x1403fb7f0L,
                (LPVOID *)&TimeLimitJadeRelease20_user,
                (LPVOID *)&TimeLimitJadeRelease20_next,
                (LPVOID)cast_pointer_function(TimeLimitJadeRelease20_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJade::*)())&TimeLimitJade::Release)
            },
            _hook_record {
                (LPVOID)0x1403fb400L,
                (LPVOID *)&TimeLimitJadector_TimeLimitJade22_user,
                (LPVOID *)&TimeLimitJadector_TimeLimitJade22_next,
                (LPVOID)cast_pointer_function(TimeLimitJadector_TimeLimitJade22_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJade::*)(struct CPlayer*))&TimeLimitJade::ctor_TimeLimitJade)
            },
            _hook_record {
                (LPVOID)0x1403fb8c0L,
                (LPVOID *)&TimeLimitJadedtor_TimeLimitJade26_user,
                (LPVOID *)&TimeLimitJadedtor_TimeLimitJade26_next,
                (LPVOID)cast_pointer_function(TimeLimitJadedtor_TimeLimitJade26_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitJade::*)())&TimeLimitJade::dtor_TimeLimitJade)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
