#include <CCharacterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CCharacterAlterContDurSec2_ptr CCharacterAlterContDurSec2_next(nullptr);
        Info::CCharacterAlterContDurSec2_clbk CCharacterAlterContDurSec2_user(nullptr);
        
        Info::CCharacterAssistForce4_ptr CCharacterAssistForce4_next(nullptr);
        Info::CCharacterAssistForce4_clbk CCharacterAssistForce4_user(nullptr);
        
        Info::CCharacterAssistForceToOne6_ptr CCharacterAssistForceToOne6_next(nullptr);
        Info::CCharacterAssistForceToOne6_clbk CCharacterAssistForceToOne6_user(nullptr);
        
        Info::CCharacterAssistSkill8_ptr CCharacterAssistSkill8_next(nullptr);
        Info::CCharacterAssistSkill8_clbk CCharacterAssistSkill8_user(nullptr);
        
        Info::CCharacterAssistSkillToOne10_ptr CCharacterAssistSkillToOne10_next(nullptr);
        Info::CCharacterAssistSkillToOne10_clbk CCharacterAssistSkillToOne10_user(nullptr);
        
        Info::CCharacterBreakStealth12_ptr CCharacterBreakStealth12_next(nullptr);
        Info::CCharacterBreakStealth12_clbk CCharacterBreakStealth12_user(nullptr);
        
        
        Info::CCharacterctor_CCharacter14_ptr CCharacterctor_CCharacter14_next(nullptr);
        Info::CCharacterctor_CCharacter14_clbk CCharacterctor_CCharacter14_user(nullptr);
        
        Info::CCharacterCalcDistForSec16_ptr CCharacterCalcDistForSec16_next(nullptr);
        Info::CCharacterCalcDistForSec16_clbk CCharacterCalcDistForSec16_user(nullptr);
        
        Info::CCharacterCalcEffectBit18_ptr CCharacterCalcEffectBit18_next(nullptr);
        Info::CCharacterCalcEffectBit18_clbk CCharacterCalcEffectBit18_user(nullptr);
        
        Info::CCharacterCreate20_ptr CCharacterCreate20_next(nullptr);
        Info::CCharacterCreate20_clbk CCharacterCreate20_user(nullptr);
        
        Info::CCharacterDestroy22_ptr CCharacterDestroy22_next(nullptr);
        Info::CCharacterDestroy22_clbk CCharacterDestroy22_user(nullptr);
        
        Info::CCharacterFindEffectDst24_ptr CCharacterFindEffectDst24_next(nullptr);
        Info::CCharacterFindEffectDst24_clbk CCharacterFindEffectDst24_user(nullptr);
        
        Info::CCharacterFindPotionEffectDst26_ptr CCharacterFindPotionEffectDst26_next(nullptr);
        Info::CCharacterFindPotionEffectDst26_clbk CCharacterFindPotionEffectDst26_user(nullptr);
        
        Info::CCharacterGetAttackDamPoint28_ptr CCharacterGetAttackDamPoint28_next(nullptr);
        Info::CCharacterGetAttackDamPoint28_clbk CCharacterGetAttackDamPoint28_user(nullptr);
        
        Info::CCharacterGetAttackRandomPart30_ptr CCharacterGetAttackRandomPart30_next(nullptr);
        Info::CCharacterGetAttackRandomPart30_clbk CCharacterGetAttackRandomPart30_user(nullptr);
        
        Info::CCharacterGetInvisible32_ptr CCharacterGetInvisible32_next(nullptr);
        Info::CCharacterGetInvisible32_clbk CCharacterGetInvisible32_user(nullptr);
        
        Info::CCharacterGetNearEmptySlot34_ptr CCharacterGetNearEmptySlot34_next(nullptr);
        Info::CCharacterGetNearEmptySlot34_clbk CCharacterGetNearEmptySlot34_user(nullptr);
        
        Info::CCharacterGetNextGenAttTime36_ptr CCharacterGetNextGenAttTime36_next(nullptr);
        Info::CCharacterGetNextGenAttTime36_clbk CCharacterGetNextGenAttTime36_user(nullptr);
        
        Info::CCharacterGetSlot38_ptr CCharacterGetSlot38_next(nullptr);
        Info::CCharacterGetSlot38_clbk CCharacterGetSlot38_user(nullptr);
        
        Info::CCharacterGetStealth40_ptr CCharacterGetStealth40_next(nullptr);
        Info::CCharacterGetStealth40_clbk CCharacterGetStealth40_user(nullptr);
        
        Info::CCharacterGetTotalTol42_ptr CCharacterGetTotalTol42_next(nullptr);
        Info::CCharacterGetTotalTol42_clbk CCharacterGetTotalTol42_user(nullptr);
        
        Info::CCharacterGo44_ptr CCharacterGo44_next(nullptr);
        Info::CCharacterGo44_clbk CCharacterGo44_user(nullptr);
        
        Info::CCharacterInit46_ptr CCharacterInit46_next(nullptr);
        Info::CCharacterInit46_clbk CCharacterInit46_user(nullptr);
        
        Info::CCharacterInsertSFContEffect48_ptr CCharacterInsertSFContEffect48_next(nullptr);
        Info::CCharacterInsertSFContEffect48_clbk CCharacterInsertSFContEffect48_user(nullptr);
        
        Info::CCharacterInsertSlot50_ptr CCharacterInsertSlot50_next(nullptr);
        Info::CCharacterInsertSlot50_clbk CCharacterInsertSlot50_user(nullptr);
        
        Info::CCharacterIsDamageEffect52_ptr CCharacterIsDamageEffect52_next(nullptr);
        Info::CCharacterIsDamageEffect52_clbk CCharacterIsDamageEffect52_user(nullptr);
        
        Info::CCharacterIsEffectableDst54_ptr CCharacterIsEffectableDst54_next(nullptr);
        Info::CCharacterIsEffectableDst54_clbk CCharacterIsEffectableDst54_user(nullptr);
        
        Info::CCharacterIsPotionEffectableDst56_ptr CCharacterIsPotionEffectableDst56_next(nullptr);
        Info::CCharacterIsPotionEffectableDst56_clbk CCharacterIsPotionEffectableDst56_user(nullptr);
        
        Info::CCharacterMove58_ptr CCharacterMove58_next(nullptr);
        Info::CCharacterMove58_clbk CCharacterMove58_user(nullptr);
        
        Info::CCharacterMoveBreak60_ptr CCharacterMoveBreak60_next(nullptr);
        Info::CCharacterMoveBreak60_clbk CCharacterMoveBreak60_user(nullptr);
        
        Info::CCharacterRemoveAllContinousEffect62_ptr CCharacterRemoveAllContinousEffect62_next(nullptr);
        Info::CCharacterRemoveAllContinousEffect62_clbk CCharacterRemoveAllContinousEffect62_user(nullptr);
        
        Info::CCharacterRemoveAllContinousEffectGroup64_ptr CCharacterRemoveAllContinousEffectGroup64_next(nullptr);
        Info::CCharacterRemoveAllContinousEffectGroup64_clbk CCharacterRemoveAllContinousEffectGroup64_user(nullptr);
        
        Info::CCharacterRemoveSFContEffect66_ptr CCharacterRemoveSFContEffect66_next(nullptr);
        Info::CCharacterRemoveSFContEffect66_clbk CCharacterRemoveSFContEffect66_user(nullptr);
        
        Info::CCharacterRemoveSFContHelpByEffect68_ptr CCharacterRemoveSFContHelpByEffect68_next(nullptr);
        Info::CCharacterRemoveSFContHelpByEffect68_clbk CCharacterRemoveSFContHelpByEffect68_user(nullptr);
        
        Info::CCharacterRemoveSlot70_ptr CCharacterRemoveSlot70_next(nullptr);
        Info::CCharacterRemoveSlot70_clbk CCharacterRemoveSlot70_user(nullptr);
        
        Info::CCharacterResetSlot72_ptr CCharacterResetSlot72_next(nullptr);
        Info::CCharacterResetSlot72_clbk CCharacterResetSlot72_user(nullptr);
        
        Info::CCharacterSFContInit74_ptr CCharacterSFContInit74_next(nullptr);
        Info::CCharacterSFContInit74_clbk CCharacterSFContInit74_user(nullptr);
        
        Info::CCharacterSendMsg_AttackActEffect76_ptr CCharacterSendMsg_AttackActEffect76_next(nullptr);
        Info::CCharacterSendMsg_AttackActEffect76_clbk CCharacterSendMsg_AttackActEffect76_user(nullptr);
        
        Info::CCharacterSendMsg_LastEffectChangeInform78_ptr CCharacterSendMsg_LastEffectChangeInform78_next(nullptr);
        Info::CCharacterSendMsg_LastEffectChangeInform78_clbk CCharacterSendMsg_LastEffectChangeInform78_user(nullptr);
        
        Info::CCharacterSendMsg_RobedHP80_ptr CCharacterSendMsg_RobedHP80_next(nullptr);
        Info::CCharacterSendMsg_RobedHP80_clbk CCharacterSendMsg_RobedHP80_user(nullptr);
        
        Info::CCharacterSendMsg_StunInform82_ptr CCharacterSendMsg_StunInform82_next(nullptr);
        Info::CCharacterSendMsg_StunInform82_clbk CCharacterSendMsg_StunInform82_user(nullptr);
        
        Info::CCharacterSetNextGenAttTime84_ptr CCharacterSetNextGenAttTime84_next(nullptr);
        Info::CCharacterSetNextGenAttTime84_clbk CCharacterSetNextGenAttTime84_user(nullptr);
        
        Info::CCharacterSetTarPos86_ptr CCharacterSetTarPos86_next(nullptr);
        Info::CCharacterSetTarPos86_clbk CCharacterSetTarPos86_user(nullptr);
        
        Info::CCharacterStop88_ptr CCharacterStop88_next(nullptr);
        Info::CCharacterStop88_clbk CCharacterStop88_user(nullptr);
        
        Info::CCharacterUpdateSFCont90_ptr CCharacterUpdateSFCont90_next(nullptr);
        Info::CCharacterUpdateSFCont90_clbk CCharacterUpdateSFCont90_user(nullptr);
        
        Info::CCharacter_GetAreaEffectMember92_ptr CCharacter_GetAreaEffectMember92_next(nullptr);
        Info::CCharacter_GetAreaEffectMember92_clbk CCharacter_GetAreaEffectMember92_user(nullptr);
        
        Info::CCharacter_GetFlashEffectMember94_ptr CCharacter_GetFlashEffectMember94_next(nullptr);
        Info::CCharacter_GetFlashEffectMember94_clbk CCharacter_GetFlashEffectMember94_user(nullptr);
        
        Info::CCharacter_GetPartyEffectMember96_ptr CCharacter_GetPartyEffectMember96_next(nullptr);
        Info::CCharacter_GetPartyEffectMember96_clbk CCharacter_GetPartyEffectMember96_user(nullptr);
        
        Info::CCharacter_set_sf_cont98_ptr CCharacter_set_sf_cont98_next(nullptr);
        Info::CCharacter_set_sf_cont98_clbk CCharacter_set_sf_cont98_user(nullptr);
        
        
        Info::CCharacterdtor_CCharacter103_ptr CCharacterdtor_CCharacter103_next(nullptr);
        Info::CCharacterdtor_CCharacter103_clbk CCharacterdtor_CCharacter103_user(nullptr);
        
        void CCharacterAlterContDurSec2_wrapper(struct CCharacter* _this, char byContCode, uint16_t wListIndex, unsigned int dwStartSec, uint16_t wNewDur)
        {
           CCharacterAlterContDurSec2_user(_this, byContCode, wListIndex, dwStartSec, wNewDur, CCharacterAlterContDurSec2_next);
        };
        bool CCharacterAssistForce4_wrapper(struct CCharacter* _this, struct CCharacter* pDstChar, struct _force_fld* pForceFld, int nForceLv, char* pbyErrorCode, bool* pbUpMty)
        {
           return CCharacterAssistForce4_user(_this, pDstChar, pForceFld, nForceLv, pbyErrorCode, pbUpMty, CCharacterAssistForce4_next);
        };
        bool CCharacterAssistForceToOne6_wrapper(struct CCharacter* _this, struct CCharacter* pDst, struct _force_fld* pForceFld, int nForceLv)
        {
           return CCharacterAssistForceToOne6_user(_this, pDst, pForceFld, nForceLv, CCharacterAssistForceToOne6_next);
        };
        bool CCharacterAssistSkill8_wrapper(struct CCharacter* _this, struct CCharacter* pDstChar, int nEffectCode, struct _skill_fld* pSkillFld, int nSkillLv, char* pbyErrorCode, bool* pbUpMty)
        {
           return CCharacterAssistSkill8_user(_this, pDstChar, nEffectCode, pSkillFld, nSkillLv, pbyErrorCode, pbUpMty, CCharacterAssistSkill8_next);
        };
        bool CCharacterAssistSkillToOne10_wrapper(struct CCharacter* _this, struct CCharacter* pDst, int nEffectCode, struct _skill_fld* pSkillFld, int nSkillLv)
        {
           return CCharacterAssistSkillToOne10_user(_this, pDst, nEffectCode, pSkillFld, nSkillLv, CCharacterAssistSkillToOne10_next);
        };
        void CCharacterBreakStealth12_wrapper(struct CCharacter* _this)
        {
           CCharacterBreakStealth12_user(_this, CCharacterBreakStealth12_next);
        };
        
        void CCharacterctor_CCharacter14_wrapper(struct CCharacter* _this)
        {
           CCharacterctor_CCharacter14_user(_this, CCharacterctor_CCharacter14_next);
        };
        float CCharacterCalcDistForSec16_wrapper(struct CCharacter* _this, float fSec, float fSpeed)
        {
           return CCharacterCalcDistForSec16_user(_this, fSec, fSpeed, CCharacterCalcDistForSec16_next);
        };
        uint16_t CCharacterCalcEffectBit18_wrapper(struct CCharacter* _this, uint16_t wEffectCode, uint16_t wEffectIndex)
        {
           return CCharacterCalcEffectBit18_user(_this, wEffectCode, wEffectIndex, CCharacterCalcEffectBit18_next);
        };
        bool CCharacterCreate20_wrapper(struct CCharacter* _this, struct _character_create_setdata* pData)
        {
           return CCharacterCreate20_user(_this, pData, CCharacterCreate20_next);
        };
        bool CCharacterDestroy22_wrapper(struct CCharacter* _this)
        {
           return CCharacterDestroy22_user(_this, CCharacterDestroy22_next);
        };
        int CCharacterFindEffectDst24_wrapper(struct CCharacter* _this, int nEffectCode, int nAreaType, int nLv, bool bBenefit, struct CCharacter* pOriDst, char* psActableDst, struct CCharacter** ppDsts)
        {
           return CCharacterFindEffectDst24_user(_this, nEffectCode, nAreaType, nLv, bBenefit, pOriDst, psActableDst, ppDsts, CCharacterFindEffectDst24_next);
        };
        int CCharacterFindPotionEffectDst26_wrapper(struct CCharacter* _this, int nAreaType, int nEffectAreaVal, bool bBenefit, struct CCharacter* pOriDst, char* psActableDst, struct CCharacter** ppDsts, bool* pbPath)
        {
           return CCharacterFindPotionEffectDst26_user(_this, nAreaType, nEffectAreaVal, bBenefit, pOriDst, psActableDst, ppDsts, pbPath, CCharacterFindPotionEffectDst26_next);
        };
        int CCharacterGetAttackDamPoint28_wrapper(struct CCharacter* _this, int nAttPnt, int nAttPart, int nTolType, struct CCharacter* pDst, bool bBackAttack)
        {
           return CCharacterGetAttackDamPoint28_user(_this, nAttPnt, nAttPart, nTolType, pDst, bBackAttack, CCharacterGetAttackDamPoint28_next);
        };
        int CCharacterGetAttackRandomPart30_wrapper(struct CCharacter* _this)
        {
           return CCharacterGetAttackRandomPart30_user(_this, CCharacterGetAttackRandomPart30_next);
        };
        bool CCharacterGetInvisible32_wrapper(struct CCharacter* _this)
        {
           return CCharacterGetInvisible32_user(_this, CCharacterGetInvisible32_next);
        };
        int CCharacterGetNearEmptySlot34_wrapper(struct CCharacter* _this, int pos, float dist, float* cur, float* target)
        {
           return CCharacterGetNearEmptySlot34_user(_this, pos, dist, cur, target, CCharacterGetNearEmptySlot34_next);
        };
        unsigned int CCharacterGetNextGenAttTime36_wrapper(struct CCharacter* _this)
        {
           return CCharacterGetNextGenAttTime36_user(_this, CCharacterGetNextGenAttTime36_next);
        };
        int CCharacterGetSlot38_wrapper(struct CCharacter* _this, struct CCharacter* p)
        {
           return CCharacterGetSlot38_user(_this, p, CCharacterGetSlot38_next);
        };
        bool CCharacterGetStealth40_wrapper(struct CCharacter* _this, bool bInvisible)
        {
           return CCharacterGetStealth40_user(_this, bInvisible, CCharacterGetStealth40_next);
        };
        int CCharacterGetTotalTol42_wrapper(struct CCharacter* _this, char byAttTolType, int nDamPoint)
        {
           return CCharacterGetTotalTol42_user(_this, byAttTolType, nDamPoint, CCharacterGetTotalTol42_next);
        };
        void CCharacterGo44_wrapper(struct CCharacter* _this)
        {
           CCharacterGo44_user(_this, CCharacterGo44_next);
        };
        void CCharacterInit46_wrapper(struct CCharacter* _this, struct _object_id* pID)
        {
           CCharacterInit46_user(_this, pID, CCharacterInit46_next);
        };
        char CCharacterInsertSFContEffect48_wrapper(struct CCharacter* _this, char byContCode, char byEffectCode, unsigned int dwEffectIndex, uint16_t wDurSec, char byLv, bool* pbUpMty, struct CCharacter* pActChar)
        {
           return CCharacterInsertSFContEffect48_user(_this, byContCode, byEffectCode, dwEffectIndex, wDurSec, byLv, pbUpMty, pActChar, CCharacterInsertSFContEffect48_next);
        };
        int CCharacterInsertSlot50_wrapper(struct CCharacter* _this, struct CCharacter* p, int pos)
        {
           return CCharacterInsertSlot50_user(_this, p, pos, CCharacterInsertSlot50_next);
        };
        bool CCharacterIsDamageEffect52_wrapper(struct CCharacter* _this, unsigned int uiEffectCodeType, uint16_t wEffectIndex)
        {
           return CCharacterIsDamageEffect52_user(_this, uiEffectCodeType, wEffectIndex, CCharacterIsDamageEffect52_next);
        };
        bool CCharacterIsEffectableDst54_wrapper(struct CCharacter* _this, char* psActableDst, struct CCharacter* pDst)
        {
           return CCharacterIsEffectableDst54_user(_this, psActableDst, pDst, CCharacterIsEffectableDst54_next);
        };
        bool CCharacterIsPotionEffectableDst56_wrapper(struct CCharacter* _this, char* psActableDst, struct CCharacter* pDst)
        {
           return CCharacterIsPotionEffectableDst56_user(_this, psActableDst, pDst, CCharacterIsPotionEffectableDst56_next);
        };
        void CCharacterMove58_wrapper(struct CCharacter* _this, float fSpeed)
        {
           CCharacterMove58_user(_this, fSpeed, CCharacterMove58_next);
        };
        void CCharacterMoveBreak60_wrapper(struct CCharacter* _this, float fSpeed)
        {
           CCharacterMoveBreak60_user(_this, fSpeed, CCharacterMoveBreak60_next);
        };
        bool CCharacterRemoveAllContinousEffect62_wrapper(struct CCharacter* _this)
        {
           return CCharacterRemoveAllContinousEffect62_user(_this, CCharacterRemoveAllContinousEffect62_next);
        };
        bool CCharacterRemoveAllContinousEffectGroup64_wrapper(struct CCharacter* _this, unsigned int uiEffectCodeType)
        {
           return CCharacterRemoveAllContinousEffectGroup64_user(_this, uiEffectCodeType, CCharacterRemoveAllContinousEffectGroup64_next);
        };
        void CCharacterRemoveSFContEffect66_wrapper(struct CCharacter* _this, char byContCode, uint16_t wListIndex, bool bInit, bool bAura)
        {
           CCharacterRemoveSFContEffect66_user(_this, byContCode, wListIndex, bInit, bAura, CCharacterRemoveSFContEffect66_next);
        };
        void CCharacterRemoveSFContHelpByEffect68_wrapper(struct CCharacter* _this, int nContParamCode, int nContParamIndex)
        {
           CCharacterRemoveSFContHelpByEffect68_user(_this, nContParamCode, nContParamIndex, CCharacterRemoveSFContHelpByEffect68_next);
        };
        int CCharacterRemoveSlot70_wrapper(struct CCharacter* _this, struct CCharacter* p)
        {
           return CCharacterRemoveSlot70_user(_this, p, CCharacterRemoveSlot70_next);
        };
        void CCharacterResetSlot72_wrapper(struct CCharacter* _this)
        {
           CCharacterResetSlot72_user(_this, CCharacterResetSlot72_next);
        };
        void CCharacterSFContInit74_wrapper(struct CCharacter* _this)
        {
           CCharacterSFContInit74_user(_this, CCharacterSFContInit74_next);
        };
        void CCharacterSendMsg_AttackActEffect76_wrapper(struct CCharacter* _this, char byActEffect, struct CCharacter* pDamer)
        {
           CCharacterSendMsg_AttackActEffect76_user(_this, byActEffect, pDamer, CCharacterSendMsg_AttackActEffect76_next);
        };
        void CCharacterSendMsg_LastEffectChangeInform78_wrapper(struct CCharacter* _this)
        {
           CCharacterSendMsg_LastEffectChangeInform78_user(_this, CCharacterSendMsg_LastEffectChangeInform78_next);
        };
        void CCharacterSendMsg_RobedHP80_wrapper(struct CCharacter* _this, struct CCharacter* pkPerform, uint16_t wRobedHP)
        {
           CCharacterSendMsg_RobedHP80_user(_this, pkPerform, wRobedHP, CCharacterSendMsg_RobedHP80_next);
        };
        void CCharacterSendMsg_StunInform82_wrapper(struct CCharacter* _this)
        {
           CCharacterSendMsg_StunInform82_user(_this, CCharacterSendMsg_StunInform82_next);
        };
        void CCharacterSetNextGenAttTime84_wrapper(struct CCharacter* _this, unsigned int dwNextTime)
        {
           CCharacterSetNextGenAttTime84_user(_this, dwNextTime, CCharacterSetNextGenAttTime84_next);
        };
        bool CCharacterSetTarPos86_wrapper(struct CCharacter* _this, float* fTarPos, bool bColl)
        {
           return CCharacterSetTarPos86_user(_this, fTarPos, bColl, CCharacterSetTarPos86_next);
        };
        void CCharacterStop88_wrapper(struct CCharacter* _this)
        {
           CCharacterStop88_user(_this, CCharacterStop88_next);
        };
        void CCharacterUpdateSFCont90_wrapper(struct CCharacter* _this)
        {
           CCharacterUpdateSFCont90_user(_this, CCharacterUpdateSFCont90_next);
        };
        int CCharacter_GetAreaEffectMember92_wrapper(struct CCharacter* _this, struct CCharacter* pOriDst, bool bBenefit, int nLimitRadius, float* pTar, char* psActableDst, struct CCharacter** ppDsts)
        {
           return CCharacter_GetAreaEffectMember92_user(_this, pOriDst, bBenefit, nLimitRadius, pTar, psActableDst, ppDsts, CCharacter_GetAreaEffectMember92_next);
        };
        int CCharacter_GetFlashEffectMember94_wrapper(struct CCharacter* _this, struct CCharacter* pOriDst, bool bBenefit, int nLimitRadius, int nLimitAngle, struct CCharacter* pOriTar, char* psActableDst, struct CCharacter** ppDsts)
        {
           return CCharacter_GetFlashEffectMember94_user(_this, pOriDst, bBenefit, nLimitRadius, nLimitAngle, pOriTar, psActableDst, ppDsts, CCharacter_GetFlashEffectMember94_next);
        };
        int CCharacter_GetPartyEffectMember96_wrapper(struct CCharacter* _this, struct CCharacter* pOriDst, bool bCircle, struct CCharacter** ppDsts)
        {
           return CCharacter_GetPartyEffectMember96_user(_this, pOriDst, bCircle, ppDsts, CCharacter_GetPartyEffectMember96_next);
        };
        void CCharacter_set_sf_cont98_wrapper(struct CCharacter* _this, struct _sf_continous* pCont, char byEffectCode, uint16_t wEffectIndex, char byLv, unsigned int dwStartSec, uint16_t wDurSec, int nCumulCount)
        {
           CCharacter_set_sf_cont98_user(_this, pCont, byEffectCode, wEffectIndex, byLv, dwStartSec, wDurSec, nCumulCount, CCharacter_set_sf_cont98_next);
        };
        
        void CCharacterdtor_CCharacter103_wrapper(struct CCharacter* _this)
        {
           CCharacterdtor_CCharacter103_user(_this, CCharacterdtor_CCharacter103_next);
        };
        
        ::std::array<hook_record, 50> CCharacter_functions = 
        {
            _hook_record {
                (LPVOID)0x140174d50L,
                (LPVOID *)&CCharacterAlterContDurSec2_user,
                (LPVOID *)&CCharacterAlterContDurSec2_next,
                (LPVOID)cast_pointer_function(CCharacterAlterContDurSec2_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(char, uint16_t, unsigned int, uint16_t))&CCharacter::AlterContDurSec)
            },
            _hook_record {
                (LPVOID)0x140175630L,
                (LPVOID *)&CCharacterAssistForce4_user,
                (LPVOID *)&CCharacterAssistForce4_next,
                (LPVOID)cast_pointer_function(CCharacterAssistForce4_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(struct CCharacter*, struct _force_fld*, int, char*, bool*))&CCharacter::AssistForce)
            },
            _hook_record {
                (LPVOID)0x1401764f0L,
                (LPVOID *)&CCharacterAssistForceToOne6_user,
                (LPVOID *)&CCharacterAssistForceToOne6_next,
                (LPVOID)cast_pointer_function(CCharacterAssistForceToOne6_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(struct CCharacter*, struct _force_fld*, int))&CCharacter::AssistForceToOne)
            },
            _hook_record {
                (LPVOID)0x140175d80L,
                (LPVOID *)&CCharacterAssistSkill8_user,
                (LPVOID *)&CCharacterAssistSkill8_next,
                (LPVOID)cast_pointer_function(CCharacterAssistSkill8_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(struct CCharacter*, int, struct _skill_fld*, int, char*, bool*))&CCharacter::AssistSkill)
            },
            _hook_record {
                (LPVOID)0x140176970L,
                (LPVOID *)&CCharacterAssistSkillToOne10_user,
                (LPVOID *)&CCharacterAssistSkillToOne10_next,
                (LPVOID)cast_pointer_function(CCharacterAssistSkillToOne10_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(struct CCharacter*, int, struct _skill_fld*, int))&CCharacter::AssistSkillToOne)
            },
            _hook_record {
                (LPVOID)0x140175460L,
                (LPVOID *)&CCharacterBreakStealth12_user,
                (LPVOID *)&CCharacterBreakStealth12_next,
                (LPVOID)cast_pointer_function(CCharacterBreakStealth12_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::BreakStealth)
            },
            _hook_record {
                (LPVOID)0x140172230L,
                (LPVOID *)&CCharacterctor_CCharacter14_user,
                (LPVOID *)&CCharacterctor_CCharacter14_next,
                (LPVOID)cast_pointer_function(CCharacterctor_CCharacter14_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::ctor_CCharacter)
            },
            _hook_record {
                (LPVOID)0x140173360L,
                (LPVOID *)&CCharacterCalcDistForSec16_user,
                (LPVOID *)&CCharacterCalcDistForSec16_next,
                (LPVOID)cast_pointer_function(CCharacterCalcDistForSec16_wrapper),
                (LPVOID)cast_pointer_function((float(CCharacter::*)(float, float))&CCharacter::CalcDistForSec)
            },
            _hook_record {
                (LPVOID)0x14007b990L,
                (LPVOID *)&CCharacterCalcEffectBit18_user,
                (LPVOID *)&CCharacterCalcEffectBit18_next,
                (LPVOID)cast_pointer_function(CCharacterCalcEffectBit18_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CCharacter::*)(uint16_t, uint16_t))&CCharacter::CalcEffectBit)
            },
            _hook_record {
                (LPVOID)0x1401725e0L,
                (LPVOID *)&CCharacterCreate20_user,
                (LPVOID *)&CCharacterCreate20_next,
                (LPVOID)cast_pointer_function(CCharacterCreate20_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(struct _character_create_setdata*))&CCharacter::Create)
            },
            _hook_record {
                (LPVOID)0x140172700L,
                (LPVOID *)&CCharacterDestroy22_user,
                (LPVOID *)&CCharacterDestroy22_next,
                (LPVOID)cast_pointer_function(CCharacterDestroy22_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)())&CCharacter::Destroy)
            },
            _hook_record {
                (LPVOID)0x140177010L,
                (LPVOID *)&CCharacterFindEffectDst24_user,
                (LPVOID *)&CCharacterFindEffectDst24_next,
                (LPVOID)cast_pointer_function(CCharacterFindEffectDst24_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(int, int, int, bool, struct CCharacter*, char*, struct CCharacter**))&CCharacter::FindEffectDst)
            },
            _hook_record {
                (LPVOID)0x140177200L,
                (LPVOID *)&CCharacterFindPotionEffectDst26_user,
                (LPVOID *)&CCharacterFindPotionEffectDst26_next,
                (LPVOID)cast_pointer_function(CCharacterFindPotionEffectDst26_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(int, int, bool, struct CCharacter*, char*, struct CCharacter**, bool*))&CCharacter::FindPotionEffectDst)
            },
            _hook_record {
                (LPVOID)0x1401727a0L,
                (LPVOID *)&CCharacterGetAttackDamPoint28_user,
                (LPVOID *)&CCharacterGetAttackDamPoint28_next,
                (LPVOID)cast_pointer_function(CCharacterGetAttackDamPoint28_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(int, int, int, struct CCharacter*, bool))&CCharacter::GetAttackDamPoint)
            },
            _hook_record {
                (LPVOID)0x140173630L,
                (LPVOID *)&CCharacterGetAttackRandomPart30_user,
                (LPVOID *)&CCharacterGetAttackRandomPart30_next,
                (LPVOID)cast_pointer_function(CCharacterGetAttackRandomPart30_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)())&CCharacter::GetAttackRandomPart)
            },
            _hook_record {
                (LPVOID)0x1401753e0L,
                (LPVOID *)&CCharacterGetInvisible32_user,
                (LPVOID *)&CCharacterGetInvisible32_next,
                (LPVOID)cast_pointer_function(CCharacterGetInvisible32_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)())&CCharacter::GetInvisible)
            },
            _hook_record {
                (LPVOID)0x140173720L,
                (LPVOID *)&CCharacterGetNearEmptySlot34_user,
                (LPVOID *)&CCharacterGetNearEmptySlot34_next,
                (LPVOID)cast_pointer_function(CCharacterGetNearEmptySlot34_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(int, float, float*, float*))&CCharacter::GetNearEmptySlot)
            },
            _hook_record {
                (LPVOID)0x140132a00L,
                (LPVOID *)&CCharacterGetNextGenAttTime36_user,
                (LPVOID *)&CCharacterGetNextGenAttTime36_next,
                (LPVOID)cast_pointer_function(CCharacterGetNextGenAttTime36_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CCharacter::*)())&CCharacter::GetNextGenAttTime)
            },
            _hook_record {
                (LPVOID)0x140173b40L,
                (LPVOID *)&CCharacterGetSlot38_user,
                (LPVOID *)&CCharacterGetSlot38_next,
                (LPVOID)cast_pointer_function(CCharacterGetSlot38_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(struct CCharacter*))&CCharacter::GetSlot)
            },
            _hook_record {
                (LPVOID)0x140175310L,
                (LPVOID *)&CCharacterGetStealth40_user,
                (LPVOID *)&CCharacterGetStealth40_next,
                (LPVOID)cast_pointer_function(CCharacterGetStealth40_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(bool))&CCharacter::GetStealth)
            },
            _hook_record {
                (LPVOID)0x1401733b0L,
                (LPVOID *)&CCharacterGetTotalTol42_user,
                (LPVOID *)&CCharacterGetTotalTol42_next,
                (LPVOID)cast_pointer_function(CCharacterGetTotalTol42_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(char, int))&CCharacter::GetTotalTol)
            },
            _hook_record {
                (LPVOID)0x140173330L,
                (LPVOID *)&CCharacterGo44_user,
                (LPVOID *)&CCharacterGo44_next,
                (LPVOID)cast_pointer_function(CCharacterGo44_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::Go)
            },
            _hook_record {
                (LPVOID)0x140172440L,
                (LPVOID *)&CCharacterInit46_user,
                (LPVOID *)&CCharacterInit46_next,
                (LPVOID)cast_pointer_function(CCharacterInit46_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(struct _object_id*))&CCharacter::Init)
            },
            _hook_record {
                (LPVOID)0x140173d90L,
                (LPVOID *)&CCharacterInsertSFContEffect48_user,
                (LPVOID *)&CCharacterInsertSFContEffect48_next,
                (LPVOID)cast_pointer_function(CCharacterInsertSFContEffect48_wrapper),
                (LPVOID)cast_pointer_function((char(CCharacter::*)(char, char, unsigned int, uint16_t, char, bool*, struct CCharacter*))&CCharacter::InsertSFContEffect)
            },
            _hook_record {
                (LPVOID)0x140173a10L,
                (LPVOID *)&CCharacterInsertSlot50_user,
                (LPVOID *)&CCharacterInsertSlot50_next,
                (LPVOID)cast_pointer_function(CCharacterInsertSlot50_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(struct CCharacter*, int))&CCharacter::InsertSlot)
            },
            _hook_record {
                (LPVOID)0x140178690L,
                (LPVOID *)&CCharacterIsDamageEffect52_user,
                (LPVOID *)&CCharacterIsDamageEffect52_next,
                (LPVOID)cast_pointer_function(CCharacterIsDamageEffect52_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(unsigned int, uint16_t))&CCharacter::IsDamageEffect)
            },
            _hook_record {
                (LPVOID)0x140177e60L,
                (LPVOID *)&CCharacterIsEffectableDst54_user,
                (LPVOID *)&CCharacterIsEffectableDst54_next,
                (LPVOID)cast_pointer_function(CCharacterIsEffectableDst54_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(char*, struct CCharacter*))&CCharacter::IsEffectableDst)
            },
            _hook_record {
                (LPVOID)0x140178270L,
                (LPVOID *)&CCharacterIsPotionEffectableDst56_user,
                (LPVOID *)&CCharacterIsPotionEffectableDst56_next,
                (LPVOID)cast_pointer_function(CCharacterIsPotionEffectableDst56_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(char*, struct CCharacter*))&CCharacter::IsPotionEffectableDst)
            },
            _hook_record {
                (LPVOID)0x140172c50L,
                (LPVOID *)&CCharacterMove58_user,
                (LPVOID *)&CCharacterMove58_next,
                (LPVOID)cast_pointer_function(CCharacterMove58_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(float))&CCharacter::Move)
            },
            _hook_record {
                (LPVOID)0x1401730b0L,
                (LPVOID *)&CCharacterMoveBreak60_user,
                (LPVOID *)&CCharacterMoveBreak60_next,
                (LPVOID)cast_pointer_function(CCharacterMoveBreak60_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(float))&CCharacter::MoveBreak)
            },
            _hook_record {
                (LPVOID)0x1401787c0L,
                (LPVOID *)&CCharacterRemoveAllContinousEffect62_user,
                (LPVOID *)&CCharacterRemoveAllContinousEffect62_next,
                (LPVOID)cast_pointer_function(CCharacterRemoveAllContinousEffect62_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)())&CCharacter::RemoveAllContinousEffect)
            },
            _hook_record {
                (LPVOID)0x140178830L,
                (LPVOID *)&CCharacterRemoveAllContinousEffectGroup64_user,
                (LPVOID *)&CCharacterRemoveAllContinousEffectGroup64_next,
                (LPVOID)cast_pointer_function(CCharacterRemoveAllContinousEffectGroup64_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(unsigned int))&CCharacter::RemoveAllContinousEffectGroup)
            },
            _hook_record {
                (LPVOID)0x140174930L,
                (LPVOID *)&CCharacterRemoveSFContEffect66_user,
                (LPVOID *)&CCharacterRemoveSFContEffect66_next,
                (LPVOID)cast_pointer_function(CCharacterRemoveSFContEffect66_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(char, uint16_t, bool, bool))&CCharacter::RemoveSFContEffect)
            },
            _hook_record {
                (LPVOID)0x140174bd0L,
                (LPVOID *)&CCharacterRemoveSFContHelpByEffect68_user,
                (LPVOID *)&CCharacterRemoveSFContHelpByEffect68_next,
                (LPVOID)cast_pointer_function(CCharacterRemoveSFContHelpByEffect68_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(int, int))&CCharacter::RemoveSFContHelpByEffect)
            },
            _hook_record {
                (LPVOID)0x140173aa0L,
                (LPVOID *)&CCharacterRemoveSlot70_user,
                (LPVOID *)&CCharacterRemoveSlot70_next,
                (LPVOID)cast_pointer_function(CCharacterRemoveSlot70_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(struct CCharacter*))&CCharacter::RemoveSlot)
            },
            _hook_record {
                (LPVOID)0x140173bb0L,
                (LPVOID *)&CCharacterResetSlot72_user,
                (LPVOID *)&CCharacterResetSlot72_next,
                (LPVOID)cast_pointer_function(CCharacterResetSlot72_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::ResetSlot)
            },
            _hook_record {
                (LPVOID)0x140175500L,
                (LPVOID *)&CCharacterSFContInit74_user,
                (LPVOID *)&CCharacterSFContInit74_next,
                (LPVOID)cast_pointer_function(CCharacterSFContInit74_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::SFContInit)
            },
            _hook_record {
                (LPVOID)0x140176f40L,
                (LPVOID *)&CCharacterSendMsg_AttackActEffect76_user,
                (LPVOID *)&CCharacterSendMsg_AttackActEffect76_next,
                (LPVOID)cast_pointer_function(CCharacterSendMsg_AttackActEffect76_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(char, struct CCharacter*))&CCharacter::SendMsg_AttackActEffect)
            },
            _hook_record {
                (LPVOID)0x140176ea0L,
                (LPVOID *)&CCharacterSendMsg_LastEffectChangeInform78_user,
                (LPVOID *)&CCharacterSendMsg_LastEffectChangeInform78_next,
                (LPVOID)cast_pointer_function(CCharacterSendMsg_LastEffectChangeInform78_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::SendMsg_LastEffectChangeInform)
            },
            _hook_record {
                (LPVOID)0x140178910L,
                (LPVOID *)&CCharacterSendMsg_RobedHP80_user,
                (LPVOID *)&CCharacterSendMsg_RobedHP80_next,
                (LPVOID)cast_pointer_function(CCharacterSendMsg_RobedHP80_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(struct CCharacter*, uint16_t))&CCharacter::SendMsg_RobedHP)
            },
            _hook_record {
                (LPVOID)0x140176e00L,
                (LPVOID *)&CCharacterSendMsg_StunInform82_user,
                (LPVOID *)&CCharacterSendMsg_StunInform82_next,
                (LPVOID)cast_pointer_function(CCharacterSendMsg_StunInform82_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::SendMsg_StunInform)
            },
            _hook_record {
                (LPVOID)0x140132a20L,
                (LPVOID *)&CCharacterSetNextGenAttTime84_user,
                (LPVOID *)&CCharacterSetNextGenAttTime84_next,
                (LPVOID)cast_pointer_function(CCharacterSetNextGenAttTime84_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(unsigned int))&CCharacter::SetNextGenAttTime)
            },
            _hook_record {
                (LPVOID)0x140173190L,
                (LPVOID *)&CCharacterSetTarPos86_user,
                (LPVOID *)&CCharacterSetTarPos86_next,
                (LPVOID)cast_pointer_function(CCharacterSetTarPos86_wrapper),
                (LPVOID)cast_pointer_function((bool(CCharacter::*)(float*, bool))&CCharacter::SetTarPos)
            },
            _hook_record {
                (LPVOID)0x1401732c0L,
                (LPVOID *)&CCharacterStop88_user,
                (LPVOID *)&CCharacterStop88_next,
                (LPVOID)cast_pointer_function(CCharacterStop88_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::Stop)
            },
            _hook_record {
                (LPVOID)0x140174de0L,
                (LPVOID *)&CCharacterUpdateSFCont90_user,
                (LPVOID *)&CCharacterUpdateSFCont90_next,
                (LPVOID)cast_pointer_function(CCharacterUpdateSFCont90_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::UpdateSFCont)
            },
            _hook_record {
                (LPVOID)0x140177440L,
                (LPVOID *)&CCharacter_GetAreaEffectMember92_user,
                (LPVOID *)&CCharacter_GetAreaEffectMember92_next,
                (LPVOID)cast_pointer_function(CCharacter_GetAreaEffectMember92_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(struct CCharacter*, bool, int, float*, char*, struct CCharacter**))&CCharacter::_GetAreaEffectMember)
            },
            _hook_record {
                (LPVOID)0x140177970L,
                (LPVOID *)&CCharacter_GetFlashEffectMember94_user,
                (LPVOID *)&CCharacter_GetFlashEffectMember94_next,
                (LPVOID)cast_pointer_function(CCharacter_GetFlashEffectMember94_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(struct CCharacter*, bool, int, int, struct CCharacter*, char*, struct CCharacter**))&CCharacter::_GetFlashEffectMember)
            },
            _hook_record {
                (LPVOID)0x140177e40L,
                (LPVOID *)&CCharacter_GetPartyEffectMember96_user,
                (LPVOID *)&CCharacter_GetPartyEffectMember96_next,
                (LPVOID)cast_pointer_function(CCharacter_GetPartyEffectMember96_wrapper),
                (LPVOID)cast_pointer_function((int(CCharacter::*)(struct CCharacter*, bool, struct CCharacter**))&CCharacter::_GetPartyEffectMember)
            },
            _hook_record {
                (LPVOID)0x1401750d0L,
                (LPVOID *)&CCharacter_set_sf_cont98_user,
                (LPVOID *)&CCharacter_set_sf_cont98_next,
                (LPVOID)cast_pointer_function(CCharacter_set_sf_cont98_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)(struct _sf_continous*, char, uint16_t, char, unsigned int, uint16_t, int))&CCharacter::_set_sf_cont)
            },
            _hook_record {
                (LPVOID)0x140172360L,
                (LPVOID *)&CCharacterdtor_CCharacter103_user,
                (LPVOID *)&CCharacterdtor_CCharacter103_next,
                (LPVOID)cast_pointer_function(CCharacterdtor_CCharacter103_wrapper),
                (LPVOID)cast_pointer_function((void(CCharacter::*)())&CCharacter::dtor_CCharacter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
