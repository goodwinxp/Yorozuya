#include <CMonsterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMonsterAddEventItem2_ptr CMonsterAddEventItem2_next(nullptr);
        Info::CMonsterAddEventItem2_clbk CMonsterAddEventItem2_user(nullptr);
        
        Info::CMonsterAssistSF4_ptr CMonsterAssistSF4_next(nullptr);
        Info::CMonsterAssistSF4_clbk CMonsterAssistSF4_user(nullptr);
        
        Info::CMonsterAttack6_ptr CMonsterAttack6_next(nullptr);
        Info::CMonsterAttack6_clbk CMonsterAttack6_user(nullptr);
        
        Info::CMonsterAttackObject8_ptr CMonsterAttackObject8_next(nullptr);
        Info::CMonsterAttackObject8_clbk CMonsterAttackObject8_user(nullptr);
        
        Info::CMonsterAttackableHeight10_ptr CMonsterAttackableHeight10_next(nullptr);
        Info::CMonsterAttackableHeight10_clbk CMonsterAttackableHeight10_user(nullptr);
        
        Info::CMonsterAutoRecover12_ptr CMonsterAutoRecover12_next(nullptr);
        Info::CMonsterAutoRecover12_clbk CMonsterAutoRecover12_user(nullptr);
        
        Info::CMonsterBeTargeted14_ptr CMonsterBeTargeted14_next(nullptr);
        Info::CMonsterBeTargeted14_clbk CMonsterBeTargeted14_user(nullptr);
        
        
        Info::CMonsterctor_CMonster16_ptr CMonsterctor_CMonster16_next(nullptr);
        Info::CMonsterctor_CMonster16_clbk CMonsterctor_CMonster16_user(nullptr);
        
        Info::CMonsterChangeApparition18_ptr CMonsterChangeApparition18_next(nullptr);
        Info::CMonsterChangeApparition18_clbk CMonsterChangeApparition18_user(nullptr);
        
        Info::CMonsterCheckAutoRecoverHP20_ptr CMonsterCheckAutoRecoverHP20_next(nullptr);
        Info::CMonsterCheckAutoRecoverHP20_clbk CMonsterCheckAutoRecoverHP20_user(nullptr);
        
        Info::CMonsterCheckDelayDestroy22_ptr CMonsterCheckDelayDestroy22_next(nullptr);
        Info::CMonsterCheckDelayDestroy22_clbk CMonsterCheckDelayDestroy22_user(nullptr);
        
        Info::CMonsterCheckEmotionPresentation24_ptr CMonsterCheckEmotionPresentation24_next(nullptr);
        Info::CMonsterCheckEmotionPresentation24_clbk CMonsterCheckEmotionPresentation24_user(nullptr);
        
        Info::CMonsterCheckEventEmotionPresentation26_ptr CMonsterCheckEventEmotionPresentation26_next(nullptr);
        Info::CMonsterCheckEventEmotionPresentation26_clbk CMonsterCheckEventEmotionPresentation26_user(nullptr);
        
        Info::CMonsterCheckLootItem28_ptr CMonsterCheckLootItem28_next(nullptr);
        Info::CMonsterCheckLootItem28_clbk CMonsterCheckLootItem28_user(nullptr);
        
        Info::CMonsterCheckMonsterRotate30_ptr CMonsterCheckMonsterRotate30_next(nullptr);
        Info::CMonsterCheckMonsterRotate30_clbk CMonsterCheckMonsterRotate30_user(nullptr);
        
        Info::CMonsterCheckMonsterStateData32_ptr CMonsterCheckMonsterStateData32_next(nullptr);
        Info::CMonsterCheckMonsterStateData32_clbk CMonsterCheckMonsterStateData32_user(nullptr);
        
        Info::CMonsterCheckRespawnProcess34_ptr CMonsterCheckRespawnProcess34_next(nullptr);
        Info::CMonsterCheckRespawnProcess34_clbk CMonsterCheckRespawnProcess34_user(nullptr);
        
        Info::CMonsterClearEmotionPresentation36_ptr CMonsterClearEmotionPresentation36_next(nullptr);
        Info::CMonsterClearEmotionPresentation36_clbk CMonsterClearEmotionPresentation36_user(nullptr);
        
        Info::CMonsterCommand_ChildMonDestroy38_ptr CMonsterCommand_ChildMonDestroy38_next(nullptr);
        Info::CMonsterCommand_ChildMonDestroy38_clbk CMonsterCommand_ChildMonDestroy38_user(nullptr);
        
        Info::CMonsterConvertTargetPlayer40_ptr CMonsterConvertTargetPlayer40_next(nullptr);
        Info::CMonsterConvertTargetPlayer40_clbk CMonsterConvertTargetPlayer40_user(nullptr);
        
        Info::CMonsterCreate42_ptr CMonsterCreate42_next(nullptr);
        Info::CMonsterCreate42_clbk CMonsterCreate42_user(nullptr);
        
        Info::CMonsterCreateAI44_ptr CMonsterCreateAI44_next(nullptr);
        Info::CMonsterCreateAI44_clbk CMonsterCreateAI44_user(nullptr);
        
        Info::CMonsterDestroy46_ptr CMonsterDestroy46_next(nullptr);
        Info::CMonsterDestroy46_clbk CMonsterDestroy46_user(nullptr);
        
        Info::CMonsterDisableStdItemLoot48_ptr CMonsterDisableStdItemLoot48_next(nullptr);
        Info::CMonsterDisableStdItemLoot48_clbk CMonsterDisableStdItemLoot48_user(nullptr);
        
        Info::CMonsterFixTargetWhile50_ptr CMonsterFixTargetWhile50_next(nullptr);
        Info::CMonsterFixTargetWhile50_clbk CMonsterFixTargetWhile50_user(nullptr);
        
        Info::CMonsterGeEmotionImpStdTime52_ptr CMonsterGeEmotionImpStdTime52_next(nullptr);
        Info::CMonsterGeEmotionImpStdTime52_clbk CMonsterGeEmotionImpStdTime52_user(nullptr);
        
        Info::CMonsterGetAggroResetTime54_ptr CMonsterGetAggroResetTime54_next(nullptr);
        Info::CMonsterGetAggroResetTime54_clbk CMonsterGetAggroResetTime54_user(nullptr);
        
        Info::CMonsterGetAggroShortTime56_ptr CMonsterGetAggroShortTime56_next(nullptr);
        Info::CMonsterGetAggroShortTime56_clbk CMonsterGetAggroShortTime56_user(nullptr);
        
        Info::CMonsterGetAttackDP58_ptr CMonsterGetAttackDP58_next(nullptr);
        Info::CMonsterGetAttackDP58_clbk CMonsterGetAttackDP58_user(nullptr);
        
        Info::CMonsterGetAttackPart60_ptr CMonsterGetAttackPart60_next(nullptr);
        Info::CMonsterGetAttackPart60_clbk CMonsterGetAttackPart60_user(nullptr);
        
        Info::CMonsterGetAttackRange62_ptr CMonsterGetAttackRange62_next(nullptr);
        Info::CMonsterGetAttackRange62_clbk CMonsterGetAttackRange62_user(nullptr);
        
        Info::CMonsterGetAttackTarget64_ptr CMonsterGetAttackTarget64_next(nullptr);
        Info::CMonsterGetAttackTarget64_clbk CMonsterGetAttackTarget64_user(nullptr);
        
        Info::CMonsterGetBonusInAreaAggro66_ptr CMonsterGetBonusInAreaAggro66_next(nullptr);
        Info::CMonsterGetBonusInAreaAggro66_clbk CMonsterGetBonusInAreaAggro66_user(nullptr);
        
        Info::CMonsterGetCombatState68_ptr CMonsterGetCombatState68_next(nullptr);
        Info::CMonsterGetCombatState68_clbk CMonsterGetCombatState68_user(nullptr);
        
        Info::CMonsterGetCritical_Exception_Rate70_ptr CMonsterGetCritical_Exception_Rate70_next(nullptr);
        Info::CMonsterGetCritical_Exception_Rate70_clbk CMonsterGetCritical_Exception_Rate70_user(nullptr);
        
        Info::CMonsterGetDefFC72_ptr CMonsterGetDefFC72_next(nullptr);
        Info::CMonsterGetDefFC72_clbk CMonsterGetDefFC72_user(nullptr);
        
        Info::CMonsterGetDefFacing74_ptr CMonsterGetDefFacing74_next(nullptr);
        Info::CMonsterGetDefFacing74_clbk CMonsterGetDefFacing74_user(nullptr);
        
        Info::CMonsterGetDefGap76_ptr CMonsterGetDefGap76_next(nullptr);
        Info::CMonsterGetDefGap76_clbk CMonsterGetDefGap76_user(nullptr);
        
        Info::CMonsterGetDefSkill78_ptr CMonsterGetDefSkill78_next(nullptr);
        Info::CMonsterGetDefSkill78_clbk CMonsterGetDefSkill78_user(nullptr);
        
        Info::CMonsterGetEmotionState80_ptr CMonsterGetEmotionState80_next(nullptr);
        Info::CMonsterGetEmotionState80_clbk CMonsterGetEmotionState80_user(nullptr);
        
        Info::CMonsterGetFireTol82_ptr CMonsterGetFireTol82_next(nullptr);
        Info::CMonsterGetFireTol82_clbk CMonsterGetFireTol82_user(nullptr);
        
        Info::CMonsterGetGenAttackProb84_ptr CMonsterGetGenAttackProb84_next(nullptr);
        Info::CMonsterGetGenAttackProb84_clbk CMonsterGetGenAttackProb84_user(nullptr);
        
        Info::CMonsterGetHP86_ptr CMonsterGetHP86_next(nullptr);
        Info::CMonsterGetHP86_clbk CMonsterGetHP86_user(nullptr);
        
        Info::CMonsterGetHelpMeCase88_ptr CMonsterGetHelpMeCase88_next(nullptr);
        Info::CMonsterGetHelpMeCase88_clbk CMonsterGetHelpMeCase88_user(nullptr);
        
        Info::CMonsterGetLevel90_ptr CMonsterGetLevel90_next(nullptr);
        Info::CMonsterGetLevel90_clbk CMonsterGetLevel90_user(nullptr);
        
        Info::CMonsterGetMaxDMGSFContCount92_ptr CMonsterGetMaxDMGSFContCount92_next(nullptr);
        Info::CMonsterGetMaxDMGSFContCount92_clbk CMonsterGetMaxDMGSFContCount92_user(nullptr);
        
        Info::CMonsterGetMaxHP94_ptr CMonsterGetMaxHP94_next(nullptr);
        Info::CMonsterGetMaxHP94_clbk CMonsterGetMaxHP94_user(nullptr);
        
        Info::CMonsterGetMob_AsistType96_ptr CMonsterGetMob_AsistType96_next(nullptr);
        Info::CMonsterGetMob_AsistType96_clbk CMonsterGetMob_AsistType96_user(nullptr);
        
        Info::CMonsterGetMob_SubRace98_ptr CMonsterGetMob_SubRace98_next(nullptr);
        Info::CMonsterGetMob_SubRace98_clbk CMonsterGetMob_SubRace98_user(nullptr);
        
        Info::CMonsterGetMonStateInfo100_ptr CMonsterGetMonStateInfo100_next(nullptr);
        Info::CMonsterGetMonStateInfo100_clbk CMonsterGetMonStateInfo100_user(nullptr);
        
        Info::CMonsterGetMonsterGrade102_ptr CMonsterGetMonsterGrade102_next(nullptr);
        Info::CMonsterGetMonsterGrade102_clbk CMonsterGetMonsterGrade102_user(nullptr);
        
        Info::CMonsterGetMoveSpeed104_ptr CMonsterGetMoveSpeed104_next(nullptr);
        Info::CMonsterGetMoveSpeed104_clbk CMonsterGetMoveSpeed104_user(nullptr);
        
        Info::CMonsterGetMoveType106_ptr CMonsterGetMoveType106_next(nullptr);
        Info::CMonsterGetMoveType106_clbk CMonsterGetMoveType106_user(nullptr);
        
        Info::CMonsterGetMyDMGSFContCount108_ptr CMonsterGetMyDMGSFContCount108_next(nullptr);
        Info::CMonsterGetMyDMGSFContCount108_clbk CMonsterGetMyDMGSFContCount108_user(nullptr);
        
        Info::CMonsterGetNewMonSerial110_ptr CMonsterGetNewMonSerial110_next(nullptr);
        Info::CMonsterGetNewMonSerial110_clbk CMonsterGetNewMonSerial110_user(nullptr);
        
        Info::CMonsterGetObjName112_ptr CMonsterGetObjName112_next(nullptr);
        Info::CMonsterGetObjName112_clbk CMonsterGetObjName112_user(nullptr);
        
        Info::CMonsterGetObjRace114_ptr CMonsterGetObjRace114_next(nullptr);
        Info::CMonsterGetObjRace114_clbk CMonsterGetObjRace114_user(nullptr);
        
        Info::CMonsterGetOffensiveType116_ptr CMonsterGetOffensiveType116_next(nullptr);
        Info::CMonsterGetOffensiveType116_clbk CMonsterGetOffensiveType116_user(nullptr);
        
        Info::CMonsterGetSignalReActor118_ptr CMonsterGetSignalReActor118_next(nullptr);
        Info::CMonsterGetSignalReActor118_clbk CMonsterGetSignalReActor118_user(nullptr);
        
        Info::CMonsterGetSkillDelayTime120_ptr CMonsterGetSkillDelayTime120_next(nullptr);
        Info::CMonsterGetSkillDelayTime120_clbk CMonsterGetSkillDelayTime120_user(nullptr);
        
        Info::CMonsterGetSoilTol122_ptr CMonsterGetSoilTol122_next(nullptr);
        Info::CMonsterGetSoilTol122_clbk CMonsterGetSoilTol122_user(nullptr);
        
        Info::CMonsterGetViewAngleCap124_ptr CMonsterGetViewAngleCap124_next(nullptr);
        Info::CMonsterGetViewAngleCap124_clbk CMonsterGetViewAngleCap124_user(nullptr);
        
        Info::CMonsterGetVisualAngle126_ptr CMonsterGetVisualAngle126_next(nullptr);
        Info::CMonsterGetVisualAngle126_clbk CMonsterGetVisualAngle126_user(nullptr);
        
        Info::CMonsterGetVisualField128_ptr CMonsterGetVisualField128_next(nullptr);
        Info::CMonsterGetVisualField128_clbk CMonsterGetVisualField128_user(nullptr);
        
        Info::CMonsterGetWaterTol130_ptr CMonsterGetWaterTol130_next(nullptr);
        Info::CMonsterGetWaterTol130_clbk CMonsterGetWaterTol130_user(nullptr);
        
        Info::CMonsterGetWeaponAdjust132_ptr CMonsterGetWeaponAdjust132_next(nullptr);
        Info::CMonsterGetWeaponAdjust132_clbk CMonsterGetWeaponAdjust132_user(nullptr);
        
        Info::CMonsterGetWeaponClass134_ptr CMonsterGetWeaponClass134_next(nullptr);
        Info::CMonsterGetWeaponClass134_clbk CMonsterGetWeaponClass134_user(nullptr);
        
        Info::CMonsterGetWidth136_ptr CMonsterGetWidth136_next(nullptr);
        Info::CMonsterGetWidth136_clbk CMonsterGetWidth136_user(nullptr);
        
        Info::CMonsterGetWindTol138_ptr CMonsterGetWindTol138_next(nullptr);
        Info::CMonsterGetWindTol138_clbk CMonsterGetWindTol138_user(nullptr);
        
        Info::CMonsterGetYAngle140_ptr CMonsterGetYAngle140_next(nullptr);
        Info::CMonsterGetYAngle140_clbk CMonsterGetYAngle140_user(nullptr);
        
        Info::CMonsterGetYAngleByte142_ptr CMonsterGetYAngleByte142_next(nullptr);
        Info::CMonsterGetYAngleByte142_clbk CMonsterGetYAngleByte142_user(nullptr);
        
        Info::CMonsterInit144_ptr CMonsterInit144_next(nullptr);
        Info::CMonsterInit144_clbk CMonsterInit144_user(nullptr);
        
        Info::CMonsterInsertSFContEffect146_ptr CMonsterInsertSFContEffect146_next(nullptr);
        Info::CMonsterInsertSFContEffect146_clbk CMonsterInsertSFContEffect146_user(nullptr);
        
        Info::CMonsterIsAttackableInTown148_ptr CMonsterIsAttackableInTown148_next(nullptr);
        Info::CMonsterIsAttackableInTown148_clbk CMonsterIsAttackableInTown148_user(nullptr);
        
        Info::CMonsterIsBeAttackedAble150_ptr CMonsterIsBeAttackedAble150_next(nullptr);
        Info::CMonsterIsBeAttackedAble150_clbk CMonsterIsBeAttackedAble150_user(nullptr);
        
        Info::CMonsterIsBeDamagedAble152_ptr CMonsterIsBeDamagedAble152_next(nullptr);
        Info::CMonsterIsBeDamagedAble152_clbk CMonsterIsBeDamagedAble152_user(nullptr);
        
        Info::CMonsterIsBossMonster154_ptr CMonsterIsBossMonster154_next(nullptr);
        Info::CMonsterIsBossMonster154_clbk CMonsterIsBossMonster154_user(nullptr);
        
        Info::CMonsterIsMovable156_ptr CMonsterIsMovable156_next(nullptr);
        Info::CMonsterIsMovable156_clbk CMonsterIsMovable156_user(nullptr);
        
        Info::CMonsterIsPreAttackAbleMon158_ptr CMonsterIsPreAttackAbleMon158_next(nullptr);
        Info::CMonsterIsPreAttackAbleMon158_clbk CMonsterIsPreAttackAbleMon158_user(nullptr);
        
        Info::CMonsterIsRecvableContEffect160_ptr CMonsterIsRecvableContEffect160_next(nullptr);
        Info::CMonsterIsRecvableContEffect160_clbk CMonsterIsRecvableContEffect160_user(nullptr);
        
        Info::CMonsterIsRewardExp162_ptr CMonsterIsRewardExp162_next(nullptr);
        Info::CMonsterIsRewardExp162_clbk CMonsterIsRewardExp162_user(nullptr);
        
        Info::CMonsterIsRoateMonster164_ptr CMonsterIsRoateMonster164_next(nullptr);
        Info::CMonsterIsRoateMonster164_clbk CMonsterIsRoateMonster164_user(nullptr);
        
        Info::CMonsterIsValidPlayer166_ptr CMonsterIsValidPlayer166_next(nullptr);
        Info::CMonsterIsValidPlayer166_clbk CMonsterIsValidPlayer166_user(nullptr);
        
        Info::CMonsterIsViewArea168_ptr CMonsterIsViewArea168_next(nullptr);
        Info::CMonsterIsViewArea168_clbk CMonsterIsViewArea168_user(nullptr);
        
        Info::CMonsterLinkEventRespawn170_ptr CMonsterLinkEventRespawn170_next(nullptr);
        Info::CMonsterLinkEventRespawn170_clbk CMonsterLinkEventRespawn170_user(nullptr);
        
        Info::CMonsterLinkEventSet172_ptr CMonsterLinkEventSet172_next(nullptr);
        Info::CMonsterLinkEventSet172_clbk CMonsterLinkEventSet172_user(nullptr);
        
        Info::CMonsterLoop174_ptr CMonsterLoop174_next(nullptr);
        Info::CMonsterLoop174_clbk CMonsterLoop174_user(nullptr);
        
        Info::CMonsterOutOfSec176_ptr CMonsterOutOfSec176_next(nullptr);
        Info::CMonsterOutOfSec176_clbk CMonsterOutOfSec176_user(nullptr);
        
        Info::CMonsterRobbedHP178_ptr CMonsterRobbedHP178_next(nullptr);
        Info::CMonsterRobbedHP178_clbk CMonsterRobbedHP178_user(nullptr);
        
        Info::CMonsterSF_AllContHelpForceRemove_Once180_ptr CMonsterSF_AllContHelpForceRemove_Once180_next(nullptr);
        Info::CMonsterSF_AllContHelpForceRemove_Once180_clbk CMonsterSF_AllContHelpForceRemove_Once180_user(nullptr);
        
        Info::CMonsterSF_AllContHelpSkillRemove_Once182_ptr CMonsterSF_AllContHelpSkillRemove_Once182_next(nullptr);
        Info::CMonsterSF_AllContHelpSkillRemove_Once182_clbk CMonsterSF_AllContHelpSkillRemove_Once182_user(nullptr);
        
        Info::CMonsterSF_HPInc_Once184_ptr CMonsterSF_HPInc_Once184_next(nullptr);
        Info::CMonsterSF_HPInc_Once184_clbk CMonsterSF_HPInc_Once184_user(nullptr);
        
        Info::CMonsterSF_LateContDamageRemove_Once186_ptr CMonsterSF_LateContDamageRemove_Once186_next(nullptr);
        Info::CMonsterSF_LateContDamageRemove_Once186_clbk CMonsterSF_LateContDamageRemove_Once186_user(nullptr);
        
        Info::CMonsterSF_LateContHelpForceRemove_Once188_ptr CMonsterSF_LateContHelpForceRemove_Once188_next(nullptr);
        Info::CMonsterSF_LateContHelpForceRemove_Once188_clbk CMonsterSF_LateContHelpForceRemove_Once188_user(nullptr);
        
        Info::CMonsterSF_LateContHelpSkillRemove_Once190_ptr CMonsterSF_LateContHelpSkillRemove_Once190_next(nullptr);
        Info::CMonsterSF_LateContHelpSkillRemove_Once190_clbk CMonsterSF_LateContHelpSkillRemove_Once190_user(nullptr);
        
        Info::CMonsterSearchNearPlayer192_ptr CMonsterSearchNearPlayer192_next(nullptr);
        Info::CMonsterSearchNearPlayer192_clbk CMonsterSearchNearPlayer192_user(nullptr);
        
        Info::CMonsterSendMsg_Assist_Force194_ptr CMonsterSendMsg_Assist_Force194_next(nullptr);
        Info::CMonsterSendMsg_Assist_Force194_clbk CMonsterSendMsg_Assist_Force194_user(nullptr);
        
        Info::CMonsterSendMsg_Assist_Skill196_ptr CMonsterSendMsg_Assist_Skill196_next(nullptr);
        Info::CMonsterSendMsg_Assist_Skill196_clbk CMonsterSendMsg_Assist_Skill196_user(nullptr);
        
        Info::CMonsterSendMsg_Attack_Force198_ptr CMonsterSendMsg_Attack_Force198_next(nullptr);
        Info::CMonsterSendMsg_Attack_Force198_clbk CMonsterSendMsg_Attack_Force198_user(nullptr);
        
        Info::CMonsterSendMsg_Attack_Gen200_ptr CMonsterSendMsg_Attack_Gen200_next(nullptr);
        Info::CMonsterSendMsg_Attack_Gen200_clbk CMonsterSendMsg_Attack_Gen200_user(nullptr);
        
        Info::CMonsterSendMsg_Attack_Skill202_ptr CMonsterSendMsg_Attack_Skill202_next(nullptr);
        Info::CMonsterSendMsg_Attack_Skill202_clbk CMonsterSendMsg_Attack_Skill202_user(nullptr);
        
        Info::CMonsterSendMsg_Change_MonsterRotate204_ptr CMonsterSendMsg_Change_MonsterRotate204_next(nullptr);
        Info::CMonsterSendMsg_Change_MonsterRotate204_clbk CMonsterSendMsg_Change_MonsterRotate204_user(nullptr);
        
        Info::CMonsterSendMsg_Change_MonsterState206_ptr CMonsterSendMsg_Change_MonsterState206_next(nullptr);
        Info::CMonsterSendMsg_Change_MonsterState206_clbk CMonsterSendMsg_Change_MonsterState206_user(nullptr);
        
        Info::CMonsterSendMsg_Change_MonsterTarget208_ptr CMonsterSendMsg_Change_MonsterTarget208_next(nullptr);
        Info::CMonsterSendMsg_Change_MonsterTarget208_clbk CMonsterSendMsg_Change_MonsterTarget208_user(nullptr);
        
        Info::CMonsterSendMsg_Create210_ptr CMonsterSendMsg_Create210_next(nullptr);
        Info::CMonsterSendMsg_Create210_clbk CMonsterSendMsg_Create210_user(nullptr);
        
        Info::CMonsterSendMsg_Destroy212_ptr CMonsterSendMsg_Destroy212_next(nullptr);
        Info::CMonsterSendMsg_Destroy212_clbk CMonsterSendMsg_Destroy212_user(nullptr);
        
        Info::CMonsterSendMsg_Emotion_Presentation214_ptr CMonsterSendMsg_Emotion_Presentation214_next(nullptr);
        Info::CMonsterSendMsg_Emotion_Presentation214_clbk CMonsterSendMsg_Emotion_Presentation214_user(nullptr);
        
        Info::CMonsterSendMsg_FixPosition216_ptr CMonsterSendMsg_FixPosition216_next(nullptr);
        Info::CMonsterSendMsg_FixPosition216_clbk CMonsterSendMsg_FixPosition216_user(nullptr);
        
        Info::CMonsterSendMsg_Move218_ptr CMonsterSendMsg_Move218_next(nullptr);
        Info::CMonsterSendMsg_Move218_clbk CMonsterSendMsg_Move218_user(nullptr);
        
        Info::CMonsterSendMsg_RealMovePoint220_ptr CMonsterSendMsg_RealMovePoint220_next(nullptr);
        Info::CMonsterSendMsg_RealMovePoint220_clbk CMonsterSendMsg_RealMovePoint220_user(nullptr);
        
        Info::CMonsterSetAttackTarget222_ptr CMonsterSetAttackTarget222_next(nullptr);
        Info::CMonsterSetAttackTarget222_clbk CMonsterSetAttackTarget222_user(nullptr);
        
        Info::CMonsterSetCombatState224_ptr CMonsterSetCombatState224_next(nullptr);
        Info::CMonsterSetCombatState224_clbk CMonsterSetCombatState224_user(nullptr);
        
        Info::CMonsterSetDamage226_ptr CMonsterSetDamage226_next(nullptr);
        Info::CMonsterSetDamage226_clbk CMonsterSetDamage226_user(nullptr);
        
        Info::CMonsterSetDefPart228_ptr CMonsterSetDefPart228_next(nullptr);
        Info::CMonsterSetDefPart228_clbk CMonsterSetDefPart228_user(nullptr);
        
        Info::CMonsterSetEmotionState230_ptr CMonsterSetEmotionState230_next(nullptr);
        Info::CMonsterSetEmotionState230_clbk CMonsterSetEmotionState230_user(nullptr);
        
        Info::CMonsterSetHP232_ptr CMonsterSetHP232_next(nullptr);
        Info::CMonsterSetHP232_clbk CMonsterSetHP232_user(nullptr);
        
        Info::CMonsterSetMoveType234_ptr CMonsterSetMoveType234_next(nullptr);
        Info::CMonsterSetMoveType234_clbk CMonsterSetMoveType234_user(nullptr);
        
        Info::CMonsterSetStun236_ptr CMonsterSetStun236_next(nullptr);
        Info::CMonsterSetStun236_clbk CMonsterSetStun236_user(nullptr);
        
        Info::CMonsterUpdateLookAtPos238_ptr CMonsterUpdateLookAtPos238_next(nullptr);
        Info::CMonsterUpdateLookAtPos238_clbk CMonsterUpdateLookAtPos238_user(nullptr);
        
        Info::CMonsterUpdateLookAtPos240_ptr CMonsterUpdateLookAtPos240_next(nullptr);
        Info::CMonsterUpdateLookAtPos240_clbk CMonsterUpdateLookAtPos240_user(nullptr);
        
        Info::CMonsterUpdateSFCont242_ptr CMonsterUpdateSFCont242_next(nullptr);
        Info::CMonsterUpdateSFCont242_clbk CMonsterUpdateSFCont242_user(nullptr);
        
        Info::CMonster_AssistSF_Cont_Dmg244_ptr CMonster_AssistSF_Cont_Dmg244_next(nullptr);
        Info::CMonster_AssistSF_Cont_Dmg244_clbk CMonster_AssistSF_Cont_Dmg244_user(nullptr);
        
        Info::CMonster_AssistSF_Cont_Support246_ptr CMonster_AssistSF_Cont_Support246_next(nullptr);
        Info::CMonster_AssistSF_Cont_Support246_clbk CMonster_AssistSF_Cont_Support246_user(nullptr);
        
        Info::CMonster_AssistSF_Cont_Temp248_ptr CMonster_AssistSF_Cont_Temp248_next(nullptr);
        Info::CMonster_AssistSF_Cont_Temp248_clbk CMonster_AssistSF_Cont_Temp248_user(nullptr);
        
        Info::CMonster_BossBirthWriteLog250_ptr CMonster_BossBirthWriteLog250_next(nullptr);
        Info::CMonster_BossBirthWriteLog250_clbk CMonster_BossBirthWriteLog250_user(nullptr);
        
        Info::CMonster_BossDieWriteLog_End252_ptr CMonster_BossDieWriteLog_End252_next(nullptr);
        Info::CMonster_BossDieWriteLog_End252_clbk CMonster_BossDieWriteLog_End252_user(nullptr);
        
        Info::CMonster_BossDieWriteLog_Start254_ptr CMonster_BossDieWriteLog_Start254_next(nullptr);
        Info::CMonster_BossDieWriteLog_Start254_clbk CMonster_BossDieWriteLog_Start254_user(nullptr);
        
        Info::CMonster_DestroySDM256_ptr CMonster_DestroySDM256_next(nullptr);
        Info::CMonster_DestroySDM256_clbk CMonster_DestroySDM256_user(nullptr);
        
        Info::CMonster_InitSDM258_ptr CMonster_InitSDM258_next(nullptr);
        Info::CMonster_InitSDM258_clbk CMonster_InitSDM258_user(nullptr);
        
        Info::CMonster_InitSDM_LootTBL260_ptr CMonster_InitSDM_LootTBL260_next(nullptr);
        Info::CMonster_InitSDM_LootTBL260_clbk CMonster_InitSDM_LootTBL260_user(nullptr);
        
        Info::CMonster_LootItem_EventSet262_ptr CMonster_LootItem_EventSet262_next(nullptr);
        Info::CMonster_LootItem_EventSet262_clbk CMonster_LootItem_EventSet262_user(nullptr);
        
        Info::CMonster_LootItem_Qst264_ptr CMonster_LootItem_Qst264_next(nullptr);
        Info::CMonster_LootItem_Qst264_clbk CMonster_LootItem_Qst264_user(nullptr);
        
        Info::CMonster_LootItem_Rwp266_ptr CMonster_LootItem_Rwp266_next(nullptr);
        Info::CMonster_LootItem_Rwp266_clbk CMonster_LootItem_Rwp266_user(nullptr);
        
        Info::CMonster_LootItem_Std268_ptr CMonster_LootItem_Std268_next(nullptr);
        Info::CMonster_LootItem_Std268_clbk CMonster_LootItem_Std268_user(nullptr);
        
        Info::CMonstermake_force_attack_param274_ptr CMonstermake_force_attack_param274_next(nullptr);
        Info::CMonstermake_force_attack_param274_clbk CMonstermake_force_attack_param274_user(nullptr);
        
        Info::CMonstermake_gen_attack_param276_ptr CMonstermake_gen_attack_param276_next(nullptr);
        Info::CMonstermake_gen_attack_param276_clbk CMonstermake_gen_attack_param276_user(nullptr);
        
        Info::CMonstermake_skill_attack_param278_ptr CMonstermake_skill_attack_param278_next(nullptr);
        Info::CMonstermake_skill_attack_param278_clbk CMonstermake_skill_attack_param278_user(nullptr);
        
        
        Info::CMonsterdtor_CMonster280_ptr CMonsterdtor_CMonster280_next(nullptr);
        Info::CMonsterdtor_CMonster280_clbk CMonsterdtor_CMonster280_user(nullptr);
        
        bool CMonsterAddEventItem2_wrapper(struct CMonster* _this, struct _event_loot_item* pItem)
        {
           return CMonsterAddEventItem2_user(_this, pItem, CMonsterAddEventItem2_next);
        };
        int CMonsterAssistSF4_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
           return CMonsterAssistSF4_user(_this, pDst, pskill, CMonsterAssistSF4_next);
        };
        int CMonsterAttack6_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
           return CMonsterAttack6_user(_this, pDst, pskill, CMonsterAttack6_next);
        };
        int CMonsterAttackObject8_wrapper(struct CMonster* _this, int nDamage, struct CGameObject* pOri)
        {
           return CMonsterAttackObject8_user(_this, nDamage, pOri, CMonsterAttackObject8_next);
        };
        int CMonsterAttackableHeight10_wrapper(struct CMonster* _this)
        {
           return CMonsterAttackableHeight10_user(_this, CMonsterAttackableHeight10_next);
        };
        void CMonsterAutoRecover12_wrapper(struct CMonster* _this)
        {
           CMonsterAutoRecover12_user(_this, CMonsterAutoRecover12_next);
        };
        void CMonsterBeTargeted14_wrapper(struct CMonster* _this, struct CCharacter* pSeacher)
        {
           CMonsterBeTargeted14_user(_this, pSeacher, CMonsterBeTargeted14_next);
        };
        
        void CMonsterctor_CMonster16_wrapper(struct CMonster* _this)
        {
           CMonsterctor_CMonster16_user(_this, CMonsterctor_CMonster16_next);
        };
        void CMonsterChangeApparition18_wrapper(struct CMonster* _this, bool bApparition, unsigned int dwAfterKillTerm)
        {
           CMonsterChangeApparition18_user(_this, bApparition, dwAfterKillTerm, CMonsterChangeApparition18_next);
        };
        void CMonsterCheckAutoRecoverHP20_wrapper(struct CMonster* _this)
        {
           CMonsterCheckAutoRecoverHP20_user(_this, CMonsterCheckAutoRecoverHP20_next);
        };
        bool CMonsterCheckDelayDestroy22_wrapper(struct CMonster* _this)
        {
           return CMonsterCheckDelayDestroy22_user(_this, CMonsterCheckDelayDestroy22_next);
        };
        void CMonsterCheckEmotionPresentation24_wrapper(struct CMonster* _this)
        {
           CMonsterCheckEmotionPresentation24_user(_this, CMonsterCheckEmotionPresentation24_next);
        };
        bool CMonsterCheckEventEmotionPresentation26_wrapper(struct CMonster* _this, char byCheckType, struct CCharacter* pTarget)
        {
           return CMonsterCheckEventEmotionPresentation26_user(_this, byCheckType, pTarget, CMonsterCheckEventEmotionPresentation26_next);
        };
        void CMonsterCheckLootItem28_wrapper(struct CMonster* _this, struct CPlayer* pOwner)
        {
           CMonsterCheckLootItem28_user(_this, pOwner, CMonsterCheckLootItem28_next);
        };
        void CMonsterCheckMonsterRotate30_wrapper(struct CMonster* _this)
        {
           CMonsterCheckMonsterRotate30_user(_this, CMonsterCheckMonsterRotate30_next);
        };
        bool CMonsterCheckMonsterStateData32_wrapper(struct CMonster* _this)
        {
           return CMonsterCheckMonsterStateData32_user(_this, CMonsterCheckMonsterStateData32_next);
        };
        bool CMonsterCheckRespawnProcess34_wrapper(struct CMonster* _this)
        {
           return CMonsterCheckRespawnProcess34_user(_this, CMonsterCheckRespawnProcess34_next);
        };
        void CMonsterClearEmotionPresentation36_wrapper(struct CMonster* _this)
        {
           CMonsterClearEmotionPresentation36_user(_this, CMonsterClearEmotionPresentation36_next);
        };
        void CMonsterCommand_ChildMonDestroy38_wrapper(struct CMonster* _this, unsigned int dwAfterKillTerm)
        {
           CMonsterCommand_ChildMonDestroy38_user(_this, dwAfterKillTerm, CMonsterCommand_ChildMonDestroy38_next);
        };
        bool CMonsterConvertTargetPlayer40_wrapper(struct CMonster* _this, struct CPlayer* pTar)
        {
           return CMonsterConvertTargetPlayer40_user(_this, pTar, CMonsterConvertTargetPlayer40_next);
        };
        bool CMonsterCreate42_wrapper(struct CMonster* _this, struct _monster_create_setdata* pData)
        {
           return CMonsterCreate42_user(_this, pData, CMonsterCreate42_next);
        };
        int CMonsterCreateAI44_wrapper(struct CMonster* _this, int nType)
        {
           return CMonsterCreateAI44_user(_this, nType, CMonsterCreateAI44_next);
        };
        bool CMonsterDestroy46_wrapper(struct CMonster* _this, char byDestroyCode, struct CGameObject* pAttObj)
        {
           return CMonsterDestroy46_user(_this, byDestroyCode, pAttObj, CMonsterDestroy46_next);
        };
        void CMonsterDisableStdItemLoot48_wrapper(struct CMonster* _this)
        {
           CMonsterDisableStdItemLoot48_user(_this, CMonsterDisableStdItemLoot48_next);
        };
        bool CMonsterFixTargetWhile50_wrapper(struct CMonster* _this, struct CCharacter* pkTarget, unsigned int dwMiliSecond)
        {
           return CMonsterFixTargetWhile50_user(_this, pkTarget, dwMiliSecond, CMonsterFixTargetWhile50_next);
        };
        float CMonsterGeEmotionImpStdTime52_wrapper(struct CMonster* _this)
        {
           return CMonsterGeEmotionImpStdTime52_user(_this, CMonsterGeEmotionImpStdTime52_next);
        };
        unsigned int CMonsterGetAggroResetTime54_wrapper(struct CMonster* _this)
        {
           return CMonsterGetAggroResetTime54_user(_this, CMonsterGetAggroResetTime54_next);
        };
        unsigned int CMonsterGetAggroShortTime56_wrapper(struct CMonster* _this)
        {
           return CMonsterGetAggroShortTime56_user(_this, CMonsterGetAggroShortTime56_next);
        };
        int CMonsterGetAttackDP58_wrapper(struct CMonster* _this)
        {
           return CMonsterGetAttackDP58_user(_this, CMonsterGetAttackDP58_next);
        };
        int CMonsterGetAttackPart60_wrapper(struct CMonster* _this)
        {
           return CMonsterGetAttackPart60_user(_this, CMonsterGetAttackPart60_next);
        };
        float CMonsterGetAttackRange62_wrapper(struct CMonster* _this)
        {
           return CMonsterGetAttackRange62_user(_this, CMonsterGetAttackRange62_next);
        };
        struct CCharacter* CMonsterGetAttackTarget64_wrapper(struct CMonster* _this)
        {
           return CMonsterGetAttackTarget64_user(_this, CMonsterGetAttackTarget64_next);
        };
        float CMonsterGetBonusInAreaAggro66_wrapper(struct CMonster* _this)
        {
           return CMonsterGetBonusInAreaAggro66_user(_this, CMonsterGetBonusInAreaAggro66_next);
        };
        char CMonsterGetCombatState68_wrapper(struct CMonster* _this)
        {
           return CMonsterGetCombatState68_user(_this, CMonsterGetCombatState68_next);
        };
        int CMonsterGetCritical_Exception_Rate70_wrapper(struct CMonster* _this)
        {
           return CMonsterGetCritical_Exception_Rate70_user(_this, CMonsterGetCritical_Exception_Rate70_next);
        };
        int CMonsterGetDefFC72_wrapper(struct CMonster* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CMonsterGetDefFC72_user(_this, nAttactPart, pAttChar, pnConvertPart, CMonsterGetDefFC72_next);
        };
        float CMonsterGetDefFacing74_wrapper(struct CMonster* _this, int nPart)
        {
           return CMonsterGetDefFacing74_user(_this, nPart, CMonsterGetDefFacing74_next);
        };
        float CMonsterGetDefGap76_wrapper(struct CMonster* _this, int nPart)
        {
           return CMonsterGetDefGap76_user(_this, nPart, CMonsterGetDefGap76_next);
        };
        int CMonsterGetDefSkill78_wrapper(struct CMonster* _this, bool bBackAttackDamage)
        {
           return CMonsterGetDefSkill78_user(_this, bBackAttackDamage, CMonsterGetDefSkill78_next);
        };
        char CMonsterGetEmotionState80_wrapper(struct CMonster* _this)
        {
           return CMonsterGetEmotionState80_user(_this, CMonsterGetEmotionState80_next);
        };
        int CMonsterGetFireTol82_wrapper(struct CMonster* _this)
        {
           return CMonsterGetFireTol82_user(_this, CMonsterGetFireTol82_next);
        };
        int CMonsterGetGenAttackProb84_wrapper(struct CMonster* _this, struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
           return CMonsterGetGenAttackProb84_user(_this, pDst, nPart, bBackAttack, CMonsterGetGenAttackProb84_next);
        };
        int CMonsterGetHP86_wrapper(struct CMonster* _this)
        {
           return CMonsterGetHP86_user(_this, CMonsterGetHP86_next);
        };
        int CMonsterGetHelpMeCase88_wrapper(struct CMonster* _this)
        {
           return CMonsterGetHelpMeCase88_user(_this, CMonsterGetHelpMeCase88_next);
        };
        int CMonsterGetLevel90_wrapper(struct CMonster* _this)
        {
           return CMonsterGetLevel90_user(_this, CMonsterGetLevel90_next);
        };
        int CMonsterGetMaxDMGSFContCount92_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMaxDMGSFContCount92_user(_this, CMonsterGetMaxDMGSFContCount92_next);
        };
        int CMonsterGetMaxHP94_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMaxHP94_user(_this, CMonsterGetMaxHP94_next);
        };
        int CMonsterGetMob_AsistType96_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMob_AsistType96_user(_this, CMonsterGetMob_AsistType96_next);
        };
        int CMonsterGetMob_SubRace98_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMob_SubRace98_user(_this, CMonsterGetMob_SubRace98_next);
        };
        uint16_t CMonsterGetMonStateInfo100_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMonStateInfo100_user(_this, CMonsterGetMonStateInfo100_next);
        };
        int CMonsterGetMonsterGrade102_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMonsterGrade102_user(_this, CMonsterGetMonsterGrade102_next);
        };
        float CMonsterGetMoveSpeed104_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMoveSpeed104_user(_this, CMonsterGetMoveSpeed104_next);
        };
        char CMonsterGetMoveType106_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMoveType106_user(_this, CMonsterGetMoveType106_next);
        };
        int CMonsterGetMyDMGSFContCount108_wrapper(struct CMonster* _this)
        {
           return CMonsterGetMyDMGSFContCount108_user(_this, CMonsterGetMyDMGSFContCount108_next);
        };
        unsigned int CMonsterGetNewMonSerial110_wrapper()
        {
           return CMonsterGetNewMonSerial110_user(CMonsterGetNewMonSerial110_next);
        };
        char* CMonsterGetObjName112_wrapper(struct CMonster* _this)
        {
           return CMonsterGetObjName112_user(_this, CMonsterGetObjName112_next);
        };
        int CMonsterGetObjRace114_wrapper(struct CMonster* _this)
        {
           return CMonsterGetObjRace114_user(_this, CMonsterGetObjRace114_next);
        };
        int CMonsterGetOffensiveType116_wrapper(struct CMonster* _this)
        {
           return CMonsterGetOffensiveType116_user(_this, CMonsterGetOffensiveType116_next);
        };
        struct CLuaSignalReActor* CMonsterGetSignalReActor118_wrapper(struct CMonster* _this)
        {
           return CMonsterGetSignalReActor118_user(_this, CMonsterGetSignalReActor118_next);
        };
        float CMonsterGetSkillDelayTime120_wrapper(struct CMonster* _this, struct CMonsterSkill* pSkill)
        {
           return CMonsterGetSkillDelayTime120_user(_this, pSkill, CMonsterGetSkillDelayTime120_next);
        };
        int CMonsterGetSoilTol122_wrapper(struct CMonster* _this)
        {
           return CMonsterGetSoilTol122_user(_this, CMonsterGetSoilTol122_next);
        };
        bool CMonsterGetViewAngleCap124_wrapper(struct CMonster* _this, int nCapKind, int* nOutValue)
        {
           return CMonsterGetViewAngleCap124_user(_this, nCapKind, nOutValue, CMonsterGetViewAngleCap124_next);
        };
        float CMonsterGetVisualAngle126_wrapper(struct CMonster* _this)
        {
           return CMonsterGetVisualAngle126_user(_this, CMonsterGetVisualAngle126_next);
        };
        float CMonsterGetVisualField128_wrapper(struct CMonster* _this)
        {
           return CMonsterGetVisualField128_user(_this, CMonsterGetVisualField128_next);
        };
        int CMonsterGetWaterTol130_wrapper(struct CMonster* _this)
        {
           return CMonsterGetWaterTol130_user(_this, CMonsterGetWaterTol130_next);
        };
        float CMonsterGetWeaponAdjust132_wrapper(struct CMonster* _this)
        {
           return CMonsterGetWeaponAdjust132_user(_this, CMonsterGetWeaponAdjust132_next);
        };
        int CMonsterGetWeaponClass134_wrapper(struct CMonster* _this)
        {
           return CMonsterGetWeaponClass134_user(_this, CMonsterGetWeaponClass134_next);
        };
        float CMonsterGetWidth136_wrapper(struct CMonster* _this)
        {
           return CMonsterGetWidth136_user(_this, CMonsterGetWidth136_next);
        };
        int CMonsterGetWindTol138_wrapper(struct CMonster* _this)
        {
           return CMonsterGetWindTol138_user(_this, CMonsterGetWindTol138_next);
        };
        float CMonsterGetYAngle140_wrapper(struct CMonster* _this)
        {
           return CMonsterGetYAngle140_user(_this, CMonsterGetYAngle140_next);
        };
        char CMonsterGetYAngleByte142_wrapper(struct CMonster* _this)
        {
           return CMonsterGetYAngleByte142_user(_this, CMonsterGetYAngleByte142_next);
        };
        bool CMonsterInit144_wrapper(struct CMonster* _this, struct _object_id* pID)
        {
           return CMonsterInit144_user(_this, pID, CMonsterInit144_next);
        };
        char CMonsterInsertSFContEffect146_wrapper(struct CMonster* _this, char byContCode, char byEffectCode, unsigned int dwEffectIndex, uint16_t wDurSec, char byLv, bool* pbUpMty, struct CCharacter* pActChar)
        {
           return CMonsterInsertSFContEffect146_user(_this, byContCode, byEffectCode, dwEffectIndex, wDurSec, byLv, pbUpMty, pActChar, CMonsterInsertSFContEffect146_next);
        };
        bool CMonsterIsAttackableInTown148_wrapper(struct CMonster* _this)
        {
           return CMonsterIsAttackableInTown148_user(_this, CMonsterIsAttackableInTown148_next);
        };
        bool CMonsterIsBeAttackedAble150_wrapper(struct CMonster* _this, bool bFirst)
        {
           return CMonsterIsBeAttackedAble150_user(_this, bFirst, CMonsterIsBeAttackedAble150_next);
        };
        bool CMonsterIsBeDamagedAble152_wrapper(struct CMonster* _this, struct CCharacter* pAtter)
        {
           return CMonsterIsBeDamagedAble152_user(_this, pAtter, CMonsterIsBeDamagedAble152_next);
        };
        bool CMonsterIsBossMonster154_wrapper(struct CMonster* _this)
        {
           return CMonsterIsBossMonster154_user(_this, CMonsterIsBossMonster154_next);
        };
        bool CMonsterIsMovable156_wrapper(struct CMonster* _this)
        {
           return CMonsterIsMovable156_user(_this, CMonsterIsMovable156_next);
        };
        int CMonsterIsPreAttackAbleMon158_wrapper(struct CMonster* _this)
        {
           return CMonsterIsPreAttackAbleMon158_user(_this, CMonsterIsPreAttackAbleMon158_next);
        };
        bool CMonsterIsRecvableContEffect160_wrapper(struct CMonster* _this)
        {
           return CMonsterIsRecvableContEffect160_user(_this, CMonsterIsRecvableContEffect160_next);
        };
        bool CMonsterIsRewardExp162_wrapper(struct CMonster* _this)
        {
           return CMonsterIsRewardExp162_user(_this, CMonsterIsRewardExp162_next);
        };
        bool CMonsterIsRoateMonster164_wrapper(struct CMonster* _this)
        {
           return CMonsterIsRoateMonster164_user(_this, CMonsterIsRoateMonster164_next);
        };
        int CMonsterIsValidPlayer166_wrapper(struct CMonster* _this)
        {
           return CMonsterIsValidPlayer166_user(_this, CMonsterIsValidPlayer166_next);
        };
        bool CMonsterIsViewArea168_wrapper(struct CMonster* _this, struct CCharacter* pTarget)
        {
           return CMonsterIsViewArea168_user(_this, pTarget, CMonsterIsViewArea168_next);
        };
        void CMonsterLinkEventRespawn170_wrapper(struct CMonster* _this, struct _event_respawn* pEventRespawn)
        {
           CMonsterLinkEventRespawn170_user(_this, pEventRespawn, CMonsterLinkEventRespawn170_next);
        };
        void CMonsterLinkEventSet172_wrapper(struct CMonster* _this, struct _event_set* pEventSet)
        {
           CMonsterLinkEventSet172_user(_this, pEventSet, CMonsterLinkEventSet172_next);
        };
        void CMonsterLoop174_wrapper(struct CMonster* _this)
        {
           CMonsterLoop174_user(_this, CMonsterLoop174_next);
        };
        void CMonsterOutOfSec176_wrapper(struct CMonster* _this)
        {
           CMonsterOutOfSec176_user(_this, CMonsterOutOfSec176_next);
        };
        bool CMonsterRobbedHP178_wrapper(struct CMonster* _this, struct CCharacter* pDst, int nDecHP)
        {
           return CMonsterRobbedHP178_user(_this, pDst, nDecHP, CMonsterRobbedHP178_next);
        };
        bool CMonsterSF_AllContHelpForceRemove_Once180_wrapper(struct CMonster* _this, struct CCharacter* pDstObj)
        {
           return CMonsterSF_AllContHelpForceRemove_Once180_user(_this, pDstObj, CMonsterSF_AllContHelpForceRemove_Once180_next);
        };
        bool CMonsterSF_AllContHelpSkillRemove_Once182_wrapper(struct CMonster* _this, struct CCharacter* pDstObj)
        {
           return CMonsterSF_AllContHelpSkillRemove_Once182_user(_this, pDstObj, CMonsterSF_AllContHelpSkillRemove_Once182_next);
        };
        bool CMonsterSF_HPInc_Once184_wrapper(struct CMonster* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CMonsterSF_HPInc_Once184_user(_this, pDstObj, fEffectValue, CMonsterSF_HPInc_Once184_next);
        };
        bool CMonsterSF_LateContDamageRemove_Once186_wrapper(struct CMonster* _this, struct CCharacter* pDstObj)
        {
           return CMonsterSF_LateContDamageRemove_Once186_user(_this, pDstObj, CMonsterSF_LateContDamageRemove_Once186_next);
        };
        bool CMonsterSF_LateContHelpForceRemove_Once188_wrapper(struct CMonster* _this, struct CCharacter* pDstObj)
        {
           return CMonsterSF_LateContHelpForceRemove_Once188_user(_this, pDstObj, CMonsterSF_LateContHelpForceRemove_Once188_next);
        };
        bool CMonsterSF_LateContHelpSkillRemove_Once190_wrapper(struct CMonster* _this, struct CCharacter* pDstObj)
        {
           return CMonsterSF_LateContHelpSkillRemove_Once190_user(_this, pDstObj, CMonsterSF_LateContHelpSkillRemove_Once190_next);
        };
        struct CCharacter* CMonsterSearchNearPlayer192_wrapper(struct CMonster* _this)
        {
           return CMonsterSearchNearPlayer192_user(_this, CMonsterSearchNearPlayer192_next);
        };
        void CMonsterSendMsg_Assist_Force194_wrapper(struct CMonster* _this, char byErrCode, struct CCharacter* pDst, struct _force_fld* pForc_fld, int nSFLv)
        {
           CMonsterSendMsg_Assist_Force194_user(_this, byErrCode, pDst, pForc_fld, nSFLv, CMonsterSendMsg_Assist_Force194_next);
        };
        void CMonsterSendMsg_Assist_Skill196_wrapper(struct CMonster* _this, char byErrCode, int nEffectCode, struct CCharacter* pDst, struct _skill_fld* pSkill_fld, int nSFLv)
        {
           CMonsterSendMsg_Assist_Skill196_user(_this, byErrCode, nEffectCode, pDst, pSkill_fld, nSFLv, CMonsterSendMsg_Assist_Skill196_next);
        };
        void CMonsterSendMsg_Attack_Force198_wrapper(struct CMonster* _this, struct CMonsterAttack* pAt)
        {
           CMonsterSendMsg_Attack_Force198_user(_this, pAt, CMonsterSendMsg_Attack_Force198_next);
        };
        void CMonsterSendMsg_Attack_Gen200_wrapper(struct CMonster* _this, struct CMonsterAttack* pAT)
        {
           CMonsterSendMsg_Attack_Gen200_user(_this, pAT, CMonsterSendMsg_Attack_Gen200_next);
        };
        void CMonsterSendMsg_Attack_Skill202_wrapper(struct CMonster* _this, struct CMonsterAttack* pAt)
        {
           CMonsterSendMsg_Attack_Skill202_user(_this, pAt, CMonsterSendMsg_Attack_Skill202_next);
        };
        void CMonsterSendMsg_Change_MonsterRotate204_wrapper(struct CMonster* _this)
        {
           CMonsterSendMsg_Change_MonsterRotate204_user(_this, CMonsterSendMsg_Change_MonsterRotate204_next);
        };
        void CMonsterSendMsg_Change_MonsterState206_wrapper(struct CMonster* _this)
        {
           CMonsterSendMsg_Change_MonsterState206_user(_this, CMonsterSendMsg_Change_MonsterState206_next);
        };
        void CMonsterSendMsg_Change_MonsterTarget208_wrapper(struct CMonster* _this, struct CCharacter* pChar)
        {
           CMonsterSendMsg_Change_MonsterTarget208_user(_this, pChar, CMonsterSendMsg_Change_MonsterTarget208_next);
        };
        void CMonsterSendMsg_Create210_wrapper(struct CMonster* _this)
        {
           CMonsterSendMsg_Create210_user(_this, CMonsterSendMsg_Create210_next);
        };
        void CMonsterSendMsg_Destroy212_wrapper(struct CMonster* _this, char byDestroyCode)
        {
           CMonsterSendMsg_Destroy212_user(_this, byDestroyCode, CMonsterSendMsg_Destroy212_next);
        };
        void CMonsterSendMsg_Emotion_Presentation214_wrapper(struct CMonster* _this, char bylhw, uint16_t wSubIndex, uint16_t wRandIndex, int nSendTargetIndex)
        {
           CMonsterSendMsg_Emotion_Presentation214_user(_this, bylhw, wSubIndex, wRandIndex, nSendTargetIndex, CMonsterSendMsg_Emotion_Presentation214_next);
        };
        void CMonsterSendMsg_FixPosition216_wrapper(struct CMonster* _this, int n)
        {
           CMonsterSendMsg_FixPosition216_user(_this, n, CMonsterSendMsg_FixPosition216_next);
        };
        void CMonsterSendMsg_Move218_wrapper(struct CMonster* _this)
        {
           CMonsterSendMsg_Move218_user(_this, CMonsterSendMsg_Move218_next);
        };
        void CMonsterSendMsg_RealMovePoint220_wrapper(struct CMonster* _this, int n)
        {
           CMonsterSendMsg_RealMovePoint220_user(_this, n, CMonsterSendMsg_RealMovePoint220_next);
        };
        void CMonsterSetAttackTarget222_wrapper(struct CMonster* _this, struct CCharacter* p)
        {
           CMonsterSetAttackTarget222_user(_this, p, CMonsterSetAttackTarget222_next);
        };
        void CMonsterSetCombatState224_wrapper(struct CMonster* _this, char byCombatState)
        {
           CMonsterSetCombatState224_user(_this, byCombatState, CMonsterSetCombatState224_next);
        };
        int CMonsterSetDamage226_wrapper(struct CMonster* _this, int nDamage, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CMonsterSetDamage226_user(_this, nDamage, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CMonsterSetDamage226_next);
        };
        void CMonsterSetDefPart228_wrapper(struct CMonster* _this, struct _monster_fld* pRecordSet)
        {
           CMonsterSetDefPart228_user(_this, pRecordSet, CMonsterSetDefPart228_next);
        };
        void CMonsterSetEmotionState230_wrapper(struct CMonster* _this, char byEmotionState)
        {
           CMonsterSetEmotionState230_user(_this, byEmotionState, CMonsterSetEmotionState230_next);
        };
        bool CMonsterSetHP232_wrapper(struct CMonster* _this, int nHP, bool bOver)
        {
           return CMonsterSetHP232_user(_this, nHP, bOver, CMonsterSetHP232_next);
        };
        void CMonsterSetMoveType234_wrapper(struct CMonster* _this, char bMoveType)
        {
           CMonsterSetMoveType234_user(_this, bMoveType, CMonsterSetMoveType234_next);
        };
        void CMonsterSetStun236_wrapper(struct CMonster* _this, bool bStun)
        {
           CMonsterSetStun236_user(_this, bStun, CMonsterSetStun236_next);
        };
        void CMonsterUpdateLookAtPos238_wrapper(struct CMonster* _this, float* vLookAt)
        {
           CMonsterUpdateLookAtPos238_user(_this, vLookAt, CMonsterUpdateLookAtPos238_next);
        };
        void CMonsterUpdateLookAtPos240_wrapper(struct CMonster* _this)
        {
           CMonsterUpdateLookAtPos240_user(_this, CMonsterUpdateLookAtPos240_next);
        };
        void CMonsterUpdateSFCont242_wrapper(struct CMonster* _this)
        {
           CMonsterUpdateSFCont242_user(_this, CMonsterUpdateSFCont242_next);
        };
        int CMonster_AssistSF_Cont_Dmg244_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
           return CMonster_AssistSF_Cont_Dmg244_user(_this, pDst, pskill, CMonster_AssistSF_Cont_Dmg244_next);
        };
        int CMonster_AssistSF_Cont_Support246_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
           return CMonster_AssistSF_Cont_Support246_user(_this, pDst, pskill, CMonster_AssistSF_Cont_Support246_next);
        };
        int CMonster_AssistSF_Cont_Temp248_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
           return CMonster_AssistSF_Cont_Temp248_user(_this, pDst, pskill, CMonster_AssistSF_Cont_Temp248_next);
        };
        void CMonster_BossBirthWriteLog250_wrapper(struct CMonster* _this)
        {
           CMonster_BossBirthWriteLog250_user(_this, CMonster_BossBirthWriteLog250_next);
        };
        void CMonster_BossDieWriteLog_End252_wrapper(struct CMonster* _this)
        {
           CMonster_BossDieWriteLog_End252_user(_this, CMonster_BossDieWriteLog_End252_next);
        };
        void CMonster_BossDieWriteLog_Start254_wrapper(struct CMonster* _this, char byDestroyCode, struct CGameObject* pAttObj)
        {
           CMonster_BossDieWriteLog_Start254_user(_this, byDestroyCode, pAttObj, CMonster_BossDieWriteLog_Start254_next);
        };
        void CMonster_DestroySDM256_wrapper()
        {
           CMonster_DestroySDM256_user(CMonster_DestroySDM256_next);
        };
        void CMonster_InitSDM258_wrapper()
        {
           CMonster_InitSDM258_user(CMonster_InitSDM258_next);
        };
        void CMonster_InitSDM_LootTBL260_wrapper()
        {
           CMonster_InitSDM_LootTBL260_user(CMonster_InitSDM_LootTBL260_next);
        };
        bool CMonster_LootItem_EventSet262_wrapper(struct CMonster* _this, struct CPlayer* pOwner)
        {
           return CMonster_LootItem_EventSet262_user(_this, pOwner, CMonster_LootItem_EventSet262_next);
        };
        bool CMonster_LootItem_Qst264_wrapper(struct CMonster* _this, struct CPlayer* pOwner)
        {
           return CMonster_LootItem_Qst264_user(_this, pOwner, CMonster_LootItem_Qst264_next);
        };
        bool CMonster_LootItem_Rwp266_wrapper(struct CMonster* _this, struct CPlayer* pOwner)
        {
           return CMonster_LootItem_Rwp266_user(_this, pOwner, CMonster_LootItem_Rwp266_next);
        };
        bool CMonster_LootItem_Std268_wrapper(struct CMonster* _this, struct CPlayer* pOwner)
        {
           return CMonster_LootItem_Std268_user(_this, pOwner, CMonster_LootItem_Std268_next);
        };
        void CMonstermake_force_attack_param274_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pSkill, struct _attack_param* pAP)
        {
           CMonstermake_force_attack_param274_user(_this, pDst, pSkill, pAP, CMonstermake_force_attack_param274_next);
        };
        void CMonstermake_gen_attack_param276_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct _attack_param* pAP)
        {
           CMonstermake_gen_attack_param276_user(_this, pDst, pAP, CMonstermake_gen_attack_param276_next);
        };
        bool CMonstermake_skill_attack_param278_wrapper(struct CMonster* _this, struct CCharacter* pDst, struct CMonsterSkill* pSkill, int nEffectType, struct _attack_param* pAP)
        {
           return CMonstermake_skill_attack_param278_user(_this, pDst, pSkill, nEffectType, pAP, CMonstermake_skill_attack_param278_next);
        };
        
        void CMonsterdtor_CMonster280_wrapper(struct CMonster* _this)
        {
           CMonsterdtor_CMonster280_user(_this, CMonsterdtor_CMonster280_next);
        };
        
        ::std::array<hook_record, 138> CMonster_functions = 
        {
            _hook_record {
                (LPVOID)0x140142ab0L,
                (LPVOID *)&CMonsterAddEventItem2_user,
                (LPVOID *)&CMonsterAddEventItem2_next,
                (LPVOID)cast_pointer_function(CMonsterAddEventItem2_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct _event_loot_item*))&CMonster::AddEventItem)
            },
            _hook_record {
                (LPVOID)0x14014ce30L,
                (LPVOID *)&CMonsterAssistSF4_user,
                (LPVOID *)&CMonsterAssistSF4_next,
                (LPVOID)cast_pointer_function(CMonsterAssistSF4_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(struct CCharacter*, struct CMonsterSkill*))&CMonster::AssistSF)
            },
            _hook_record {
                (LPVOID)0x14014e4c0L,
                (LPVOID *)&CMonsterAttack6_user,
                (LPVOID *)&CMonsterAttack6_next,
                (LPVOID)cast_pointer_function(CMonsterAttack6_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(struct CCharacter*, struct CMonsterSkill*))&CMonster::Attack)
            },
            _hook_record {
                (LPVOID)0x140142a60L,
                (LPVOID *)&CMonsterAttackObject8_user,
                (LPVOID *)&CMonsterAttackObject8_next,
                (LPVOID)cast_pointer_function(CMonsterAttackObject8_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(int, struct CGameObject*))&CMonster::AttackObject)
            },
            _hook_record {
                (LPVOID)0x1401468d0L,
                (LPVOID *)&CMonsterAttackableHeight10_user,
                (LPVOID *)&CMonsterAttackableHeight10_next,
                (LPVOID)cast_pointer_function(CMonsterAttackableHeight10_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::AttackableHeight)
            },
            _hook_record {
                (LPVOID)0x140147440L,
                (LPVOID *)&CMonsterAutoRecover12_user,
                (LPVOID *)&CMonsterAutoRecover12_next,
                (LPVOID)cast_pointer_function(CMonsterAutoRecover12_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::AutoRecover)
            },
            _hook_record {
                (LPVOID)0x1401427b0L,
                (LPVOID *)&CMonsterBeTargeted14_user,
                (LPVOID *)&CMonsterBeTargeted14_next,
                (LPVOID)cast_pointer_function(CMonsterBeTargeted14_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CCharacter*))&CMonster::BeTargeted)
            },
            _hook_record {
                (LPVOID)0x1401414e0L,
                (LPVOID *)&CMonsterctor_CMonster16_user,
                (LPVOID *)&CMonsterctor_CMonster16_next,
                (LPVOID)cast_pointer_function(CMonsterctor_CMonster16_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::ctor_CMonster)
            },
            _hook_record {
                (LPVOID)0x1401434e0L,
                (LPVOID *)&CMonsterChangeApparition18_user,
                (LPVOID *)&CMonsterChangeApparition18_next,
                (LPVOID)cast_pointer_function(CMonsterChangeApparition18_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(bool, unsigned int))&CMonster::ChangeApparition)
            },
            _hook_record {
                (LPVOID)0x140143370L,
                (LPVOID *)&CMonsterCheckAutoRecoverHP20_user,
                (LPVOID *)&CMonsterCheckAutoRecoverHP20_next,
                (LPVOID)cast_pointer_function(CMonsterCheckAutoRecoverHP20_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::CheckAutoRecoverHP)
            },
            _hook_record {
                (LPVOID)0x1401432f0L,
                (LPVOID *)&CMonsterCheckDelayDestroy22_user,
                (LPVOID *)&CMonsterCheckDelayDestroy22_next,
                (LPVOID)cast_pointer_function(CMonsterCheckDelayDestroy22_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::CheckDelayDestroy)
            },
            _hook_record {
                (LPVOID)0x140147fd0L,
                (LPVOID *)&CMonsterCheckEmotionPresentation24_user,
                (LPVOID *)&CMonsterCheckEmotionPresentation24_next,
                (LPVOID)cast_pointer_function(CMonsterCheckEmotionPresentation24_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::CheckEmotionPresentation)
            },
            _hook_record {
                (LPVOID)0x140147f20L,
                (LPVOID *)&CMonsterCheckEventEmotionPresentation26_user,
                (LPVOID *)&CMonsterCheckEventEmotionPresentation26_next,
                (LPVOID)cast_pointer_function(CMonsterCheckEventEmotionPresentation26_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(char, struct CCharacter*))&CMonster::CheckEventEmotionPresentation)
            },
            _hook_record {
                (LPVOID)0x140144120L,
                (LPVOID *)&CMonsterCheckLootItem28_user,
                (LPVOID *)&CMonsterCheckLootItem28_next,
                (LPVOID)cast_pointer_function(CMonsterCheckLootItem28_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CPlayer*))&CMonster::CheckLootItem)
            },
            _hook_record {
                (LPVOID)0x140147b80L,
                (LPVOID *)&CMonsterCheckMonsterRotate30_user,
                (LPVOID *)&CMonsterCheckMonsterRotate30_next,
                (LPVOID)cast_pointer_function(CMonsterCheckMonsterRotate30_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::CheckMonsterRotate)
            },
            _hook_record {
                (LPVOID)0x1401435c0L,
                (LPVOID *)&CMonsterCheckMonsterStateData32_user,
                (LPVOID *)&CMonsterCheckMonsterStateData32_next,
                (LPVOID)cast_pointer_function(CMonsterCheckMonsterStateData32_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::CheckMonsterStateData)
            },
            _hook_record {
                (LPVOID)0x140143070L,
                (LPVOID *)&CMonsterCheckRespawnProcess34_user,
                (LPVOID *)&CMonsterCheckRespawnProcess34_next,
                (LPVOID)cast_pointer_function(CMonsterCheckRespawnProcess34_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::CheckRespawnProcess)
            },
            _hook_record {
                (LPVOID)0x140147f80L,
                (LPVOID *)&CMonsterClearEmotionPresentation36_user,
                (LPVOID *)&CMonsterClearEmotionPresentation36_next,
                (LPVOID)cast_pointer_function(CMonsterClearEmotionPresentation36_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::ClearEmotionPresentation)
            },
            _hook_record {
                (LPVOID)0x140143550L,
                (LPVOID *)&CMonsterCommand_ChildMonDestroy38_user,
                (LPVOID *)&CMonsterCommand_ChildMonDestroy38_next,
                (LPVOID)cast_pointer_function(CMonsterCommand_ChildMonDestroy38_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(unsigned int))&CMonster::Command_ChildMonDestroy)
            },
            _hook_record {
                (LPVOID)0x1401428c0L,
                (LPVOID *)&CMonsterConvertTargetPlayer40_user,
                (LPVOID *)&CMonsterConvertTargetPlayer40_next,
                (LPVOID)cast_pointer_function(CMonsterConvertTargetPlayer40_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CPlayer*))&CMonster::ConvertTargetPlayer)
            },
            _hook_record {
                (LPVOID)0x140141c50L,
                (LPVOID *)&CMonsterCreate42_user,
                (LPVOID *)&CMonsterCreate42_next,
                (LPVOID)cast_pointer_function(CMonsterCreate42_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct _monster_create_setdata*))&CMonster::Create)
            },
            _hook_record {
                (LPVOID)0x1401423d0L,
                (LPVOID *)&CMonsterCreateAI44_user,
                (LPVOID *)&CMonsterCreateAI44_next,
                (LPVOID)cast_pointer_function(CMonsterCreateAI44_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(int))&CMonster::CreateAI)
            },
            _hook_record {
                (LPVOID)0x1401424f0L,
                (LPVOID *)&CMonsterDestroy46_user,
                (LPVOID *)&CMonsterDestroy46_next,
                (LPVOID)cast_pointer_function(CMonsterDestroy46_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(char, struct CGameObject*))&CMonster::Destroy)
            },
            _hook_record {
                (LPVOID)0x1402a7900L,
                (LPVOID *)&CMonsterDisableStdItemLoot48_user,
                (LPVOID *)&CMonsterDisableStdItemLoot48_next,
                (LPVOID)cast_pointer_function(CMonsterDisableStdItemLoot48_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::DisableStdItemLoot)
            },
            _hook_record {
                (LPVOID)0x140146f20L,
                (LPVOID *)&CMonsterFixTargetWhile50_user,
                (LPVOID *)&CMonsterFixTargetWhile50_next,
                (LPVOID)cast_pointer_function(CMonsterFixTargetWhile50_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*, unsigned int))&CMonster::FixTargetWhile)
            },
            _hook_record {
                (LPVOID)0x1401558d0L,
                (LPVOID *)&CMonsterGeEmotionImpStdTime52_user,
                (LPVOID *)&CMonsterGeEmotionImpStdTime52_next,
                (LPVOID)cast_pointer_function(CMonsterGeEmotionImpStdTime52_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GeEmotionImpStdTime)
            },
            _hook_record {
                (LPVOID)0x1401617d0L,
                (LPVOID *)&CMonsterGetAggroResetTime54_user,
                (LPVOID *)&CMonsterGetAggroResetTime54_next,
                (LPVOID)cast_pointer_function(CMonsterGetAggroResetTime54_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CMonster::*)())&CMonster::GetAggroResetTime)
            },
            _hook_record {
                (LPVOID)0x140161790L,
                (LPVOID *)&CMonsterGetAggroShortTime56_user,
                (LPVOID *)&CMonsterGetAggroShortTime56_next,
                (LPVOID)cast_pointer_function(CMonsterGetAggroShortTime56_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CMonster::*)())&CMonster::GetAggroShortTime)
            },
            _hook_record {
                (LPVOID)0x14014bb10L,
                (LPVOID *)&CMonsterGetAttackDP58_user,
                (LPVOID *)&CMonsterGetAttackDP58_next,
                (LPVOID)cast_pointer_function(CMonsterGetAttackDP58_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x14014ddc0L,
                (LPVOID *)&CMonsterGetAttackPart60_user,
                (LPVOID *)&CMonsterGetAttackPart60_next,
                (LPVOID)cast_pointer_function(CMonsterGetAttackPart60_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetAttackPart)
            },
            _hook_record {
                (LPVOID)0x140146660L,
                (LPVOID *)&CMonsterGetAttackRange62_user,
                (LPVOID *)&CMonsterGetAttackRange62_next,
                (LPVOID)cast_pointer_function(CMonsterGetAttackRange62_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetAttackRange)
            },
            _hook_record {
                (LPVOID)0x140132a50L,
                (LPVOID *)&CMonsterGetAttackTarget64_user,
                (LPVOID *)&CMonsterGetAttackTarget64_next,
                (LPVOID)cast_pointer_function(CMonsterGetAttackTarget64_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CMonster::*)())&CMonster::GetAttackTarget)
            },
            _hook_record {
                (LPVOID)0x140161890L,
                (LPVOID *)&CMonsterGetBonusInAreaAggro66_user,
                (LPVOID *)&CMonsterGetBonusInAreaAggro66_next,
                (LPVOID)cast_pointer_function(CMonsterGetBonusInAreaAggro66_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetBonusInAreaAggro)
            },
            _hook_record {
                (LPVOID)0x140143870L,
                (LPVOID *)&CMonsterGetCombatState68_user,
                (LPVOID *)&CMonsterGetCombatState68_next,
                (LPVOID)cast_pointer_function(CMonsterGetCombatState68_wrapper),
                (LPVOID)cast_pointer_function((char(CMonster::*)())&CMonster::GetCombatState)
            },
            _hook_record {
                (LPVOID)0x14014bb70L,
                (LPVOID *)&CMonsterGetCritical_Exception_Rate70_user,
                (LPVOID *)&CMonsterGetCritical_Exception_Rate70_next,
                (LPVOID)cast_pointer_function(CMonsterGetCritical_Exception_Rate70_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetCritical_Exception_Rate)
            },
            _hook_record {
                (LPVOID)0x140146790L,
                (LPVOID *)&CMonsterGetDefFC72_user,
                (LPVOID *)&CMonsterGetDefFC72_next,
                (LPVOID)cast_pointer_function(CMonsterGetDefFC72_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(int, struct CCharacter*, int*))&CMonster::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x14014ba70L,
                (LPVOID *)&CMonsterGetDefFacing74_user,
                (LPVOID *)&CMonsterGetDefFacing74_next,
                (LPVOID)cast_pointer_function(CMonsterGetDefFacing74_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)(int))&CMonster::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x14014ba20L,
                (LPVOID *)&CMonsterGetDefGap76_user,
                (LPVOID *)&CMonsterGetDefGap76_next,
                (LPVOID)cast_pointer_function(CMonsterGetDefGap76_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)(int))&CMonster::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x1401466b0L,
                (LPVOID *)&CMonsterGetDefSkill78_user,
                (LPVOID *)&CMonsterGetDefSkill78_next,
                (LPVOID)cast_pointer_function(CMonsterGetDefSkill78_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(bool))&CMonster::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x140143810L,
                (LPVOID *)&CMonsterGetEmotionState80_user,
                (LPVOID *)&CMonsterGetEmotionState80_next,
                (LPVOID)cast_pointer_function(CMonsterGetEmotionState80_wrapper),
                (LPVOID)cast_pointer_function((char(CMonster::*)())&CMonster::GetEmotionState)
            },
            _hook_record {
                (LPVOID)0x140145620L,
                (LPVOID *)&CMonsterGetFireTol82_user,
                (LPVOID *)&CMonsterGetFireTol82_next,
                (LPVOID)cast_pointer_function(CMonsterGetFireTol82_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x140146da0L,
                (LPVOID *)&CMonsterGetGenAttackProb84_user,
                (LPVOID *)&CMonsterGetGenAttackProb84_next,
                (LPVOID)cast_pointer_function(CMonsterGetGenAttackProb84_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(struct CCharacter*, int, bool))&CMonster::GetGenAttackProb)
            },
            _hook_record {
                (LPVOID)0x1401461e0L,
                (LPVOID *)&CMonsterGetHP86_user,
                (LPVOID *)&CMonsterGetHP86_next,
                (LPVOID)cast_pointer_function(CMonsterGetHP86_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetHP)
            },
            _hook_record {
                (LPVOID)0x1401554f0L,
                (LPVOID *)&CMonsterGetHelpMeCase88_user,
                (LPVOID *)&CMonsterGetHelpMeCase88_next,
                (LPVOID)cast_pointer_function(CMonsterGetHelpMeCase88_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetHelpMeCase)
            },
            _hook_record {
                (LPVOID)0x14014b9e0L,
                (LPVOID *)&CMonsterGetLevel90_user,
                (LPVOID *)&CMonsterGetLevel90_next,
                (LPVOID)cast_pointer_function(CMonsterGetLevel90_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetLevel)
            },
            _hook_record {
                (LPVOID)0x140147050L,
                (LPVOID *)&CMonsterGetMaxDMGSFContCount92_user,
                (LPVOID *)&CMonsterGetMaxDMGSFContCount92_next,
                (LPVOID)cast_pointer_function(CMonsterGetMaxDMGSFContCount92_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetMaxDMGSFContCount)
            },
            _hook_record {
                (LPVOID)0x1401462a0L,
                (LPVOID *)&CMonsterGetMaxHP94_user,
                (LPVOID *)&CMonsterGetMaxHP94_next,
                (LPVOID)cast_pointer_function(CMonsterGetMaxHP94_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x140161590L,
                (LPVOID *)&CMonsterGetMob_AsistType96_user,
                (LPVOID *)&CMonsterGetMob_AsistType96_next,
                (LPVOID)cast_pointer_function(CMonsterGetMob_AsistType96_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetMob_AsistType)
            },
            _hook_record {
                (LPVOID)0x140161570L,
                (LPVOID *)&CMonsterGetMob_SubRace98_user,
                (LPVOID *)&CMonsterGetMob_SubRace98_next,
                (LPVOID)cast_pointer_function(CMonsterGetMob_SubRace98_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetMob_SubRace)
            },
            _hook_record {
                (LPVOID)0x140143720L,
                (LPVOID *)&CMonsterGetMonStateInfo100_user,
                (LPVOID *)&CMonsterGetMonStateInfo100_next,
                (LPVOID)cast_pointer_function(CMonsterGetMonStateInfo100_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CMonster::*)())&CMonster::GetMonStateInfo)
            },
            _hook_record {
                (LPVOID)0x14014bfd0L,
                (LPVOID *)&CMonsterGetMonsterGrade102_user,
                (LPVOID *)&CMonsterGetMonsterGrade102_next,
                (LPVOID)cast_pointer_function(CMonsterGetMonsterGrade102_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetMonsterGrade)
            },
            _hook_record {
                (LPVOID)0x140142d80L,
                (LPVOID *)&CMonsterGetMoveSpeed104_user,
                (LPVOID *)&CMonsterGetMoveSpeed104_next,
                (LPVOID)cast_pointer_function(CMonsterGetMoveSpeed104_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetMoveSpeed)
            },
            _hook_record {
                (LPVOID)0x1401437b0L,
                (LPVOID *)&CMonsterGetMoveType106_user,
                (LPVOID *)&CMonsterGetMoveType106_next,
                (LPVOID)cast_pointer_function(CMonsterGetMoveType106_wrapper),
                (LPVOID)cast_pointer_function((char(CMonster::*)())&CMonster::GetMoveType)
            },
            _hook_record {
                (LPVOID)0x1401470b0L,
                (LPVOID *)&CMonsterGetMyDMGSFContCount108_user,
                (LPVOID *)&CMonsterGetMyDMGSFContCount108_next,
                (LPVOID)cast_pointer_function(CMonsterGetMyDMGSFContCount108_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetMyDMGSFContCount)
            },
            _hook_record {
                (LPVOID)0x14014bff0L,
                (LPVOID *)&CMonsterGetNewMonSerial110_user,
                (LPVOID *)&CMonsterGetNewMonSerial110_next,
                (LPVOID)cast_pointer_function(CMonsterGetNewMonSerial110_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&CMonster::GetNewMonSerial)
            },
            _hook_record {
                (LPVOID)0x140142700L,
                (LPVOID *)&CMonsterGetObjName112_user,
                (LPVOID *)&CMonsterGetObjName112_next,
                (LPVOID)cast_pointer_function(CMonsterGetObjName112_wrapper),
                (LPVOID)cast_pointer_function((char*(CMonster::*)())&CMonster::GetObjName)
            },
            _hook_record {
                (LPVOID)0x14014bb60L,
                (LPVOID *)&CMonsterGetObjRace114_user,
                (LPVOID *)&CMonsterGetObjRace114_next,
                (LPVOID)cast_pointer_function(CMonsterGetObjRace114_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x1401554d0L,
                (LPVOID *)&CMonsterGetOffensiveType116_user,
                (LPVOID *)&CMonsterGetOffensiveType116_next,
                (LPVOID)cast_pointer_function(CMonsterGetOffensiveType116_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetOffensiveType)
            },
            _hook_record {
                (LPVOID)0x140406790L,
                (LPVOID *)&CMonsterGetSignalReActor118_user,
                (LPVOID *)&CMonsterGetSignalReActor118_next,
                (LPVOID)cast_pointer_function(CMonsterGetSignalReActor118_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaSignalReActor*(CMonster::*)())&CMonster::GetSignalReActor)
            },
            _hook_record {
                (LPVOID)0x140142c90L,
                (LPVOID *)&CMonsterGetSkillDelayTime120_user,
                (LPVOID *)&CMonsterGetSkillDelayTime120_next,
                (LPVOID)cast_pointer_function(CMonsterGetSkillDelayTime120_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)(struct CMonsterSkill*))&CMonster::GetSkillDelayTime)
            },
            _hook_record {
                (LPVOID)0x140145820L,
                (LPVOID *)&CMonsterGetSoilTol122_user,
                (LPVOID *)&CMonsterGetSoilTol122_next,
                (LPVOID)cast_pointer_function(CMonsterGetSoilTol122_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x140146c20L,
                (LPVOID *)&CMonsterGetViewAngleCap124_user,
                (LPVOID *)&CMonsterGetViewAngleCap124_next,
                (LPVOID)cast_pointer_function(CMonsterGetViewAngleCap124_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(int, int*))&CMonster::GetViewAngleCap)
            },
            _hook_record {
                (LPVOID)0x14014caa0L,
                (LPVOID *)&CMonsterGetVisualAngle126_user,
                (LPVOID *)&CMonsterGetVisualAngle126_next,
                (LPVOID)cast_pointer_function(CMonsterGetVisualAngle126_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetVisualAngle)
            },
            _hook_record {
                (LPVOID)0x14014bf80L,
                (LPVOID *)&CMonsterGetVisualField128_user,
                (LPVOID *)&CMonsterGetVisualField128_next,
                (LPVOID)cast_pointer_function(CMonsterGetVisualField128_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetVisualField)
            },
            _hook_record {
                (LPVOID)0x140145720L,
                (LPVOID *)&CMonsterGetWaterTol130_user,
                (LPVOID *)&CMonsterGetWaterTol130_next,
                (LPVOID)cast_pointer_function(CMonsterGetWaterTol130_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x14014bac0L,
                (LPVOID *)&CMonsterGetWeaponAdjust132_user,
                (LPVOID *)&CMonsterGetWeaponAdjust132_next,
                (LPVOID)cast_pointer_function(CMonsterGetWeaponAdjust132_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x14014ba00L,
                (LPVOID *)&CMonsterGetWeaponClass134_user,
                (LPVOID *)&CMonsterGetWeaponClass134_next,
                (LPVOID)cast_pointer_function(CMonsterGetWeaponClass134_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetWeaponClass)
            },
            _hook_record {
                (LPVOID)0x140146610L,
                (LPVOID *)&CMonsterGetWidth136_user,
                (LPVOID *)&CMonsterGetWidth136_next,
                (LPVOID)cast_pointer_function(CMonsterGetWidth136_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetWidth)
            },
            _hook_record {
                (LPVOID)0x140145920L,
                (LPVOID *)&CMonsterGetWindTol138_user,
                (LPVOID *)&CMonsterGetWindTol138_next,
                (LPVOID)cast_pointer_function(CMonsterGetWindTol138_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x1401438d0L,
                (LPVOID *)&CMonsterGetYAngle140_user,
                (LPVOID *)&CMonsterGetYAngle140_next,
                (LPVOID)cast_pointer_function(CMonsterGetYAngle140_wrapper),
                (LPVOID)cast_pointer_function((float(CMonster::*)())&CMonster::GetYAngle)
            },
            _hook_record {
                (LPVOID)0x14014cb50L,
                (LPVOID *)&CMonsterGetYAngleByte142_user,
                (LPVOID *)&CMonsterGetYAngleByte142_next,
                (LPVOID)cast_pointer_function(CMonsterGetYAngleByte142_wrapper),
                (LPVOID)cast_pointer_function((char(CMonster::*)())&CMonster::GetYAngleByte)
            },
            _hook_record {
                (LPVOID)0x140141970L,
                (LPVOID *)&CMonsterInit144_user,
                (LPVOID *)&CMonsterInit144_next,
                (LPVOID)cast_pointer_function(CMonsterInit144_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct _object_id*))&CMonster::Init)
            },
            _hook_record {
                (LPVOID)0x1401475b0L,
                (LPVOID *)&CMonsterInsertSFContEffect146_user,
                (LPVOID *)&CMonsterInsertSFContEffect146_next,
                (LPVOID)cast_pointer_function(CMonsterInsertSFContEffect146_wrapper),
                (LPVOID)cast_pointer_function((char(CMonster::*)(char, char, unsigned int, uint16_t, char, bool*, struct CCharacter*))&CMonster::InsertSFContEffect)
            },
            _hook_record {
                (LPVOID)0x14014bb30L,
                (LPVOID *)&CMonsterIsAttackableInTown148_user,
                (LPVOID *)&CMonsterIsAttackableInTown148_next,
                (LPVOID)cast_pointer_function(CMonsterIsAttackableInTown148_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::IsAttackableInTown)
            },
            _hook_record {
                (LPVOID)0x1401468f0L,
                (LPVOID *)&CMonsterIsBeAttackedAble150_user,
                (LPVOID *)&CMonsterIsBeAttackedAble150_next,
                (LPVOID)cast_pointer_function(CMonsterIsBeAttackedAble150_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(bool))&CMonster::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x140146c80L,
                (LPVOID *)&CMonsterIsBeDamagedAble152_user,
                (LPVOID *)&CMonsterIsBeDamagedAble152_next,
                (LPVOID)cast_pointer_function(CMonsterIsBeDamagedAble152_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::IsBeDamagedAble)
            },
            _hook_record {
                (LPVOID)0x14007d4e0L,
                (LPVOID *)&CMonsterIsBossMonster154_user,
                (LPVOID *)&CMonsterIsBossMonster154_next,
                (LPVOID)cast_pointer_function(CMonsterIsBossMonster154_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::IsBossMonster)
            },
            _hook_record {
                (LPVOID)0x140142e20L,
                (LPVOID *)&CMonsterIsMovable156_user,
                (LPVOID *)&CMonsterIsMovable156_next,
                (LPVOID)cast_pointer_function(CMonsterIsMovable156_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::IsMovable)
            },
            _hook_record {
                (LPVOID)0x140155460L,
                (LPVOID *)&CMonsterIsPreAttackAbleMon158_user,
                (LPVOID *)&CMonsterIsPreAttackAbleMon158_next,
                (LPVOID)cast_pointer_function(CMonsterIsPreAttackAbleMon158_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::IsPreAttackAbleMon)
            },
            _hook_record {
                (LPVOID)0x1401469a0L,
                (LPVOID *)&CMonsterIsRecvableContEffect160_user,
                (LPVOID *)&CMonsterIsRecvableContEffect160_next,
                (LPVOID)cast_pointer_function(CMonsterIsRecvableContEffect160_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::IsRecvableContEffect)
            },
            _hook_record {
                (LPVOID)0x14014bb40L,
                (LPVOID *)&CMonsterIsRewardExp162_user,
                (LPVOID *)&CMonsterIsRewardExp162_next,
                (LPVOID)cast_pointer_function(CMonsterIsRewardExp162_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::IsRewardExp)
            },
            _hook_record {
                (LPVOID)0x1401555d0L,
                (LPVOID *)&CMonsterIsRoateMonster164_user,
                (LPVOID *)&CMonsterIsRoateMonster164_next,
                (LPVOID)cast_pointer_function(CMonsterIsRoateMonster164_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)())&CMonster::IsRoateMonster)
            },
            _hook_record {
                (LPVOID)0x140142e70L,
                (LPVOID *)&CMonsterIsValidPlayer166_user,
                (LPVOID *)&CMonsterIsValidPlayer166_next,
                (LPVOID)cast_pointer_function(CMonsterIsValidPlayer166_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)())&CMonster::IsValidPlayer)
            },
            _hook_record {
                (LPVOID)0x140146a20L,
                (LPVOID *)&CMonsterIsViewArea168_user,
                (LPVOID *)&CMonsterIsViewArea168_next,
                (LPVOID)cast_pointer_function(CMonsterIsViewArea168_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::IsViewArea)
            },
            _hook_record {
                (LPVOID)0x1402a78d0L,
                (LPVOID *)&CMonsterLinkEventRespawn170_user,
                (LPVOID *)&CMonsterLinkEventRespawn170_next,
                (LPVOID)cast_pointer_function(CMonsterLinkEventRespawn170_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct _event_respawn*))&CMonster::LinkEventRespawn)
            },
            _hook_record {
                (LPVOID)0x1402aa080L,
                (LPVOID *)&CMonsterLinkEventSet172_user,
                (LPVOID *)&CMonsterLinkEventSet172_next,
                (LPVOID)cast_pointer_function(CMonsterLinkEventSet172_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct _event_set*))&CMonster::LinkEventSet)
            },
            _hook_record {
                (LPVOID)0x140147c90L,
                (LPVOID *)&CMonsterLoop174_user,
                (LPVOID *)&CMonsterLoop174_next,
                (LPVOID)cast_pointer_function(CMonsterLoop174_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::Loop)
            },
            _hook_record {
                (LPVOID)0x14014b990L,
                (LPVOID *)&CMonsterOutOfSec176_user,
                (LPVOID *)&CMonsterOutOfSec176_next,
                (LPVOID)cast_pointer_function(CMonsterOutOfSec176_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x140142800L,
                (LPVOID *)&CMonsterRobbedHP178_user,
                (LPVOID *)&CMonsterRobbedHP178_next,
                (LPVOID)cast_pointer_function(CMonsterRobbedHP178_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*, int))&CMonster::RobbedHP)
            },
            _hook_record {
                (LPVOID)0x140145f20L,
                (LPVOID *)&CMonsterSF_AllContHelpForceRemove_Once180_user,
                (LPVOID *)&CMonsterSF_AllContHelpForceRemove_Once180_next,
                (LPVOID)cast_pointer_function(CMonsterSF_AllContHelpForceRemove_Once180_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::SF_AllContHelpForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x140145e10L,
                (LPVOID *)&CMonsterSF_AllContHelpSkillRemove_Once182_user,
                (LPVOID *)&CMonsterSF_AllContHelpSkillRemove_Once182_next,
                (LPVOID)cast_pointer_function(CMonsterSF_AllContHelpSkillRemove_Once182_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::SF_AllContHelpSkillRemove_Once)
            },
            _hook_record {
                (LPVOID)0x140145a20L,
                (LPVOID *)&CMonsterSF_HPInc_Once184_user,
                (LPVOID *)&CMonsterSF_HPInc_Once184_next,
                (LPVOID)cast_pointer_function(CMonsterSF_HPInc_Once184_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*, float))&CMonster::SF_HPInc_Once)
            },
            _hook_record {
                (LPVOID)0x140146030L,
                (LPVOID *)&CMonsterSF_LateContDamageRemove_Once186_user,
                (LPVOID *)&CMonsterSF_LateContDamageRemove_Once186_next,
                (LPVOID)cast_pointer_function(CMonsterSF_LateContDamageRemove_Once186_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::SF_LateContDamageRemove_Once)
            },
            _hook_record {
                (LPVOID)0x140145cc0L,
                (LPVOID *)&CMonsterSF_LateContHelpForceRemove_Once188_user,
                (LPVOID *)&CMonsterSF_LateContHelpForceRemove_Once188_next,
                (LPVOID)cast_pointer_function(CMonsterSF_LateContHelpForceRemove_Once188_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::SF_LateContHelpForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x140145b70L,
                (LPVOID *)&CMonsterSF_LateContHelpSkillRemove_Once190_user,
                (LPVOID *)&CMonsterSF_LateContHelpSkillRemove_Once190_next,
                (LPVOID)cast_pointer_function(CMonsterSF_LateContHelpSkillRemove_Once190_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*))&CMonster::SF_LateContHelpSkillRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14026f340L,
                (LPVOID *)&CMonsterSearchNearPlayer192_user,
                (LPVOID *)&CMonsterSearchNearPlayer192_next,
                (LPVOID)cast_pointer_function(CMonsterSearchNearPlayer192_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CMonster::*)())&CMonster::SearchNearPlayer)
            },
            _hook_record {
                (LPVOID)0x14014d690L,
                (LPVOID *)&CMonsterSendMsg_Assist_Force194_user,
                (LPVOID *)&CMonsterSendMsg_Assist_Force194_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Assist_Force194_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char, struct CCharacter*, struct _force_fld*, int))&CMonster::SendMsg_Assist_Force)
            },
            _hook_record {
                (LPVOID)0x14014d800L,
                (LPVOID *)&CMonsterSendMsg_Assist_Skill196_user,
                (LPVOID *)&CMonsterSendMsg_Assist_Skill196_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Assist_Skill196_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char, int, struct CCharacter*, struct _skill_fld*, int))&CMonster::SendMsg_Assist_Skill)
            },
            _hook_record {
                (LPVOID)0x14014ee20L,
                (LPVOID *)&CMonsterSendMsg_Attack_Force198_user,
                (LPVOID *)&CMonsterSendMsg_Attack_Force198_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Attack_Force198_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CMonsterAttack*))&CMonster::SendMsg_Attack_Force)
            },
            _hook_record {
                (LPVOID)0x14014ec70L,
                (LPVOID *)&CMonsterSendMsg_Attack_Gen200_user,
                (LPVOID *)&CMonsterSendMsg_Attack_Gen200_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Attack_Gen200_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CMonsterAttack*))&CMonster::SendMsg_Attack_Gen)
            },
            _hook_record {
                (LPVOID)0x14014f040L,
                (LPVOID *)&CMonsterSendMsg_Attack_Skill202_user,
                (LPVOID *)&CMonsterSendMsg_Attack_Skill202_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Attack_Skill202_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CMonsterAttack*))&CMonster::SendMsg_Attack_Skill)
            },
            _hook_record {
                (LPVOID)0x140148790L,
                (LPVOID *)&CMonsterSendMsg_Change_MonsterRotate204_user,
                (LPVOID *)&CMonsterSendMsg_Change_MonsterRotate204_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Change_MonsterRotate204_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::SendMsg_Change_MonsterRotate)
            },
            _hook_record {
                (LPVOID)0x140148700L,
                (LPVOID *)&CMonsterSendMsg_Change_MonsterState206_user,
                (LPVOID *)&CMonsterSendMsg_Change_MonsterState206_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Change_MonsterState206_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::SendMsg_Change_MonsterState)
            },
            _hook_record {
                (LPVOID)0x140148820L,
                (LPVOID *)&CMonsterSendMsg_Change_MonsterTarget208_user,
                (LPVOID *)&CMonsterSendMsg_Change_MonsterTarget208_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Change_MonsterTarget208_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CCharacter*))&CMonster::SendMsg_Change_MonsterTarget)
            },
            _hook_record {
                (LPVOID)0x140148380L,
                (LPVOID *)&CMonsterSendMsg_Create210_user,
                (LPVOID *)&CMonsterSendMsg_Create210_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Create210_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x1401489d0L,
                (LPVOID *)&CMonsterSendMsg_Destroy212_user,
                (LPVOID *)&CMonsterSendMsg_Destroy212_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Destroy212_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char))&CMonster::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x1401488e0L,
                (LPVOID *)&CMonsterSendMsg_Emotion_Presentation214_user,
                (LPVOID *)&CMonsterSendMsg_Emotion_Presentation214_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Emotion_Presentation214_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char, uint16_t, uint16_t, int))&CMonster::SendMsg_Emotion_Presentation)
            },
            _hook_record {
                (LPVOID)0x140148490L,
                (LPVOID *)&CMonsterSendMsg_FixPosition216_user,
                (LPVOID *)&CMonsterSendMsg_FixPosition216_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_FixPosition216_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(int))&CMonster::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140148a70L,
                (LPVOID *)&CMonsterSendMsg_Move218_user,
                (LPVOID *)&CMonsterSendMsg_Move218_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_Move218_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::SendMsg_Move)
            },
            _hook_record {
                (LPVOID)0x1401485c0L,
                (LPVOID *)&CMonsterSendMsg_RealMovePoint220_user,
                (LPVOID *)&CMonsterSendMsg_RealMovePoint220_next,
                (LPVOID)cast_pointer_function(CMonsterSendMsg_RealMovePoint220_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(int))&CMonster::SendMsg_RealMovePoint)
            },
            _hook_record {
                (LPVOID)0x1401429c0L,
                (LPVOID *)&CMonsterSetAttackTarget222_user,
                (LPVOID *)&CMonsterSetAttackTarget222_next,
                (LPVOID)cast_pointer_function(CMonsterSetAttackTarget222_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CCharacter*))&CMonster::SetAttackTarget)
            },
            _hook_record {
                (LPVOID)0x140143830L,
                (LPVOID *)&CMonsterSetCombatState224_user,
                (LPVOID *)&CMonsterSetCombatState224_next,
                (LPVOID)cast_pointer_function(CMonsterSetCombatState224_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char))&CMonster::SetCombatState)
            },
            _hook_record {
                (LPVOID)0x1401462d0L,
                (LPVOID *)&CMonsterSetDamage226_user,
                (LPVOID *)&CMonsterSetDamage226_next,
                (LPVOID)cast_pointer_function(CMonsterSetDamage226_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CMonster::SetDamage)
            },
            _hook_record {
                (LPVOID)0x140142b40L,
                (LPVOID *)&CMonsterSetDefPart228_user,
                (LPVOID *)&CMonsterSetDefPart228_next,
                (LPVOID)cast_pointer_function(CMonsterSetDefPart228_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct _monster_fld*))&CMonster::SetDefPart)
            },
            _hook_record {
                (LPVOID)0x1401437d0L,
                (LPVOID *)&CMonsterSetEmotionState230_user,
                (LPVOID *)&CMonsterSetEmotionState230_next,
                (LPVOID)cast_pointer_function(CMonsterSetEmotionState230_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char))&CMonster::SetEmotionState)
            },
            _hook_record {
                (LPVOID)0x140146200L,
                (LPVOID *)&CMonsterSetHP232_user,
                (LPVOID *)&CMonsterSetHP232_next,
                (LPVOID)cast_pointer_function(CMonsterSetHP232_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(int, bool))&CMonster::SetHP)
            },
            _hook_record {
                (LPVOID)0x140143770L,
                (LPVOID *)&CMonsterSetMoveType234_user,
                (LPVOID *)&CMonsterSetMoveType234_next,
                (LPVOID)cast_pointer_function(CMonsterSetMoveType234_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char))&CMonster::SetMoveType)
            },
            _hook_record {
                (LPVOID)0x140146130L,
                (LPVOID *)&CMonsterSetStun236_user,
                (LPVOID *)&CMonsterSetStun236_next,
                (LPVOID)cast_pointer_function(CMonsterSetStun236_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(bool))&CMonster::SetStun)
            },
            _hook_record {
                (LPVOID)0x140148220L,
                (LPVOID *)&CMonsterUpdateLookAtPos238_user,
                (LPVOID *)&CMonsterUpdateLookAtPos238_next,
                (LPVOID)cast_pointer_function(CMonsterUpdateLookAtPos238_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(float*))&CMonster::UpdateLookAtPos)
            },
            _hook_record {
                (LPVOID)0x140148090L,
                (LPVOID *)&CMonsterUpdateLookAtPos240_user,
                (LPVOID *)&CMonsterUpdateLookAtPos240_next,
                (LPVOID)cast_pointer_function(CMonsterUpdateLookAtPos240_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::UpdateLookAtPos)
            },
            _hook_record {
                (LPVOID)0x140147170L,
                (LPVOID *)&CMonsterUpdateSFCont242_user,
                (LPVOID *)&CMonsterUpdateSFCont242_next,
                (LPVOID)cast_pointer_function(CMonsterUpdateSFCont242_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::UpdateSFCont)
            },
            _hook_record {
                (LPVOID)0x14014cf60L,
                (LPVOID *)&CMonster_AssistSF_Cont_Dmg244_user,
                (LPVOID *)&CMonster_AssistSF_Cont_Dmg244_next,
                (LPVOID)cast_pointer_function(CMonster_AssistSF_Cont_Dmg244_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(struct CCharacter*, struct CMonsterSkill*))&CMonster::_AssistSF_Cont_Dmg)
            },
            _hook_record {
                (LPVOID)0x14014cf10L,
                (LPVOID *)&CMonster_AssistSF_Cont_Support246_user,
                (LPVOID *)&CMonster_AssistSF_Cont_Support246_next,
                (LPVOID)cast_pointer_function(CMonster_AssistSF_Cont_Support246_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(struct CCharacter*, struct CMonsterSkill*))&CMonster::_AssistSF_Cont_Support)
            },
            _hook_record {
                (LPVOID)0x14014d330L,
                (LPVOID *)&CMonster_AssistSF_Cont_Temp248_user,
                (LPVOID *)&CMonster_AssistSF_Cont_Temp248_next,
                (LPVOID)cast_pointer_function(CMonster_AssistSF_Cont_Temp248_wrapper),
                (LPVOID)cast_pointer_function((int(CMonster::*)(struct CCharacter*, struct CMonsterSkill*))&CMonster::_AssistSF_Cont_Temp)
            },
            _hook_record {
                (LPVOID)0x140143910L,
                (LPVOID *)&CMonster_BossBirthWriteLog250_user,
                (LPVOID *)&CMonster_BossBirthWriteLog250_next,
                (LPVOID)cast_pointer_function(CMonster_BossBirthWriteLog250_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::_BossBirthWriteLog)
            },
            _hook_record {
                (LPVOID)0x1401440c0L,
                (LPVOID *)&CMonster_BossDieWriteLog_End252_user,
                (LPVOID *)&CMonster_BossDieWriteLog_End252_next,
                (LPVOID)cast_pointer_function(CMonster_BossDieWriteLog_End252_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::_BossDieWriteLog_End)
            },
            _hook_record {
                (LPVOID)0x1401439d0L,
                (LPVOID *)&CMonster_BossDieWriteLog_Start254_user,
                (LPVOID *)&CMonster_BossDieWriteLog_Start254_next,
                (LPVOID)cast_pointer_function(CMonster_BossDieWriteLog_Start254_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(char, struct CGameObject*))&CMonster::_BossDieWriteLog_Start)
            },
            _hook_record {
                (LPVOID)0x140149460L,
                (LPVOID *)&CMonster_DestroySDM256_user,
                (LPVOID *)&CMonster_DestroySDM256_next,
                (LPVOID)cast_pointer_function(CMonster_DestroySDM256_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CMonster::_DestroySDM)
            },
            _hook_record {
                (LPVOID)0x1401491a0L,
                (LPVOID *)&CMonster_InitSDM258_user,
                (LPVOID *)&CMonster_InitSDM258_next,
                (LPVOID)cast_pointer_function(CMonster_InitSDM258_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CMonster::_InitSDM)
            },
            _hook_record {
                (LPVOID)0x1401492b0L,
                (LPVOID *)&CMonster_InitSDM_LootTBL260_user,
                (LPVOID *)&CMonster_InitSDM_LootTBL260_next,
                (LPVOID)cast_pointer_function(CMonster_InitSDM_LootTBL260_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CMonster::_InitSDM_LootTBL)
            },
            _hook_record {
                (LPVOID)0x140144ff0L,
                (LPVOID *)&CMonster_LootItem_EventSet262_user,
                (LPVOID *)&CMonster_LootItem_EventSet262_next,
                (LPVOID)cast_pointer_function(CMonster_LootItem_EventSet262_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CPlayer*))&CMonster::_LootItem_EventSet)
            },
            _hook_record {
                (LPVOID)0x140145390L,
                (LPVOID *)&CMonster_LootItem_Qst264_user,
                (LPVOID *)&CMonster_LootItem_Qst264_next,
                (LPVOID)cast_pointer_function(CMonster_LootItem_Qst264_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CPlayer*))&CMonster::_LootItem_Qst)
            },
            _hook_record {
                (LPVOID)0x140144d90L,
                (LPVOID *)&CMonster_LootItem_Rwp266_user,
                (LPVOID *)&CMonster_LootItem_Rwp266_next,
                (LPVOID)cast_pointer_function(CMonster_LootItem_Rwp266_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CPlayer*))&CMonster::_LootItem_Rwp)
            },
            _hook_record {
                (LPVOID)0x140144240L,
                (LPVOID *)&CMonster_LootItem_Std268_user,
                (LPVOID *)&CMonster_LootItem_Std268_next,
                (LPVOID)cast_pointer_function(CMonster_LootItem_Std268_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CPlayer*))&CMonster::_LootItem_Std)
            },
            _hook_record {
                (LPVOID)0x14014e0b0L,
                (LPVOID *)&CMonstermake_force_attack_param274_user,
                (LPVOID *)&CMonstermake_force_attack_param274_next,
                (LPVOID)cast_pointer_function(CMonstermake_force_attack_param274_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CCharacter*, struct CMonsterSkill*, struct _attack_param*))&CMonster::make_force_attack_param)
            },
            _hook_record {
                (LPVOID)0x14014de80L,
                (LPVOID *)&CMonstermake_gen_attack_param276_user,
                (LPVOID *)&CMonstermake_gen_attack_param276_next,
                (LPVOID)cast_pointer_function(CMonstermake_gen_attack_param276_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)(struct CCharacter*, struct _attack_param*))&CMonster::make_gen_attack_param)
            },
            _hook_record {
                (LPVOID)0x14014e260L,
                (LPVOID *)&CMonstermake_skill_attack_param278_user,
                (LPVOID *)&CMonstermake_skill_attack_param278_next,
                (LPVOID)cast_pointer_function(CMonstermake_skill_attack_param278_wrapper),
                (LPVOID)cast_pointer_function((bool(CMonster::*)(struct CCharacter*, struct CMonsterSkill*, int, struct _attack_param*))&CMonster::make_skill_attack_param)
            },
            _hook_record {
                (LPVOID)0x140141780L,
                (LPVOID *)&CMonsterdtor_CMonster280_user,
                (LPVOID *)&CMonsterdtor_CMonster280_next,
                (LPVOID)cast_pointer_function(CMonsterdtor_CMonster280_wrapper),
                (LPVOID)cast_pointer_function((void(CMonster::*)())&CMonster::dtor_CMonster)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
