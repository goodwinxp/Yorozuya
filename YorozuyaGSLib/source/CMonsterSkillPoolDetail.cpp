#include <CMonsterSkillPoolDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMonsterSkillPoolctor_CMonsterSkillPool2_ptr CMonsterSkillPoolctor_CMonsterSkillPool2_next(nullptr);
        Info::CMonsterSkillPoolctor_CMonsterSkillPool2_clbk CMonsterSkillPoolctor_CMonsterSkillPool2_user(nullptr);
        
        Info::CMonsterSkillPoolGetMonSkill4_ptr CMonsterSkillPoolGetMonSkill4_next(nullptr);
        Info::CMonsterSkillPoolGetMonSkill4_clbk CMonsterSkillPoolGetMonSkill4_user(nullptr);
        
        Info::CMonsterSkillPoolGetMonSkillKind6_ptr CMonsterSkillPoolGetMonSkillKind6_next(nullptr);
        Info::CMonsterSkillPoolGetMonSkillKind6_clbk CMonsterSkillPoolGetMonSkillKind6_user(nullptr);
        
        Info::CMonsterSkillPoolInit8_ptr CMonsterSkillPoolInit8_next(nullptr);
        Info::CMonsterSkillPoolInit8_clbk CMonsterSkillPoolInit8_user(nullptr);
        
        Info::CMonsterSkillPoolInsertSkill10_ptr CMonsterSkillPoolInsertSkill10_next(nullptr);
        Info::CMonsterSkillPoolInsertSkill10_clbk CMonsterSkillPoolInsertSkill10_user(nullptr);
        
        Info::CMonsterSkillPoolSet12_ptr CMonsterSkillPoolSet12_next(nullptr);
        Info::CMonsterSkillPoolSet12_clbk CMonsterSkillPoolSet12_user(nullptr);
        
        
        Info::CMonsterSkillPooldtor_CMonsterSkillPool14_ptr CMonsterSkillPooldtor_CMonsterSkillPool14_next(nullptr);
        Info::CMonsterSkillPooldtor_CMonsterSkillPool14_clbk CMonsterSkillPooldtor_CMonsterSkillPool14_user(nullptr);
        
        
        void CMonsterSkillPoolctor_CMonsterSkillPool2_wrapper(struct CMonsterSkillPool* _this)
        {
           CMonsterSkillPoolctor_CMonsterSkillPool2_user(_this, CMonsterSkillPoolctor_CMonsterSkillPool2_next);
        };
        struct CMonsterSkill* CMonsterSkillPoolGetMonSkill4_wrapper(struct CMonsterSkillPool* _this, int nIndex)
        {
           return CMonsterSkillPoolGetMonSkill4_user(_this, nIndex, CMonsterSkillPoolGetMonSkill4_next);
        };
        struct CMonsterSkill* CMonsterSkillPoolGetMonSkillKind6_wrapper(struct CMonsterSkillPool* _this, int nKind)
        {
           return CMonsterSkillPoolGetMonSkillKind6_user(_this, nKind, CMonsterSkillPoolGetMonSkillKind6_next);
        };
        void CMonsterSkillPoolInit8_wrapper(struct CMonsterSkillPool* _this)
        {
           CMonsterSkillPoolInit8_user(_this, CMonsterSkillPoolInit8_next);
        };
        int CMonsterSkillPoolInsertSkill10_wrapper(struct CMonsterSkillPool* _this, struct CMonsterSkill* skill)
        {
           return CMonsterSkillPoolInsertSkill10_user(_this, skill, CMonsterSkillPoolInsertSkill10_next);
        };
        int CMonsterSkillPoolSet12_wrapper(struct CMonsterSkillPool* _this, struct CMonster* pMyMonster)
        {
           return CMonsterSkillPoolSet12_user(_this, pMyMonster, CMonsterSkillPoolSet12_next);
        };
        
        void CMonsterSkillPooldtor_CMonsterSkillPool14_wrapper(struct CMonsterSkillPool* _this)
        {
           CMonsterSkillPooldtor_CMonsterSkillPool14_user(_this, CMonsterSkillPooldtor_CMonsterSkillPool14_next);
        };
        
        ::std::array<hook_record, 7> CMonsterSkillPool_functions = 
        {
            _hook_record {
                (LPVOID)0x14014b4b0L,
                (LPVOID *)&CMonsterSkillPoolctor_CMonsterSkillPool2_user,
                (LPVOID *)&CMonsterSkillPoolctor_CMonsterSkillPool2_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPoolctor_CMonsterSkillPool2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterSkillPool::*)())&CMonsterSkillPool::ctor_CMonsterSkillPool)
            },
            _hook_record {
                (LPVOID)0x140156b00L,
                (LPVOID *)&CMonsterSkillPoolGetMonSkill4_user,
                (LPVOID *)&CMonsterSkillPoolGetMonSkill4_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPoolGetMonSkill4_wrapper),
                (LPVOID)cast_pointer_function((struct CMonsterSkill*(CMonsterSkillPool::*)(int))&CMonsterSkillPool::GetMonSkill)
            },
            _hook_record {
                (LPVOID)0x140156b50L,
                (LPVOID *)&CMonsterSkillPoolGetMonSkillKind6_user,
                (LPVOID *)&CMonsterSkillPoolGetMonSkillKind6_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPoolGetMonSkillKind6_wrapper),
                (LPVOID)cast_pointer_function((struct CMonsterSkill*(CMonsterSkillPool::*)(int))&CMonsterSkillPool::GetMonSkillKind)
            },
            _hook_record {
                (LPVOID)0x1401569b0L,
                (LPVOID *)&CMonsterSkillPoolInit8_user,
                (LPVOID *)&CMonsterSkillPoolInit8_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPoolInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterSkillPool::*)())&CMonsterSkillPool::Init)
            },
            _hook_record {
                (LPVOID)0x140156a30L,
                (LPVOID *)&CMonsterSkillPoolInsertSkill10_user,
                (LPVOID *)&CMonsterSkillPoolInsertSkill10_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPoolInsertSkill10_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterSkillPool::*)(struct CMonsterSkill*))&CMonsterSkillPool::InsertSkill)
            },
            _hook_record {
                (LPVOID)0x140156bf0L,
                (LPVOID *)&CMonsterSkillPoolSet12_user,
                (LPVOID *)&CMonsterSkillPoolSet12_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPoolSet12_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterSkillPool::*)(struct CMonster*))&CMonsterSkillPool::Set)
            },
            _hook_record {
                (LPVOID)0x14014b600L,
                (LPVOID *)&CMonsterSkillPooldtor_CMonsterSkillPool14_user,
                (LPVOID *)&CMonsterSkillPooldtor_CMonsterSkillPool14_next,
                (LPVOID)cast_pointer_function(CMonsterSkillPooldtor_CMonsterSkillPool14_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterSkillPool::*)())&CMonsterSkillPool::dtor_CMonsterSkillPool)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
