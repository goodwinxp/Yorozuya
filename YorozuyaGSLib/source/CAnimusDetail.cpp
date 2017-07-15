#include <CAnimusDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CAnimusAIInit2_ptr CAnimusAIInit2_next(nullptr);
        Info::CAnimusAIInit2_clbk CAnimusAIInit2_user(nullptr);
        
        Info::CAnimusAction4_ptr CAnimusAction4_next(nullptr);
        Info::CAnimusAction4_clbk CAnimusAction4_user(nullptr);
        
        Info::CAnimusAlterExp6_ptr CAnimusAlterExp6_next(nullptr);
        Info::CAnimusAlterExp6_clbk CAnimusAlterExp6_user(nullptr);
        
        Info::CAnimusAlterExp_MasterReport8_ptr CAnimusAlterExp_MasterReport8_next(nullptr);
        Info::CAnimusAlterExp_MasterReport8_clbk CAnimusAlterExp_MasterReport8_user(nullptr);
        
        Info::CAnimusAlterFP_MasterReport10_ptr CAnimusAlterFP_MasterReport10_next(nullptr);
        Info::CAnimusAlterFP_MasterReport10_clbk CAnimusAlterFP_MasterReport10_user(nullptr);
        
        Info::CAnimusAlterHP_MasterReport12_ptr CAnimusAlterHP_MasterReport12_next(nullptr);
        Info::CAnimusAlterHP_MasterReport12_clbk CAnimusAlterHP_MasterReport12_user(nullptr);
        
        Info::CAnimusAlterMode_MasterReport14_ptr CAnimusAlterMode_MasterReport14_next(nullptr);
        Info::CAnimusAlterMode_MasterReport14_clbk CAnimusAlterMode_MasterReport14_user(nullptr);
        
        Info::CAnimusAttack16_ptr CAnimusAttack16_next(nullptr);
        Info::CAnimusAttack16_clbk CAnimusAttack16_user(nullptr);
        
        Info::CAnimusAttackableHeight18_ptr CAnimusAttackableHeight18_next(nullptr);
        Info::CAnimusAttackableHeight18_clbk CAnimusAttackableHeight18_user(nullptr);
        
        
        Info::CAnimusctor_CAnimus20_ptr CAnimusctor_CAnimus20_next(nullptr);
        Info::CAnimusctor_CAnimus20_clbk CAnimusctor_CAnimus20_user(nullptr);
        
        Info::CAnimusCalcAttExp22_ptr CAnimusCalcAttExp22_next(nullptr);
        Info::CAnimusCalcAttExp22_clbk CAnimusCalcAttExp22_user(nullptr);
        
        Info::CAnimusCalcDefExp24_ptr CAnimusCalcDefExp24_next(nullptr);
        Info::CAnimusCalcDefExp24_clbk CAnimusCalcDefExp24_user(nullptr);
        
        Info::CAnimusChangeMode26_ptr CAnimusChangeMode26_next(nullptr);
        Info::CAnimusChangeMode26_clbk CAnimusChangeMode26_user(nullptr);
        
        Info::CAnimusChangeMode_MasterCommand28_ptr CAnimusChangeMode_MasterCommand28_next(nullptr);
        Info::CAnimusChangeMode_MasterCommand28_clbk CAnimusChangeMode_MasterCommand28_user(nullptr);
        
        Info::CAnimusChangeTarget_MasterCommand30_ptr CAnimusChangeTarget_MasterCommand30_next(nullptr);
        Info::CAnimusChangeTarget_MasterCommand30_clbk CAnimusChangeTarget_MasterCommand30_user(nullptr);
        
        Info::CAnimusCheckPosInTown32_ptr CAnimusCheckPosInTown32_next(nullptr);
        Info::CAnimusCheckPosInTown32_clbk CAnimusCheckPosInTown32_user(nullptr);
        
        Info::CAnimusCreate34_ptr CAnimusCreate34_next(nullptr);
        Info::CAnimusCreate34_clbk CAnimusCreate34_user(nullptr);
        
        Info::CAnimusDestroy36_ptr CAnimusDestroy36_next(nullptr);
        Info::CAnimusDestroy36_clbk CAnimusDestroy36_user(nullptr);
        
        Info::CAnimusGetAttackDP38_ptr CAnimusGetAttackDP38_next(nullptr);
        Info::CAnimusGetAttackDP38_clbk CAnimusGetAttackDP38_user(nullptr);
        
        Info::CAnimusGetAttackPart40_ptr CAnimusGetAttackPart40_next(nullptr);
        Info::CAnimusGetAttackPart40_clbk CAnimusGetAttackPart40_user(nullptr);
        
        Info::CAnimusGetAttackRange42_ptr CAnimusGetAttackRange42_next(nullptr);
        Info::CAnimusGetAttackRange42_clbk CAnimusGetAttackRange42_user(nullptr);
        
        Info::CAnimusGetDefFC44_ptr CAnimusGetDefFC44_next(nullptr);
        Info::CAnimusGetDefFC44_clbk CAnimusGetDefFC44_user(nullptr);
        
        Info::CAnimusGetDefFacing46_ptr CAnimusGetDefFacing46_next(nullptr);
        Info::CAnimusGetDefFacing46_clbk CAnimusGetDefFacing46_user(nullptr);
        
        Info::CAnimusGetDefGap48_ptr CAnimusGetDefGap48_next(nullptr);
        Info::CAnimusGetDefGap48_clbk CAnimusGetDefGap48_user(nullptr);
        
        Info::CAnimusGetDefSkill50_ptr CAnimusGetDefSkill50_next(nullptr);
        Info::CAnimusGetDefSkill50_clbk CAnimusGetDefSkill50_user(nullptr);
        
        Info::CAnimusGetFireTol52_ptr CAnimusGetFireTol52_next(nullptr);
        Info::CAnimusGetFireTol52_clbk CAnimusGetFireTol52_user(nullptr);
        
        Info::CAnimusGetGenAttackProb54_ptr CAnimusGetGenAttackProb54_next(nullptr);
        Info::CAnimusGetGenAttackProb54_clbk CAnimusGetGenAttackProb54_user(nullptr);
        
        Info::CAnimusGetHP56_ptr CAnimusGetHP56_next(nullptr);
        Info::CAnimusGetHP56_clbk CAnimusGetHP56_user(nullptr);
        
        Info::CAnimusGetLevel58_ptr CAnimusGetLevel58_next(nullptr);
        Info::CAnimusGetLevel58_clbk CAnimusGetLevel58_user(nullptr);
        
        Info::CAnimusGetMaxHP60_ptr CAnimusGetMaxHP60_next(nullptr);
        Info::CAnimusGetMaxHP60_clbk CAnimusGetMaxHP60_user(nullptr);
        
        Info::CAnimusGetMaxLevel62_ptr CAnimusGetMaxLevel62_next(nullptr);
        Info::CAnimusGetMaxLevel62_clbk CAnimusGetMaxLevel62_user(nullptr);
        
        Info::CAnimusGetMoveTarget64_ptr CAnimusGetMoveTarget64_next(nullptr);
        Info::CAnimusGetMoveTarget64_clbk CAnimusGetMoveTarget64_user(nullptr);
        
        Info::CAnimusGetNewMonSerial66_ptr CAnimusGetNewMonSerial66_next(nullptr);
        Info::CAnimusGetNewMonSerial66_clbk CAnimusGetNewMonSerial66_user(nullptr);
        
        Info::CAnimusGetObjName68_ptr CAnimusGetObjName68_next(nullptr);
        Info::CAnimusGetObjName68_clbk CAnimusGetObjName68_user(nullptr);
        
        Info::CAnimusGetObjRace70_ptr CAnimusGetObjRace70_next(nullptr);
        Info::CAnimusGetObjRace70_clbk CAnimusGetObjRace70_user(nullptr);
        
        Info::CAnimusGetSoilTol72_ptr CAnimusGetSoilTol72_next(nullptr);
        Info::CAnimusGetSoilTol72_clbk CAnimusGetSoilTol72_user(nullptr);
        
        Info::CAnimusGetTarget74_ptr CAnimusGetTarget74_next(nullptr);
        Info::CAnimusGetTarget74_clbk CAnimusGetTarget74_user(nullptr);
        
        Info::CAnimusGetWaterTol76_ptr CAnimusGetWaterTol76_next(nullptr);
        Info::CAnimusGetWaterTol76_clbk CAnimusGetWaterTol76_user(nullptr);
        
        Info::CAnimusGetWeaponAdjust78_ptr CAnimusGetWeaponAdjust78_next(nullptr);
        Info::CAnimusGetWeaponAdjust78_clbk CAnimusGetWeaponAdjust78_user(nullptr);
        
        Info::CAnimusGetWeaponClass80_ptr CAnimusGetWeaponClass80_next(nullptr);
        Info::CAnimusGetWeaponClass80_clbk CAnimusGetWeaponClass80_user(nullptr);
        
        Info::CAnimusGetWidth82_ptr CAnimusGetWidth82_next(nullptr);
        Info::CAnimusGetWidth82_clbk CAnimusGetWidth82_user(nullptr);
        
        Info::CAnimusGetWindTol84_ptr CAnimusGetWindTol84_next(nullptr);
        Info::CAnimusGetWindTol84_clbk CAnimusGetWindTol84_user(nullptr);
        
        Info::CAnimusHeal86_ptr CAnimusHeal86_next(nullptr);
        Info::CAnimusHeal86_clbk CAnimusHeal86_user(nullptr);
        
        Info::CAnimusInit88_ptr CAnimusInit88_next(nullptr);
        Info::CAnimusInit88_clbk CAnimusInit88_user(nullptr);
        
        Info::CAnimusIsBeAttackedAble90_ptr CAnimusIsBeAttackedAble90_next(nullptr);
        Info::CAnimusIsBeAttackedAble90_clbk CAnimusIsBeAttackedAble90_user(nullptr);
        
        Info::CAnimusIsInTown92_ptr CAnimusIsInTown92_next(nullptr);
        Info::CAnimusIsInTown92_clbk CAnimusIsInTown92_user(nullptr);
        
        Info::CAnimusIsValidTarget94_ptr CAnimusIsValidTarget94_next(nullptr);
        Info::CAnimusIsValidTarget94_clbk CAnimusIsValidTarget94_user(nullptr);
        
        Info::CAnimusLifeTimeCheck96_ptr CAnimusLifeTimeCheck96_next(nullptr);
        Info::CAnimusLifeTimeCheck96_clbk CAnimusLifeTimeCheck96_user(nullptr);
        
        Info::CAnimusLoop98_ptr CAnimusLoop98_next(nullptr);
        Info::CAnimusLoop98_clbk CAnimusLoop98_user(nullptr);
        
        Info::CAnimusMasterAttack_MasterInform100_ptr CAnimusMasterAttack_MasterInform100_next(nullptr);
        Info::CAnimusMasterAttack_MasterInform100_clbk CAnimusMasterAttack_MasterInform100_user(nullptr);
        
        Info::CAnimusMasterBeAttacked_MasterInform102_ptr CAnimusMasterBeAttacked_MasterInform102_next(nullptr);
        Info::CAnimusMasterBeAttacked_MasterInform102_clbk CAnimusMasterBeAttacked_MasterInform102_user(nullptr);
        
        Info::CAnimusOutOfSec104_ptr CAnimusOutOfSec104_next(nullptr);
        Info::CAnimusOutOfSec104_clbk CAnimusOutOfSec104_user(nullptr);
        
        Info::CAnimusProcess106_ptr CAnimusProcess106_next(nullptr);
        Info::CAnimusProcess106_clbk CAnimusProcess106_user(nullptr);
        
        Info::CAnimusRecvKillMessage108_ptr CAnimusRecvKillMessage108_next(nullptr);
        Info::CAnimusRecvKillMessage108_clbk CAnimusRecvKillMessage108_user(nullptr);
        
        Info::CAnimusReturn_MasterRequest110_ptr CAnimusReturn_MasterRequest110_next(nullptr);
        Info::CAnimusReturn_MasterRequest110_clbk CAnimusReturn_MasterRequest110_user(nullptr);
        
        Info::CAnimusRobbedHP112_ptr CAnimusRobbedHP112_next(nullptr);
        Info::CAnimusRobbedHP112_clbk CAnimusRobbedHP112_user(nullptr);
        
        Info::CAnimusSearchNearEnemy114_ptr CAnimusSearchNearEnemy114_next(nullptr);
        Info::CAnimusSearchNearEnemy114_clbk CAnimusSearchNearEnemy114_user(nullptr);
        
        Info::CAnimusSearchNearPlayerAttack116_ptr CAnimusSearchNearPlayerAttack116_next(nullptr);
        Info::CAnimusSearchNearPlayerAttack116_clbk CAnimusSearchNearPlayerAttack116_user(nullptr);
        
        Info::CAnimusSendMsg_AnimusActHealInform118_ptr CAnimusSendMsg_AnimusActHealInform118_next(nullptr);
        Info::CAnimusSendMsg_AnimusActHealInform118_clbk CAnimusSendMsg_AnimusActHealInform118_user(nullptr);
        
        Info::CAnimusSendMsg_Attack_Gen120_ptr CAnimusSendMsg_Attack_Gen120_next(nullptr);
        Info::CAnimusSendMsg_Attack_Gen120_clbk CAnimusSendMsg_Attack_Gen120_user(nullptr);
        
        Info::CAnimusSendMsg_Create122_ptr CAnimusSendMsg_Create122_next(nullptr);
        Info::CAnimusSendMsg_Create122_clbk CAnimusSendMsg_Create122_user(nullptr);
        
        Info::CAnimusSendMsg_Destroy124_ptr CAnimusSendMsg_Destroy124_next(nullptr);
        Info::CAnimusSendMsg_Destroy124_clbk CAnimusSendMsg_Destroy124_user(nullptr);
        
        Info::CAnimusSendMsg_FixPosition126_ptr CAnimusSendMsg_FixPosition126_next(nullptr);
        Info::CAnimusSendMsg_FixPosition126_clbk CAnimusSendMsg_FixPosition126_user(nullptr);
        
        Info::CAnimusSendMsg_LevelUp128_ptr CAnimusSendMsg_LevelUp128_next(nullptr);
        Info::CAnimusSendMsg_LevelUp128_clbk CAnimusSendMsg_LevelUp128_user(nullptr);
        
        Info::CAnimusSendMsg_Move130_ptr CAnimusSendMsg_Move130_next(nullptr);
        Info::CAnimusSendMsg_Move130_clbk CAnimusSendMsg_Move130_user(nullptr);
        
        Info::CAnimusSendMsg_RealMovePoint132_ptr CAnimusSendMsg_RealMovePoint132_next(nullptr);
        Info::CAnimusSendMsg_RealMovePoint132_clbk CAnimusSendMsg_RealMovePoint132_user(nullptr);
        
        Info::CAnimusSetDamage134_ptr CAnimusSetDamage134_next(nullptr);
        Info::CAnimusSetDamage134_clbk CAnimusSetDamage134_user(nullptr);
        
        Info::CAnimusSetStaticMember136_ptr CAnimusSetStaticMember136_next(nullptr);
        Info::CAnimusSetStaticMember136_clbk CAnimusSetStaticMember136_user(nullptr);
        
        Info::CAnimusTransPoToMaster138_ptr CAnimusTransPoToMaster138_next(nullptr);
        Info::CAnimusTransPoToMaster138_clbk CAnimusTransPoToMaster138_user(nullptr);
        
        Info::CAnimus_ProcComsumeMaterFP140_ptr CAnimus_ProcComsumeMaterFP140_next(nullptr);
        Info::CAnimus_ProcComsumeMaterFP140_clbk CAnimus_ProcComsumeMaterFP140_user(nullptr);
        
        Info::CAnimusmake_gen_attack_param146_ptr CAnimusmake_gen_attack_param146_next(nullptr);
        Info::CAnimusmake_gen_attack_param146_clbk CAnimusmake_gen_attack_param146_user(nullptr);
        
        
        Info::CAnimusdtor_CAnimus148_ptr CAnimusdtor_CAnimus148_next(nullptr);
        Info::CAnimusdtor_CAnimus148_clbk CAnimusdtor_CAnimus148_user(nullptr);
        
        void CAnimusAIInit2_wrapper(struct CAnimus* _this)
        {
           CAnimusAIInit2_user(_this, CAnimusAIInit2_next);
        };
        void CAnimusAction4_wrapper(struct CAnimus* _this)
        {
           CAnimusAction4_user(_this, CAnimusAction4_next);
        };
        void CAnimusAlterExp6_wrapper(struct CAnimus* _this, int64_t nAddExp)
        {
           CAnimusAlterExp6_user(_this, nAddExp, CAnimusAlterExp6_next);
        };
        void CAnimusAlterExp_MasterReport8_wrapper(struct CAnimus* _this, int64_t nAlterExp)
        {
           CAnimusAlterExp_MasterReport8_user(_this, nAlterExp, CAnimusAlterExp_MasterReport8_next);
        };
        void CAnimusAlterFP_MasterReport10_wrapper(struct CAnimus* _this)
        {
           CAnimusAlterFP_MasterReport10_user(_this, CAnimusAlterFP_MasterReport10_next);
        };
        void CAnimusAlterHP_MasterReport12_wrapper(struct CAnimus* _this)
        {
           CAnimusAlterHP_MasterReport12_user(_this, CAnimusAlterHP_MasterReport12_next);
        };
        void CAnimusAlterMode_MasterReport14_wrapper(struct CAnimus* _this, char byMode)
        {
           CAnimusAlterMode_MasterReport14_user(_this, byMode, CAnimusAlterMode_MasterReport14_next);
        };
        bool CAnimusAttack16_wrapper(struct CAnimus* _this, unsigned int skill)
        {
           return CAnimusAttack16_user(_this, skill, CAnimusAttack16_next);
        };
        int CAnimusAttackableHeight18_wrapper(struct CAnimus* _this)
        {
           return CAnimusAttackableHeight18_user(_this, CAnimusAttackableHeight18_next);
        };
        
        void CAnimusctor_CAnimus20_wrapper(struct CAnimus* _this)
        {
           CAnimusctor_CAnimus20_user(_this, CAnimusctor_CAnimus20_next);
        };
        void CAnimusCalcAttExp22_wrapper(struct CAnimus* _this, struct CAttack* pAT)
        {
           CAnimusCalcAttExp22_user(_this, pAT, CAnimusCalcAttExp22_next);
        };
        void CAnimusCalcDefExp24_wrapper(struct CAnimus* _this, struct CCharacter* pAttackObj, int nDamage)
        {
           CAnimusCalcDefExp24_user(_this, pAttackObj, nDamage, CAnimusCalcDefExp24_next);
        };
        void CAnimusChangeMode26_wrapper(struct CAnimus* _this, unsigned int mode)
        {
           CAnimusChangeMode26_user(_this, mode, CAnimusChangeMode26_next);
        };
        void CAnimusChangeMode_MasterCommand28_wrapper(struct CAnimus* _this, int nMode)
        {
           CAnimusChangeMode_MasterCommand28_user(_this, nMode, CAnimusChangeMode_MasterCommand28_next);
        };
        bool CAnimusChangeTarget_MasterCommand30_wrapper(struct CAnimus* _this, struct CCharacter* pTarget)
        {
           return CAnimusChangeTarget_MasterCommand30_user(_this, pTarget, CAnimusChangeTarget_MasterCommand30_next);
        };
        void CAnimusCheckPosInTown32_wrapper(struct CAnimus* _this)
        {
           CAnimusCheckPosInTown32_user(_this, CAnimusCheckPosInTown32_next);
        };
        bool CAnimusCreate34_wrapper(struct CAnimus* _this, struct _animus_create_setdata* pData)
        {
           return CAnimusCreate34_user(_this, pData, CAnimusCreate34_next);
        };
        bool CAnimusDestroy36_wrapper(struct CAnimus* _this)
        {
           return CAnimusDestroy36_user(_this, CAnimusDestroy36_next);
        };
        int CAnimusGetAttackDP38_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetAttackDP38_user(_this, CAnimusGetAttackDP38_next);
        };
        int CAnimusGetAttackPart40_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetAttackPart40_user(_this, CAnimusGetAttackPart40_next);
        };
        float CAnimusGetAttackRange42_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetAttackRange42_user(_this, CAnimusGetAttackRange42_next);
        };
        int CAnimusGetDefFC44_wrapper(struct CAnimus* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CAnimusGetDefFC44_user(_this, nAttactPart, pAttChar, pnConvertPart, CAnimusGetDefFC44_next);
        };
        float CAnimusGetDefFacing46_wrapper(struct CAnimus* _this, int nPart)
        {
           return CAnimusGetDefFacing46_user(_this, nPart, CAnimusGetDefFacing46_next);
        };
        float CAnimusGetDefGap48_wrapper(struct CAnimus* _this, int nPart)
        {
           return CAnimusGetDefGap48_user(_this, nPart, CAnimusGetDefGap48_next);
        };
        int CAnimusGetDefSkill50_wrapper(struct CAnimus* _this, bool bBackAttackDamage)
        {
           return CAnimusGetDefSkill50_user(_this, bBackAttackDamage, CAnimusGetDefSkill50_next);
        };
        int CAnimusGetFireTol52_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetFireTol52_user(_this, CAnimusGetFireTol52_next);
        };
        int CAnimusGetGenAttackProb54_wrapper(struct CAnimus* _this, struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
           return CAnimusGetGenAttackProb54_user(_this, pDst, nPart, bBackAttack, CAnimusGetGenAttackProb54_next);
        };
        int CAnimusGetHP56_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetHP56_user(_this, CAnimusGetHP56_next);
        };
        int CAnimusGetLevel58_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetLevel58_user(_this, CAnimusGetLevel58_next);
        };
        int CAnimusGetMaxHP60_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetMaxHP60_user(_this, CAnimusGetMaxHP60_next);
        };
        char CAnimusGetMaxLevel62_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetMaxLevel62_user(_this, CAnimusGetMaxLevel62_next);
        };
        bool CAnimusGetMoveTarget64_wrapper(struct CAnimus* _this, struct CCharacter* target, float fMoveSpeed, char byMoveMode)
        {
           return CAnimusGetMoveTarget64_user(_this, target, fMoveSpeed, byMoveMode, CAnimusGetMoveTarget64_next);
        };
        unsigned int CAnimusGetNewMonSerial66_wrapper()
        {
           return CAnimusGetNewMonSerial66_user(CAnimusGetNewMonSerial66_next);
        };
        char* CAnimusGetObjName68_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetObjName68_user(_this, CAnimusGetObjName68_next);
        };
        int CAnimusGetObjRace70_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetObjRace70_user(_this, CAnimusGetObjRace70_next);
        };
        int CAnimusGetSoilTol72_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetSoilTol72_user(_this, CAnimusGetSoilTol72_next);
        };
        void CAnimusGetTarget74_wrapper(struct CAnimus* _this)
        {
           CAnimusGetTarget74_user(_this, CAnimusGetTarget74_next);
        };
        int CAnimusGetWaterTol76_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetWaterTol76_user(_this, CAnimusGetWaterTol76_next);
        };
        float CAnimusGetWeaponAdjust78_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetWeaponAdjust78_user(_this, CAnimusGetWeaponAdjust78_next);
        };
        int CAnimusGetWeaponClass80_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetWeaponClass80_user(_this, CAnimusGetWeaponClass80_next);
        };
        float CAnimusGetWidth82_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetWidth82_user(_this, CAnimusGetWidth82_next);
        };
        int CAnimusGetWindTol84_wrapper(struct CAnimus* _this)
        {
           return CAnimusGetWindTol84_user(_this, CAnimusGetWindTol84_next);
        };
        bool CAnimusHeal86_wrapper(struct CAnimus* _this, unsigned int skill)
        {
           return CAnimusHeal86_user(_this, skill, CAnimusHeal86_next);
        };
        bool CAnimusInit88_wrapper(struct CAnimus* _this, struct _object_id* pID)
        {
           return CAnimusInit88_user(_this, pID, CAnimusInit88_next);
        };
        bool CAnimusIsBeAttackedAble90_wrapper(struct CAnimus* _this, bool bFirst)
        {
           return CAnimusIsBeAttackedAble90_user(_this, bFirst, CAnimusIsBeAttackedAble90_next);
        };
        bool CAnimusIsInTown92_wrapper(struct CAnimus* _this)
        {
           return CAnimusIsInTown92_user(_this, CAnimusIsInTown92_next);
        };
        bool CAnimusIsValidTarget94_wrapper(struct CAnimus* _this)
        {
           return CAnimusIsValidTarget94_user(_this, CAnimusIsValidTarget94_next);
        };
        void CAnimusLifeTimeCheck96_wrapper(struct CAnimus* _this)
        {
           CAnimusLifeTimeCheck96_user(_this, CAnimusLifeTimeCheck96_next);
        };
        void CAnimusLoop98_wrapper(struct CAnimus* _this)
        {
           CAnimusLoop98_user(_this, CAnimusLoop98_next);
        };
        void CAnimusMasterAttack_MasterInform100_wrapper(struct CAnimus* _this, struct CCharacter* pDst)
        {
           CAnimusMasterAttack_MasterInform100_user(_this, pDst, CAnimusMasterAttack_MasterInform100_next);
        };
        void CAnimusMasterBeAttacked_MasterInform102_wrapper(struct CAnimus* _this, struct CCharacter* pDst)
        {
           CAnimusMasterBeAttacked_MasterInform102_user(_this, pDst, CAnimusMasterBeAttacked_MasterInform102_next);
        };
        void CAnimusOutOfSec104_wrapper(struct CAnimus* _this)
        {
           CAnimusOutOfSec104_user(_this, CAnimusOutOfSec104_next);
        };
        void CAnimusProcess106_wrapper(struct CAnimus* _this)
        {
           CAnimusProcess106_user(_this, CAnimusProcess106_next);
        };
        void CAnimusRecvKillMessage108_wrapper(struct CAnimus* _this, struct CCharacter* pDier)
        {
           CAnimusRecvKillMessage108_user(_this, pDier, CAnimusRecvKillMessage108_next);
        };
        void CAnimusReturn_MasterRequest110_wrapper(struct CAnimus* _this, char byReturnType)
        {
           CAnimusReturn_MasterRequest110_user(_this, byReturnType, CAnimusReturn_MasterRequest110_next);
        };
        bool CAnimusRobbedHP112_wrapper(struct CAnimus* _this, struct CCharacter* pDst, int nDecHP)
        {
           return CAnimusRobbedHP112_user(_this, pDst, nDecHP, CAnimusRobbedHP112_next);
        };
        struct CCharacter* CAnimusSearchNearEnemy114_wrapper(struct CAnimus* _this)
        {
           return CAnimusSearchNearEnemy114_user(_this, CAnimusSearchNearEnemy114_next);
        };
        struct CCharacter* CAnimusSearchNearPlayerAttack116_wrapper(struct CAnimus* _this)
        {
           return CAnimusSearchNearPlayerAttack116_user(_this, CAnimusSearchNearPlayerAttack116_next);
        };
        void CAnimusSendMsg_AnimusActHealInform118_wrapper(struct CAnimus* _this, unsigned int dwDstSerial, int nAddHP)
        {
           CAnimusSendMsg_AnimusActHealInform118_user(_this, dwDstSerial, nAddHP, CAnimusSendMsg_AnimusActHealInform118_next);
        };
        void CAnimusSendMsg_Attack_Gen120_wrapper(struct CAnimus* _this, struct CAttack* pAT)
        {
           CAnimusSendMsg_Attack_Gen120_user(_this, pAT, CAnimusSendMsg_Attack_Gen120_next);
        };
        void CAnimusSendMsg_Create122_wrapper(struct CAnimus* _this)
        {
           CAnimusSendMsg_Create122_user(_this, CAnimusSendMsg_Create122_next);
        };
        void CAnimusSendMsg_Destroy124_wrapper(struct CAnimus* _this)
        {
           CAnimusSendMsg_Destroy124_user(_this, CAnimusSendMsg_Destroy124_next);
        };
        void CAnimusSendMsg_FixPosition126_wrapper(struct CAnimus* _this, int n)
        {
           CAnimusSendMsg_FixPosition126_user(_this, n, CAnimusSendMsg_FixPosition126_next);
        };
        void CAnimusSendMsg_LevelUp128_wrapper(struct CAnimus* _this)
        {
           CAnimusSendMsg_LevelUp128_user(_this, CAnimusSendMsg_LevelUp128_next);
        };
        void CAnimusSendMsg_Move130_wrapper(struct CAnimus* _this)
        {
           CAnimusSendMsg_Move130_user(_this, CAnimusSendMsg_Move130_next);
        };
        void CAnimusSendMsg_RealMovePoint132_wrapper(struct CAnimus* _this, int n)
        {
           CAnimusSendMsg_RealMovePoint132_user(_this, n, CAnimusSendMsg_RealMovePoint132_next);
        };
        int CAnimusSetDamage134_wrapper(struct CAnimus* _this, int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CAnimusSetDamage134_user(_this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CAnimusSetDamage134_next);
        };
        bool CAnimusSetStaticMember136_wrapper()
        {
           return CAnimusSetStaticMember136_user(CAnimusSetStaticMember136_next);
        };
        void CAnimusTransPoToMaster138_wrapper(struct CAnimus* _this)
        {
           CAnimusTransPoToMaster138_user(_this, CAnimusTransPoToMaster138_next);
        };
        void CAnimus_ProcComsumeMaterFP140_wrapper(struct CAnimus* _this)
        {
           CAnimus_ProcComsumeMaterFP140_user(_this, CAnimus_ProcComsumeMaterFP140_next);
        };
        void CAnimusmake_gen_attack_param146_wrapper(struct CAnimus* _this, struct CCharacter* pDst, char byPart, struct _attack_param* pAP, int nSkillIndex)
        {
           CAnimusmake_gen_attack_param146_user(_this, pDst, byPart, pAP, nSkillIndex, CAnimusmake_gen_attack_param146_next);
        };
        
        void CAnimusdtor_CAnimus148_wrapper(struct CAnimus* _this)
        {
           CAnimusdtor_CAnimus148_user(_this, CAnimusdtor_CAnimus148_next);
        };
        
        ::std::array<hook_record, 72> CAnimus_functions = 
        {
            _hook_record {
                (LPVOID)0x140125fc0L,
                (LPVOID *)&CAnimusAIInit2_user,
                (LPVOID *)&CAnimusAIInit2_next,
                (LPVOID)cast_pointer_function(CAnimusAIInit2_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::AIInit)
            },
            _hook_record {
                (LPVOID)0x140127a30L,
                (LPVOID *)&CAnimusAction4_user,
                (LPVOID *)&CAnimusAction4_next,
                (LPVOID)cast_pointer_function(CAnimusAction4_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::Action)
            },
            _hook_record {
                (LPVOID)0x1401265a0L,
                (LPVOID *)&CAnimusAlterExp6_user,
                (LPVOID *)&CAnimusAlterExp6_next,
                (LPVOID)cast_pointer_function(CAnimusAlterExp6_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(int64_t))&CAnimus::AlterExp)
            },
            _hook_record {
                (LPVOID)0x1401292b0L,
                (LPVOID *)&CAnimusAlterExp_MasterReport8_user,
                (LPVOID *)&CAnimusAlterExp_MasterReport8_next,
                (LPVOID)cast_pointer_function(CAnimusAlterExp_MasterReport8_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(int64_t))&CAnimus::AlterExp_MasterReport)
            },
            _hook_record {
                (LPVOID)0x140129250L,
                (LPVOID *)&CAnimusAlterFP_MasterReport10_user,
                (LPVOID *)&CAnimusAlterFP_MasterReport10_next,
                (LPVOID)cast_pointer_function(CAnimusAlterFP_MasterReport10_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::AlterFP_MasterReport)
            },
            _hook_record {
                (LPVOID)0x1401291f0L,
                (LPVOID *)&CAnimusAlterHP_MasterReport12_user,
                (LPVOID *)&CAnimusAlterHP_MasterReport12_next,
                (LPVOID)cast_pointer_function(CAnimusAlterHP_MasterReport12_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::AlterHP_MasterReport)
            },
            _hook_record {
                (LPVOID)0x140129310L,
                (LPVOID *)&CAnimusAlterMode_MasterReport14_user,
                (LPVOID *)&CAnimusAlterMode_MasterReport14_next,
                (LPVOID)cast_pointer_function(CAnimusAlterMode_MasterReport14_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(char))&CAnimus::AlterMode_MasterReport)
            },
            _hook_record {
                (LPVOID)0x140126ac0L,
                (LPVOID *)&CAnimusAttack16_user,
                (LPVOID *)&CAnimusAttack16_next,
                (LPVOID)cast_pointer_function(CAnimusAttack16_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(unsigned int))&CAnimus::Attack)
            },
            _hook_record {
                (LPVOID)0x140129880L,
                (LPVOID *)&CAnimusAttackableHeight18_user,
                (LPVOID *)&CAnimusAttackableHeight18_next,
                (LPVOID)cast_pointer_function(CAnimusAttackableHeight18_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::AttackableHeight)
            },
            _hook_record {
                (LPVOID)0x140125e90L,
                (LPVOID *)&CAnimusctor_CAnimus20_user,
                (LPVOID *)&CAnimusctor_CAnimus20_next,
                (LPVOID)cast_pointer_function(CAnimusctor_CAnimus20_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::ctor_CAnimus)
            },
            _hook_record {
                (LPVOID)0x140126f40L,
                (LPVOID *)&CAnimusCalcAttExp22_user,
                (LPVOID *)&CAnimusCalcAttExp22_next,
                (LPVOID)cast_pointer_function(CAnimusCalcAttExp22_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CAttack*))&CAnimus::CalcAttExp)
            },
            _hook_record {
                (LPVOID)0x140126da0L,
                (LPVOID *)&CAnimusCalcDefExp24_user,
                (LPVOID *)&CAnimusCalcDefExp24_next,
                (LPVOID)cast_pointer_function(CAnimusCalcDefExp24_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CCharacter*, int))&CAnimus::CalcDefExp)
            },
            _hook_record {
                (LPVOID)0x1401262e0L,
                (LPVOID *)&CAnimusChangeMode26_user,
                (LPVOID *)&CAnimusChangeMode26_next,
                (LPVOID)cast_pointer_function(CAnimusChangeMode26_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(unsigned int))&CAnimus::ChangeMode)
            },
            _hook_record {
                (LPVOID)0x140128df0L,
                (LPVOID *)&CAnimusChangeMode_MasterCommand28_user,
                (LPVOID *)&CAnimusChangeMode_MasterCommand28_next,
                (LPVOID)cast_pointer_function(CAnimusChangeMode_MasterCommand28_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(int))&CAnimus::ChangeMode_MasterCommand)
            },
            _hook_record {
                (LPVOID)0x140128e40L,
                (LPVOID *)&CAnimusChangeTarget_MasterCommand30_user,
                (LPVOID *)&CAnimusChangeTarget_MasterCommand30_next,
                (LPVOID)cast_pointer_function(CAnimusChangeTarget_MasterCommand30_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(struct CCharacter*))&CAnimus::ChangeTarget_MasterCommand)
            },
            _hook_record {
                (LPVOID)0x140129bf0L,
                (LPVOID *)&CAnimusCheckPosInTown32_user,
                (LPVOID *)&CAnimusCheckPosInTown32_next,
                (LPVOID)cast_pointer_function(CAnimusCheckPosInTown32_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::CheckPosInTown)
            },
            _hook_record {
                (LPVOID)0x140128970L,
                (LPVOID *)&CAnimusCreate34_user,
                (LPVOID *)&CAnimusCreate34_next,
                (LPVOID)cast_pointer_function(CAnimusCreate34_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(struct _animus_create_setdata*))&CAnimus::Create)
            },
            _hook_record {
                (LPVOID)0x140128b90L,
                (LPVOID *)&CAnimusDestroy36_user,
                (LPVOID *)&CAnimusDestroy36_next,
                (LPVOID)cast_pointer_function(CAnimusDestroy36_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)())&CAnimus::Destroy)
            },
            _hook_record {
                (LPVOID)0x14012cdf0L,
                (LPVOID *)&CAnimusGetAttackDP38_user,
                (LPVOID *)&CAnimusGetAttackDP38_next,
                (LPVOID)cast_pointer_function(CAnimusGetAttackDP38_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x1401264e0L,
                (LPVOID *)&CAnimusGetAttackPart40_user,
                (LPVOID *)&CAnimusGetAttackPart40_next,
                (LPVOID)cast_pointer_function(CAnimusGetAttackPart40_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetAttackPart)
            },
            _hook_record {
                (LPVOID)0x1401295c0L,
                (LPVOID *)&CAnimusGetAttackRange42_user,
                (LPVOID *)&CAnimusGetAttackRange42_next,
                (LPVOID)cast_pointer_function(CAnimusGetAttackRange42_wrapper),
                (LPVOID)cast_pointer_function((float(CAnimus::*)())&CAnimus::GetAttackRange)
            },
            _hook_record {
                (LPVOID)0x140129610L,
                (LPVOID *)&CAnimusGetDefFC44_user,
                (LPVOID *)&CAnimusGetDefFC44_next,
                (LPVOID)cast_pointer_function(CAnimusGetDefFC44_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)(int, struct CCharacter*, int*))&CAnimus::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x140129830L,
                (LPVOID *)&CAnimusGetDefFacing46_user,
                (LPVOID *)&CAnimusGetDefFacing46_next,
                (LPVOID)cast_pointer_function(CAnimusGetDefFacing46_wrapper),
                (LPVOID)cast_pointer_function((float(CAnimus::*)(int))&CAnimus::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x1401297e0L,
                (LPVOID *)&CAnimusGetDefGap48_user,
                (LPVOID *)&CAnimusGetDefGap48_next,
                (LPVOID)cast_pointer_function(CAnimusGetDefGap48_wrapper),
                (LPVOID)cast_pointer_function((float(CAnimus::*)(int))&CAnimus::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x140129730L,
                (LPVOID *)&CAnimusGetDefSkill50_user,
                (LPVOID *)&CAnimusGetDefSkill50_next,
                (LPVOID)cast_pointer_function(CAnimusGetDefSkill50_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)(bool))&CAnimus::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x140129760L,
                (LPVOID *)&CAnimusGetFireTol52_user,
                (LPVOID *)&CAnimusGetFireTol52_next,
                (LPVOID)cast_pointer_function(CAnimusGetFireTol52_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x1401298d0L,
                (LPVOID *)&CAnimusGetGenAttackProb54_user,
                (LPVOID *)&CAnimusGetGenAttackProb54_next,
                (LPVOID)cast_pointer_function(CAnimusGetGenAttackProb54_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)(struct CCharacter*, int, bool))&CAnimus::GetGenAttackProb)
            },
            _hook_record {
                (LPVOID)0x1401293d0L,
                (LPVOID *)&CAnimusGetHP56_user,
                (LPVOID *)&CAnimusGetHP56_next,
                (LPVOID)cast_pointer_function(CAnimusGetHP56_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetHP)
            },
            _hook_record {
                (LPVOID)0x1401296c0L,
                (LPVOID *)&CAnimusGetLevel58_user,
                (LPVOID *)&CAnimusGetLevel58_next,
                (LPVOID)cast_pointer_function(CAnimusGetLevel58_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetLevel)
            },
            _hook_record {
                (LPVOID)0x1401293f0L,
                (LPVOID *)&CAnimusGetMaxHP60_user,
                (LPVOID *)&CAnimusGetMaxHP60_next,
                (LPVOID)cast_pointer_function(CAnimusGetMaxHP60_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x1401296e0L,
                (LPVOID *)&CAnimusGetMaxLevel62_user,
                (LPVOID *)&CAnimusGetMaxLevel62_next,
                (LPVOID)cast_pointer_function(CAnimusGetMaxLevel62_wrapper),
                (LPVOID)cast_pointer_function((char(CAnimus::*)())&CAnimus::GetMaxLevel)
            },
            _hook_record {
                (LPVOID)0x140127fe0L,
                (LPVOID *)&CAnimusGetMoveTarget64_user,
                (LPVOID *)&CAnimusGetMoveTarget64_next,
                (LPVOID)cast_pointer_function(CAnimusGetMoveTarget64_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(struct CCharacter*, float, char))&CAnimus::GetMoveTarget)
            },
            _hook_record {
                (LPVOID)0x14012d610L,
                (LPVOID *)&CAnimusGetNewMonSerial66_user,
                (LPVOID *)&CAnimusGetNewMonSerial66_next,
                (LPVOID)cast_pointer_function(CAnimusGetNewMonSerial66_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&CAnimus::GetNewMonSerial)
            },
            _hook_record {
                (LPVOID)0x140129a60L,
                (LPVOID *)&CAnimusGetObjName68_user,
                (LPVOID *)&CAnimusGetObjName68_next,
                (LPVOID)cast_pointer_function(CAnimusGetObjName68_wrapper),
                (LPVOID)cast_pointer_function((char*(CAnimus::*)())&CAnimus::GetObjName)
            },
            _hook_record {
                (LPVOID)0x1401299f0L,
                (LPVOID *)&CAnimusGetObjRace70_user,
                (LPVOID *)&CAnimusGetObjRace70_next,
                (LPVOID)cast_pointer_function(CAnimusGetObjRace70_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x1401297a0L,
                (LPVOID *)&CAnimusGetSoilTol72_user,
                (LPVOID *)&CAnimusGetSoilTol72_next,
                (LPVOID)cast_pointer_function(CAnimusGetSoilTol72_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x140126350L,
                (LPVOID *)&CAnimusGetTarget74_user,
                (LPVOID *)&CAnimusGetTarget74_next,
                (LPVOID)cast_pointer_function(CAnimusGetTarget74_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::GetTarget)
            },
            _hook_record {
                (LPVOID)0x140129780L,
                (LPVOID *)&CAnimusGetWaterTol76_user,
                (LPVOID *)&CAnimusGetWaterTol76_next,
                (LPVOID)cast_pointer_function(CAnimusGetWaterTol76_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x14012cda0L,
                (LPVOID *)&CAnimusGetWeaponAdjust78_user,
                (LPVOID *)&CAnimusGetWeaponAdjust78_next,
                (LPVOID)cast_pointer_function(CAnimusGetWeaponAdjust78_wrapper),
                (LPVOID)cast_pointer_function((float(CAnimus::*)())&CAnimus::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x1401298a0L,
                (LPVOID *)&CAnimusGetWeaponClass80_user,
                (LPVOID *)&CAnimusGetWeaponClass80_next,
                (LPVOID)cast_pointer_function(CAnimusGetWeaponClass80_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetWeaponClass)
            },
            _hook_record {
                (LPVOID)0x140129570L,
                (LPVOID *)&CAnimusGetWidth82_user,
                (LPVOID *)&CAnimusGetWidth82_next,
                (LPVOID)cast_pointer_function(CAnimusGetWidth82_wrapper),
                (LPVOID)cast_pointer_function((float(CAnimus::*)())&CAnimus::GetWidth)
            },
            _hook_record {
                (LPVOID)0x1401297c0L,
                (LPVOID *)&CAnimusGetWindTol84_user,
                (LPVOID *)&CAnimusGetWindTol84_next,
                (LPVOID)cast_pointer_function(CAnimusGetWindTol84_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)())&CAnimus::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x140127580L,
                (LPVOID *)&CAnimusHeal86_user,
                (LPVOID *)&CAnimusHeal86_next,
                (LPVOID)cast_pointer_function(CAnimusHeal86_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(unsigned int))&CAnimus::Heal)
            },
            _hook_record {
                (LPVOID)0x140128760L,
                (LPVOID *)&CAnimusInit88_user,
                (LPVOID *)&CAnimusInit88_next,
                (LPVOID)cast_pointer_function(CAnimusInit88_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(struct _object_id*))&CAnimus::Init)
            },
            _hook_record {
                (LPVOID)0x14012ce10L,
                (LPVOID *)&CAnimusIsBeAttackedAble90_user,
                (LPVOID *)&CAnimusIsBeAttackedAble90_next,
                (LPVOID)cast_pointer_function(CAnimusIsBeAttackedAble90_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(bool))&CAnimus::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x14012ce30L,
                (LPVOID *)&CAnimusIsInTown92_user,
                (LPVOID *)&CAnimusIsInTown92_next,
                (LPVOID)cast_pointer_function(CAnimusIsInTown92_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)())&CAnimus::IsInTown)
            },
            _hook_record {
                (LPVOID)0x140129d10L,
                (LPVOID *)&CAnimusIsValidTarget94_user,
                (LPVOID *)&CAnimusIsValidTarget94_next,
                (LPVOID)cast_pointer_function(CAnimusIsValidTarget94_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)())&CAnimus::IsValidTarget)
            },
            _hook_record {
                (LPVOID)0x1401284a0L,
                (LPVOID *)&CAnimusLifeTimeCheck96_user,
                (LPVOID *)&CAnimusLifeTimeCheck96_next,
                (LPVOID)cast_pointer_function(CAnimusLifeTimeCheck96_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::LifeTimeCheck)
            },
            _hook_record {
                (LPVOID)0x140128c20L,
                (LPVOID *)&CAnimusLoop98_user,
                (LPVOID *)&CAnimusLoop98_next,
                (LPVOID)cast_pointer_function(CAnimusLoop98_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::Loop)
            },
            _hook_record {
                (LPVOID)0x140129170L,
                (LPVOID *)&CAnimusMasterAttack_MasterInform100_user,
                (LPVOID *)&CAnimusMasterAttack_MasterInform100_next,
                (LPVOID)cast_pointer_function(CAnimusMasterAttack_MasterInform100_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CCharacter*))&CAnimus::MasterAttack_MasterInform)
            },
            _hook_record {
                (LPVOID)0x1401291b0L,
                (LPVOID *)&CAnimusMasterBeAttacked_MasterInform102_user,
                (LPVOID *)&CAnimusMasterBeAttacked_MasterInform102_next,
                (LPVOID)cast_pointer_function(CAnimusMasterBeAttacked_MasterInform102_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CCharacter*))&CAnimus::MasterBeAttacked_MasterInform)
            },
            _hook_record {
                (LPVOID)0x14012cd60L,
                (LPVOID *)&CAnimusOutOfSec104_user,
                (LPVOID *)&CAnimusOutOfSec104_next,
                (LPVOID)cast_pointer_function(CAnimusOutOfSec104_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x140128570L,
                (LPVOID *)&CAnimusProcess106_user,
                (LPVOID *)&CAnimusProcess106_next,
                (LPVOID)cast_pointer_function(CAnimusProcess106_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::Process)
            },
            _hook_record {
                (LPVOID)0x140129b80L,
                (LPVOID *)&CAnimusRecvKillMessage108_user,
                (LPVOID *)&CAnimusRecvKillMessage108_next,
                (LPVOID)cast_pointer_function(CAnimusRecvKillMessage108_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CCharacter*))&CAnimus::RecvKillMessage)
            },
            _hook_record {
                (LPVOID)0x140129370L,
                (LPVOID *)&CAnimusReturn_MasterRequest110_user,
                (LPVOID *)&CAnimusReturn_MasterRequest110_next,
                (LPVOID)cast_pointer_function(CAnimusReturn_MasterRequest110_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(char))&CAnimus::Return_MasterRequest)
            },
            _hook_record {
                (LPVOID)0x14012a7e0L,
                (LPVOID *)&CAnimusRobbedHP112_user,
                (LPVOID *)&CAnimusRobbedHP112_next,
                (LPVOID)cast_pointer_function(CAnimusRobbedHP112_wrapper),
                (LPVOID)cast_pointer_function((bool(CAnimus::*)(struct CCharacter*, int))&CAnimus::RobbedHP)
            },
            _hook_record {
                (LPVOID)0x140127e90L,
                (LPVOID *)&CAnimusSearchNearEnemy114_user,
                (LPVOID *)&CAnimusSearchNearEnemy114_next,
                (LPVOID)cast_pointer_function(CAnimusSearchNearEnemy114_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CAnimus::*)())&CAnimus::SearchNearEnemy)
            },
            _hook_record {
                (LPVOID)0x140127d20L,
                (LPVOID *)&CAnimusSearchNearPlayerAttack116_user,
                (LPVOID *)&CAnimusSearchNearPlayerAttack116_next,
                (LPVOID)cast_pointer_function(CAnimusSearchNearPlayerAttack116_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CAnimus::*)())&CAnimus::SearchNearPlayerAttack)
            },
            _hook_record {
                (LPVOID)0x14012a730L,
                (LPVOID *)&CAnimusSendMsg_AnimusActHealInform118_user,
                (LPVOID *)&CAnimusSendMsg_AnimusActHealInform118_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_AnimusActHealInform118_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(unsigned int, int))&CAnimus::SendMsg_AnimusActHealInform)
            },
            _hook_record {
                (LPVOID)0x14012a4c0L,
                (LPVOID *)&CAnimusSendMsg_Attack_Gen120_user,
                (LPVOID *)&CAnimusSendMsg_Attack_Gen120_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_Attack_Gen120_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CAttack*))&CAnimus::SendMsg_Attack_Gen)
            },
            _hook_record {
                (LPVOID)0x140129ef0L,
                (LPVOID *)&CAnimusSendMsg_Create122_user,
                (LPVOID *)&CAnimusSendMsg_Create122_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_Create122_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x14012a020L,
                (LPVOID *)&CAnimusSendMsg_Destroy124_user,
                (LPVOID *)&CAnimusSendMsg_Destroy124_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_Destroy124_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x14012a1e0L,
                (LPVOID *)&CAnimusSendMsg_FixPosition126_user,
                (LPVOID *)&CAnimusSendMsg_FixPosition126_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_FixPosition126_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(int))&CAnimus::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x14012a670L,
                (LPVOID *)&CAnimusSendMsg_LevelUp128_user,
                (LPVOID *)&CAnimusSendMsg_LevelUp128_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_LevelUp128_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::SendMsg_LevelUp)
            },
            _hook_record {
                (LPVOID)0x14012a0d0L,
                (LPVOID *)&CAnimusSendMsg_Move130_user,
                (LPVOID *)&CAnimusSendMsg_Move130_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_Move130_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::SendMsg_Move)
            },
            _hook_record {
                (LPVOID)0x14012a330L,
                (LPVOID *)&CAnimusSendMsg_RealMovePoint132_user,
                (LPVOID *)&CAnimusSendMsg_RealMovePoint132_next,
                (LPVOID)cast_pointer_function(CAnimusSendMsg_RealMovePoint132_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(int))&CAnimus::SendMsg_RealMovePoint)
            },
            _hook_record {
                (LPVOID)0x140129420L,
                (LPVOID *)&CAnimusSetDamage134_user,
                (LPVOID *)&CAnimusSetDamage134_next,
                (LPVOID)cast_pointer_function(CAnimusSetDamage134_wrapper),
                (LPVOID)cast_pointer_function((int(CAnimus::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CAnimus::SetDamage)
            },
            _hook_record {
                (LPVOID)0x14012a8a0L,
                (LPVOID *)&CAnimusSetStaticMember136_user,
                (LPVOID *)&CAnimusSetStaticMember136_next,
                (LPVOID)cast_pointer_function(CAnimusSetStaticMember136_wrapper),
                (LPVOID)cast_pointer_function((bool(*)())&CAnimus::SetStaticMember)
            },
            _hook_record {
                (LPVOID)0x14012acc0L,
                (LPVOID *)&CAnimusTransPoToMaster138_user,
                (LPVOID *)&CAnimusTransPoToMaster138_next,
                (LPVOID)cast_pointer_function(CAnimusTransPoToMaster138_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::TransPoToMaster)
            },
            _hook_record {
                (LPVOID)0x140128cf0L,
                (LPVOID *)&CAnimus_ProcComsumeMaterFP140_user,
                (LPVOID *)&CAnimus_ProcComsumeMaterFP140_next,
                (LPVOID)cast_pointer_function(CAnimus_ProcComsumeMaterFP140_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::_ProcComsumeMaterFP)
            },
            _hook_record {
                (LPVOID)0x14012aa70L,
                (LPVOID *)&CAnimusmake_gen_attack_param146_user,
                (LPVOID *)&CAnimusmake_gen_attack_param146_next,
                (LPVOID)cast_pointer_function(CAnimusmake_gen_attack_param146_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)(struct CCharacter*, char, struct _attack_param*, int))&CAnimus::make_gen_attack_param)
            },
            _hook_record {
                (LPVOID)0x140125f70L,
                (LPVOID *)&CAnimusdtor_CAnimus148_user,
                (LPVOID *)&CAnimusdtor_CAnimus148_next,
                (LPVOID)cast_pointer_function(CAnimusdtor_CAnimus148_wrapper),
                (LPVOID)cast_pointer_function((void(CAnimus::*)())&CAnimus::dtor_CAnimus)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
