#include <DfAIMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::DfAIMgrAction_Attack_OnLoop2_ptr DfAIMgrAction_Attack_OnLoop2_next(nullptr);
        Info::DfAIMgrAction_Attack_OnLoop2_clbk DfAIMgrAction_Attack_OnLoop2_user(nullptr);
        
        Info::DfAIMgrAction_Change_Handler4_ptr DfAIMgrAction_Change_Handler4_next(nullptr);
        Info::DfAIMgrAction_Change_Handler4_clbk DfAIMgrAction_Change_Handler4_user(nullptr);
        
        Info::DfAIMgrAction_Patrol_OnLoop6_ptr DfAIMgrAction_Patrol_OnLoop6_next(nullptr);
        Info::DfAIMgrAction_Patrol_OnLoop6_clbk DfAIMgrAction_Patrol_OnLoop6_user(nullptr);
        
        Info::DfAIMgrAction_Runaway_OnLoop8_ptr DfAIMgrAction_Runaway_OnLoop8_next(nullptr);
        Info::DfAIMgrAction_Runaway_OnLoop8_clbk DfAIMgrAction_Runaway_OnLoop8_user(nullptr);
        
        Info::DfAIMgrAction_Wait_OnLoop10_ptr DfAIMgrAction_Wait_OnLoop10_next(nullptr);
        Info::DfAIMgrAction_Wait_OnLoop10_clbk DfAIMgrAction_Wait_OnLoop10_user(nullptr);
        
        Info::DfAIMgrAssist_OnChange12_ptr DfAIMgrAssist_OnChange12_next(nullptr);
        Info::DfAIMgrAssist_OnChange12_clbk DfAIMgrAssist_OnChange12_user(nullptr);
        
        Info::DfAIMgrAssist_OnLoop14_ptr DfAIMgrAssist_OnLoop14_next(nullptr);
        Info::DfAIMgrAssist_OnLoop14_clbk DfAIMgrAssist_OnLoop14_user(nullptr);
        
        Info::DfAIMgrAtp_Lost_Handler16_ptr DfAIMgrAtp_Lost_Handler16_next(nullptr);
        Info::DfAIMgrAtp_Lost_Handler16_clbk DfAIMgrAtp_Lost_Handler16_user(nullptr);
        
        Info::DfAIMgrAtp_SearchStart_OnLoop18_ptr DfAIMgrAtp_SearchStart_OnLoop18_next(nullptr);
        Info::DfAIMgrAtp_SearchStart_OnLoop18_clbk DfAIMgrAtp_SearchStart_OnLoop18_user(nullptr);
        
        Info::DfAIMgrAtp_Searched_Handler20_ptr DfAIMgrAtp_Searched_Handler20_next(nullptr);
        Info::DfAIMgrAtp_Searched_Handler20_clbk DfAIMgrAtp_Searched_Handler20_user(nullptr);
        
        Info::DfAIMgrChangeTargetPos22_ptr DfAIMgrChangeTargetPos22_next(nullptr);
        Info::DfAIMgrChangeTargetPos22_clbk DfAIMgrChangeTargetPos22_user(nullptr);
        
        Info::DfAIMgrCheckAlienation24_ptr DfAIMgrCheckAlienation24_next(nullptr);
        Info::DfAIMgrCheckAlienation24_clbk DfAIMgrCheckAlienation24_user(nullptr);
        
        Info::DfAIMgrCheckEmotionBad26_ptr DfAIMgrCheckEmotionBad26_next(nullptr);
        Info::DfAIMgrCheckEmotionBad26_clbk DfAIMgrCheckEmotionBad26_user(nullptr);
        
        Info::DfAIMgrCheckGen28_ptr DfAIMgrCheckGen28_next(nullptr);
        Info::DfAIMgrCheckGen28_clbk DfAIMgrCheckGen28_user(nullptr);
        
        Info::DfAIMgrCheckMonArea_N_ChangeState30_ptr DfAIMgrCheckMonArea_N_ChangeState30_next(nullptr);
        Info::DfAIMgrCheckMonArea_N_ChangeState30_clbk DfAIMgrCheckMonArea_N_ChangeState30_user(nullptr);
        
        Info::DfAIMgrCheckSPF32_ptr DfAIMgrCheckSPF32_next(nullptr);
        Info::DfAIMgrCheckSPF32_clbk DfAIMgrCheckSPF32_user(nullptr);
        
        Info::DfAIMgrCheckSPFDelayTime34_ptr DfAIMgrCheckSPFDelayTime34_next(nullptr);
        Info::DfAIMgrCheckSPFDelayTime34_clbk DfAIMgrCheckSPFDelayTime34_user(nullptr);
        
        Info::DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_ptr DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_next(nullptr);
        Info::DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_clbk DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_user(nullptr);
        
        Info::DfAIMgrCheckSPF_MON_MOTIVE_DF38_ptr DfAIMgrCheckSPF_MON_MOTIVE_DF38_next(nullptr);
        Info::DfAIMgrCheckSPF_MON_MOTIVE_DF38_clbk DfAIMgrCheckSPF_MON_MOTIVE_DF38_user(nullptr);
        
        Info::DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_ptr DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_next(nullptr);
        Info::DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_clbk DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_user(nullptr);
        
        Info::DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_ptr DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_next(nullptr);
        Info::DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_clbk DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_user(nullptr);
        
        Info::DfAIMgrCondition_OnChange44_ptr DfAIMgrCondition_OnChange44_next(nullptr);
        Info::DfAIMgrCondition_OnChange44_clbk DfAIMgrCondition_OnChange44_user(nullptr);
        
        Info::DfAIMgrCondition_OnLoop46_ptr DfAIMgrCondition_OnLoop46_next(nullptr);
        Info::DfAIMgrCondition_OnLoop46_clbk DfAIMgrCondition_OnLoop46_user(nullptr);
        
        
        Info::DfAIMgrctor_DfAIMgr48_ptr DfAIMgrctor_DfAIMgr48_next(nullptr);
        Info::DfAIMgrctor_DfAIMgr48_clbk DfAIMgrctor_DfAIMgr48_user(nullptr);
        
        Info::DfAIMgrEmotion_OnChange50_ptr DfAIMgrEmotion_OnChange50_next(nullptr);
        Info::DfAIMgrEmotion_OnChange50_clbk DfAIMgrEmotion_OnChange50_user(nullptr);
        
        Info::DfAIMgrEmotion_OnLoop52_ptr DfAIMgrEmotion_OnLoop52_next(nullptr);
        Info::DfAIMgrEmotion_OnLoop52_clbk DfAIMgrEmotion_OnLoop52_user(nullptr);
        
        Info::DfAIMgrGetWisdomTarget54_ptr DfAIMgrGetWisdomTarget54_next(nullptr);
        Info::DfAIMgrGetWisdomTarget54_clbk DfAIMgrGetWisdomTarget54_user(nullptr);
        
        Info::DfAIMgrMon_SearchStart_OnLoop56_ptr DfAIMgrMon_SearchStart_OnLoop56_next(nullptr);
        Info::DfAIMgrMon_SearchStart_OnLoop56_clbk DfAIMgrMon_SearchStart_OnLoop56_user(nullptr);
        
        Info::DfAIMgrMon_Searched_Handler58_ptr DfAIMgrMon_Searched_Handler58_next(nullptr);
        Info::DfAIMgrMon_Searched_Handler58_clbk DfAIMgrMon_Searched_Handler58_user(nullptr);
        
        Info::DfAIMgrMv_Go_OnLoop60_ptr DfAIMgrMv_Go_OnLoop60_next(nullptr);
        Info::DfAIMgrMv_Go_OnLoop60_clbk DfAIMgrMv_Go_OnLoop60_user(nullptr);
        
        Info::DfAIMgrMv_Stop_Handler62_ptr DfAIMgrMv_Stop_Handler62_next(nullptr);
        Info::DfAIMgrMv_Stop_Handler62_clbk DfAIMgrMv_Stop_Handler62_user(nullptr);
        
        Info::DfAIMgrOnDFInitHFSM64_ptr DfAIMgrOnDFInitHFSM64_next(nullptr);
        Info::DfAIMgrOnDFInitHFSM64_clbk DfAIMgrOnDFInitHFSM64_user(nullptr);
        
        Info::DfAIMgrOnDfExternCallFun66_ptr DfAIMgrOnDfExternCallFun66_next(nullptr);
        Info::DfAIMgrOnDfExternCallFun66_clbk DfAIMgrOnDfExternCallFun66_user(nullptr);
        
        Info::DfAIMgrOnUsStateTBLInit68_ptr DfAIMgrOnUsStateTBLInit68_next(nullptr);
        Info::DfAIMgrOnUsStateTBLInit68_clbk DfAIMgrOnUsStateTBLInit68_user(nullptr);
        
        Info::DfAIMgrSearchCharacterPath70_ptr DfAIMgrSearchCharacterPath70_next(nullptr);
        Info::DfAIMgrSearchCharacterPath70_clbk DfAIMgrSearchCharacterPath70_user(nullptr);
        
        Info::DfAIMgrSearchPatrollPath72_ptr DfAIMgrSearchPatrollPath72_next(nullptr);
        Info::DfAIMgrSearchPatrollPath72_clbk DfAIMgrSearchPatrollPath72_user(nullptr);
        
        Info::DfAIMgrUseSkill_Target74_ptr DfAIMgrUseSkill_Target74_next(nullptr);
        Info::DfAIMgrUseSkill_Target74_clbk DfAIMgrUseSkill_Target74_user(nullptr);
        
        
        Info::DfAIMgrdtor_DfAIMgr79_ptr DfAIMgrdtor_DfAIMgr79_next(nullptr);
        Info::DfAIMgrdtor_DfAIMgr79_clbk DfAIMgrdtor_DfAIMgr79_user(nullptr);
        
        void DfAIMgrAction_Attack_OnLoop2_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAction_Attack_OnLoop2_user(pHFS, dwEvent, lpParam, DfAIMgrAction_Attack_OnLoop2_next);
        };
        void DfAIMgrAction_Change_Handler4_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAction_Change_Handler4_user(pHFS, dwEvent, lpParam, DfAIMgrAction_Change_Handler4_next);
        };
        void DfAIMgrAction_Patrol_OnLoop6_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAction_Patrol_OnLoop6_user(pHFS, dwEvent, lpParam, DfAIMgrAction_Patrol_OnLoop6_next);
        };
        void DfAIMgrAction_Runaway_OnLoop8_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAction_Runaway_OnLoop8_user(pHFS, dwEvent, lpParam, DfAIMgrAction_Runaway_OnLoop8_next);
        };
        void DfAIMgrAction_Wait_OnLoop10_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAction_Wait_OnLoop10_user(pHFS, dwEvent, lpParam, DfAIMgrAction_Wait_OnLoop10_next);
        };
        void DfAIMgrAssist_OnChange12_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAssist_OnChange12_user(pHFS, dwEvent, lpParam, DfAIMgrAssist_OnChange12_next);
        };
        void DfAIMgrAssist_OnLoop14_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAssist_OnLoop14_user(pHFS, dwEvent, lpParam, DfAIMgrAssist_OnLoop14_next);
        };
        void DfAIMgrAtp_Lost_Handler16_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAtp_Lost_Handler16_user(pHFS, dwEvent, lpParam, DfAIMgrAtp_Lost_Handler16_next);
        };
        void DfAIMgrAtp_SearchStart_OnLoop18_wrapper(struct Us_HFSM* p, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAtp_SearchStart_OnLoop18_user(p, dwEvent, lpParam, DfAIMgrAtp_SearchStart_OnLoop18_next);
        };
        void DfAIMgrAtp_Searched_Handler20_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrAtp_Searched_Handler20_user(pHFS, dwEvent, lpParam, DfAIMgrAtp_Searched_Handler20_next);
        };
        void DfAIMgrChangeTargetPos22_wrapper(struct CMonster* pMon, float* pTarPos)
        {
           DfAIMgrChangeTargetPos22_user(pMon, pTarPos, DfAIMgrChangeTargetPos22_next);
        };
        int DfAIMgrCheckAlienation24_wrapper(struct CMonster* pMon)
        {
           return DfAIMgrCheckAlienation24_user(pMon, DfAIMgrCheckAlienation24_next);
        };
        int DfAIMgrCheckEmotionBad26_wrapper(struct CMonster* pMon, struct CMonsterAI* pAI, int nDamage)
        {
           return DfAIMgrCheckEmotionBad26_user(pMon, pAI, nDamage, DfAIMgrCheckEmotionBad26_next);
        };
        int DfAIMgrCheckGen28_wrapper(struct CMonsterAI* pAI, struct CMonster* pMon)
        {
           return DfAIMgrCheckGen28_user(pAI, pMon, DfAIMgrCheckGen28_next);
        };
        int DfAIMgrCheckMonArea_N_ChangeState30_wrapper(struct CMonsterAI* pAI, struct CMonster* pMon, int bAttackState)
        {
           return DfAIMgrCheckMonArea_N_ChangeState30_user(pAI, pMon, bAttackState, DfAIMgrCheckMonArea_N_ChangeState30_next);
        };
        int DfAIMgrCheckSPF32_wrapper(struct CMonsterAI* pAI, struct CMonster* pMon)
        {
           return DfAIMgrCheckSPF32_user(pAI, pMon, DfAIMgrCheckSPF32_next);
        };
        int DfAIMgrCheckSPFDelayTime34_wrapper(struct CMonsterAI* pAI, int nAttackType, unsigned int dwLoopTime)
        {
           return DfAIMgrCheckSPFDelayTime34_user(pAI, nAttackType, dwLoopTime, DfAIMgrCheckSPFDelayTime34_next);
        };
        int DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_wrapper(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
        {
           return DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_user(pSkill, nMotiveValue, pAI, pMon, ppTar, DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_next);
        };
        int DfAIMgrCheckSPF_MON_MOTIVE_DF38_wrapper(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
        {
           return DfAIMgrCheckSPF_MON_MOTIVE_DF38_user(pSkill, nMotiveValue, pAI, pMon, ppTar, DfAIMgrCheckSPF_MON_MOTIVE_DF38_next);
        };
        int DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_wrapper(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
        {
           return DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_user(pSkill, nMotiveValue, pAI, pMon, ppTar, DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_next);
        };
        int DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_wrapper(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
        {
           return DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_user(pSkill, nMotiveValue, pAI, pMon, ppTar, DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_next);
        };
        void DfAIMgrCondition_OnChange44_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrCondition_OnChange44_user(pHFS, dwEvent, lpParam, DfAIMgrCondition_OnChange44_next);
        };
        void DfAIMgrCondition_OnLoop46_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrCondition_OnLoop46_user(pHFS, dwEvent, lpParam, DfAIMgrCondition_OnLoop46_next);
        };
        
        void DfAIMgrctor_DfAIMgr48_wrapper(struct DfAIMgr* _this)
        {
           DfAIMgrctor_DfAIMgr48_user(_this, DfAIMgrctor_DfAIMgr48_next);
        };
        void DfAIMgrEmotion_OnChange50_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrEmotion_OnChange50_user(pHFS, dwEvent, lpParam, DfAIMgrEmotion_OnChange50_next);
        };
        void DfAIMgrEmotion_OnLoop52_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrEmotion_OnLoop52_user(pHFS, dwEvent, lpParam, DfAIMgrEmotion_OnLoop52_next);
        };
        struct CCharacter* DfAIMgrGetWisdomTarget54_wrapper(int nDstCaseType, struct CMonsterAI* pAI, struct CMonster* pMon)
        {
           return DfAIMgrGetWisdomTarget54_user(nDstCaseType, pAI, pMon, DfAIMgrGetWisdomTarget54_next);
        };
        void DfAIMgrMon_SearchStart_OnLoop56_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrMon_SearchStart_OnLoop56_user(pHFS, dwEvent, lpParam, DfAIMgrMon_SearchStart_OnLoop56_next);
        };
        void DfAIMgrMon_Searched_Handler58_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrMon_Searched_Handler58_user(pHFS, dwEvent, lpParam, DfAIMgrMon_Searched_Handler58_next);
        };
        void DfAIMgrMv_Go_OnLoop60_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrMv_Go_OnLoop60_user(pHFS, dwEvent, lpParam, DfAIMgrMv_Go_OnLoop60_next);
        };
        void DfAIMgrMv_Stop_Handler62_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
        {
           DfAIMgrMv_Stop_Handler62_user(pHFS, dwEvent, lpParam, DfAIMgrMv_Stop_Handler62_next);
        };
        int DfAIMgrOnDFInitHFSM64_wrapper(struct UsStateTBL* pStateTBL, struct Us_HFSM* pHFSM)
        {
           return DfAIMgrOnDFInitHFSM64_user(pStateTBL, pHFSM, DfAIMgrOnDFInitHFSM64_next);
        };
        void DfAIMgrOnDfExternCallFun66_wrapper(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam, int nParam)
        {
           DfAIMgrOnDfExternCallFun66_user(pHFS, dwEvent, lpParam, nParam, DfAIMgrOnDfExternCallFun66_next);
        };
        int DfAIMgrOnUsStateTBLInit68_wrapper()
        {
           return DfAIMgrOnUsStateTBLInit68_user(DfAIMgrOnUsStateTBLInit68_next);
        };
        bool DfAIMgrSearchCharacterPath70_wrapper(struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter* pTarget)
        {
           return DfAIMgrSearchCharacterPath70_user(pAI, pMon, pTarget, DfAIMgrSearchCharacterPath70_next);
        };
        void DfAIMgrSearchPatrollPath72_wrapper(struct CMonsterAI* pAI, struct CMonster* pMon)
        {
           DfAIMgrSearchPatrollPath72_user(pAI, pMon, DfAIMgrSearchPatrollPath72_next);
        };
        int DfAIMgrUseSkill_Target74_wrapper(struct CMonster* pMon, struct CCharacter* pTarget, struct CMonsterSkill* pSkill)
        {
           return DfAIMgrUseSkill_Target74_user(pMon, pTarget, pSkill, DfAIMgrUseSkill_Target74_next);
        };
        
        void DfAIMgrdtor_DfAIMgr79_wrapper(struct DfAIMgr* _this)
        {
           DfAIMgrdtor_DfAIMgr79_user(_this, DfAIMgrdtor_DfAIMgr79_next);
        };
        
        ::std::array<hook_record, 38> DfAIMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x1401518e0L,
                (LPVOID *)&DfAIMgrAction_Attack_OnLoop2_user,
                (LPVOID *)&DfAIMgrAction_Attack_OnLoop2_next,
                (LPVOID)cast_pointer_function(DfAIMgrAction_Attack_OnLoop2_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Action_Attack_OnLoop)
            },
            _hook_record {
                (LPVOID)0x1401514b0L,
                (LPVOID *)&DfAIMgrAction_Change_Handler4_user,
                (LPVOID *)&DfAIMgrAction_Change_Handler4_next,
                (LPVOID)cast_pointer_function(DfAIMgrAction_Change_Handler4_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Action_Change_Handler)
            },
            _hook_record {
                (LPVOID)0x140151740L,
                (LPVOID *)&DfAIMgrAction_Patrol_OnLoop6_user,
                (LPVOID *)&DfAIMgrAction_Patrol_OnLoop6_next,
                (LPVOID)cast_pointer_function(DfAIMgrAction_Patrol_OnLoop6_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Action_Patrol_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140151c40L,
                (LPVOID *)&DfAIMgrAction_Runaway_OnLoop8_user,
                (LPVOID *)&DfAIMgrAction_Runaway_OnLoop8_next,
                (LPVOID)cast_pointer_function(DfAIMgrAction_Runaway_OnLoop8_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Action_Runaway_OnLoop)
            },
            _hook_record {
                (LPVOID)0x1401516b0L,
                (LPVOID *)&DfAIMgrAction_Wait_OnLoop10_user,
                (LPVOID *)&DfAIMgrAction_Wait_OnLoop10_next,
                (LPVOID)cast_pointer_function(DfAIMgrAction_Wait_OnLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Action_Wait_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140151f30L,
                (LPVOID *)&DfAIMgrAssist_OnChange12_user,
                (LPVOID *)&DfAIMgrAssist_OnChange12_next,
                (LPVOID)cast_pointer_function(DfAIMgrAssist_OnChange12_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Assist_OnChange)
            },
            _hook_record {
                (LPVOID)0x1401520c0L,
                (LPVOID *)&DfAIMgrAssist_OnLoop14_user,
                (LPVOID *)&DfAIMgrAssist_OnLoop14_next,
                (LPVOID)cast_pointer_function(DfAIMgrAssist_OnLoop14_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Assist_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140150910L,
                (LPVOID *)&DfAIMgrAtp_Lost_Handler16_user,
                (LPVOID *)&DfAIMgrAtp_Lost_Handler16_next,
                (LPVOID)cast_pointer_function(DfAIMgrAtp_Lost_Handler16_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Atp_Lost_Handler)
            },
            _hook_record {
                (LPVOID)0x1401506c0L,
                (LPVOID *)&DfAIMgrAtp_SearchStart_OnLoop18_user,
                (LPVOID *)&DfAIMgrAtp_SearchStart_OnLoop18_next,
                (LPVOID)cast_pointer_function(DfAIMgrAtp_SearchStart_OnLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Atp_SearchStart_OnLoop)
            },
            _hook_record {
                (LPVOID)0x1401507f0L,
                (LPVOID *)&DfAIMgrAtp_Searched_Handler20_user,
                (LPVOID *)&DfAIMgrAtp_Searched_Handler20_next,
                (LPVOID)cast_pointer_function(DfAIMgrAtp_Searched_Handler20_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Atp_Searched_Handler)
            },
            _hook_record {
                (LPVOID)0x140150e20L,
                (LPVOID *)&DfAIMgrChangeTargetPos22_user,
                (LPVOID *)&DfAIMgrChangeTargetPos22_next,
                (LPVOID)cast_pointer_function(DfAIMgrChangeTargetPos22_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CMonster*, float*))&DfAIMgr::ChangeTargetPos)
            },
            _hook_record {
                (LPVOID)0x140151260L,
                (LPVOID *)&DfAIMgrCheckAlienation24_user,
                (LPVOID *)&DfAIMgrCheckAlienation24_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckAlienation24_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*))&DfAIMgr::CheckAlienation)
            },
            _hook_record {
                (LPVOID)0x140151090L,
                (LPVOID *)&DfAIMgrCheckEmotionBad26_user,
                (LPVOID *)&DfAIMgrCheckEmotionBad26_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckEmotionBad26_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*, struct CMonsterAI*, int))&DfAIMgr::CheckEmotionBad)
            },
            _hook_record {
                (LPVOID)0x140152e40L,
                (LPVOID *)&DfAIMgrCheckGen28_user,
                (LPVOID *)&DfAIMgrCheckGen28_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckGen28_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterAI*, struct CMonster*))&DfAIMgr::CheckGen)
            },
            _hook_record {
                (LPVOID)0x140153350L,
                (LPVOID *)&DfAIMgrCheckMonArea_N_ChangeState30_user,
                (LPVOID *)&DfAIMgrCheckMonArea_N_ChangeState30_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckMonArea_N_ChangeState30_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterAI*, struct CMonster*, int))&DfAIMgr::CheckMonArea_N_ChangeState)
            },
            _hook_record {
                (LPVOID)0x140152150L,
                (LPVOID *)&DfAIMgrCheckSPF32_user,
                (LPVOID *)&DfAIMgrCheckSPF32_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckSPF32_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterAI*, struct CMonster*))&DfAIMgr::CheckSPF)
            },
            _hook_record {
                (LPVOID)0x140151850L,
                (LPVOID *)&DfAIMgrCheckSPFDelayTime34_user,
                (LPVOID *)&DfAIMgrCheckSPFDelayTime34_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckSPFDelayTime34_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterAI*, int, unsigned int))&DfAIMgr::CheckSPFDelayTime)
            },
            _hook_record {
                (LPVOID)0x140152c60L,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_user,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**))&DfAIMgr::CheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE)
            },
            _hook_record {
                (LPVOID)0x1401525f0L,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_DF38_user,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_DF38_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckSPF_MON_MOTIVE_DF38_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**))&DfAIMgr::CheckSPF_MON_MOTIVE_DF)
            },
            _hook_record {
                (LPVOID)0x1401527a0L,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_user,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**))&DfAIMgr::CheckSPF_MON_MOTIVE_MY_HP_DOWN)
            },
            _hook_record {
                (LPVOID)0x140152900L,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_user,
                (LPVOID *)&DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_next,
                (LPVOID)cast_pointer_function(DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**))&DfAIMgr::CheckSPF_MON_MOTIVE_OTHER_HP_DOWN)
            },
            _hook_record {
                (LPVOID)0x140151e70L,
                (LPVOID *)&DfAIMgrCondition_OnChange44_user,
                (LPVOID *)&DfAIMgrCondition_OnChange44_next,
                (LPVOID)cast_pointer_function(DfAIMgrCondition_OnChange44_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Condition_OnChange)
            },
            _hook_record {
                (LPVOID)0x140151c60L,
                (LPVOID *)&DfAIMgrCondition_OnLoop46_user,
                (LPVOID *)&DfAIMgrCondition_OnLoop46_next,
                (LPVOID)cast_pointer_function(DfAIMgrCondition_OnLoop46_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Condition_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140155300L,
                (LPVOID *)&DfAIMgrctor_DfAIMgr48_user,
                (LPVOID *)&DfAIMgrctor_DfAIMgr48_next,
                (LPVOID)cast_pointer_function(DfAIMgrctor_DfAIMgr48_wrapper),
                (LPVOID)cast_pointer_function((void(DfAIMgr::*)())&DfAIMgr::ctor_DfAIMgr)
            },
            _hook_record {
                (LPVOID)0x140153c90L,
                (LPVOID *)&DfAIMgrEmotion_OnChange50_user,
                (LPVOID *)&DfAIMgrEmotion_OnChange50_next,
                (LPVOID)cast_pointer_function(DfAIMgrEmotion_OnChange50_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Emotion_OnChange)
            },
            _hook_record {
                (LPVOID)0x140153b40L,
                (LPVOID *)&DfAIMgrEmotion_OnLoop52_user,
                (LPVOID *)&DfAIMgrEmotion_OnLoop52_next,
                (LPVOID)cast_pointer_function(DfAIMgrEmotion_OnLoop52_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Emotion_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140152570L,
                (LPVOID *)&DfAIMgrGetWisdomTarget54_user,
                (LPVOID *)&DfAIMgrGetWisdomTarget54_next,
                (LPVOID)cast_pointer_function(DfAIMgrGetWisdomTarget54_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(*)(int, struct CMonsterAI*, struct CMonster*))&DfAIMgr::GetWisdomTarget)
            },
            _hook_record {
                (LPVOID)0x140150a50L,
                (LPVOID *)&DfAIMgrMon_SearchStart_OnLoop56_user,
                (LPVOID *)&DfAIMgrMon_SearchStart_OnLoop56_next,
                (LPVOID)cast_pointer_function(DfAIMgrMon_SearchStart_OnLoop56_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Mon_SearchStart_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140150d50L,
                (LPVOID *)&DfAIMgrMon_Searched_Handler58_user,
                (LPVOID *)&DfAIMgrMon_Searched_Handler58_next,
                (LPVOID)cast_pointer_function(DfAIMgrMon_Searched_Handler58_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Mon_Searched_Handler)
            },
            _hook_record {
                (LPVOID)0x140150d70L,
                (LPVOID *)&DfAIMgrMv_Go_OnLoop60_user,
                (LPVOID *)&DfAIMgrMv_Go_OnLoop60_next,
                (LPVOID)cast_pointer_function(DfAIMgrMv_Go_OnLoop60_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Mv_Go_OnLoop)
            },
            _hook_record {
                (LPVOID)0x140150fc0L,
                (LPVOID *)&DfAIMgrMv_Stop_Handler62_user,
                (LPVOID *)&DfAIMgrMv_Stop_Handler62_next,
                (LPVOID)cast_pointer_function(DfAIMgrMv_Stop_Handler62_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*))&DfAIMgr::Mv_Stop_Handler)
            },
            _hook_record {
                (LPVOID)0x140153e80L,
                (LPVOID *)&DfAIMgrOnDFInitHFSM64_user,
                (LPVOID *)&DfAIMgrOnDFInitHFSM64_next,
                (LPVOID)cast_pointer_function(DfAIMgrOnDFInitHFSM64_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct UsStateTBL*, struct Us_HFSM*))&DfAIMgr::OnDFInitHFSM)
            },
            _hook_record {
                (LPVOID)0x140153f30L,
                (LPVOID *)&DfAIMgrOnDfExternCallFun66_user,
                (LPVOID *)&DfAIMgrOnDfExternCallFun66_next,
                (LPVOID)cast_pointer_function(DfAIMgrOnDfExternCallFun66_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct Us_HFSM*, unsigned int, void*, int))&DfAIMgr::OnDfExternCallFun)
            },
            _hook_record {
                (LPVOID)0x14014fd10L,
                (LPVOID *)&DfAIMgrOnUsStateTBLInit68_user,
                (LPVOID *)&DfAIMgrOnUsStateTBLInit68_next,
                (LPVOID)cast_pointer_function(DfAIMgrOnUsStateTBLInit68_wrapper),
                (LPVOID)cast_pointer_function((int(*)())&DfAIMgr::OnUsStateTBLInit)
            },
            _hook_record {
                (LPVOID)0x140153070L,
                (LPVOID *)&DfAIMgrSearchCharacterPath70_user,
                (LPVOID *)&DfAIMgrSearchCharacterPath70_next,
                (LPVOID)cast_pointer_function(DfAIMgrSearchCharacterPath70_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct CMonsterAI*, struct CMonster*, struct CCharacter*))&DfAIMgr::SearchCharacterPath)
            },
            _hook_record {
                (LPVOID)0x1401532f0L,
                (LPVOID *)&DfAIMgrSearchPatrollPath72_user,
                (LPVOID *)&DfAIMgrSearchPatrollPath72_next,
                (LPVOID)cast_pointer_function(DfAIMgrSearchPatrollPath72_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CMonsterAI*, struct CMonster*))&DfAIMgr::SearchPatrollPath)
            },
            _hook_record {
                (LPVOID)0x140152460L,
                (LPVOID *)&DfAIMgrUseSkill_Target74_user,
                (LPVOID *)&DfAIMgrUseSkill_Target74_next,
                (LPVOID)cast_pointer_function(DfAIMgrUseSkill_Target74_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*))&DfAIMgr::UseSkill_Target)
            },
            _hook_record {
                (LPVOID)0x1401553e0L,
                (LPVOID *)&DfAIMgrdtor_DfAIMgr79_user,
                (LPVOID *)&DfAIMgrdtor_DfAIMgr79_next,
                (LPVOID)cast_pointer_function(DfAIMgrdtor_DfAIMgr79_wrapper),
                (LPVOID)cast_pointer_function((void(DfAIMgr::*)())&DfAIMgr::dtor_DfAIMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
