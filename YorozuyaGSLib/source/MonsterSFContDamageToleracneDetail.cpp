#include <MonsterSFContDamageToleracneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::MonsterSFContDamageToleracneGetToleranceProb2_ptr MonsterSFContDamageToleracneGetToleranceProb2_next(nullptr);
        Info::MonsterSFContDamageToleracneGetToleranceProb2_clbk MonsterSFContDamageToleracneGetToleranceProb2_user(nullptr);
        
        Info::MonsterSFContDamageToleracneInit4_ptr MonsterSFContDamageToleracneInit4_next(nullptr);
        Info::MonsterSFContDamageToleracneInit4_clbk MonsterSFContDamageToleracneInit4_user(nullptr);
        
        Info::MonsterSFContDamageToleracneIsSFContDamage6_ptr MonsterSFContDamageToleracneIsSFContDamage6_next(nullptr);
        Info::MonsterSFContDamageToleracneIsSFContDamage6_clbk MonsterSFContDamageToleracneIsSFContDamage6_user(nullptr);
        
        
        Info::MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_ptr MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_next(nullptr);
        Info::MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_clbk MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_user(nullptr);
        
        Info::MonsterSFContDamageToleracneOnlyOnceInit10_ptr MonsterSFContDamageToleracneOnlyOnceInit10_next(nullptr);
        Info::MonsterSFContDamageToleracneOnlyOnceInit10_clbk MonsterSFContDamageToleracneOnlyOnceInit10_user(nullptr);
        
        Info::MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_ptr MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_next(nullptr);
        Info::MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_clbk MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_user(nullptr);
        
        Info::MonsterSFContDamageToleracneUpdate14_ptr MonsterSFContDamageToleracneUpdate14_next(nullptr);
        Info::MonsterSFContDamageToleracneUpdate14_clbk MonsterSFContDamageToleracneUpdate14_user(nullptr);
        
        float MonsterSFContDamageToleracneGetToleranceProb2_wrapper(struct MonsterSFContDamageToleracne* _this)
        {
           return MonsterSFContDamageToleracneGetToleranceProb2_user(_this, MonsterSFContDamageToleracneGetToleranceProb2_next);
        };
        void MonsterSFContDamageToleracneInit4_wrapper(struct MonsterSFContDamageToleracne* _this, float fMaxTolValue)
        {
           MonsterSFContDamageToleracneInit4_user(_this, fMaxTolValue, MonsterSFContDamageToleracneInit4_next);
        };
        bool MonsterSFContDamageToleracneIsSFContDamage6_wrapper(struct MonsterSFContDamageToleracne* _this)
        {
           return MonsterSFContDamageToleracneIsSFContDamage6_user(_this, MonsterSFContDamageToleracneIsSFContDamage6_next);
        };
        
        void MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_wrapper(struct MonsterSFContDamageToleracne* _this)
        {
           MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_user(_this, MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_next);
        };
        void MonsterSFContDamageToleracneOnlyOnceInit10_wrapper(struct MonsterSFContDamageToleracne* _this, struct CMonster* pMonster)
        {
           MonsterSFContDamageToleracneOnlyOnceInit10_user(_this, pMonster, MonsterSFContDamageToleracneOnlyOnceInit10_next);
        };
        void MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_wrapper(struct MonsterSFContDamageToleracne* _this, float fAddValue)
        {
           MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_user(_this, fAddValue, MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_next);
        };
        void MonsterSFContDamageToleracneUpdate14_wrapper(struct MonsterSFContDamageToleracne* _this)
        {
           MonsterSFContDamageToleracneUpdate14_user(_this, MonsterSFContDamageToleracneUpdate14_next);
        };
        
        ::std::array<hook_record, 7> MonsterSFContDamageToleracne_functions = 
        {
            _hook_record {
                (LPVOID)0x14014caf0L,
                (LPVOID *)&MonsterSFContDamageToleracneGetToleranceProb2_user,
                (LPVOID *)&MonsterSFContDamageToleracneGetToleranceProb2_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracneGetToleranceProb2_wrapper),
                (LPVOID)cast_pointer_function((float(MonsterSFContDamageToleracne::*)())&MonsterSFContDamageToleracne::GetToleranceProb)
            },
            _hook_record {
                (LPVOID)0x140157ef0L,
                (LPVOID *)&MonsterSFContDamageToleracneInit4_user,
                (LPVOID *)&MonsterSFContDamageToleracneInit4_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracneInit4_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSFContDamageToleracne::*)(float))&MonsterSFContDamageToleracne::Init)
            },
            _hook_record {
                (LPVOID)0x140157f90L,
                (LPVOID *)&MonsterSFContDamageToleracneIsSFContDamage6_user,
                (LPVOID *)&MonsterSFContDamageToleracneIsSFContDamage6_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracneIsSFContDamage6_wrapper),
                (LPVOID)cast_pointer_function((bool(MonsterSFContDamageToleracne::*)())&MonsterSFContDamageToleracne::IsSFContDamage)
            },
            _hook_record {
                (LPVOID)0x140157e80L,
                (LPVOID *)&MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_user,
                (LPVOID *)&MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracnector_MonsterSFContDamageToleracne8_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSFContDamageToleracne::*)())&MonsterSFContDamageToleracne::ctor_MonsterSFContDamageToleracne)
            },
            _hook_record {
                (LPVOID)0x140157ed0L,
                (LPVOID *)&MonsterSFContDamageToleracneOnlyOnceInit10_user,
                (LPVOID *)&MonsterSFContDamageToleracneOnlyOnceInit10_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracneOnlyOnceInit10_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSFContDamageToleracne::*)(struct CMonster*))&MonsterSFContDamageToleracne::OnlyOnceInit)
            },
            _hook_record {
                (LPVOID)0x140158000L,
                (LPVOID *)&MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_user,
                (LPVOID *)&MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracneSetSFDamageToleracne_Variation12_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSFContDamageToleracne::*)(float))&MonsterSFContDamageToleracne::SetSFDamageToleracne_Variation)
            },
            _hook_record {
                (LPVOID)0x140158080L,
                (LPVOID *)&MonsterSFContDamageToleracneUpdate14_user,
                (LPVOID *)&MonsterSFContDamageToleracneUpdate14_next,
                (LPVOID)cast_pointer_function(MonsterSFContDamageToleracneUpdate14_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSFContDamageToleracne::*)())&MonsterSFContDamageToleracne::Update)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
