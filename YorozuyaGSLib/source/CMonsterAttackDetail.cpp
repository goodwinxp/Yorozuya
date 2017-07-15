#include <CMonsterAttackDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMonsterAttackAttackMonsterForce2_ptr CMonsterAttackAttackMonsterForce2_next(nullptr);
        Info::CMonsterAttackAttackMonsterForce2_clbk CMonsterAttackAttackMonsterForce2_user(nullptr);
        
        Info::CMonsterAttackAttackMonsterGen4_ptr CMonsterAttackAttackMonsterGen4_next(nullptr);
        Info::CMonsterAttackAttackMonsterGen4_clbk CMonsterAttackAttackMonsterGen4_user(nullptr);
        
        Info::CMonsterAttackAttackMonsterSkill6_ptr CMonsterAttackAttackMonsterSkill6_next(nullptr);
        Info::CMonsterAttackAttackMonsterSkill6_clbk CMonsterAttackAttackMonsterSkill6_user(nullptr);
        
        
        Info::CMonsterAttackctor_CMonsterAttack8_ptr CMonsterAttackctor_CMonsterAttack8_next(nullptr);
        Info::CMonsterAttackctor_CMonsterAttack8_clbk CMonsterAttackctor_CMonsterAttack8_user(nullptr);
        
        Info::CMonsterAttackModifyMonsterAttFc10_ptr CMonsterAttackModifyMonsterAttFc10_next(nullptr);
        Info::CMonsterAttackModifyMonsterAttFc10_clbk CMonsterAttackModifyMonsterAttFc10_user(nullptr);
        
        Info::CMonsterAttack_CalcMonSkillAttPnt12_ptr CMonsterAttack_CalcMonSkillAttPnt12_next(nullptr);
        Info::CMonsterAttack_CalcMonSkillAttPnt12_clbk CMonsterAttack_CalcMonSkillAttPnt12_user(nullptr);
        
        void CMonsterAttackAttackMonsterForce2_wrapper(struct CMonsterAttack* _this, struct _attack_param* pParam)
        {
           CMonsterAttackAttackMonsterForce2_user(_this, pParam, CMonsterAttackAttackMonsterForce2_next);
        };
        void CMonsterAttackAttackMonsterGen4_wrapper(struct CMonsterAttack* _this, struct _attack_param* pParam, bool bMustMiss)
        {
           CMonsterAttackAttackMonsterGen4_user(_this, pParam, bMustMiss, CMonsterAttackAttackMonsterGen4_next);
        };
        void CMonsterAttackAttackMonsterSkill6_wrapper(struct CMonsterAttack* _this, struct _attack_param* pParam)
        {
           CMonsterAttackAttackMonsterSkill6_user(_this, pParam, CMonsterAttackAttackMonsterSkill6_next);
        };
        
        void CMonsterAttackctor_CMonsterAttack8_wrapper(struct CMonsterAttack* _this, struct CCharacter* pThis)
        {
           CMonsterAttackctor_CMonsterAttack8_user(_this, pThis, CMonsterAttackctor_CMonsterAttack8_next);
        };
        float CMonsterAttackModifyMonsterAttFc10_wrapper(struct CMonsterAttack* _this, float fAttFc)
        {
           return CMonsterAttackModifyMonsterAttFc10_user(_this, fAttFc, CMonsterAttackModifyMonsterAttFc10_next);
        };
        int CMonsterAttack_CalcMonSkillAttPnt12_wrapper(struct CMonsterAttack* _this)
        {
           return CMonsterAttack_CalcMonSkillAttPnt12_user(_this, CMonsterAttack_CalcMonSkillAttPnt12_next);
        };
        
        ::std::array<hook_record, 6> CMonsterAttack_functions = 
        {
            _hook_record {
                (LPVOID)0x14015ba60L,
                (LPVOID *)&CMonsterAttackAttackMonsterForce2_user,
                (LPVOID *)&CMonsterAttackAttackMonsterForce2_next,
                (LPVOID)cast_pointer_function(CMonsterAttackAttackMonsterForce2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAttack::*)(struct _attack_param*))&CMonsterAttack::AttackMonsterForce)
            },
            _hook_record {
                (LPVOID)0x14015b300L,
                (LPVOID *)&CMonsterAttackAttackMonsterGen4_user,
                (LPVOID *)&CMonsterAttackAttackMonsterGen4_next,
                (LPVOID)cast_pointer_function(CMonsterAttackAttackMonsterGen4_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAttack::*)(struct _attack_param*, bool))&CMonsterAttack::AttackMonsterGen)
            },
            _hook_record {
                (LPVOID)0x14015abd0L,
                (LPVOID *)&CMonsterAttackAttackMonsterSkill6_user,
                (LPVOID *)&CMonsterAttackAttackMonsterSkill6_next,
                (LPVOID)cast_pointer_function(CMonsterAttackAttackMonsterSkill6_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAttack::*)(struct _attack_param*))&CMonsterAttack::AttackMonsterSkill)
            },
            _hook_record {
                (LPVOID)0x14014f8e0L,
                (LPVOID *)&CMonsterAttackctor_CMonsterAttack8_user,
                (LPVOID *)&CMonsterAttackctor_CMonsterAttack8_next,
                (LPVOID)cast_pointer_function(CMonsterAttackctor_CMonsterAttack8_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAttack::*)(struct CCharacter*))&CMonsterAttack::ctor_CMonsterAttack)
            },
            _hook_record {
                (LPVOID)0x1401615b0L,
                (LPVOID *)&CMonsterAttackModifyMonsterAttFc10_user,
                (LPVOID *)&CMonsterAttackModifyMonsterAttFc10_next,
                (LPVOID)cast_pointer_function(CMonsterAttackModifyMonsterAttFc10_wrapper),
                (LPVOID)cast_pointer_function((float(CMonsterAttack::*)(float))&CMonsterAttack::ModifyMonsterAttFc)
            },
            _hook_record {
                (LPVOID)0x14015a6a0L,
                (LPVOID *)&CMonsterAttack_CalcMonSkillAttPnt12_user,
                (LPVOID *)&CMonsterAttack_CalcMonSkillAttPnt12_next,
                (LPVOID)cast_pointer_function(CMonsterAttack_CalcMonSkillAttPnt12_wrapper),
                (LPVOID)cast_pointer_function((int(CMonsterAttack::*)())&CMonsterAttack::_CalcMonSkillAttPnt)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
