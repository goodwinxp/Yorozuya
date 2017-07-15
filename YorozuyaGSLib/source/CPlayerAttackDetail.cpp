#include <CPlayerAttackDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPlayerAttackAttackSkill2_ptr CPlayerAttackAttackSkill2_next(nullptr);
        Info::CPlayerAttackAttackSkill2_clbk CPlayerAttackAttackSkill2_user(nullptr);
        
        Info::CPlayerAttackAttackUnit4_ptr CPlayerAttackAttackUnit4_next(nullptr);
        Info::CPlayerAttackAttackUnit4_clbk CPlayerAttackAttackUnit4_user(nullptr);
        
        
        Info::CPlayerAttackctor_CPlayerAttack6_ptr CPlayerAttackctor_CPlayerAttack6_next(nullptr);
        Info::CPlayerAttackctor_CPlayerAttack6_clbk CPlayerAttackctor_CPlayerAttack6_user(nullptr);
        
        Info::CPlayerAttackWPActiveAttackForce8_ptr CPlayerAttackWPActiveAttackForce8_next(nullptr);
        Info::CPlayerAttackWPActiveAttackForce8_clbk CPlayerAttackWPActiveAttackForce8_user(nullptr);
        
        Info::CPlayerAttackWPActiveAttackSkill10_ptr CPlayerAttackWPActiveAttackSkill10_next(nullptr);
        Info::CPlayerAttackWPActiveAttackSkill10_clbk CPlayerAttackWPActiveAttackSkill10_user(nullptr);
        
        Info::CPlayerAttack_CalcSkillAttPnt12_ptr CPlayerAttack_CalcSkillAttPnt12_next(nullptr);
        Info::CPlayerAttack_CalcSkillAttPnt12_clbk CPlayerAttack_CalcSkillAttPnt12_user(nullptr);
        
        void CPlayerAttackAttackSkill2_wrapper(struct CPlayerAttack* _this, struct _attack_param* pParam, bool bUseEffBullet)
        {
           CPlayerAttackAttackSkill2_user(_this, pParam, bUseEffBullet, CPlayerAttackAttackSkill2_next);
        };
        void CPlayerAttackAttackUnit4_wrapper(struct CPlayerAttack* _this, struct _attack_param* pParam)
        {
           CPlayerAttackAttackUnit4_user(_this, pParam, CPlayerAttackAttackUnit4_next);
        };
        
        void CPlayerAttackctor_CPlayerAttack6_wrapper(struct CPlayerAttack* _this, struct CCharacter* pThis)
        {
           CPlayerAttackctor_CPlayerAttack6_user(_this, pThis, CPlayerAttackctor_CPlayerAttack6_next);
        };
        void CPlayerAttackWPActiveAttackForce8_wrapper(struct CPlayerAttack* _this, struct _attack_param* pParam)
        {
           CPlayerAttackWPActiveAttackForce8_user(_this, pParam, CPlayerAttackWPActiveAttackForce8_next);
        };
        void CPlayerAttackWPActiveAttackSkill10_wrapper(struct CPlayerAttack* _this, struct _attack_param* pParam)
        {
           CPlayerAttackWPActiveAttackSkill10_user(_this, pParam, CPlayerAttackWPActiveAttackSkill10_next);
        };
        int CPlayerAttack_CalcSkillAttPnt12_wrapper(struct CPlayerAttack* _this, bool bUseEffBullet)
        {
           return CPlayerAttack_CalcSkillAttPnt12_user(_this, bUseEffBullet, CPlayerAttack_CalcSkillAttPnt12_next);
        };
        
        ::std::array<hook_record, 6> CPlayerAttack_functions = 
        {
            _hook_record {
                (LPVOID)0x14016e140L,
                (LPVOID *)&CPlayerAttackAttackSkill2_user,
                (LPVOID *)&CPlayerAttackAttackSkill2_next,
                (LPVOID)cast_pointer_function(CPlayerAttackAttackSkill2_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayerAttack::*)(struct _attack_param*, bool))&CPlayerAttack::AttackSkill)
            },
            _hook_record {
                (LPVOID)0x14016f330L,
                (LPVOID *)&CPlayerAttackAttackUnit4_user,
                (LPVOID *)&CPlayerAttackAttackUnit4_next,
                (LPVOID)cast_pointer_function(CPlayerAttackAttackUnit4_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayerAttack::*)(struct _attack_param*))&CPlayerAttack::AttackUnit)
            },
            _hook_record {
                (LPVOID)0x14008ebf0L,
                (LPVOID *)&CPlayerAttackctor_CPlayerAttack6_user,
                (LPVOID *)&CPlayerAttackctor_CPlayerAttack6_next,
                (LPVOID)cast_pointer_function(CPlayerAttackctor_CPlayerAttack6_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayerAttack::*)(struct CCharacter*))&CPlayerAttack::ctor_CPlayerAttack)
            },
            _hook_record {
                (LPVOID)0x14016fd90L,
                (LPVOID *)&CPlayerAttackWPActiveAttackForce8_user,
                (LPVOID *)&CPlayerAttackWPActiveAttackForce8_next,
                (LPVOID)cast_pointer_function(CPlayerAttackWPActiveAttackForce8_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayerAttack::*)(struct _attack_param*))&CPlayerAttack::WPActiveAttackForce)
            },
            _hook_record {
                (LPVOID)0x1401700f0L,
                (LPVOID *)&CPlayerAttackWPActiveAttackSkill10_user,
                (LPVOID *)&CPlayerAttackWPActiveAttackSkill10_next,
                (LPVOID)cast_pointer_function(CPlayerAttackWPActiveAttackSkill10_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayerAttack::*)(struct _attack_param*))&CPlayerAttack::WPActiveAttackSkill)
            },
            _hook_record {
                (LPVOID)0x14016ec00L,
                (LPVOID *)&CPlayerAttack_CalcSkillAttPnt12_user,
                (LPVOID *)&CPlayerAttack_CalcSkillAttPnt12_next,
                (LPVOID)cast_pointer_function(CPlayerAttack_CalcSkillAttPnt12_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayerAttack::*)(bool))&CPlayerAttack::_CalcSkillAttPnt)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
