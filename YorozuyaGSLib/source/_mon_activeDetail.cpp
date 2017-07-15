#include <_mon_activeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_mon_activeBossScheduleSave2_ptr _mon_activeBossScheduleSave2_next(nullptr);
        Info::_mon_activeBossScheduleSave2_clbk _mon_activeBossScheduleSave2_user(nullptr);
        
        Info::_mon_activeGetBossSchedule4_ptr _mon_activeGetBossSchedule4_next(nullptr);
        Info::_mon_activeGetBossSchedule4_clbk _mon_activeGetBossSchedule4_user(nullptr);
        
        Info::_mon_activeSetActive6_ptr _mon_activeSetActive6_next(nullptr);
        Info::_mon_activeSetActive6_clbk _mon_activeSetActive6_user(nullptr);
        
        Info::_mon_activeSetBossSchedule8_ptr _mon_activeSetBossSchedule8_next(nullptr);
        Info::_mon_activeSetBossSchedule8_clbk _mon_activeSetBossSchedule8_user(nullptr);
        
        Info::_mon_activeSetCurMonNum10_ptr _mon_activeSetCurMonNum10_next(nullptr);
        Info::_mon_activeSetCurMonNum10_clbk _mon_activeSetCurMonNum10_user(nullptr);
        
        Info::_mon_activeSetZeroMonNum12_ptr _mon_activeSetZeroMonNum12_next(nullptr);
        Info::_mon_activeSetZeroMonNum12_clbk _mon_activeSetZeroMonNum12_user(nullptr);
        
        
        Info::_mon_activector__mon_active14_ptr _mon_activector__mon_active14_next(nullptr);
        Info::_mon_activector__mon_active14_clbk _mon_activector__mon_active14_user(nullptr);
        
        void _mon_activeBossScheduleSave2_wrapper(struct _mon_active* _this)
        {
           _mon_activeBossScheduleSave2_user(_this, _mon_activeBossScheduleSave2_next);
        };
        struct BossSchedule* _mon_activeGetBossSchedule4_wrapper(struct _mon_active* _this)
        {
           return _mon_activeGetBossSchedule4_user(_this, _mon_activeGetBossSchedule4_next);
        };
        bool _mon_activeSetActive6_wrapper(struct _mon_active* _this, struct _mon_active_fld* pRec, struct _mon_block* pBlk, int nMonRecIndex)
        {
           return _mon_activeSetActive6_user(_this, pRec, pBlk, nMonRecIndex, _mon_activeSetActive6_next);
        };
        void _mon_activeSetBossSchedule8_wrapper(struct _mon_active* _this, struct BossSchedule* pBossSchedule)
        {
           _mon_activeSetBossSchedule8_user(_this, pBossSchedule, _mon_activeSetBossSchedule8_next);
        };
        bool _mon_activeSetCurMonNum10_wrapper(struct _mon_active* _this, int nAlter)
        {
           return _mon_activeSetCurMonNum10_user(_this, nAlter, _mon_activeSetCurMonNum10_next);
        };
        void _mon_activeSetZeroMonNum12_wrapper(struct _mon_active* _this)
        {
           _mon_activeSetZeroMonNum12_user(_this, _mon_activeSetZeroMonNum12_next);
        };
        
        void _mon_activector__mon_active14_wrapper(struct _mon_active* _this)
        {
           _mon_activector__mon_active14_user(_this, _mon_activector__mon_active14_next);
        };
        
        ::std::array<hook_record, 7> _mon_active_functions = 
        {
            _hook_record {
                (LPVOID)0x14018aaa0L,
                (LPVOID *)&_mon_activeBossScheduleSave2_user,
                (LPVOID *)&_mon_activeBossScheduleSave2_next,
                (LPVOID)cast_pointer_function(_mon_activeBossScheduleSave2_wrapper),
                (LPVOID)cast_pointer_function((void(_mon_active::*)())&_mon_active::BossScheduleSave)
            },
            _hook_record {
                (LPVOID)0x14018ae90L,
                (LPVOID *)&_mon_activeGetBossSchedule4_user,
                (LPVOID *)&_mon_activeGetBossSchedule4_next,
                (LPVOID)cast_pointer_function(_mon_activeGetBossSchedule4_wrapper),
                (LPVOID)cast_pointer_function((struct BossSchedule*(_mon_active::*)())&_mon_active::GetBossSchedule)
            },
            _hook_record {
                (LPVOID)0x140189170L,
                (LPVOID *)&_mon_activeSetActive6_user,
                (LPVOID *)&_mon_activeSetActive6_next,
                (LPVOID)cast_pointer_function(_mon_activeSetActive6_wrapper),
                (LPVOID)cast_pointer_function((bool(_mon_active::*)(struct _mon_active_fld*, struct _mon_block*, int))&_mon_active::SetActive)
            },
            _hook_record {
                (LPVOID)0x14041b6f0L,
                (LPVOID *)&_mon_activeSetBossSchedule8_user,
                (LPVOID *)&_mon_activeSetBossSchedule8_next,
                (LPVOID)cast_pointer_function(_mon_activeSetBossSchedule8_wrapper),
                (LPVOID)cast_pointer_function((void(_mon_active::*)(struct BossSchedule*))&_mon_active::SetBossSchedule)
            },
            _hook_record {
                (LPVOID)0x14014bd60L,
                (LPVOID *)&_mon_activeSetCurMonNum10_user,
                (LPVOID *)&_mon_activeSetCurMonNum10_next,
                (LPVOID)cast_pointer_function(_mon_activeSetCurMonNum10_wrapper),
                (LPVOID)cast_pointer_function((bool(_mon_active::*)(int))&_mon_active::SetCurMonNum)
            },
            _hook_record {
                (LPVOID)0x140188fc0L,
                (LPVOID *)&_mon_activeSetZeroMonNum12_user,
                (LPVOID *)&_mon_activeSetZeroMonNum12_next,
                (LPVOID)cast_pointer_function(_mon_activeSetZeroMonNum12_wrapper),
                (LPVOID)cast_pointer_function((void(_mon_active::*)())&_mon_active::SetZeroMonNum)
            },
            _hook_record {
                (LPVOID)0x1401888c0L,
                (LPVOID *)&_mon_activector__mon_active14_user,
                (LPVOID *)&_mon_activector__mon_active14_next,
                (LPVOID)cast_pointer_function(_mon_activector__mon_active14_wrapper),
                (LPVOID)cast_pointer_function((void(_mon_active::*)())&_mon_active::ctor__mon_active)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
