#include <CGameObjectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGameObjectAlterSec2_ptr CGameObjectAlterSec2_next(nullptr);
        Info::CGameObjectAlterSec2_clbk CGameObjectAlterSec2_user(nullptr);
        
        Info::CGameObjectAttackableHeight4_ptr CGameObjectAttackableHeight4_next(nullptr);
        Info::CGameObjectAttackableHeight4_clbk CGameObjectAttackableHeight4_user(nullptr);
        
        Info::CGameObjectBeTargeted6_ptr CGameObjectBeTargeted6_next(nullptr);
        Info::CGameObjectBeTargeted6_clbk CGameObjectBeTargeted6_user(nullptr);
        
        
        Info::CGameObjectctor_CGameObject8_ptr CGameObjectctor_CGameObject8_next(nullptr);
        Info::CGameObjectctor_CGameObject8_clbk CGameObjectctor_CGameObject8_user(nullptr);
        
        Info::CGameObjectCalcAbsPos10_ptr CGameObjectCalcAbsPos10_next(nullptr);
        Info::CGameObjectCalcAbsPos10_clbk CGameObjectCalcAbsPos10_user(nullptr);
        
        Info::CGameObjectCalcCirclePlayerNum12_ptr CGameObjectCalcCirclePlayerNum12_next(nullptr);
        Info::CGameObjectCalcCirclePlayerNum12_clbk CGameObjectCalcCirclePlayerNum12_user(nullptr);
        
        Info::CGameObjectCalcCirclePlayerNum14_ptr CGameObjectCalcCirclePlayerNum14_next(nullptr);
        Info::CGameObjectCalcCirclePlayerNum14_clbk CGameObjectCalcCirclePlayerNum14_user(nullptr);
        
        Info::CGameObjectCalcCurHPRate16_ptr CGameObjectCalcCurHPRate16_next(nullptr);
        Info::CGameObjectCalcCurHPRate16_clbk CGameObjectCalcCurHPRate16_user(nullptr);
        
        Info::CGameObjectCalcScrExtendPoint18_ptr CGameObjectCalcScrExtendPoint18_next(nullptr);
        Info::CGameObjectCalcScrExtendPoint18_clbk CGameObjectCalcScrExtendPoint18_user(nullptr);
        
        Info::CGameObjectCalcScrNormalPoint20_ptr CGameObjectCalcScrNormalPoint20_next(nullptr);
        Info::CGameObjectCalcScrNormalPoint20_clbk CGameObjectCalcScrNormalPoint20_user(nullptr);
        
        Info::CGameObjectCalcSecIndex22_ptr CGameObjectCalcSecIndex22_next(nullptr);
        Info::CGameObjectCalcSecIndex22_clbk CGameObjectCalcSecIndex22_user(nullptr);
        
        Info::CGameObjectCircleReport24_ptr CGameObjectCircleReport24_next(nullptr);
        Info::CGameObjectCircleReport24_clbk CGameObjectCircleReport24_user(nullptr);
        
        Info::CGameObjectCircleReport26_ptr CGameObjectCircleReport26_next(nullptr);
        Info::CGameObjectCircleReport26_clbk CGameObjectCircleReport26_user(nullptr);
        
        Info::CGameObjectCreate28_ptr CGameObjectCreate28_next(nullptr);
        Info::CGameObjectCreate28_clbk CGameObjectCreate28_user(nullptr);
        
        Info::CGameObjectDestroy30_ptr CGameObjectDestroy30_next(nullptr);
        Info::CGameObjectDestroy30_clbk CGameObjectDestroy30_user(nullptr);
        
        Info::CGameObjectFixTargetWhile32_ptr CGameObjectFixTargetWhile32_next(nullptr);
        Info::CGameObjectFixTargetWhile32_clbk CGameObjectFixTargetWhile32_user(nullptr);
        
        Info::CGameObjectGetAttackDP34_ptr CGameObjectGetAttackDP34_next(nullptr);
        Info::CGameObjectGetAttackDP34_clbk CGameObjectGetAttackDP34_user(nullptr);
        
        Info::CGameObjectGetAttackLevel36_ptr CGameObjectGetAttackLevel36_next(nullptr);
        Info::CGameObjectGetAttackLevel36_clbk CGameObjectGetAttackLevel36_user(nullptr);
        
        Info::CGameObjectGetAttackRange38_ptr CGameObjectGetAttackRange38_next(nullptr);
        Info::CGameObjectGetAttackRange38_clbk CGameObjectGetAttackRange38_user(nullptr);
        
        Info::CGameObjectGetAvoidRate40_ptr CGameObjectGetAvoidRate40_next(nullptr);
        Info::CGameObjectGetAvoidRate40_clbk CGameObjectGetAvoidRate40_user(nullptr);
        
        Info::CGameObjectGetCurSecNum42_ptr CGameObjectGetCurSecNum42_next(nullptr);
        Info::CGameObjectGetCurSecNum42_clbk CGameObjectGetCurSecNum42_user(nullptr);
        
        Info::CGameObjectGetDefFC44_ptr CGameObjectGetDefFC44_next(nullptr);
        Info::CGameObjectGetDefFC44_clbk CGameObjectGetDefFC44_user(nullptr);
        
        Info::CGameObjectGetDefFacing46_ptr CGameObjectGetDefFacing46_next(nullptr);
        Info::CGameObjectGetDefFacing46_clbk CGameObjectGetDefFacing46_user(nullptr);
        
        Info::CGameObjectGetDefGap48_ptr CGameObjectGetDefGap48_next(nullptr);
        Info::CGameObjectGetDefGap48_clbk CGameObjectGetDefGap48_user(nullptr);
        
        Info::CGameObjectGetDefSkill50_ptr CGameObjectGetDefSkill50_next(nullptr);
        Info::CGameObjectGetDefSkill50_clbk CGameObjectGetDefSkill50_user(nullptr);
        
        Info::CGameObjectGetFireTol52_ptr CGameObjectGetFireTol52_next(nullptr);
        Info::CGameObjectGetFireTol52_clbk CGameObjectGetFireTol52_user(nullptr);
        
        Info::CGameObjectGetGenAttackProb54_ptr CGameObjectGetGenAttackProb54_next(nullptr);
        Info::CGameObjectGetGenAttackProb54_clbk CGameObjectGetGenAttackProb54_user(nullptr);
        
        Info::CGameObjectGetHP56_ptr CGameObjectGetHP56_next(nullptr);
        Info::CGameObjectGetHP56_clbk CGameObjectGetHP56_user(nullptr);
        
        Info::CGameObjectGetLevel58_ptr CGameObjectGetLevel58_next(nullptr);
        Info::CGameObjectGetLevel58_clbk CGameObjectGetLevel58_user(nullptr);
        
        Info::CGameObjectGetMaxHP60_ptr CGameObjectGetMaxHP60_next(nullptr);
        Info::CGameObjectGetMaxHP60_clbk CGameObjectGetMaxHP60_user(nullptr);
        
        Info::CGameObjectGetObjName62_ptr CGameObjectGetObjName62_next(nullptr);
        Info::CGameObjectGetObjName62_clbk CGameObjectGetObjName62_user(nullptr);
        
        Info::CGameObjectGetObjRace64_ptr CGameObjectGetObjRace64_next(nullptr);
        Info::CGameObjectGetObjRace64_clbk CGameObjectGetObjRace64_user(nullptr);
        
        Info::CGameObjectGetSoilTol66_ptr CGameObjectGetSoilTol66_next(nullptr);
        Info::CGameObjectGetSoilTol66_clbk CGameObjectGetSoilTol66_user(nullptr);
        
        Info::CGameObjectGetStun68_ptr CGameObjectGetStun68_next(nullptr);
        Info::CGameObjectGetStun68_clbk CGameObjectGetStun68_user(nullptr);
        
        Info::CGameObjectGetUseSectorRange70_ptr CGameObjectGetUseSectorRange70_next(nullptr);
        Info::CGameObjectGetUseSectorRange70_clbk CGameObjectGetUseSectorRange70_user(nullptr);
        
        Info::CGameObjectGetWaterTol72_ptr CGameObjectGetWaterTol72_next(nullptr);
        Info::CGameObjectGetWaterTol72_clbk CGameObjectGetWaterTol72_user(nullptr);
        
        Info::CGameObjectGetWeaponAdjust74_ptr CGameObjectGetWeaponAdjust74_next(nullptr);
        Info::CGameObjectGetWeaponAdjust74_clbk CGameObjectGetWeaponAdjust74_user(nullptr);
        
        Info::CGameObjectGetWeaponClass76_ptr CGameObjectGetWeaponClass76_next(nullptr);
        Info::CGameObjectGetWeaponClass76_clbk CGameObjectGetWeaponClass76_user(nullptr);
        
        Info::CGameObjectGetWidth78_ptr CGameObjectGetWidth78_next(nullptr);
        Info::CGameObjectGetWidth78_clbk CGameObjectGetWidth78_user(nullptr);
        
        Info::CGameObjectGetWindTol80_ptr CGameObjectGetWindTol80_next(nullptr);
        Info::CGameObjectGetWindTol80_clbk CGameObjectGetWindTol80_user(nullptr);
        
        Info::CGameObjectInit82_ptr CGameObjectInit82_next(nullptr);
        Info::CGameObjectInit82_clbk CGameObjectInit82_user(nullptr);
        
        Info::CGameObjectIsAttackableInTown84_ptr CGameObjectIsAttackableInTown84_next(nullptr);
        Info::CGameObjectIsAttackableInTown84_clbk CGameObjectIsAttackableInTown84_user(nullptr);
        
        Info::CGameObjectIsBeAttackedAble86_ptr CGameObjectIsBeAttackedAble86_next(nullptr);
        Info::CGameObjectIsBeAttackedAble86_clbk CGameObjectIsBeAttackedAble86_user(nullptr);
        
        Info::CGameObjectIsBeCirclePlayer88_ptr CGameObjectIsBeCirclePlayer88_next(nullptr);
        Info::CGameObjectIsBeCirclePlayer88_clbk CGameObjectIsBeCirclePlayer88_user(nullptr);
        
        Info::CGameObjectIsBeDamagedAble90_ptr CGameObjectIsBeDamagedAble90_next(nullptr);
        Info::CGameObjectIsBeDamagedAble90_clbk CGameObjectIsBeDamagedAble90_user(nullptr);
        
        Info::CGameObjectIsCircleObject92_ptr CGameObjectIsCircleObject92_next(nullptr);
        Info::CGameObjectIsCircleObject92_clbk CGameObjectIsCircleObject92_user(nullptr);
        
        Info::CGameObjectIsInTown94_ptr CGameObjectIsInTown94_next(nullptr);
        Info::CGameObjectIsInTown94_clbk CGameObjectIsInTown94_user(nullptr);
        
        Info::CGameObjectIsRecvableContEffect96_ptr CGameObjectIsRecvableContEffect96_next(nullptr);
        Info::CGameObjectIsRecvableContEffect96_clbk CGameObjectIsRecvableContEffect96_user(nullptr);
        
        Info::CGameObjectIsRewardExp98_ptr CGameObjectIsRewardExp98_next(nullptr);
        Info::CGameObjectIsRewardExp98_clbk CGameObjectIsRewardExp98_user(nullptr);
        
        Info::CGameObjectIs_Battle_Mode100_ptr CGameObjectIs_Battle_Mode100_next(nullptr);
        Info::CGameObjectIs_Battle_Mode100_clbk CGameObjectIs_Battle_Mode100_user(nullptr);
        
        Info::CGameObjectLoop102_ptr CGameObjectLoop102_next(nullptr);
        Info::CGameObjectLoop102_clbk CGameObjectLoop102_user(nullptr);
        
        Info::CGameObjectOnLoop104_ptr CGameObjectOnLoop104_next(nullptr);
        Info::CGameObjectOnLoop104_clbk CGameObjectOnLoop104_user(nullptr);
        
        Info::CGameObjectOutOfSec106_ptr CGameObjectOutOfSec106_next(nullptr);
        Info::CGameObjectOutOfSec106_clbk CGameObjectOutOfSec106_user(nullptr);
        
        Info::CGameObjectRecvKillMessage108_ptr CGameObjectRecvKillMessage108_next(nullptr);
        Info::CGameObjectRecvKillMessage108_clbk CGameObjectRecvKillMessage108_user(nullptr);
        
        Info::CGameObjectRerangeSecIndex110_ptr CGameObjectRerangeSecIndex110_next(nullptr);
        Info::CGameObjectRerangeSecIndex110_clbk CGameObjectRerangeSecIndex110_user(nullptr);
        
        Info::CGameObjectResetSector112_ptr CGameObjectResetSector112_next(nullptr);
        Info::CGameObjectResetSector112_clbk CGameObjectResetSector112_user(nullptr);
        
        Info::CGameObjectRobbedHP114_ptr CGameObjectRobbedHP114_next(nullptr);
        Info::CGameObjectRobbedHP114_clbk CGameObjectRobbedHP114_user(nullptr);
        
        Info::CGameObjectSFContDelMessage116_ptr CGameObjectSFContDelMessage116_next(nullptr);
        Info::CGameObjectSFContDelMessage116_clbk CGameObjectSFContDelMessage116_user(nullptr);
        
        Info::CGameObjectSFContInsertMessage118_ptr CGameObjectSFContInsertMessage118_next(nullptr);
        Info::CGameObjectSFContInsertMessage118_clbk CGameObjectSFContInsertMessage118_user(nullptr);
        
        Info::CGameObjectSFContUpdateTimeMessage120_ptr CGameObjectSFContUpdateTimeMessage120_next(nullptr);
        Info::CGameObjectSFContUpdateTimeMessage120_clbk CGameObjectSFContUpdateTimeMessage120_user(nullptr);
        
        Info::CGameObjectSF_AllContDamageForceRemove_Once122_ptr CGameObjectSF_AllContDamageForceRemove_Once122_next(nullptr);
        Info::CGameObjectSF_AllContDamageForceRemove_Once122_clbk CGameObjectSF_AllContDamageForceRemove_Once122_user(nullptr);
        
        Info::CGameObjectSF_AllContHelpForceRemove_Once124_ptr CGameObjectSF_AllContHelpForceRemove_Once124_next(nullptr);
        Info::CGameObjectSF_AllContHelpForceRemove_Once124_clbk CGameObjectSF_AllContHelpForceRemove_Once124_user(nullptr);
        
        Info::CGameObjectSF_AllContHelpSkillRemove_Once126_ptr CGameObjectSF_AllContHelpSkillRemove_Once126_next(nullptr);
        Info::CGameObjectSF_AllContHelpSkillRemove_Once126_clbk CGameObjectSF_AllContHelpSkillRemove_Once126_user(nullptr);
        
        Info::CGameObjectSF_AttHPtoDstFP_Once128_ptr CGameObjectSF_AttHPtoDstFP_Once128_next(nullptr);
        Info::CGameObjectSF_AttHPtoDstFP_Once128_clbk CGameObjectSF_AttHPtoDstFP_Once128_user(nullptr);
        
        Info::CGameObjectSF_ContDamageTimeInc_Once130_ptr CGameObjectSF_ContDamageTimeInc_Once130_next(nullptr);
        Info::CGameObjectSF_ContDamageTimeInc_Once130_clbk CGameObjectSF_ContDamageTimeInc_Once130_user(nullptr);
        
        Info::CGameObjectSF_ContHelpTimeInc_Once132_ptr CGameObjectSF_ContHelpTimeInc_Once132_next(nullptr);
        Info::CGameObjectSF_ContHelpTimeInc_Once132_clbk CGameObjectSF_ContHelpTimeInc_Once132_user(nullptr);
        
        Info::CGameObjectSF_ConvertMonsterTarget134_ptr CGameObjectSF_ConvertMonsterTarget134_next(nullptr);
        Info::CGameObjectSF_ConvertMonsterTarget134_clbk CGameObjectSF_ConvertMonsterTarget134_user(nullptr);
        
        Info::CGameObjectSF_ConvertTargetDest136_ptr CGameObjectSF_ConvertTargetDest136_next(nullptr);
        Info::CGameObjectSF_ConvertTargetDest136_clbk CGameObjectSF_ConvertTargetDest136_user(nullptr);
        
        Info::CGameObjectSF_DamageAndStun138_ptr CGameObjectSF_DamageAndStun138_next(nullptr);
        Info::CGameObjectSF_DamageAndStun138_clbk CGameObjectSF_DamageAndStun138_user(nullptr);
        
        Info::CGameObjectSF_FPDec140_ptr CGameObjectSF_FPDec140_next(nullptr);
        Info::CGameObjectSF_FPDec140_clbk CGameObjectSF_FPDec140_user(nullptr);
        
        Info::CGameObjectSF_HPInc_Once142_ptr CGameObjectSF_HPInc_Once142_next(nullptr);
        Info::CGameObjectSF_HPInc_Once142_clbk CGameObjectSF_HPInc_Once142_user(nullptr);
        
        Info::CGameObjectSF_IncHPCircleParty144_ptr CGameObjectSF_IncHPCircleParty144_next(nullptr);
        Info::CGameObjectSF_IncHPCircleParty144_clbk CGameObjectSF_IncHPCircleParty144_user(nullptr);
        
        Info::CGameObjectSF_IncreaseDP146_ptr CGameObjectSF_IncreaseDP146_next(nullptr);
        Info::CGameObjectSF_IncreaseDP146_clbk CGameObjectSF_IncreaseDP146_user(nullptr);
        
        Info::CGameObjectSF_LateContDamageRemove_Once148_ptr CGameObjectSF_LateContDamageRemove_Once148_next(nullptr);
        Info::CGameObjectSF_LateContDamageRemove_Once148_clbk CGameObjectSF_LateContDamageRemove_Once148_user(nullptr);
        
        Info::CGameObjectSF_LateContHelpForceRemove_Once150_ptr CGameObjectSF_LateContHelpForceRemove_Once150_next(nullptr);
        Info::CGameObjectSF_LateContHelpForceRemove_Once150_clbk CGameObjectSF_LateContHelpForceRemove_Once150_user(nullptr);
        
        Info::CGameObjectSF_LateContHelpSkillRemove_Once152_ptr CGameObjectSF_LateContHelpSkillRemove_Once152_next(nullptr);
        Info::CGameObjectSF_LateContHelpSkillRemove_Once152_clbk CGameObjectSF_LateContHelpSkillRemove_Once152_user(nullptr);
        
        Info::CGameObjectSF_MakePortalReturnBindPositionPartyMember154_ptr CGameObjectSF_MakePortalReturnBindPositionPartyMember154_next(nullptr);
        Info::CGameObjectSF_MakePortalReturnBindPositionPartyMember154_clbk CGameObjectSF_MakePortalReturnBindPositionPartyMember154_user(nullptr);
        
        Info::CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_ptr CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_next(nullptr);
        Info::CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_clbk CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_user(nullptr);
        
        Info::CGameObjectSF_OthersContHelpSFRemove_Once158_ptr CGameObjectSF_OthersContHelpSFRemove_Once158_next(nullptr);
        Info::CGameObjectSF_OthersContHelpSFRemove_Once158_clbk CGameObjectSF_OthersContHelpSFRemove_Once158_user(nullptr);
        
        Info::CGameObjectSF_OverHealing_Once160_ptr CGameObjectSF_OverHealing_Once160_next(nullptr);
        Info::CGameObjectSF_OverHealing_Once160_clbk CGameObjectSF_OverHealing_Once160_user(nullptr);
        
        Info::CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_ptr CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_next(nullptr);
        Info::CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_clbk CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_user(nullptr);
        
        Info::CGameObjectSF_ReleaseMonsterTarget164_ptr CGameObjectSF_ReleaseMonsterTarget164_next(nullptr);
        Info::CGameObjectSF_ReleaseMonsterTarget164_clbk CGameObjectSF_ReleaseMonsterTarget164_user(nullptr);
        
        Info::CGameObjectSF_RemoveAllContHelp_Once166_ptr CGameObjectSF_RemoveAllContHelp_Once166_next(nullptr);
        Info::CGameObjectSF_RemoveAllContHelp_Once166_clbk CGameObjectSF_RemoveAllContHelp_Once166_user(nullptr);
        
        Info::CGameObjectSF_Resurrect_Once168_ptr CGameObjectSF_Resurrect_Once168_next(nullptr);
        Info::CGameObjectSF_Resurrect_Once168_clbk CGameObjectSF_Resurrect_Once168_user(nullptr);
        
        Info::CGameObjectSF_ReturnBindPosition170_ptr CGameObjectSF_ReturnBindPosition170_next(nullptr);
        Info::CGameObjectSF_ReturnBindPosition170_clbk CGameObjectSF_ReturnBindPosition170_user(nullptr);
        
        Info::CGameObjectSF_SPDec172_ptr CGameObjectSF_SPDec172_next(nullptr);
        Info::CGameObjectSF_SPDec172_clbk CGameObjectSF_SPDec172_user(nullptr);
        
        Info::CGameObjectSF_STInc_Once174_ptr CGameObjectSF_STInc_Once174_next(nullptr);
        Info::CGameObjectSF_STInc_Once174_clbk CGameObjectSF_STInc_Once174_user(nullptr);
        
        Info::CGameObjectSF_SelfDestruction176_ptr CGameObjectSF_SelfDestruction176_next(nullptr);
        Info::CGameObjectSF_SelfDestruction176_clbk CGameObjectSF_SelfDestruction176_user(nullptr);
        
        Info::CGameObjectSF_SkillContHelpTimeInc_Once178_ptr CGameObjectSF_SkillContHelpTimeInc_Once178_next(nullptr);
        Info::CGameObjectSF_SkillContHelpTimeInc_Once178_clbk CGameObjectSF_SkillContHelpTimeInc_Once178_user(nullptr);
        
        Info::CGameObjectSF_Stun180_ptr CGameObjectSF_Stun180_next(nullptr);
        Info::CGameObjectSF_Stun180_clbk CGameObjectSF_Stun180_user(nullptr);
        
        Info::CGameObjectSF_TeleportToDestination182_ptr CGameObjectSF_TeleportToDestination182_next(nullptr);
        Info::CGameObjectSF_TeleportToDestination182_clbk CGameObjectSF_TeleportToDestination182_user(nullptr);
        
        Info::CGameObjectSF_TransDestHP184_ptr CGameObjectSF_TransDestHP184_next(nullptr);
        Info::CGameObjectSF_TransDestHP184_clbk CGameObjectSF_TransDestHP184_user(nullptr);
        
        Info::CGameObjectSF_TransMonsterHP186_ptr CGameObjectSF_TransMonsterHP186_next(nullptr);
        Info::CGameObjectSF_TransMonsterHP186_clbk CGameObjectSF_TransMonsterHP186_user(nullptr);
        
        Info::CGameObjectSendMsg_BreakStop188_ptr CGameObjectSendMsg_BreakStop188_next(nullptr);
        Info::CGameObjectSendMsg_BreakStop188_clbk CGameObjectSendMsg_BreakStop188_user(nullptr);
        
        Info::CGameObjectSendMsg_FixPosition190_ptr CGameObjectSendMsg_FixPosition190_next(nullptr);
        Info::CGameObjectSendMsg_FixPosition190_clbk CGameObjectSendMsg_FixPosition190_user(nullptr);
        
        Info::CGameObjectSendMsg_RealFixPosition192_ptr CGameObjectSendMsg_RealFixPosition192_next(nullptr);
        Info::CGameObjectSendMsg_RealFixPosition192_clbk CGameObjectSendMsg_RealFixPosition192_user(nullptr);
        
        Info::CGameObjectSendMsg_RealMovePoint194_ptr CGameObjectSendMsg_RealMovePoint194_next(nullptr);
        Info::CGameObjectSendMsg_RealMovePoint194_clbk CGameObjectSendMsg_RealMovePoint194_user(nullptr);
        
        Info::CGameObjectSendMsg_SetHPInform196_ptr CGameObjectSendMsg_SetHPInform196_next(nullptr);
        Info::CGameObjectSendMsg_SetHPInform196_clbk CGameObjectSendMsg_SetHPInform196_user(nullptr);
        
        Info::CGameObjectSendMsg_StunInform198_ptr CGameObjectSendMsg_StunInform198_next(nullptr);
        Info::CGameObjectSendMsg_StunInform198_clbk CGameObjectSendMsg_StunInform198_user(nullptr);
        
        Info::CGameObjectSetAttackPart200_ptr CGameObjectSetAttackPart200_next(nullptr);
        Info::CGameObjectSetAttackPart200_clbk CGameObjectSetAttackPart200_user(nullptr);
        
        Info::CGameObjectSetBreakTranspar202_ptr CGameObjectSetBreakTranspar202_next(nullptr);
        Info::CGameObjectSetBreakTranspar202_clbk CGameObjectSetBreakTranspar202_user(nullptr);
        
        Info::CGameObjectSetCurBspMap204_ptr CGameObjectSetCurBspMap204_next(nullptr);
        Info::CGameObjectSetCurBspMap204_clbk CGameObjectSetCurBspMap204_user(nullptr);
        
        Info::CGameObjectSetCurPos206_ptr CGameObjectSetCurPos206_next(nullptr);
        Info::CGameObjectSetCurPos206_clbk CGameObjectSetCurPos206_user(nullptr);
        
        Info::CGameObjectSetCurSecNum208_ptr CGameObjectSetCurSecNum208_next(nullptr);
        Info::CGameObjectSetCurSecNum208_clbk CGameObjectSetCurSecNum208_user(nullptr);
        
        Info::CGameObjectSetDamage210_ptr CGameObjectSetDamage210_next(nullptr);
        Info::CGameObjectSetDamage210_clbk CGameObjectSetDamage210_user(nullptr);
        
        Info::CGameObjectSetHP212_ptr CGameObjectSetHP212_next(nullptr);
        Info::CGameObjectSetHP212_clbk CGameObjectSetHP212_user(nullptr);
        
        Info::CGameObjectSetMaxVersion214_ptr CGameObjectSetMaxVersion214_next(nullptr);
        Info::CGameObjectSetMaxVersion214_clbk CGameObjectSetMaxVersion214_user(nullptr);
        
        Info::CGameObjectSetStun216_ptr CGameObjectSetStun216_next(nullptr);
        Info::CGameObjectSetStun216_clbk CGameObjectSetStun216_user(nullptr);
        
        Info::CGameObjectUpdateSecList218_ptr CGameObjectUpdateSecList218_next(nullptr);
        Info::CGameObjectUpdateSecList218_clbk CGameObjectUpdateSecList218_user(nullptr);
        
        Info::CGameObject_ResetCirclePlayer220_ptr CGameObject_ResetCirclePlayer220_next(nullptr);
        Info::CGameObject_ResetCirclePlayer220_clbk CGameObject_ResetCirclePlayer220_user(nullptr);
        
        
        Info::CGameObjectdtor_CGameObject225_ptr CGameObjectdtor_CGameObject225_next(nullptr);
        Info::CGameObjectdtor_CGameObject225_clbk CGameObjectdtor_CGameObject225_user(nullptr);
        
        void CGameObjectAlterSec2_wrapper(struct CGameObject* _this)
        {
           CGameObjectAlterSec2_user(_this, CGameObjectAlterSec2_next);
        };
        int CGameObjectAttackableHeight4_wrapper(struct CGameObject* _this)
        {
           return CGameObjectAttackableHeight4_user(_this, CGameObjectAttackableHeight4_next);
        };
        void CGameObjectBeTargeted6_wrapper(struct CGameObject* _this, struct CCharacter* pSeacher)
        {
           CGameObjectBeTargeted6_user(_this, pSeacher, CGameObjectBeTargeted6_next);
        };
        
        void CGameObjectctor_CGameObject8_wrapper(struct CGameObject* _this)
        {
           CGameObjectctor_CGameObject8_user(_this, CGameObjectctor_CGameObject8_next);
        };
        void CGameObjectCalcAbsPos10_wrapper(struct CGameObject* _this)
        {
           CGameObjectCalcAbsPos10_user(_this, CGameObjectCalcAbsPos10_next);
        };
        int CGameObjectCalcCirclePlayerNum12_wrapper(struct CGameObject* _this, int nRange)
        {
           return CGameObjectCalcCirclePlayerNum12_user(_this, nRange, CGameObjectCalcCirclePlayerNum12_next);
        };
        int CGameObjectCalcCirclePlayerNum14_wrapper(struct CGameObject* _this, int nRange, bool (WINAPIV* fnComp)(struct CGameObject*))
        {
           return CGameObjectCalcCirclePlayerNum14_user(_this, nRange, fnComp, CGameObjectCalcCirclePlayerNum14_next);
        };
        uint16_t CGameObjectCalcCurHPRate16_wrapper(struct CGameObject* _this)
        {
           return CGameObjectCalcCurHPRate16_user(_this, CGameObjectCalcCurHPRate16_next);
        };
        void CGameObjectCalcScrExtendPoint18_wrapper(struct CGameObject* _this, struct CRect* prcWnd, struct CRect* prcExtend)
        {
           CGameObjectCalcScrExtendPoint18_user(_this, prcWnd, prcExtend, CGameObjectCalcScrExtendPoint18_next);
        };
        void CGameObjectCalcScrNormalPoint20_wrapper(struct CGameObject* _this, struct CRect* prcWnd)
        {
           CGameObjectCalcScrNormalPoint20_user(_this, prcWnd, CGameObjectCalcScrNormalPoint20_next);
        };
        unsigned int CGameObjectCalcSecIndex22_wrapper(struct CGameObject* _this)
        {
           return CGameObjectCalcSecIndex22_user(_this, CGameObjectCalcSecIndex22_next);
        };
        void CGameObjectCircleReport24_wrapper(struct CGameObject* _this, char* pbyType, char* szMsg, int nMsgSize, bool bToOne)
        {
           CGameObjectCircleReport24_user(_this, pbyType, szMsg, nMsgSize, bToOne, CGameObjectCircleReport24_next);
        };
        void CGameObjectCircleReport26_wrapper(struct CGameObject* _this, char* pbyType, char* szMsg, int nMsgSize, unsigned int dwPassObjSerial, bool bToOne)
        {
           CGameObjectCircleReport26_user(_this, pbyType, szMsg, nMsgSize, dwPassObjSerial, bToOne, CGameObjectCircleReport26_next);
        };
        bool CGameObjectCreate28_wrapper(struct CGameObject* _this, struct _object_create_setdata* pData)
        {
           return CGameObjectCreate28_user(_this, pData, CGameObjectCreate28_next);
        };
        bool CGameObjectDestroy30_wrapper(struct CGameObject* _this)
        {
           return CGameObjectDestroy30_user(_this, CGameObjectDestroy30_next);
        };
        bool CGameObjectFixTargetWhile32_wrapper(struct CGameObject* _this, struct CCharacter* pkTarget, unsigned int dwMiliSecond)
        {
           return CGameObjectFixTargetWhile32_user(_this, pkTarget, dwMiliSecond, CGameObjectFixTargetWhile32_next);
        };
        int CGameObjectGetAttackDP34_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetAttackDP34_user(_this, CGameObjectGetAttackDP34_next);
        };
        int CGameObjectGetAttackLevel36_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetAttackLevel36_user(_this, CGameObjectGetAttackLevel36_next);
        };
        float CGameObjectGetAttackRange38_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetAttackRange38_user(_this, CGameObjectGetAttackRange38_next);
        };
        int CGameObjectGetAvoidRate40_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetAvoidRate40_user(_this, CGameObjectGetAvoidRate40_next);
        };
        unsigned int CGameObjectGetCurSecNum42_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetCurSecNum42_user(_this, CGameObjectGetCurSecNum42_next);
        };
        int CGameObjectGetDefFC44_wrapper(struct CGameObject* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CGameObjectGetDefFC44_user(_this, nAttactPart, pAttChar, pnConvertPart, CGameObjectGetDefFC44_next);
        };
        float CGameObjectGetDefFacing46_wrapper(struct CGameObject* _this, int nPart)
        {
           return CGameObjectGetDefFacing46_user(_this, nPart, CGameObjectGetDefFacing46_next);
        };
        float CGameObjectGetDefGap48_wrapper(struct CGameObject* _this, int nPart)
        {
           return CGameObjectGetDefGap48_user(_this, nPart, CGameObjectGetDefGap48_next);
        };
        int CGameObjectGetDefSkill50_wrapper(struct CGameObject* _this, bool bBackAttackDamage)
        {
           return CGameObjectGetDefSkill50_user(_this, bBackAttackDamage, CGameObjectGetDefSkill50_next);
        };
        int CGameObjectGetFireTol52_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetFireTol52_user(_this, CGameObjectGetFireTol52_next);
        };
        int CGameObjectGetGenAttackProb54_wrapper(struct CGameObject* _this, struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
           return CGameObjectGetGenAttackProb54_user(_this, pDst, nPart, bBackAttack, CGameObjectGetGenAttackProb54_next);
        };
        int CGameObjectGetHP56_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetHP56_user(_this, CGameObjectGetHP56_next);
        };
        int CGameObjectGetLevel58_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetLevel58_user(_this, CGameObjectGetLevel58_next);
        };
        int CGameObjectGetMaxHP60_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetMaxHP60_user(_this, CGameObjectGetMaxHP60_next);
        };
        char* CGameObjectGetObjName62_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetObjName62_user(_this, CGameObjectGetObjName62_next);
        };
        int CGameObjectGetObjRace64_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetObjRace64_user(_this, CGameObjectGetObjRace64_next);
        };
        int CGameObjectGetSoilTol66_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetSoilTol66_user(_this, CGameObjectGetSoilTol66_next);
        };
        bool CGameObjectGetStun68_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetStun68_user(_this, CGameObjectGetStun68_next);
        };
        int CGameObjectGetUseSectorRange70_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetUseSectorRange70_user(_this, CGameObjectGetUseSectorRange70_next);
        };
        int CGameObjectGetWaterTol72_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetWaterTol72_user(_this, CGameObjectGetWaterTol72_next);
        };
        float CGameObjectGetWeaponAdjust74_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetWeaponAdjust74_user(_this, CGameObjectGetWeaponAdjust74_next);
        };
        int CGameObjectGetWeaponClass76_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetWeaponClass76_user(_this, CGameObjectGetWeaponClass76_next);
        };
        float CGameObjectGetWidth78_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetWidth78_user(_this, CGameObjectGetWidth78_next);
        };
        int CGameObjectGetWindTol80_wrapper(struct CGameObject* _this)
        {
           return CGameObjectGetWindTol80_user(_this, CGameObjectGetWindTol80_next);
        };
        void CGameObjectInit82_wrapper(struct CGameObject* _this, struct _object_id* pID)
        {
           CGameObjectInit82_user(_this, pID, CGameObjectInit82_next);
        };
        bool CGameObjectIsAttackableInTown84_wrapper(struct CGameObject* _this)
        {
           return CGameObjectIsAttackableInTown84_user(_this, CGameObjectIsAttackableInTown84_next);
        };
        bool CGameObjectIsBeAttackedAble86_wrapper(struct CGameObject* _this, bool bFirst)
        {
           return CGameObjectIsBeAttackedAble86_user(_this, bFirst, CGameObjectIsBeAttackedAble86_next);
        };
        bool CGameObjectIsBeCirclePlayer88_wrapper(struct CGameObject* _this, int nRange)
        {
           return CGameObjectIsBeCirclePlayer88_user(_this, nRange, CGameObjectIsBeCirclePlayer88_next);
        };
        bool CGameObjectIsBeDamagedAble90_wrapper(struct CGameObject* _this, struct CCharacter* pAtter)
        {
           return CGameObjectIsBeDamagedAble90_user(_this, pAtter, CGameObjectIsBeDamagedAble90_next);
        };
        bool CGameObjectIsCircleObject92_wrapper(struct CGameObject* _this, int nRange, struct CGameObject* pObject)
        {
           return CGameObjectIsCircleObject92_user(_this, nRange, pObject, CGameObjectIsCircleObject92_next);
        };
        bool CGameObjectIsInTown94_wrapper(struct CGameObject* _this)
        {
           return CGameObjectIsInTown94_user(_this, CGameObjectIsInTown94_next);
        };
        bool CGameObjectIsRecvableContEffect96_wrapper(struct CGameObject* _this)
        {
           return CGameObjectIsRecvableContEffect96_user(_this, CGameObjectIsRecvableContEffect96_next);
        };
        bool CGameObjectIsRewardExp98_wrapper(struct CGameObject* _this)
        {
           return CGameObjectIsRewardExp98_user(_this, CGameObjectIsRewardExp98_next);
        };
        bool CGameObjectIs_Battle_Mode100_wrapper(struct CGameObject* _this)
        {
           return CGameObjectIs_Battle_Mode100_user(_this, CGameObjectIs_Battle_Mode100_next);
        };
        void CGameObjectLoop102_wrapper(struct CGameObject* _this)
        {
           CGameObjectLoop102_user(_this, CGameObjectLoop102_next);
        };
        void CGameObjectOnLoop104_wrapper(struct CGameObject* _this)
        {
           CGameObjectOnLoop104_user(_this, CGameObjectOnLoop104_next);
        };
        void CGameObjectOutOfSec106_wrapper(struct CGameObject* _this)
        {
           CGameObjectOutOfSec106_user(_this, CGameObjectOutOfSec106_next);
        };
        void CGameObjectRecvKillMessage108_wrapper(struct CGameObject* _this, struct CCharacter* pDier)
        {
           CGameObjectRecvKillMessage108_user(_this, pDier, CGameObjectRecvKillMessage108_next);
        };
        unsigned int CGameObjectRerangeSecIndex110_wrapper(struct CGameObject* _this, unsigned int dwOld, unsigned int dwNew)
        {
           return CGameObjectRerangeSecIndex110_user(_this, dwOld, dwNew, CGameObjectRerangeSecIndex110_next);
        };
        void CGameObjectResetSector112_wrapper(struct CGameObject* _this, unsigned int dwOldSec, unsigned int dwNewSec)
        {
           CGameObjectResetSector112_user(_this, dwOldSec, dwNewSec, CGameObjectResetSector112_next);
        };
        bool CGameObjectRobbedHP114_wrapper(struct CGameObject* _this, struct CCharacter* pDst, int nDecHP)
        {
           return CGameObjectRobbedHP114_user(_this, pDst, nDecHP, CGameObjectRobbedHP114_next);
        };
        void CGameObjectSFContDelMessage116_wrapper(struct CGameObject* _this, char byContCode, char byListIndex, bool bSend, bool bAura)
        {
           CGameObjectSFContDelMessage116_user(_this, byContCode, byListIndex, bSend, bAura, CGameObjectSFContDelMessage116_next);
        };
        void CGameObjectSFContInsertMessage118_wrapper(struct CGameObject* _this, char byContCode, char byListIndex, bool bAura, struct CPlayer* pPlayerAct)
        {
           CGameObjectSFContInsertMessage118_user(_this, byContCode, byListIndex, bAura, pPlayerAct, CGameObjectSFContInsertMessage118_next);
        };
        void CGameObjectSFContUpdateTimeMessage120_wrapper(struct CGameObject* _this, char byContCode, char byListIndex, int nLeftTime)
        {
           CGameObjectSFContUpdateTimeMessage120_user(_this, byContCode, byListIndex, nLeftTime, CGameObjectSFContUpdateTimeMessage120_next);
        };
        bool CGameObjectSF_AllContDamageForceRemove_Once122_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_AllContDamageForceRemove_Once122_user(_this, pDstObj, CGameObjectSF_AllContDamageForceRemove_Once122_next);
        };
        bool CGameObjectSF_AllContHelpForceRemove_Once124_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_AllContHelpForceRemove_Once124_user(_this, pDstObj, CGameObjectSF_AllContHelpForceRemove_Once124_next);
        };
        bool CGameObjectSF_AllContHelpSkillRemove_Once126_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_AllContHelpSkillRemove_Once126_user(_this, pDstObj, CGameObjectSF_AllContHelpSkillRemove_Once126_next);
        };
        bool CGameObjectSF_AttHPtoDstFP_Once128_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_AttHPtoDstFP_Once128_user(_this, pDstObj, fEffectValue, CGameObjectSF_AttHPtoDstFP_Once128_next);
        };
        bool CGameObjectSF_ContDamageTimeInc_Once130_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_ContDamageTimeInc_Once130_user(_this, pDstObj, fEffectValue, CGameObjectSF_ContDamageTimeInc_Once130_next);
        };
        bool CGameObjectSF_ContHelpTimeInc_Once132_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_ContHelpTimeInc_Once132_user(_this, pDstObj, fEffectValue, CGameObjectSF_ContHelpTimeInc_Once132_next);
        };
        bool CGameObjectSF_ConvertMonsterTarget134_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_ConvertMonsterTarget134_user(_this, pDstObj, fEffectValue, CGameObjectSF_ConvertMonsterTarget134_next);
        };
        bool CGameObjectSF_ConvertTargetDest136_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_ConvertTargetDest136_user(_this, pDstObj, fEffectValue, CGameObjectSF_ConvertTargetDest136_next);
        };
        bool CGameObjectSF_DamageAndStun138_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_DamageAndStun138_user(_this, pDstObj, fEffectValue, CGameObjectSF_DamageAndStun138_next);
        };
        bool CGameObjectSF_FPDec140_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_FPDec140_user(_this, pDstObj, fEffectValue, CGameObjectSF_FPDec140_next);
        };
        bool CGameObjectSF_HPInc_Once142_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_HPInc_Once142_user(_this, pDstObj, fEffectValue, CGameObjectSF_HPInc_Once142_next);
        };
        bool CGameObjectSF_IncHPCircleParty144_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_IncHPCircleParty144_user(_this, pDstObj, fEffectValue, CGameObjectSF_IncHPCircleParty144_next);
        };
        bool CGameObjectSF_IncreaseDP146_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_IncreaseDP146_user(_this, pDstObj, fEffectValue, CGameObjectSF_IncreaseDP146_next);
        };
        bool CGameObjectSF_LateContDamageRemove_Once148_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_LateContDamageRemove_Once148_user(_this, pDstObj, CGameObjectSF_LateContDamageRemove_Once148_next);
        };
        bool CGameObjectSF_LateContHelpForceRemove_Once150_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_LateContHelpForceRemove_Once150_user(_this, pDstObj, CGameObjectSF_LateContHelpForceRemove_Once150_next);
        };
        bool CGameObjectSF_LateContHelpSkillRemove_Once152_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_LateContHelpSkillRemove_Once152_user(_this, pDstObj, CGameObjectSF_LateContHelpSkillRemove_Once152_next);
        };
        bool CGameObjectSF_MakePortalReturnBindPositionPartyMember154_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue, char* byRet)
        {
           return CGameObjectSF_MakePortalReturnBindPositionPartyMember154_user(_this, pDstObj, fEffectValue, byRet, CGameObjectSF_MakePortalReturnBindPositionPartyMember154_next);
        };
        bool CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_user(_this, pDstObj, fEffectValue, CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_next);
        };
        bool CGameObjectSF_OthersContHelpSFRemove_Once158_wrapper(struct CGameObject* _this, float fEffectValue)
        {
           return CGameObjectSF_OthersContHelpSFRemove_Once158_user(_this, fEffectValue, CGameObjectSF_OthersContHelpSFRemove_Once158_next);
        };
        bool CGameObjectSF_OverHealing_Once160_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_OverHealing_Once160_user(_this, pDstObj, fEffectValue, CGameObjectSF_OverHealing_Once160_next);
        };
        bool CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_user(_this, pDstObj, fEffectValue, CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_next);
        };
        bool CGameObjectSF_ReleaseMonsterTarget164_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_ReleaseMonsterTarget164_user(_this, pDstObj, fEffectValue, CGameObjectSF_ReleaseMonsterTarget164_next);
        };
        bool CGameObjectSF_RemoveAllContHelp_Once166_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_RemoveAllContHelp_Once166_user(_this, pDstObj, fEffectValue, CGameObjectSF_RemoveAllContHelp_Once166_next);
        };
        bool CGameObjectSF_Resurrect_Once168_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj)
        {
           return CGameObjectSF_Resurrect_Once168_user(_this, pDstObj, CGameObjectSF_Resurrect_Once168_next);
        };
        bool CGameObjectSF_ReturnBindPosition170_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_ReturnBindPosition170_user(_this, pDstObj, fEffectValue, CGameObjectSF_ReturnBindPosition170_next);
        };
        bool CGameObjectSF_SPDec172_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_SPDec172_user(_this, pDstObj, fEffectValue, CGameObjectSF_SPDec172_next);
        };
        bool CGameObjectSF_STInc_Once174_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_STInc_Once174_user(_this, pDstObj, fEffectValue, CGameObjectSF_STInc_Once174_next);
        };
        bool CGameObjectSF_SelfDestruction176_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_SelfDestruction176_user(_this, pDstObj, fEffectValue, CGameObjectSF_SelfDestruction176_next);
        };
        bool CGameObjectSF_SkillContHelpTimeInc_Once178_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_SkillContHelpTimeInc_Once178_user(_this, pDstObj, fEffectValue, CGameObjectSF_SkillContHelpTimeInc_Once178_next);
        };
        bool CGameObjectSF_Stun180_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_Stun180_user(_this, pDstObj, fEffectValue, CGameObjectSF_Stun180_next);
        };
        bool CGameObjectSF_TeleportToDestination182_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, bool bStone)
        {
           return CGameObjectSF_TeleportToDestination182_user(_this, pDstObj, bStone, CGameObjectSF_TeleportToDestination182_next);
        };
        bool CGameObjectSF_TransDestHP184_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue, char* byRet)
        {
           return CGameObjectSF_TransDestHP184_user(_this, pDstObj, fEffectValue, byRet, CGameObjectSF_TransDestHP184_next);
        };
        bool CGameObjectSF_TransMonsterHP186_wrapper(struct CGameObject* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CGameObjectSF_TransMonsterHP186_user(_this, pDstObj, fEffectValue, CGameObjectSF_TransMonsterHP186_next);
        };
        void CGameObjectSendMsg_BreakStop188_wrapper(struct CGameObject* _this)
        {
           CGameObjectSendMsg_BreakStop188_user(_this, CGameObjectSendMsg_BreakStop188_next);
        };
        void CGameObjectSendMsg_FixPosition190_wrapper(struct CGameObject* _this, int n)
        {
           CGameObjectSendMsg_FixPosition190_user(_this, n, CGameObjectSendMsg_FixPosition190_next);
        };
        void CGameObjectSendMsg_RealFixPosition192_wrapper(struct CGameObject* _this, bool bCircle)
        {
           CGameObjectSendMsg_RealFixPosition192_user(_this, bCircle, CGameObjectSendMsg_RealFixPosition192_next);
        };
        void CGameObjectSendMsg_RealMovePoint194_wrapper(struct CGameObject* _this, int n)
        {
           CGameObjectSendMsg_RealMovePoint194_user(_this, n, CGameObjectSendMsg_RealMovePoint194_next);
        };
        void CGameObjectSendMsg_SetHPInform196_wrapper(struct CGameObject* _this)
        {
           CGameObjectSendMsg_SetHPInform196_user(_this, CGameObjectSendMsg_SetHPInform196_next);
        };
        void CGameObjectSendMsg_StunInform198_wrapper(struct CGameObject* _this)
        {
           CGameObjectSendMsg_StunInform198_user(_this, CGameObjectSendMsg_StunInform198_next);
        };
        void CGameObjectSetAttackPart200_wrapper(struct CGameObject* _this, int nAttactPart)
        {
           CGameObjectSetAttackPart200_user(_this, nAttactPart, CGameObjectSetAttackPart200_next);
        };
        void CGameObjectSetBreakTranspar202_wrapper(struct CGameObject* _this, bool bBreak)
        {
           CGameObjectSetBreakTranspar202_user(_this, bBreak, CGameObjectSetBreakTranspar202_next);
        };
        bool CGameObjectSetCurBspMap204_wrapper(struct CGameObject* _this, struct CMapData* pMap)
        {
           return CGameObjectSetCurBspMap204_user(_this, pMap, CGameObjectSetCurBspMap204_next);
        };
        bool CGameObjectSetCurPos206_wrapper(struct CGameObject* _this, float* pPos)
        {
           return CGameObjectSetCurPos206_user(_this, pPos, CGameObjectSetCurPos206_next);
        };
        void CGameObjectSetCurSecNum208_wrapper(struct CGameObject* _this, unsigned int dwNewSecNum)
        {
           CGameObjectSetCurSecNum208_user(_this, dwNewSecNum, CGameObjectSetCurSecNum208_next);
        };
        int CGameObjectSetDamage210_wrapper(struct CGameObject* _this, int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CGameObjectSetDamage210_user(_this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CGameObjectSetDamage210_next);
        };
        bool CGameObjectSetHP212_wrapper(struct CGameObject* _this, int nHP, bool bOver)
        {
           return CGameObjectSetHP212_user(_this, nHP, bOver, CGameObjectSetHP212_next);
        };
        void CGameObjectSetMaxVersion214_wrapper(struct CGameObject* _this)
        {
           CGameObjectSetMaxVersion214_user(_this, CGameObjectSetMaxVersion214_next);
        };
        void CGameObjectSetStun216_wrapper(struct CGameObject* _this, bool bStun)
        {
           CGameObjectSetStun216_user(_this, bStun, CGameObjectSetStun216_next);
        };
        bool CGameObjectUpdateSecList218_wrapper(struct CGameObject* _this)
        {
           return CGameObjectUpdateSecList218_user(_this, CGameObjectUpdateSecList218_next);
        };
        void CGameObject_ResetCirclePlayer220_wrapper(struct CGameObject* _this)
        {
           CGameObject_ResetCirclePlayer220_user(_this, CGameObject_ResetCirclePlayer220_next);
        };
        
        void CGameObjectdtor_CGameObject225_wrapper(struct CGameObject* _this)
        {
           CGameObjectdtor_CGameObject225_user(_this, CGameObjectdtor_CGameObject225_next);
        };
        
        ::std::array<hook_record, 111> CGameObject_functions = 
        {
            _hook_record {
                (LPVOID)0x14012c640L,
                (LPVOID *)&CGameObjectAlterSec2_user,
                (LPVOID *)&CGameObjectAlterSec2_next,
                (LPVOID)cast_pointer_function(CGameObjectAlterSec2_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::AlterSec)
            },
            _hook_record {
                (LPVOID)0x14012e340L,
                (LPVOID *)&CGameObjectAttackableHeight4_user,
                (LPVOID *)&CGameObjectAttackableHeight4_next,
                (LPVOID)cast_pointer_function(CGameObjectAttackableHeight4_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::AttackableHeight)
            },
            _hook_record {
                (LPVOID)0x140072b50L,
                (LPVOID *)&CGameObjectBeTargeted6_user,
                (LPVOID *)&CGameObjectBeTargeted6_next,
                (LPVOID)cast_pointer_function(CGameObjectBeTargeted6_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(struct CCharacter*))&CGameObject::BeTargeted)
            },
            _hook_record {
                (LPVOID)0x14017a570L,
                (LPVOID *)&CGameObjectctor_CGameObject8_user,
                (LPVOID *)&CGameObjectctor_CGameObject8_next,
                (LPVOID)cast_pointer_function(CGameObjectctor_CGameObject8_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::ctor_CGameObject)
            },
            _hook_record {
                (LPVOID)0x14017b220L,
                (LPVOID *)&CGameObjectCalcAbsPos10_user,
                (LPVOID *)&CGameObjectCalcAbsPos10_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcAbsPos10_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::CalcAbsPos)
            },
            _hook_record {
                (LPVOID)0x14017c2e0L,
                (LPVOID *)&CGameObjectCalcCirclePlayerNum12_user,
                (LPVOID *)&CGameObjectCalcCirclePlayerNum12_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcCirclePlayerNum12_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)(int))&CGameObject::CalcCirclePlayerNum)
            },
            _hook_record {
                (LPVOID)0x14017c720L,
                (LPVOID *)&CGameObjectCalcCirclePlayerNum14_user,
                (LPVOID *)&CGameObjectCalcCirclePlayerNum14_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcCirclePlayerNum14_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)(int, bool (WINAPIV*)(struct CGameObject*)))&CGameObject::CalcCirclePlayerNum)
            },
            _hook_record {
                (LPVOID)0x14012c5b0L,
                (LPVOID *)&CGameObjectCalcCurHPRate16_user,
                (LPVOID *)&CGameObjectCalcCurHPRate16_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcCurHPRate16_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CGameObject::*)())&CGameObject::CalcCurHPRate)
            },
            _hook_record {
                (LPVOID)0x14017bb40L,
                (LPVOID *)&CGameObjectCalcScrExtendPoint18_user,
                (LPVOID *)&CGameObjectCalcScrExtendPoint18_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcScrExtendPoint18_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(struct CRect*, struct CRect*))&CGameObject::CalcScrExtendPoint)
            },
            _hook_record {
                (LPVOID)0x14017baa0L,
                (LPVOID *)&CGameObjectCalcScrNormalPoint20_user,
                (LPVOID *)&CGameObjectCalcScrNormalPoint20_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcScrNormalPoint20_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(struct CRect*))&CGameObject::CalcScrNormalPoint)
            },
            _hook_record {
                (LPVOID)0x14017b960L,
                (LPVOID *)&CGameObjectCalcSecIndex22_user,
                (LPVOID *)&CGameObjectCalcSecIndex22_next,
                (LPVOID)cast_pointer_function(CGameObjectCalcSecIndex22_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CGameObject::*)())&CGameObject::CalcSecIndex)
            },
            _hook_record {
                (LPVOID)0x14017bc50L,
                (LPVOID *)&CGameObjectCircleReport24_user,
                (LPVOID *)&CGameObjectCircleReport24_next,
                (LPVOID)cast_pointer_function(CGameObjectCircleReport24_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(char*, char*, int, bool))&CGameObject::CircleReport)
            },
            _hook_record {
                (LPVOID)0x14017bf90L,
                (LPVOID *)&CGameObjectCircleReport26_user,
                (LPVOID *)&CGameObjectCircleReport26_next,
                (LPVOID)cast_pointer_function(CGameObjectCircleReport26_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(char*, char*, int, unsigned int, bool))&CGameObject::CircleReport)
            },
            _hook_record {
                (LPVOID)0x14017a970L,
                (LPVOID *)&CGameObjectCreate28_user,
                (LPVOID *)&CGameObjectCreate28_next,
                (LPVOID)cast_pointer_function(CGameObjectCreate28_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct _object_create_setdata*))&CGameObject::Create)
            },
            _hook_record {
                (LPVOID)0x14017ab40L,
                (LPVOID *)&CGameObjectDestroy30_user,
                (LPVOID *)&CGameObjectDestroy30_next,
                (LPVOID)cast_pointer_function(CGameObjectDestroy30_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::Destroy)
            },
            _hook_record {
                (LPVOID)0x14012c6e0L,
                (LPVOID *)&CGameObjectFixTargetWhile32_user,
                (LPVOID *)&CGameObjectFixTargetWhile32_next,
                (LPVOID)cast_pointer_function(CGameObjectFixTargetWhile32_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, unsigned int))&CGameObject::FixTargetWhile)
            },
            _hook_record {
                (LPVOID)0x14012e360L,
                (LPVOID *)&CGameObjectGetAttackDP34_user,
                (LPVOID *)&CGameObjectGetAttackDP34_next,
                (LPVOID)cast_pointer_function(CGameObjectGetAttackDP34_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x14012c720L,
                (LPVOID *)&CGameObjectGetAttackLevel36_user,
                (LPVOID *)&CGameObjectGetAttackLevel36_next,
                (LPVOID)cast_pointer_function(CGameObjectGetAttackLevel36_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetAttackLevel)
            },
            _hook_record {
                (LPVOID)0x14012e300L,
                (LPVOID *)&CGameObjectGetAttackRange38_user,
                (LPVOID *)&CGameObjectGetAttackRange38_next,
                (LPVOID)cast_pointer_function(CGameObjectGetAttackRange38_wrapper),
                (LPVOID)cast_pointer_function((float(CGameObject::*)())&CGameObject::GetAttackRange)
            },
            _hook_record {
                (LPVOID)0x14012c710L,
                (LPVOID *)&CGameObjectGetAvoidRate40_user,
                (LPVOID *)&CGameObjectGetAvoidRate40_next,
                (LPVOID)cast_pointer_function(CGameObjectGetAvoidRate40_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetAvoidRate)
            },
            _hook_record {
                (LPVOID)0x14017ba50L,
                (LPVOID *)&CGameObjectGetCurSecNum42_user,
                (LPVOID *)&CGameObjectGetCurSecNum42_next,
                (LPVOID)cast_pointer_function(CGameObjectGetCurSecNum42_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CGameObject::*)())&CGameObject::GetCurSecNum)
            },
            _hook_record {
                (LPVOID)0x14012e140L,
                (LPVOID *)&CGameObjectGetDefFC44_user,
                (LPVOID *)&CGameObjectGetDefFC44_next,
                (LPVOID)cast_pointer_function(CGameObjectGetDefFC44_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)(int, struct CCharacter*, int*))&CGameObject::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x14012e200L,
                (LPVOID *)&CGameObjectGetDefFacing46_user,
                (LPVOID *)&CGameObjectGetDefFacing46_next,
                (LPVOID)cast_pointer_function(CGameObjectGetDefFacing46_wrapper),
                (LPVOID)cast_pointer_function((float(CGameObject::*)(int))&CGameObject::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x14012e1b0L,
                (LPVOID *)&CGameObjectGetDefGap48_user,
                (LPVOID *)&CGameObjectGetDefGap48_next,
                (LPVOID)cast_pointer_function(CGameObjectGetDefGap48_wrapper),
                (LPVOID)cast_pointer_function((float(CGameObject::*)(int))&CGameObject::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x14012e2a0L,
                (LPVOID *)&CGameObjectGetDefSkill50_user,
                (LPVOID *)&CGameObjectGetDefSkill50_next,
                (LPVOID)cast_pointer_function(CGameObjectGetDefSkill50_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)(bool))&CGameObject::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x14012e170L,
                (LPVOID *)&CGameObjectGetFireTol52_user,
                (LPVOID *)&CGameObjectGetFireTol52_next,
                (LPVOID)cast_pointer_function(CGameObjectGetFireTol52_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x14012e100L,
                (LPVOID *)&CGameObjectGetGenAttackProb54_user,
                (LPVOID *)&CGameObjectGetGenAttackProb54_next,
                (LPVOID)cast_pointer_function(CGameObjectGetGenAttackProb54_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)(struct CCharacter*, int, bool))&CGameObject::GetGenAttackProb)
            },
            _hook_record {
                (LPVOID)0x14012e0b0L,
                (LPVOID *)&CGameObjectGetHP56_user,
                (LPVOID *)&CGameObjectGetHP56_next,
                (LPVOID)cast_pointer_function(CGameObjectGetHP56_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetHP)
            },
            _hook_record {
                (LPVOID)0x14012e290L,
                (LPVOID *)&CGameObjectGetLevel58_user,
                (LPVOID *)&CGameObjectGetLevel58_next,
                (LPVOID)cast_pointer_function(CGameObjectGetLevel58_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetLevel)
            },
            _hook_record {
                (LPVOID)0x14012e0c0L,
                (LPVOID *)&CGameObjectGetMaxHP60_user,
                (LPVOID *)&CGameObjectGetMaxHP60_next,
                (LPVOID)cast_pointer_function(CGameObjectGetMaxHP60_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x14012e380L,
                (LPVOID *)&CGameObjectGetObjName62_user,
                (LPVOID *)&CGameObjectGetObjName62_next,
                (LPVOID)cast_pointer_function(CGameObjectGetObjName62_wrapper),
                (LPVOID)cast_pointer_function((char*(CGameObject::*)())&CGameObject::GetObjName)
            },
            _hook_record {
                (LPVOID)0x14012e370L,
                (LPVOID *)&CGameObjectGetObjRace64_user,
                (LPVOID *)&CGameObjectGetObjRace64_next,
                (LPVOID)cast_pointer_function(CGameObjectGetObjRace64_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x14012e190L,
                (LPVOID *)&CGameObjectGetSoilTol66_user,
                (LPVOID *)&CGameObjectGetSoilTol66_next,
                (LPVOID)cast_pointer_function(CGameObjectGetSoilTol66_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x14014cb30L,
                (LPVOID *)&CGameObjectGetStun68_user,
                (LPVOID *)&CGameObjectGetStun68_next,
                (LPVOID)cast_pointer_function(CGameObjectGetStun68_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::GetStun)
            },
            _hook_record {
                (LPVOID)0x14007d8c0L,
                (LPVOID *)&CGameObjectGetUseSectorRange70_user,
                (LPVOID *)&CGameObjectGetUseSectorRange70_next,
                (LPVOID)cast_pointer_function(CGameObjectGetUseSectorRange70_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetUseSectorRange)
            },
            _hook_record {
                (LPVOID)0x14012e180L,
                (LPVOID *)&CGameObjectGetWaterTol72_user,
                (LPVOID *)&CGameObjectGetWaterTol72_next,
                (LPVOID)cast_pointer_function(CGameObjectGetWaterTol72_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x14012e250L,
                (LPVOID *)&CGameObjectGetWeaponAdjust74_user,
                (LPVOID *)&CGameObjectGetWeaponAdjust74_next,
                (LPVOID)cast_pointer_function(CGameObjectGetWeaponAdjust74_wrapper),
                (LPVOID)cast_pointer_function((float(CGameObject::*)())&CGameObject::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x14012e350L,
                (LPVOID *)&CGameObjectGetWeaponClass76_user,
                (LPVOID *)&CGameObjectGetWeaponClass76_next,
                (LPVOID)cast_pointer_function(CGameObjectGetWeaponClass76_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetWeaponClass)
            },
            _hook_record {
                (LPVOID)0x14012e2c0L,
                (LPVOID *)&CGameObjectGetWidth78_user,
                (LPVOID *)&CGameObjectGetWidth78_next,
                (LPVOID)cast_pointer_function(CGameObjectGetWidth78_wrapper),
                (LPVOID)cast_pointer_function((float(CGameObject::*)())&CGameObject::GetWidth)
            },
            _hook_record {
                (LPVOID)0x14012e1a0L,
                (LPVOID *)&CGameObjectGetWindTol80_user,
                (LPVOID *)&CGameObjectGetWindTol80_next,
                (LPVOID)cast_pointer_function(CGameObjectGetWindTol80_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)())&CGameObject::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x14017a730L,
                (LPVOID *)&CGameObjectInit82_user,
                (LPVOID *)&CGameObjectInit82_next,
                (LPVOID)cast_pointer_function(CGameObjectInit82_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(struct _object_id*))&CGameObject::Init)
            },
            _hook_record {
                (LPVOID)0x140072b70L,
                (LPVOID *)&CGameObjectIsAttackableInTown84_user,
                (LPVOID *)&CGameObjectIsAttackableInTown84_next,
                (LPVOID)cast_pointer_function(CGameObjectIsAttackableInTown84_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::IsAttackableInTown)
            },
            _hook_record {
                (LPVOID)0x14012e390L,
                (LPVOID *)&CGameObjectIsBeAttackedAble86_user,
                (LPVOID *)&CGameObjectIsBeAttackedAble86_next,
                (LPVOID)cast_pointer_function(CGameObjectIsBeAttackedAble86_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(bool))&CGameObject::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x14017c440L,
                (LPVOID *)&CGameObjectIsBeCirclePlayer88_user,
                (LPVOID *)&CGameObjectIsBeCirclePlayer88_next,
                (LPVOID)cast_pointer_function(CGameObjectIsBeCirclePlayer88_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(int))&CGameObject::IsBeCirclePlayer)
            },
            _hook_record {
                (LPVOID)0x14012c780L,
                (LPVOID *)&CGameObjectIsBeDamagedAble90_user,
                (LPVOID *)&CGameObjectIsBeDamagedAble90_next,
                (LPVOID)cast_pointer_function(CGameObjectIsBeDamagedAble90_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::IsBeDamagedAble)
            },
            _hook_record {
                (LPVOID)0x14017c5a0L,
                (LPVOID *)&CGameObjectIsCircleObject92_user,
                (LPVOID *)&CGameObjectIsCircleObject92_next,
                (LPVOID)cast_pointer_function(CGameObjectIsCircleObject92_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(int, struct CGameObject*))&CGameObject::IsCircleObject)
            },
            _hook_record {
                (LPVOID)0x14012e3b0L,
                (LPVOID *)&CGameObjectIsInTown94_user,
                (LPVOID *)&CGameObjectIsInTown94_next,
                (LPVOID)cast_pointer_function(CGameObjectIsInTown94_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::IsInTown)
            },
            _hook_record {
                (LPVOID)0x14012c770L,
                (LPVOID *)&CGameObjectIsRecvableContEffect96_user,
                (LPVOID *)&CGameObjectIsRecvableContEffect96_next,
                (LPVOID)cast_pointer_function(CGameObjectIsRecvableContEffect96_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::IsRecvableContEffect)
            },
            _hook_record {
                (LPVOID)0x140072b60L,
                (LPVOID *)&CGameObjectIsRewardExp98_user,
                (LPVOID *)&CGameObjectIsRewardExp98_next,
                (LPVOID)cast_pointer_function(CGameObjectIsRewardExp98_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::IsRewardExp)
            },
            _hook_record {
                (LPVOID)0x14012cbc0L,
                (LPVOID *)&CGameObjectIs_Battle_Mode100_user,
                (LPVOID *)&CGameObjectIs_Battle_Mode100_next,
                (LPVOID)cast_pointer_function(CGameObjectIs_Battle_Mode100_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::Is_Battle_Mode)
            },
            _hook_record {
                (LPVOID)0x14012e080L,
                (LPVOID *)&CGameObjectLoop102_user,
                (LPVOID *)&CGameObjectLoop102_next,
                (LPVOID)cast_pointer_function(CGameObjectLoop102_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::Loop)
            },
            _hook_record {
                (LPVOID)0x14017ad00L,
                (LPVOID *)&CGameObjectOnLoop104_user,
                (LPVOID *)&CGameObjectOnLoop104_next,
                (LPVOID)cast_pointer_function(CGameObjectOnLoop104_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::OnLoop)
            },
            _hook_record {
                (LPVOID)0x14012e090L,
                (LPVOID *)&CGameObjectOutOfSec106_user,
                (LPVOID *)&CGameObjectOutOfSec106_next,
                (LPVOID)cast_pointer_function(CGameObjectOutOfSec106_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x14012e0d0L,
                (LPVOID *)&CGameObjectRecvKillMessage108_user,
                (LPVOID *)&CGameObjectRecvKillMessage108_next,
                (LPVOID)cast_pointer_function(CGameObjectRecvKillMessage108_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(struct CCharacter*))&CGameObject::RecvKillMessage)
            },
            _hook_record {
                (LPVOID)0x14017b2c0L,
                (LPVOID *)&CGameObjectRerangeSecIndex110_user,
                (LPVOID *)&CGameObjectRerangeSecIndex110_next,
                (LPVOID)cast_pointer_function(CGameObjectRerangeSecIndex110_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CGameObject::*)(unsigned int, unsigned int))&CGameObject::RerangeSecIndex)
            },
            _hook_record {
                (LPVOID)0x14017b530L,
                (LPVOID *)&CGameObjectResetSector112_user,
                (LPVOID *)&CGameObjectResetSector112_next,
                (LPVOID)cast_pointer_function(CGameObjectResetSector112_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(unsigned int, unsigned int))&CGameObject::ResetSector)
            },
            _hook_record {
                (LPVOID)0x14012e0e0L,
                (LPVOID *)&CGameObjectRobbedHP114_user,
                (LPVOID *)&CGameObjectRobbedHP114_next,
                (LPVOID)cast_pointer_function(CGameObjectRobbedHP114_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, int))&CGameObject::RobbedHP)
            },
            _hook_record {
                (LPVOID)0x14012c6a0L,
                (LPVOID *)&CGameObjectSFContDelMessage116_user,
                (LPVOID *)&CGameObjectSFContDelMessage116_next,
                (LPVOID)cast_pointer_function(CGameObjectSFContDelMessage116_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(char, char, bool, bool))&CGameObject::SFContDelMessage)
            },
            _hook_record {
                (LPVOID)0x14012c680L,
                (LPVOID *)&CGameObjectSFContInsertMessage118_user,
                (LPVOID *)&CGameObjectSFContInsertMessage118_next,
                (LPVOID)cast_pointer_function(CGameObjectSFContInsertMessage118_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(char, char, bool, struct CPlayer*))&CGameObject::SFContInsertMessage)
            },
            _hook_record {
                (LPVOID)0x14012c6c0L,
                (LPVOID *)&CGameObjectSFContUpdateTimeMessage120_user,
                (LPVOID *)&CGameObjectSFContUpdateTimeMessage120_next,
                (LPVOID)cast_pointer_function(CGameObjectSFContUpdateTimeMessage120_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(char, char, int))&CGameObject::SFContUpdateTimeMessage)
            },
            _hook_record {
                (LPVOID)0x14012c920L,
                (LPVOID *)&CGameObjectSF_AllContDamageForceRemove_Once122_user,
                (LPVOID *)&CGameObjectSF_AllContDamageForceRemove_Once122_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_AllContDamageForceRemove_Once122_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_AllContDamageForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012c900L,
                (LPVOID *)&CGameObjectSF_AllContHelpForceRemove_Once124_user,
                (LPVOID *)&CGameObjectSF_AllContHelpForceRemove_Once124_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_AllContHelpForceRemove_Once124_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_AllContHelpForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012c8e0L,
                (LPVOID *)&CGameObjectSF_AllContHelpSkillRemove_Once126_user,
                (LPVOID *)&CGameObjectSF_AllContHelpSkillRemove_Once126_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_AllContHelpSkillRemove_Once126_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_AllContHelpSkillRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012c7a0L,
                (LPVOID *)&CGameObjectSF_AttHPtoDstFP_Once128_user,
                (LPVOID *)&CGameObjectSF_AttHPtoDstFP_Once128_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_AttHPtoDstFP_Once128_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_AttHPtoDstFP_Once)
            },
            _hook_record {
                (LPVOID)0x14012c7c0L,
                (LPVOID *)&CGameObjectSF_ContDamageTimeInc_Once130_user,
                (LPVOID *)&CGameObjectSF_ContDamageTimeInc_Once130_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_ContDamageTimeInc_Once130_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_ContDamageTimeInc_Once)
            },
            _hook_record {
                (LPVOID)0x14012c840L,
                (LPVOID *)&CGameObjectSF_ContHelpTimeInc_Once132_user,
                (LPVOID *)&CGameObjectSF_ContHelpTimeInc_Once132_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_ContHelpTimeInc_Once132_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_ContHelpTimeInc_Once)
            },
            _hook_record {
                (LPVOID)0x14012c980L,
                (LPVOID *)&CGameObjectSF_ConvertMonsterTarget134_user,
                (LPVOID *)&CGameObjectSF_ConvertMonsterTarget134_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_ConvertMonsterTarget134_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_ConvertMonsterTarget)
            },
            _hook_record {
                (LPVOID)0x14012cb20L,
                (LPVOID *)&CGameObjectSF_ConvertTargetDest136_user,
                (LPVOID *)&CGameObjectSF_ConvertTargetDest136_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_ConvertTargetDest136_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_ConvertTargetDest)
            },
            _hook_record {
                (LPVOID)0x14012ca60L,
                (LPVOID *)&CGameObjectSF_DamageAndStun138_user,
                (LPVOID *)&CGameObjectSF_DamageAndStun138_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_DamageAndStun138_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_DamageAndStun)
            },
            _hook_record {
                (LPVOID)0x14012ca40L,
                (LPVOID *)&CGameObjectSF_FPDec140_user,
                (LPVOID *)&CGameObjectSF_FPDec140_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_FPDec140_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_FPDec)
            },
            _hook_record {
                (LPVOID)0x14012c800L,
                (LPVOID *)&CGameObjectSF_HPInc_Once142_user,
                (LPVOID *)&CGameObjectSF_HPInc_Once142_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_HPInc_Once142_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_HPInc_Once)
            },
            _hook_record {
                (LPVOID)0x14012c9e0L,
                (LPVOID *)&CGameObjectSF_IncHPCircleParty144_user,
                (LPVOID *)&CGameObjectSF_IncHPCircleParty144_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_IncHPCircleParty144_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_IncHPCircleParty)
            },
            _hook_record {
                (LPVOID)0x14012cb00L,
                (LPVOID *)&CGameObjectSF_IncreaseDP146_user,
                (LPVOID *)&CGameObjectSF_IncreaseDP146_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_IncreaseDP146_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_IncreaseDP)
            },
            _hook_record {
                (LPVOID)0x14012c8c0L,
                (LPVOID *)&CGameObjectSF_LateContDamageRemove_Once148_user,
                (LPVOID *)&CGameObjectSF_LateContDamageRemove_Once148_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_LateContDamageRemove_Once148_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_LateContDamageRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012c8a0L,
                (LPVOID *)&CGameObjectSF_LateContHelpForceRemove_Once150_user,
                (LPVOID *)&CGameObjectSF_LateContHelpForceRemove_Once150_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_LateContHelpForceRemove_Once150_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_LateContHelpForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012c880L,
                (LPVOID *)&CGameObjectSF_LateContHelpSkillRemove_Once152_user,
                (LPVOID *)&CGameObjectSF_LateContHelpSkillRemove_Once152_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_LateContHelpSkillRemove_Once152_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_LateContHelpSkillRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012cac0L,
                (LPVOID *)&CGameObjectSF_MakePortalReturnBindPositionPartyMember154_user,
                (LPVOID *)&CGameObjectSF_MakePortalReturnBindPositionPartyMember154_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_MakePortalReturnBindPositionPartyMember154_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float, char*))&CGameObject::SF_MakePortalReturnBindPositionPartyMember)
            },
            _hook_record {
                (LPVOID)0x14012cb60L,
                (LPVOID *)&CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_user,
                (LPVOID *)&CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_MakeZeroAnimusRecallTimeOnce156_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_MakeZeroAnimusRecallTimeOnce)
            },
            _hook_record {
                (LPVOID)0x14012c940L,
                (LPVOID *)&CGameObjectSF_OthersContHelpSFRemove_Once158_user,
                (LPVOID *)&CGameObjectSF_OthersContHelpSFRemove_Once158_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_OthersContHelpSFRemove_Once158_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(float))&CGameObject::SF_OthersContHelpSFRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14012c860L,
                (LPVOID *)&CGameObjectSF_OverHealing_Once160_user,
                (LPVOID *)&CGameObjectSF_OverHealing_Once160_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_OverHealing_Once160_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_OverHealing_Once)
            },
            _hook_record {
                (LPVOID)0x14012cb40L,
                (LPVOID *)&CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_user,
                (LPVOID *)&CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_RecoverAllReturnStateAnimusHPFull162_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_RecoverAllReturnStateAnimusHPFull)
            },
            _hook_record {
                (LPVOID)0x14012c9c0L,
                (LPVOID *)&CGameObjectSF_ReleaseMonsterTarget164_user,
                (LPVOID *)&CGameObjectSF_ReleaseMonsterTarget164_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_ReleaseMonsterTarget164_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_ReleaseMonsterTarget)
            },
            _hook_record {
                (LPVOID)0x14012caa0L,
                (LPVOID *)&CGameObjectSF_RemoveAllContHelp_Once166_user,
                (LPVOID *)&CGameObjectSF_RemoveAllContHelp_Once166_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_RemoveAllContHelp_Once166_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_RemoveAllContHelp_Once)
            },
            _hook_record {
                (LPVOID)0x14012c7e0L,
                (LPVOID *)&CGameObjectSF_Resurrect_Once168_user,
                (LPVOID *)&CGameObjectSF_Resurrect_Once168_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_Resurrect_Once168_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*))&CGameObject::SF_Resurrect_Once)
            },
            _hook_record {
                (LPVOID)0x14012cae0L,
                (LPVOID *)&CGameObjectSF_ReturnBindPosition170_user,
                (LPVOID *)&CGameObjectSF_ReturnBindPosition170_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_ReturnBindPosition170_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_ReturnBindPosition)
            },
            _hook_record {
                (LPVOID)0x14012ca20L,
                (LPVOID *)&CGameObjectSF_SPDec172_user,
                (LPVOID *)&CGameObjectSF_SPDec172_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_SPDec172_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_SPDec)
            },
            _hook_record {
                (LPVOID)0x14012c820L,
                (LPVOID *)&CGameObjectSF_STInc_Once174_user,
                (LPVOID *)&CGameObjectSF_STInc_Once174_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_STInc_Once174_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_STInc_Once)
            },
            _hook_record {
                (LPVOID)0x14012cb80L,
                (LPVOID *)&CGameObjectSF_SelfDestruction176_user,
                (LPVOID *)&CGameObjectSF_SelfDestruction176_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_SelfDestruction176_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_SelfDestruction)
            },
            _hook_record {
                (LPVOID)0x14012c960L,
                (LPVOID *)&CGameObjectSF_SkillContHelpTimeInc_Once178_user,
                (LPVOID *)&CGameObjectSF_SkillContHelpTimeInc_Once178_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_SkillContHelpTimeInc_Once178_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_SkillContHelpTimeInc_Once)
            },
            _hook_record {
                (LPVOID)0x14012ca00L,
                (LPVOID *)&CGameObjectSF_Stun180_user,
                (LPVOID *)&CGameObjectSF_Stun180_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_Stun180_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_Stun)
            },
            _hook_record {
                (LPVOID)0x14012cba0L,
                (LPVOID *)&CGameObjectSF_TeleportToDestination182_user,
                (LPVOID *)&CGameObjectSF_TeleportToDestination182_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_TeleportToDestination182_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, bool))&CGameObject::SF_TeleportToDestination)
            },
            _hook_record {
                (LPVOID)0x14012ca80L,
                (LPVOID *)&CGameObjectSF_TransDestHP184_user,
                (LPVOID *)&CGameObjectSF_TransDestHP184_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_TransDestHP184_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float, char*))&CGameObject::SF_TransDestHP)
            },
            _hook_record {
                (LPVOID)0x14012c9a0L,
                (LPVOID *)&CGameObjectSF_TransMonsterHP186_user,
                (LPVOID *)&CGameObjectSF_TransMonsterHP186_next,
                (LPVOID)cast_pointer_function(CGameObjectSF_TransMonsterHP186_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CCharacter*, float))&CGameObject::SF_TransMonsterHP)
            },
            _hook_record {
                (LPVOID)0x14017b140L,
                (LPVOID *)&CGameObjectSendMsg_BreakStop188_user,
                (LPVOID *)&CGameObjectSendMsg_BreakStop188_next,
                (LPVOID)cast_pointer_function(CGameObjectSendMsg_BreakStop188_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::SendMsg_BreakStop)
            },
            _hook_record {
                (LPVOID)0x14013e3f0L,
                (LPVOID *)&CGameObjectSendMsg_FixPosition190_user,
                (LPVOID *)&CGameObjectSendMsg_FixPosition190_next,
                (LPVOID)cast_pointer_function(CGameObjectSendMsg_FixPosition190_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(int))&CGameObject::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x14017b050L,
                (LPVOID *)&CGameObjectSendMsg_RealFixPosition192_user,
                (LPVOID *)&CGameObjectSendMsg_RealFixPosition192_next,
                (LPVOID)cast_pointer_function(CGameObjectSendMsg_RealFixPosition192_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(bool))&CGameObject::SendMsg_RealFixPosition)
            },
            _hook_record {
                (LPVOID)0x14012e0a0L,
                (LPVOID *)&CGameObjectSendMsg_RealMovePoint194_user,
                (LPVOID *)&CGameObjectSendMsg_RealMovePoint194_next,
                (LPVOID)cast_pointer_function(CGameObjectSendMsg_RealMovePoint194_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(int))&CGameObject::SendMsg_RealMovePoint)
            },
            _hook_record {
                (LPVOID)0x14012c650L,
                (LPVOID *)&CGameObjectSendMsg_SetHPInform196_user,
                (LPVOID *)&CGameObjectSendMsg_SetHPInform196_next,
                (LPVOID)cast_pointer_function(CGameObjectSendMsg_SetHPInform196_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::SendMsg_SetHPInform)
            },
            _hook_record {
                (LPVOID)0x140164850L,
                (LPVOID *)&CGameObjectSendMsg_StunInform198_user,
                (LPVOID *)&CGameObjectSendMsg_StunInform198_next,
                (LPVOID)cast_pointer_function(CGameObjectSendMsg_StunInform198_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::SendMsg_StunInform)
            },
            _hook_record {
                (LPVOID)0x14012c700L,
                (LPVOID *)&CGameObjectSetAttackPart200_user,
                (LPVOID *)&CGameObjectSetAttackPart200_next,
                (LPVOID)cast_pointer_function(CGameObjectSetAttackPart200_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(int))&CGameObject::SetAttackPart)
            },
            _hook_record {
                (LPVOID)0x14017afe0L,
                (LPVOID *)&CGameObjectSetBreakTranspar202_user,
                (LPVOID *)&CGameObjectSetBreakTranspar202_next,
                (LPVOID)cast_pointer_function(CGameObjectSetBreakTranspar202_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(bool))&CGameObject::SetBreakTranspar)
            },
            _hook_record {
                (LPVOID)0x14017af30L,
                (LPVOID *)&CGameObjectSetCurBspMap204_user,
                (LPVOID *)&CGameObjectSetCurBspMap204_next,
                (LPVOID)cast_pointer_function(CGameObjectSetCurBspMap204_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(struct CMapData*))&CGameObject::SetCurBspMap)
            },
            _hook_record {
                (LPVOID)0x14017aec0L,
                (LPVOID *)&CGameObjectSetCurPos206_user,
                (LPVOID *)&CGameObjectSetCurPos206_next,
                (LPVOID)cast_pointer_function(CGameObjectSetCurPos206_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(float*))&CGameObject::SetCurPos)
            },
            _hook_record {
                (LPVOID)0x14017ba70L,
                (LPVOID *)&CGameObjectSetCurSecNum208_user,
                (LPVOID *)&CGameObjectSetCurSecNum208_next,
                (LPVOID)cast_pointer_function(CGameObjectSetCurSecNum208_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(unsigned int))&CGameObject::SetCurSecNum)
            },
            _hook_record {
                (LPVOID)0x14012e120L,
                (LPVOID *)&CGameObjectSetDamage210_user,
                (LPVOID *)&CGameObjectSetDamage210_next,
                (LPVOID)cast_pointer_function(CGameObjectSetDamage210_wrapper),
                (LPVOID)cast_pointer_function((int(CGameObject::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CGameObject::SetDamage)
            },
            _hook_record {
                (LPVOID)0x14012c660L,
                (LPVOID *)&CGameObjectSetHP212_user,
                (LPVOID *)&CGameObjectSetHP212_next,
                (LPVOID)cast_pointer_function(CGameObjectSetHP212_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)(int, bool))&CGameObject::SetHP)
            },
            _hook_record {
                (LPVOID)0x14017ac80L,
                (LPVOID *)&CGameObjectSetMaxVersion214_user,
                (LPVOID *)&CGameObjectSetMaxVersion214_next,
                (LPVOID)cast_pointer_function(CGameObjectSetMaxVersion214_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::SetMaxVersion)
            },
            _hook_record {
                (LPVOID)0x14017af70L,
                (LPVOID *)&CGameObjectSetStun216_user,
                (LPVOID *)&CGameObjectSetStun216_next,
                (LPVOID)cast_pointer_function(CGameObjectSetStun216_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)(bool))&CGameObject::SetStun)
            },
            _hook_record {
                (LPVOID)0x14017b430L,
                (LPVOID *)&CGameObjectUpdateSecList218_user,
                (LPVOID *)&CGameObjectUpdateSecList218_next,
                (LPVOID)cast_pointer_function(CGameObjectUpdateSecList218_wrapper),
                (LPVOID)cast_pointer_function((bool(CGameObject::*)())&CGameObject::UpdateSecList)
            },
            _hook_record {
                (LPVOID)0x14017c8e0L,
                (LPVOID *)&CGameObject_ResetCirclePlayer220_user,
                (LPVOID *)&CGameObject_ResetCirclePlayer220_next,
                (LPVOID)cast_pointer_function(CGameObject_ResetCirclePlayer220_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::_ResetCirclePlayer)
            },
            _hook_record {
                (LPVOID)0x14017a6b0L,
                (LPVOID *)&CGameObjectdtor_CGameObject225_user,
                (LPVOID *)&CGameObjectdtor_CGameObject225_next,
                (LPVOID)cast_pointer_function(CGameObjectdtor_CGameObject225_wrapper),
                (LPVOID)cast_pointer_function((void(CGameObject::*)())&CGameObject::dtor_CGameObject)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
