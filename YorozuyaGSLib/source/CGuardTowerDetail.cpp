#include <CGuardTowerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGuardTowerAttack2_ptr CGuardTowerAttack2_next(nullptr);
        Info::CGuardTowerAttack2_clbk CGuardTowerAttack2_user(nullptr);
        
        Info::CGuardTowerAttackableHeight4_ptr CGuardTowerAttackableHeight4_next(nullptr);
        Info::CGuardTowerAttackableHeight4_clbk CGuardTowerAttackableHeight4_user(nullptr);
        
        
        Info::CGuardTowerctor_CGuardTower6_ptr CGuardTowerctor_CGuardTower6_next(nullptr);
        Info::CGuardTowerctor_CGuardTower6_clbk CGuardTowerctor_CGuardTower6_user(nullptr);
        
        Info::CGuardTowerCreate8_ptr CGuardTowerCreate8_next(nullptr);
        Info::CGuardTowerCreate8_clbk CGuardTowerCreate8_user(nullptr);
        
        Info::CGuardTowerDestroy10_ptr CGuardTowerDestroy10_next(nullptr);
        Info::CGuardTowerDestroy10_clbk CGuardTowerDestroy10_user(nullptr);
        
        Info::CGuardTowerGetAttackDP12_ptr CGuardTowerGetAttackDP12_next(nullptr);
        Info::CGuardTowerGetAttackDP12_clbk CGuardTowerGetAttackDP12_user(nullptr);
        
        Info::CGuardTowerGetAttackRange14_ptr CGuardTowerGetAttackRange14_next(nullptr);
        Info::CGuardTowerGetAttackRange14_clbk CGuardTowerGetAttackRange14_user(nullptr);
        
        Info::CGuardTowerGetDefFC16_ptr CGuardTowerGetDefFC16_next(nullptr);
        Info::CGuardTowerGetDefFC16_clbk CGuardTowerGetDefFC16_user(nullptr);
        
        Info::CGuardTowerGetDefFacing18_ptr CGuardTowerGetDefFacing18_next(nullptr);
        Info::CGuardTowerGetDefFacing18_clbk CGuardTowerGetDefFacing18_user(nullptr);
        
        Info::CGuardTowerGetDefGap20_ptr CGuardTowerGetDefGap20_next(nullptr);
        Info::CGuardTowerGetDefGap20_clbk CGuardTowerGetDefGap20_user(nullptr);
        
        Info::CGuardTowerGetDefSkill22_ptr CGuardTowerGetDefSkill22_next(nullptr);
        Info::CGuardTowerGetDefSkill22_clbk CGuardTowerGetDefSkill22_user(nullptr);
        
        Info::CGuardTowerGetFireTol24_ptr CGuardTowerGetFireTol24_next(nullptr);
        Info::CGuardTowerGetFireTol24_clbk CGuardTowerGetFireTol24_user(nullptr);
        
        Info::CGuardTowerGetGenAttackProb26_ptr CGuardTowerGetGenAttackProb26_next(nullptr);
        Info::CGuardTowerGetGenAttackProb26_clbk CGuardTowerGetGenAttackProb26_user(nullptr);
        
        Info::CGuardTowerGetHP28_ptr CGuardTowerGetHP28_next(nullptr);
        Info::CGuardTowerGetHP28_clbk CGuardTowerGetHP28_user(nullptr);
        
        Info::CGuardTowerGetLevel30_ptr CGuardTowerGetLevel30_next(nullptr);
        Info::CGuardTowerGetLevel30_clbk CGuardTowerGetLevel30_user(nullptr);
        
        Info::CGuardTowerGetMaxHP32_ptr CGuardTowerGetMaxHP32_next(nullptr);
        Info::CGuardTowerGetMaxHP32_clbk CGuardTowerGetMaxHP32_user(nullptr);
        
        Info::CGuardTowerGetNewSerial34_ptr CGuardTowerGetNewSerial34_next(nullptr);
        Info::CGuardTowerGetNewSerial34_clbk CGuardTowerGetNewSerial34_user(nullptr);
        
        Info::CGuardTowerGetObjName36_ptr CGuardTowerGetObjName36_next(nullptr);
        Info::CGuardTowerGetObjName36_clbk CGuardTowerGetObjName36_user(nullptr);
        
        Info::CGuardTowerGetObjRace38_ptr CGuardTowerGetObjRace38_next(nullptr);
        Info::CGuardTowerGetObjRace38_clbk CGuardTowerGetObjRace38_user(nullptr);
        
        Info::CGuardTowerGetSoilTol40_ptr CGuardTowerGetSoilTol40_next(nullptr);
        Info::CGuardTowerGetSoilTol40_clbk CGuardTowerGetSoilTol40_user(nullptr);
        
        Info::CGuardTowerGetWaterTol42_ptr CGuardTowerGetWaterTol42_next(nullptr);
        Info::CGuardTowerGetWaterTol42_clbk CGuardTowerGetWaterTol42_user(nullptr);
        
        Info::CGuardTowerGetWeaponAdjust44_ptr CGuardTowerGetWeaponAdjust44_next(nullptr);
        Info::CGuardTowerGetWeaponAdjust44_clbk CGuardTowerGetWeaponAdjust44_user(nullptr);
        
        Info::CGuardTowerGetWeaponClass46_ptr CGuardTowerGetWeaponClass46_next(nullptr);
        Info::CGuardTowerGetWeaponClass46_clbk CGuardTowerGetWeaponClass46_user(nullptr);
        
        Info::CGuardTowerGetWidth48_ptr CGuardTowerGetWidth48_next(nullptr);
        Info::CGuardTowerGetWidth48_clbk CGuardTowerGetWidth48_user(nullptr);
        
        Info::CGuardTowerGetWindTol50_ptr CGuardTowerGetWindTol50_next(nullptr);
        Info::CGuardTowerGetWindTol50_clbk CGuardTowerGetWindTol50_user(nullptr);
        
        Info::CGuardTowerInit52_ptr CGuardTowerInit52_next(nullptr);
        Info::CGuardTowerInit52_clbk CGuardTowerInit52_user(nullptr);
        
        Info::CGuardTowerIsBeAttackedAble54_ptr CGuardTowerIsBeAttackedAble54_next(nullptr);
        Info::CGuardTowerIsBeAttackedAble54_clbk CGuardTowerIsBeAttackedAble54_user(nullptr);
        
        Info::CGuardTowerIsBeDamagedAble56_ptr CGuardTowerIsBeDamagedAble56_next(nullptr);
        Info::CGuardTowerIsBeDamagedAble56_clbk CGuardTowerIsBeDamagedAble56_user(nullptr);
        
        Info::CGuardTowerIsHaveEmpty58_ptr CGuardTowerIsHaveEmpty58_next(nullptr);
        Info::CGuardTowerIsHaveEmpty58_clbk CGuardTowerIsHaveEmpty58_user(nullptr);
        
        Info::CGuardTowerIsInTown60_ptr CGuardTowerIsInTown60_next(nullptr);
        Info::CGuardTowerIsInTown60_clbk CGuardTowerIsInTown60_user(nullptr);
        
        Info::CGuardTowerIsValidTarget62_ptr CGuardTowerIsValidTarget62_next(nullptr);
        Info::CGuardTowerIsValidTarget62_clbk CGuardTowerIsValidTarget62_user(nullptr);
        
        Info::CGuardTowerLoop64_ptr CGuardTowerLoop64_next(nullptr);
        Info::CGuardTowerLoop64_clbk CGuardTowerLoop64_user(nullptr);
        
        Info::CGuardTowerNotifyOwnerAttackInform66_ptr CGuardTowerNotifyOwnerAttackInform66_next(nullptr);
        Info::CGuardTowerNotifyOwnerAttackInform66_clbk CGuardTowerNotifyOwnerAttackInform66_user(nullptr);
        
        Info::CGuardTowerOnLoop_Static68_ptr CGuardTowerOnLoop_Static68_next(nullptr);
        Info::CGuardTowerOnLoop_Static68_clbk CGuardTowerOnLoop_Static68_user(nullptr);
        
        Info::CGuardTowerOutOfSec70_ptr CGuardTowerOutOfSec70_next(nullptr);
        Info::CGuardTowerOutOfSec70_clbk CGuardTowerOutOfSec70_user(nullptr);
        
        Info::CGuardTowerRecvKillMessage72_ptr CGuardTowerRecvKillMessage72_next(nullptr);
        Info::CGuardTowerRecvKillMessage72_clbk CGuardTowerRecvKillMessage72_user(nullptr);
        
        Info::CGuardTowerRobbedHP74_ptr CGuardTowerRobbedHP74_next(nullptr);
        Info::CGuardTowerRobbedHP74_clbk CGuardTowerRobbedHP74_user(nullptr);
        
        Info::CGuardTowerSearchNearEnemy76_ptr CGuardTowerSearchNearEnemy76_next(nullptr);
        Info::CGuardTowerSearchNearEnemy76_clbk CGuardTowerSearchNearEnemy76_user(nullptr);
        
        Info::CGuardTowerSendMsg_Attack78_ptr CGuardTowerSendMsg_Attack78_next(nullptr);
        Info::CGuardTowerSendMsg_Attack78_clbk CGuardTowerSendMsg_Attack78_user(nullptr);
        
        Info::CGuardTowerSendMsg_Create80_ptr CGuardTowerSendMsg_Create80_next(nullptr);
        Info::CGuardTowerSendMsg_Create80_clbk CGuardTowerSendMsg_Create80_user(nullptr);
        
        Info::CGuardTowerSendMsg_Destroy82_ptr CGuardTowerSendMsg_Destroy82_next(nullptr);
        Info::CGuardTowerSendMsg_Destroy82_clbk CGuardTowerSendMsg_Destroy82_user(nullptr);
        
        Info::CGuardTowerSendMsg_FixPosition84_ptr CGuardTowerSendMsg_FixPosition84_next(nullptr);
        Info::CGuardTowerSendMsg_FixPosition84_clbk CGuardTowerSendMsg_FixPosition84_user(nullptr);
        
        Info::CGuardTowerSendMsg_TowerCompleteInform86_ptr CGuardTowerSendMsg_TowerCompleteInform86_next(nullptr);
        Info::CGuardTowerSendMsg_TowerCompleteInform86_clbk CGuardTowerSendMsg_TowerCompleteInform86_user(nullptr);
        
        Info::CGuardTowerSetDamage88_ptr CGuardTowerSetDamage88_next(nullptr);
        Info::CGuardTowerSetDamage88_clbk CGuardTowerSetDamage88_user(nullptr);
        
        
        Info::CGuardTowerdtor_CGuardTower94_ptr CGuardTowerdtor_CGuardTower94_next(nullptr);
        Info::CGuardTowerdtor_CGuardTower94_clbk CGuardTowerdtor_CGuardTower94_user(nullptr);
        
        void CGuardTowerAttack2_wrapper(struct CGuardTower* _this, struct CCharacter* pTarget)
        {
           CGuardTowerAttack2_user(_this, pTarget, CGuardTowerAttack2_next);
        };
        int CGuardTowerAttackableHeight4_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerAttackableHeight4_user(_this, CGuardTowerAttackableHeight4_next);
        };
        
        void CGuardTowerctor_CGuardTower6_wrapper(struct CGuardTower* _this)
        {
           CGuardTowerctor_CGuardTower6_user(_this, CGuardTowerctor_CGuardTower6_next);
        };
        bool CGuardTowerCreate8_wrapper(struct CGuardTower* _this, struct _tower_create_setdata* pData)
        {
           return CGuardTowerCreate8_user(_this, pData, CGuardTowerCreate8_next);
        };
        bool CGuardTowerDestroy10_wrapper(struct CGuardTower* _this, char byDesType, bool bSystemBack)
        {
           return CGuardTowerDestroy10_user(_this, byDesType, bSystemBack, CGuardTowerDestroy10_next);
        };
        int CGuardTowerGetAttackDP12_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetAttackDP12_user(_this, CGuardTowerGetAttackDP12_next);
        };
        float CGuardTowerGetAttackRange14_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetAttackRange14_user(_this, CGuardTowerGetAttackRange14_next);
        };
        int CGuardTowerGetDefFC16_wrapper(struct CGuardTower* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CGuardTowerGetDefFC16_user(_this, nAttactPart, pAttChar, pnConvertPart, CGuardTowerGetDefFC16_next);
        };
        float CGuardTowerGetDefFacing18_wrapper(struct CGuardTower* _this, int nPart)
        {
           return CGuardTowerGetDefFacing18_user(_this, nPart, CGuardTowerGetDefFacing18_next);
        };
        float CGuardTowerGetDefGap20_wrapper(struct CGuardTower* _this, int nPart)
        {
           return CGuardTowerGetDefGap20_user(_this, nPart, CGuardTowerGetDefGap20_next);
        };
        int CGuardTowerGetDefSkill22_wrapper(struct CGuardTower* _this, bool bBackAttack)
        {
           return CGuardTowerGetDefSkill22_user(_this, bBackAttack, CGuardTowerGetDefSkill22_next);
        };
        int CGuardTowerGetFireTol24_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetFireTol24_user(_this, CGuardTowerGetFireTol24_next);
        };
        int CGuardTowerGetGenAttackProb26_wrapper(struct CGuardTower* _this, struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
           return CGuardTowerGetGenAttackProb26_user(_this, pDst, nPart, bBackAttack, CGuardTowerGetGenAttackProb26_next);
        };
        int CGuardTowerGetHP28_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetHP28_user(_this, CGuardTowerGetHP28_next);
        };
        int CGuardTowerGetLevel30_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetLevel30_user(_this, CGuardTowerGetLevel30_next);
        };
        int CGuardTowerGetMaxHP32_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetMaxHP32_user(_this, CGuardTowerGetMaxHP32_next);
        };
        unsigned int CGuardTowerGetNewSerial34_wrapper()
        {
           return CGuardTowerGetNewSerial34_user(CGuardTowerGetNewSerial34_next);
        };
        char* CGuardTowerGetObjName36_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetObjName36_user(_this, CGuardTowerGetObjName36_next);
        };
        int CGuardTowerGetObjRace38_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetObjRace38_user(_this, CGuardTowerGetObjRace38_next);
        };
        int CGuardTowerGetSoilTol40_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetSoilTol40_user(_this, CGuardTowerGetSoilTol40_next);
        };
        int CGuardTowerGetWaterTol42_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetWaterTol42_user(_this, CGuardTowerGetWaterTol42_next);
        };
        float CGuardTowerGetWeaponAdjust44_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetWeaponAdjust44_user(_this, CGuardTowerGetWeaponAdjust44_next);
        };
        int CGuardTowerGetWeaponClass46_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetWeaponClass46_user(_this, CGuardTowerGetWeaponClass46_next);
        };
        float CGuardTowerGetWidth48_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetWidth48_user(_this, CGuardTowerGetWidth48_next);
        };
        int CGuardTowerGetWindTol50_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerGetWindTol50_user(_this, CGuardTowerGetWindTol50_next);
        };
        bool CGuardTowerInit52_wrapper(struct CGuardTower* _this, struct _object_id* pID)
        {
           return CGuardTowerInit52_user(_this, pID, CGuardTowerInit52_next);
        };
        bool CGuardTowerIsBeAttackedAble54_wrapper(struct CGuardTower* _this, bool bFirst)
        {
           return CGuardTowerIsBeAttackedAble54_user(_this, bFirst, CGuardTowerIsBeAttackedAble54_next);
        };
        bool CGuardTowerIsBeDamagedAble56_wrapper(struct CGuardTower* _this, struct CCharacter* pAtter)
        {
           return CGuardTowerIsBeDamagedAble56_user(_this, pAtter, CGuardTowerIsBeDamagedAble56_next);
        };
        bool CGuardTowerIsHaveEmpty58_wrapper()
        {
           return CGuardTowerIsHaveEmpty58_user(CGuardTowerIsHaveEmpty58_next);
        };
        bool CGuardTowerIsInTown60_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerIsInTown60_user(_this, CGuardTowerIsInTown60_next);
        };
        bool CGuardTowerIsValidTarget62_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerIsValidTarget62_user(_this, CGuardTowerIsValidTarget62_next);
        };
        void CGuardTowerLoop64_wrapper(struct CGuardTower* _this)
        {
           CGuardTowerLoop64_user(_this, CGuardTowerLoop64_next);
        };
        void CGuardTowerNotifyOwnerAttackInform66_wrapper(struct CGuardTower* _this, struct CCharacter* pDst)
        {
           CGuardTowerNotifyOwnerAttackInform66_user(_this, pDst, CGuardTowerNotifyOwnerAttackInform66_next);
        };
        void CGuardTowerOnLoop_Static68_wrapper()
        {
           CGuardTowerOnLoop_Static68_user(CGuardTowerOnLoop_Static68_next);
        };
        void CGuardTowerOutOfSec70_wrapper(struct CGuardTower* _this)
        {
           CGuardTowerOutOfSec70_user(_this, CGuardTowerOutOfSec70_next);
        };
        void CGuardTowerRecvKillMessage72_wrapper(struct CGuardTower* _this, struct CCharacter* pDier)
        {
           CGuardTowerRecvKillMessage72_user(_this, pDier, CGuardTowerRecvKillMessage72_next);
        };
        bool CGuardTowerRobbedHP74_wrapper(struct CGuardTower* _this, struct CCharacter* pDst, int nDecHP)
        {
           return CGuardTowerRobbedHP74_user(_this, pDst, nDecHP, CGuardTowerRobbedHP74_next);
        };
        struct CCharacter* CGuardTowerSearchNearEnemy76_wrapper(struct CGuardTower* _this)
        {
           return CGuardTowerSearchNearEnemy76_user(_this, CGuardTowerSearchNearEnemy76_next);
        };
        void CGuardTowerSendMsg_Attack78_wrapper(struct CGuardTower* _this, struct CAttack* pAt)
        {
           CGuardTowerSendMsg_Attack78_user(_this, pAt, CGuardTowerSendMsg_Attack78_next);
        };
        void CGuardTowerSendMsg_Create80_wrapper(struct CGuardTower* _this)
        {
           CGuardTowerSendMsg_Create80_user(_this, CGuardTowerSendMsg_Create80_next);
        };
        void CGuardTowerSendMsg_Destroy82_wrapper(struct CGuardTower* _this, char byDesType)
        {
           CGuardTowerSendMsg_Destroy82_user(_this, byDesType, CGuardTowerSendMsg_Destroy82_next);
        };
        void CGuardTowerSendMsg_FixPosition84_wrapper(struct CGuardTower* _this, int n)
        {
           CGuardTowerSendMsg_FixPosition84_user(_this, n, CGuardTowerSendMsg_FixPosition84_next);
        };
        void CGuardTowerSendMsg_TowerCompleteInform86_wrapper(struct CGuardTower* _this)
        {
           CGuardTowerSendMsg_TowerCompleteInform86_user(_this, CGuardTowerSendMsg_TowerCompleteInform86_next);
        };
        int CGuardTowerSetDamage88_wrapper(struct CGuardTower* _this, int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CGuardTowerSetDamage88_user(_this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CGuardTowerSetDamage88_next);
        };
        
        void CGuardTowerdtor_CGuardTower94_wrapper(struct CGuardTower* _this)
        {
           CGuardTowerdtor_CGuardTower94_user(_this, CGuardTowerdtor_CGuardTower94_next);
        };
        
        ::std::array<hook_record, 45> CGuardTower_functions = 
        {
            _hook_record {
                (LPVOID)0x14012f840L,
                (LPVOID *)&CGuardTowerAttack2_user,
                (LPVOID *)&CGuardTowerAttack2_next,
                (LPVOID)cast_pointer_function(CGuardTowerAttack2_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)(struct CCharacter*))&CGuardTower::Attack)
            },
            _hook_record {
                (LPVOID)0x1401328e0L,
                (LPVOID *)&CGuardTowerAttackableHeight4_user,
                (LPVOID *)&CGuardTowerAttackableHeight4_next,
                (LPVOID)cast_pointer_function(CGuardTowerAttackableHeight4_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::AttackableHeight)
            },
            _hook_record {
                (LPVOID)0x14012f340L,
                (LPVOID *)&CGuardTowerctor_CGuardTower6_user,
                (LPVOID *)&CGuardTowerctor_CGuardTower6_next,
                (LPVOID)cast_pointer_function(CGuardTowerctor_CGuardTower6_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)())&CGuardTower::ctor_CGuardTower)
            },
            _hook_record {
                (LPVOID)0x14012f510L,
                (LPVOID *)&CGuardTowerCreate8_user,
                (LPVOID *)&CGuardTowerCreate8_next,
                (LPVOID)cast_pointer_function(CGuardTowerCreate8_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)(struct _tower_create_setdata*))&CGuardTower::Create)
            },
            _hook_record {
                (LPVOID)0x14012f6f0L,
                (LPVOID *)&CGuardTowerDestroy10_user,
                (LPVOID *)&CGuardTowerDestroy10_next,
                (LPVOID)cast_pointer_function(CGuardTowerDestroy10_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)(char, bool))&CGuardTower::Destroy)
            },
            _hook_record {
                (LPVOID)0x1401328c0L,
                (LPVOID *)&CGuardTowerGetAttackDP12_user,
                (LPVOID *)&CGuardTowerGetAttackDP12_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetAttackDP12_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x140132670L,
                (LPVOID *)&CGuardTowerGetAttackRange14_user,
                (LPVOID *)&CGuardTowerGetAttackRange14_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetAttackRange14_wrapper),
                (LPVOID)cast_pointer_function((float(CGuardTower::*)())&CGuardTower::GetAttackRange)
            },
            _hook_record {
                (LPVOID)0x1401326c0L,
                (LPVOID *)&CGuardTowerGetDefFC16_user,
                (LPVOID *)&CGuardTowerGetDefFC16_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetDefFC16_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)(int, struct CCharacter*, int*))&CGuardTower::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x140132810L,
                (LPVOID *)&CGuardTowerGetDefFacing18_user,
                (LPVOID *)&CGuardTowerGetDefFacing18_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetDefFacing18_wrapper),
                (LPVOID)cast_pointer_function((float(CGuardTower::*)(int))&CGuardTower::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x1401327c0L,
                (LPVOID *)&CGuardTowerGetDefGap20_user,
                (LPVOID *)&CGuardTowerGetDefGap20_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetDefGap20_wrapper),
                (LPVOID)cast_pointer_function((float(CGuardTower::*)(int))&CGuardTower::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x140132710L,
                (LPVOID *)&CGuardTowerGetDefSkill22_user,
                (LPVOID *)&CGuardTowerGetDefSkill22_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetDefSkill22_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)(bool))&CGuardTower::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x140132740L,
                (LPVOID *)&CGuardTowerGetFireTol24_user,
                (LPVOID *)&CGuardTowerGetFireTol24_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetFireTol24_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x1401302b0L,
                (LPVOID *)&CGuardTowerGetGenAttackProb26_user,
                (LPVOID *)&CGuardTowerGetGenAttackProb26_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetGenAttackProb26_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)(struct CCharacter*, int, bool))&CGuardTower::GetGenAttackProb)
            },
            _hook_record {
                (LPVOID)0x1401325e0L,
                (LPVOID *)&CGuardTowerGetHP28_user,
                (LPVOID *)&CGuardTowerGetHP28_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetHP28_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetHP)
            },
            _hook_record {
                (LPVOID)0x1401326f0L,
                (LPVOID *)&CGuardTowerGetLevel30_user,
                (LPVOID *)&CGuardTowerGetLevel30_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetLevel30_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetLevel)
            },
            _hook_record {
                (LPVOID)0x140132600L,
                (LPVOID *)&CGuardTowerGetMaxHP32_user,
                (LPVOID *)&CGuardTowerGetMaxHP32_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetMaxHP32_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x1401329b0L,
                (LPVOID *)&CGuardTowerGetNewSerial34_user,
                (LPVOID *)&CGuardTowerGetNewSerial34_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetNewSerial34_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&CGuardTower::GetNewSerial)
            },
            _hook_record {
                (LPVOID)0x1401303f0L,
                (LPVOID *)&CGuardTowerGetObjName36_user,
                (LPVOID *)&CGuardTowerGetObjName36_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetObjName36_wrapper),
                (LPVOID)cast_pointer_function((char*(CGuardTower::*)())&CGuardTower::GetObjName)
            },
            _hook_record {
                (LPVOID)0x140132920L,
                (LPVOID *)&CGuardTowerGetObjRace38_user,
                (LPVOID *)&CGuardTowerGetObjRace38_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetObjRace38_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x140132780L,
                (LPVOID *)&CGuardTowerGetSoilTol40_user,
                (LPVOID *)&CGuardTowerGetSoilTol40_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetSoilTol40_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x140132760L,
                (LPVOID *)&CGuardTowerGetWaterTol42_user,
                (LPVOID *)&CGuardTowerGetWaterTol42_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetWaterTol42_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x140132860L,
                (LPVOID *)&CGuardTowerGetWeaponAdjust44_user,
                (LPVOID *)&CGuardTowerGetWeaponAdjust44_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetWeaponAdjust44_wrapper),
                (LPVOID)cast_pointer_function((float(CGuardTower::*)())&CGuardTower::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x1401328b0L,
                (LPVOID *)&CGuardTowerGetWeaponClass46_user,
                (LPVOID *)&CGuardTowerGetWeaponClass46_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetWeaponClass46_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetWeaponClass)
            },
            _hook_record {
                (LPVOID)0x140132620L,
                (LPVOID *)&CGuardTowerGetWidth48_user,
                (LPVOID *)&CGuardTowerGetWidth48_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetWidth48_wrapper),
                (LPVOID)cast_pointer_function((float(CGuardTower::*)())&CGuardTower::GetWidth)
            },
            _hook_record {
                (LPVOID)0x1401327a0L,
                (LPVOID *)&CGuardTowerGetWindTol50_user,
                (LPVOID *)&CGuardTowerGetWindTol50_next,
                (LPVOID)cast_pointer_function(CGuardTowerGetWindTol50_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)())&CGuardTower::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x14012f3f0L,
                (LPVOID *)&CGuardTowerInit52_user,
                (LPVOID *)&CGuardTowerInit52_next,
                (LPVOID)cast_pointer_function(CGuardTowerInit52_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)(struct _object_id*))&CGuardTower::Init)
            },
            _hook_record {
                (LPVOID)0x1401328f0L,
                (LPVOID *)&CGuardTowerIsBeAttackedAble54_user,
                (LPVOID *)&CGuardTowerIsBeAttackedAble54_next,
                (LPVOID)cast_pointer_function(CGuardTowerIsBeAttackedAble54_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)(bool))&CGuardTower::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x140131a80L,
                (LPVOID *)&CGuardTowerIsBeDamagedAble56_user,
                (LPVOID *)&CGuardTowerIsBeDamagedAble56_next,
                (LPVOID)cast_pointer_function(CGuardTowerIsBeDamagedAble56_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)(struct CCharacter*))&CGuardTower::IsBeDamagedAble)
            },
            _hook_record {
                (LPVOID)0x1401317e0L,
                (LPVOID *)&CGuardTowerIsHaveEmpty58_user,
                (LPVOID *)&CGuardTowerIsHaveEmpty58_next,
                (LPVOID)cast_pointer_function(CGuardTowerIsHaveEmpty58_wrapper),
                (LPVOID)cast_pointer_function((bool(*)())&CGuardTower::IsHaveEmpty)
            },
            _hook_record {
                (LPVOID)0x140132910L,
                (LPVOID *)&CGuardTowerIsInTown60_user,
                (LPVOID *)&CGuardTowerIsInTown60_next,
                (LPVOID)cast_pointer_function(CGuardTowerIsInTown60_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)())&CGuardTower::IsInTown)
            },
            _hook_record {
                (LPVOID)0x140130000L,
                (LPVOID *)&CGuardTowerIsValidTarget62_user,
                (LPVOID *)&CGuardTowerIsValidTarget62_next,
                (LPVOID)cast_pointer_function(CGuardTowerIsValidTarget62_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)())&CGuardTower::IsValidTarget)
            },
            _hook_record {
                (LPVOID)0x14012fc10L,
                (LPVOID *)&CGuardTowerLoop64_user,
                (LPVOID *)&CGuardTowerLoop64_next,
                (LPVOID)cast_pointer_function(CGuardTowerLoop64_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)())&CGuardTower::Loop)
            },
            _hook_record {
                (LPVOID)0x1401312e0L,
                (LPVOID *)&CGuardTowerNotifyOwnerAttackInform66_user,
                (LPVOID *)&CGuardTowerNotifyOwnerAttackInform66_next,
                (LPVOID)cast_pointer_function(CGuardTowerNotifyOwnerAttackInform66_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)(struct CCharacter*))&CGuardTower::NotifyOwnerAttackInform)
            },
            _hook_record {
                (LPVOID)0x140131720L,
                (LPVOID *)&CGuardTowerOnLoop_Static68_user,
                (LPVOID *)&CGuardTowerOnLoop_Static68_next,
                (LPVOID)cast_pointer_function(CGuardTowerOnLoop_Static68_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CGuardTower::OnLoop_Static)
            },
            _hook_record {
                (LPVOID)0x140132590L,
                (LPVOID *)&CGuardTowerOutOfSec70_user,
                (LPVOID *)&CGuardTowerOutOfSec70_next,
                (LPVOID)cast_pointer_function(CGuardTowerOutOfSec70_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)())&CGuardTower::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x140130610L,
                (LPVOID *)&CGuardTowerRecvKillMessage72_user,
                (LPVOID *)&CGuardTowerRecvKillMessage72_next,
                (LPVOID)cast_pointer_function(CGuardTowerRecvKillMessage72_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)(struct CCharacter*))&CGuardTower::RecvKillMessage)
            },
            _hook_record {
                (LPVOID)0x14012fb50L,
                (LPVOID *)&CGuardTowerRobbedHP74_user,
                (LPVOID *)&CGuardTowerRobbedHP74_next,
                (LPVOID)cast_pointer_function(CGuardTowerRobbedHP74_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuardTower::*)(struct CCharacter*, int))&CGuardTower::RobbedHP)
            },
            _hook_record {
                (LPVOID)0x140130b10L,
                (LPVOID *)&CGuardTowerSearchNearEnemy76_user,
                (LPVOID *)&CGuardTowerSearchNearEnemy76_next,
                (LPVOID)cast_pointer_function(CGuardTowerSearchNearEnemy76_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CGuardTower::*)())&CGuardTower::SearchNearEnemy)
            },
            _hook_record {
                (LPVOID)0x140130840L,
                (LPVOID *)&CGuardTowerSendMsg_Attack78_user,
                (LPVOID *)&CGuardTowerSendMsg_Attack78_next,
                (LPVOID)cast_pointer_function(CGuardTowerSendMsg_Attack78_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)(struct CAttack*))&CGuardTower::SendMsg_Attack)
            },
            _hook_record {
                (LPVOID)0x140130680L,
                (LPVOID *)&CGuardTowerSendMsg_Create80_user,
                (LPVOID *)&CGuardTowerSendMsg_Create80_next,
                (LPVOID)cast_pointer_function(CGuardTowerSendMsg_Create80_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)())&CGuardTower::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140130780L,
                (LPVOID *)&CGuardTowerSendMsg_Destroy82_user,
                (LPVOID *)&CGuardTowerSendMsg_Destroy82_next,
                (LPVOID)cast_pointer_function(CGuardTowerSendMsg_Destroy82_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)(char))&CGuardTower::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x140130930L,
                (LPVOID *)&CGuardTowerSendMsg_FixPosition84_user,
                (LPVOID *)&CGuardTowerSendMsg_FixPosition84_next,
                (LPVOID)cast_pointer_function(CGuardTowerSendMsg_FixPosition84_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)(int))&CGuardTower::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140130a80L,
                (LPVOID *)&CGuardTowerSendMsg_TowerCompleteInform86_user,
                (LPVOID *)&CGuardTowerSendMsg_TowerCompleteInform86_next,
                (LPVOID)cast_pointer_function(CGuardTowerSendMsg_TowerCompleteInform86_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)())&CGuardTower::SendMsg_TowerCompleteInform)
            },
            _hook_record {
                (LPVOID)0x14012fe50L,
                (LPVOID *)&CGuardTowerSetDamage88_user,
                (LPVOID *)&CGuardTowerSetDamage88_next,
                (LPVOID)cast_pointer_function(CGuardTowerSetDamage88_wrapper),
                (LPVOID)cast_pointer_function((int(CGuardTower::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CGuardTower::SetDamage)
            },
            _hook_record {
                (LPVOID)0x14012f3a0L,
                (LPVOID *)&CGuardTowerdtor_CGuardTower94_user,
                (LPVOID *)&CGuardTowerdtor_CGuardTower94_next,
                (LPVOID)cast_pointer_function(CGuardTowerdtor_CGuardTower94_wrapper),
                (LPVOID)cast_pointer_function((void(CGuardTower::*)())&CGuardTower::dtor_CGuardTower)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
