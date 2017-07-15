#include <CAttackDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CAttackAreaDamageProc2_ptr CAttackAreaDamageProc2_next(nullptr);
        Info::CAttackAreaDamageProc2_clbk CAttackAreaDamageProc2_user(nullptr);
        
        Info::CAttackAttackForce4_ptr CAttackAttackForce4_next(nullptr);
        Info::CAttackAttackForce4_clbk CAttackAttackForce4_user(nullptr);
        
        Info::CAttackAttackGen6_ptr CAttackAttackGen6_next(nullptr);
        Info::CAttackAttackGen6_clbk CAttackAttackGen6_user(nullptr);
        
        
        Info::CAttackctor_CAttack8_ptr CAttackctor_CAttack8_next(nullptr);
        Info::CAttackctor_CAttack8_clbk CAttackctor_CAttack8_user(nullptr);
        
        Info::CAttackCalcAvgDamage10_ptr CAttackCalcAvgDamage10_next(nullptr);
        Info::CAttackCalcAvgDamage10_clbk CAttackCalcAvgDamage10_user(nullptr);
        
        Info::CAttackCheckGuildBattleLimit12_ptr CAttackCheckGuildBattleLimit12_next(nullptr);
        Info::CAttackCheckGuildBattleLimit12_clbk CAttackCheckGuildBattleLimit12_user(nullptr);
        
        Info::CAttackFlashDamageProc14_ptr CAttackFlashDamageProc14_next(nullptr);
        Info::CAttackFlashDamageProc14_clbk CAttackFlashDamageProc14_user(nullptr);
        
        Info::CAttackGetAttackFC16_ptr CAttackGetAttackFC16_next(nullptr);
        Info::CAttackGetAttackFC16_clbk CAttackGetAttackFC16_user(nullptr);
        
        Info::CAttackGetMeleeSkillIndex18_ptr CAttackGetMeleeSkillIndex18_next(nullptr);
        Info::CAttackGetMeleeSkillIndex18_clbk CAttackGetMeleeSkillIndex18_user(nullptr);
        
        Info::CAttackIsCharInSector20_ptr CAttackIsCharInSector20_next(nullptr);
        Info::CAttackIsCharInSector20_clbk CAttackIsCharInSector20_user(nullptr);
        
        Info::CAttackMonsterCritical_Exception_Rate22_ptr CAttackMonsterCritical_Exception_Rate22_next(nullptr);
        Info::CAttackMonsterCritical_Exception_Rate22_clbk CAttackMonsterCritical_Exception_Rate22_user(nullptr);
        
        Info::CAttackSectorDamageProc24_ptr CAttackSectorDamageProc24_next(nullptr);
        Info::CAttackSectorDamageProc24_clbk CAttackSectorDamageProc24_user(nullptr);
        
        Info::CAttackSetActiveSucc26_ptr CAttackSetActiveSucc26_next(nullptr);
        Info::CAttackSetActiveSucc26_clbk CAttackSetActiveSucc26_user(nullptr);
        
        Info::CAttackSetStaticMember28_ptr CAttackSetStaticMember28_next(nullptr);
        Info::CAttackSetStaticMember28_clbk CAttackSetStaticMember28_user(nullptr);
        
        Info::CAttack_CalcForceAttPnt30_ptr CAttack_CalcForceAttPnt30_next(nullptr);
        Info::CAttack_CalcForceAttPnt30_clbk CAttack_CalcForceAttPnt30_user(nullptr);
        
        Info::CAttack_CalcGenAttPnt32_ptr CAttack_CalcGenAttPnt32_next(nullptr);
        Info::CAttack_CalcGenAttPnt32_clbk CAttack_CalcGenAttPnt32_user(nullptr);
        
        void CAttackAreaDamageProc2_wrapper(struct CAttack* _this, int nLimitRadius, int nAttPower, float* pTar, int nEffAttPower, bool bUseEffBullet)
        {
           CAttackAreaDamageProc2_user(_this, nLimitRadius, nAttPower, pTar, nEffAttPower, bUseEffBullet, CAttackAreaDamageProc2_next);
        };
        void CAttackAttackForce4_wrapper(struct CAttack* _this, struct _attack_param* pParam, bool bUseEffBullet)
        {
           CAttackAttackForce4_user(_this, pParam, bUseEffBullet, CAttackAttackForce4_next);
        };
        void CAttackAttackGen6_wrapper(struct CAttack* _this, struct _attack_param* pParam, bool bMustMiss, bool bUseEffBullet)
        {
           CAttackAttackGen6_user(_this, pParam, bMustMiss, bUseEffBullet, CAttackAttackGen6_next);
        };
        
        void CAttackctor_CAttack8_wrapper(struct CAttack* _this, struct CCharacter* pThis)
        {
           CAttackctor_CAttack8_user(_this, pThis, CAttackctor_CAttack8_next);
        };
        void CAttackCalcAvgDamage10_wrapper(struct CAttack* _this)
        {
           CAttackCalcAvgDamage10_user(_this, CAttackCalcAvgDamage10_next);
        };
        bool CAttackCheckGuildBattleLimit12_wrapper(struct CAttack* _this, struct CGameObject* pObject, bool* pbInGuildBattle)
        {
           return CAttackCheckGuildBattleLimit12_user(_this, pObject, pbInGuildBattle, CAttackCheckGuildBattleLimit12_next);
        };
        void CAttackFlashDamageProc14_wrapper(struct CAttack* _this, int nLimDist, int nAttPower, int nAngle, int nEffAttPower, bool bUseEffBullet)
        {
           CAttackFlashDamageProc14_user(_this, nLimDist, nAttPower, nAngle, nEffAttPower, bUseEffBullet, CAttackFlashDamageProc14_next);
        };
        float CAttackGetAttackFC16_wrapper(struct CAttack* _this, struct CPlayer* pPlayer, char bySkill, bool bNear, bool bUnit)
        {
           return CAttackGetAttackFC16_user(_this, pPlayer, bySkill, bNear, bUnit, CAttackGetAttackFC16_next);
        };
        int CAttackGetMeleeSkillIndex18_wrapper(int nMeleeTechCode)
        {
           return CAttackGetMeleeSkillIndex18_user(nMeleeTechCode, CAttackGetMeleeSkillIndex18_next);
        };
        int CAttackIsCharInSector20_wrapper(float* chkpos, float* src, float* dest, float angle, float radius)
        {
           return CAttackIsCharInSector20_user(chkpos, src, dest, angle, radius, CAttackIsCharInSector20_next);
        };
        int CAttackMonsterCritical_Exception_Rate22_wrapper(struct CAttack* _this, struct CCharacter* pCharacter, bool bBackAttack)
        {
           return CAttackMonsterCritical_Exception_Rate22_user(_this, pCharacter, bBackAttack, CAttackMonsterCritical_Exception_Rate22_next);
        };
        void CAttackSectorDamageProc24_wrapper(struct CAttack* _this, int nSkillLv, int nAttPower, int nAngle, int nShotNum, int nWeaponRange, int nEffAttPower, bool bUseEffBullet)
        {
           CAttackSectorDamageProc24_user(_this, nSkillLv, nAttPower, nAngle, nShotNum, nWeaponRange, nEffAttPower, bUseEffBullet, CAttackSectorDamageProc24_next);
        };
        void CAttackSetActiveSucc26_wrapper(struct CAttack* _this, bool bSucc)
        {
           CAttackSetActiveSucc26_user(_this, bSucc, CAttackSetActiveSucc26_next);
        };
        void CAttackSetStaticMember28_wrapper(struct CRecordData* pSkillData)
        {
           CAttackSetStaticMember28_user(pSkillData, CAttackSetStaticMember28_next);
        };
        int CAttack_CalcForceAttPnt30_wrapper(struct CAttack* _this, bool bUseEffBullet)
        {
           return CAttack_CalcForceAttPnt30_user(_this, bUseEffBullet, CAttack_CalcForceAttPnt30_next);
        };
        int CAttack_CalcGenAttPnt32_wrapper(struct CAttack* _this, bool bUseEffBullet)
        {
           return CAttack_CalcGenAttPnt32_user(_this, bUseEffBullet, CAttack_CalcGenAttPnt32_next);
        };
        
        ::std::array<hook_record, 16> CAttack_functions = 
        {
            _hook_record {
                (LPVOID)0x14016c320L,
                (LPVOID *)&CAttackAreaDamageProc2_user,
                (LPVOID *)&CAttackAreaDamageProc2_next,
                (LPVOID)cast_pointer_function(CAttackAreaDamageProc2_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(int, int, float*, int, bool))&CAttack::AreaDamageProc)
            },
            _hook_record {
                (LPVOID)0x14016a210L,
                (LPVOID *)&CAttackAttackForce4_user,
                (LPVOID *)&CAttackAttackForce4_next,
                (LPVOID)cast_pointer_function(CAttackAttackForce4_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(struct _attack_param*, bool))&CAttack::AttackForce)
            },
            _hook_record {
                (LPVOID)0x140169520L,
                (LPVOID *)&CAttackAttackGen6_user,
                (LPVOID *)&CAttackAttackGen6_next,
                (LPVOID)cast_pointer_function(CAttackAttackGen6_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(struct _attack_param*, bool, bool))&CAttack::AttackGen)
            },
            _hook_record {
                (LPVOID)0x140169480L,
                (LPVOID *)&CAttackctor_CAttack8_user,
                (LPVOID *)&CAttackctor_CAttack8_next,
                (LPVOID)cast_pointer_function(CAttackctor_CAttack8_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(struct CCharacter*))&CAttack::ctor_CAttack)
            },
            _hook_record {
                (LPVOID)0x14016dbb0L,
                (LPVOID *)&CAttackCalcAvgDamage10_user,
                (LPVOID *)&CAttackCalcAvgDamage10_next,
                (LPVOID)cast_pointer_function(CAttackCalcAvgDamage10_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)())&CAttack::CalcAvgDamage)
            },
            _hook_record {
                (LPVOID)0x14016b570L,
                (LPVOID *)&CAttackCheckGuildBattleLimit12_user,
                (LPVOID *)&CAttackCheckGuildBattleLimit12_next,
                (LPVOID)cast_pointer_function(CAttackCheckGuildBattleLimit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CAttack::*)(struct CGameObject*, bool*))&CAttack::CheckGuildBattleLimit)
            },
            _hook_record {
                (LPVOID)0x14016b6f0L,
                (LPVOID *)&CAttackFlashDamageProc14_user,
                (LPVOID *)&CAttackFlashDamageProc14_next,
                (LPVOID)cast_pointer_function(CAttackFlashDamageProc14_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(int, int, int, int, bool))&CAttack::FlashDamageProc)
            },
            _hook_record {
                (LPVOID)0x14016dd00L,
                (LPVOID *)&CAttackGetAttackFC16_user,
                (LPVOID *)&CAttackGetAttackFC16_next,
                (LPVOID)cast_pointer_function(CAttackGetAttackFC16_wrapper),
                (LPVOID)cast_pointer_function((float(CAttack::*)(struct CPlayer*, char, bool, bool))&CAttack::GetAttackFC)
            },
            _hook_record {
                (LPVOID)0x14016d880L,
                (LPVOID *)&CAttackGetMeleeSkillIndex18_user,
                (LPVOID *)&CAttackGetMeleeSkillIndex18_next,
                (LPVOID)cast_pointer_function(CAttackGetMeleeSkillIndex18_wrapper),
                (LPVOID)cast_pointer_function((int(*)(int))&CAttack::GetMeleeSkillIndex)
            },
            _hook_record {
                (LPVOID)0x14016d920L,
                (LPVOID *)&CAttackIsCharInSector20_user,
                (LPVOID *)&CAttackIsCharInSector20_next,
                (LPVOID)cast_pointer_function(CAttackIsCharInSector20_wrapper),
                (LPVOID)cast_pointer_function((int(*)(float*, float*, float*, float, float))&CAttack::IsCharInSector)
            },
            _hook_record {
                (LPVOID)0x14016a8f0L,
                (LPVOID *)&CAttackMonsterCritical_Exception_Rate22_user,
                (LPVOID *)&CAttackMonsterCritical_Exception_Rate22_next,
                (LPVOID)cast_pointer_function(CAttackMonsterCritical_Exception_Rate22_wrapper),
                (LPVOID)cast_pointer_function((int(CAttack::*)(struct CCharacter*, bool))&CAttack::MonsterCritical_Exception_Rate)
            },
            _hook_record {
                (LPVOID)0x14016cdd0L,
                (LPVOID *)&CAttackSectorDamageProc24_user,
                (LPVOID *)&CAttackSectorDamageProc24_next,
                (LPVOID)cast_pointer_function(CAttackSectorDamageProc24_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(int, int, int, int, int, int, bool))&CAttack::SectorDamageProc)
            },
            _hook_record {
                (LPVOID)0x14008e710L,
                (LPVOID *)&CAttackSetActiveSucc26_user,
                (LPVOID *)&CAttackSetActiveSucc26_next,
                (LPVOID)cast_pointer_function(CAttackSetActiveSucc26_wrapper),
                (LPVOID)cast_pointer_function((void(CAttack::*)(bool))&CAttack::SetActiveSucc)
            },
            _hook_record {
                (LPVOID)0x14016d860L,
                (LPVOID *)&CAttackSetStaticMember28_user,
                (LPVOID *)&CAttackSetStaticMember28_next,
                (LPVOID)cast_pointer_function(CAttackSetStaticMember28_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CRecordData*))&CAttack::SetStaticMember)
            },
            _hook_record {
                (LPVOID)0x14016af70L,
                (LPVOID *)&CAttack_CalcForceAttPnt30_user,
                (LPVOID *)&CAttack_CalcForceAttPnt30_next,
                (LPVOID)cast_pointer_function(CAttack_CalcForceAttPnt30_wrapper),
                (LPVOID)cast_pointer_function((int(CAttack::*)(bool))&CAttack::_CalcForceAttPnt)
            },
            _hook_record {
                (LPVOID)0x14016aa00L,
                (LPVOID *)&CAttack_CalcGenAttPnt32_user,
                (LPVOID *)&CAttack_CalcGenAttPnt32_next,
                (LPVOID)cast_pointer_function(CAttack_CalcGenAttPnt32_wrapper),
                (LPVOID)cast_pointer_function((int(CAttack::*)(bool))&CAttack::_CalcGenAttPnt)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
