#include <DfAIMgr.hpp>


START_ATF_NAMESPACE
    void DfAIMgr::Action_Attack_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x1401518e0L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Action_Change_Handler(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x1401514b0L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Action_Patrol_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140151740L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Action_Runaway_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140151c40L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Action_Wait_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x1401516b0L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Assist_OnChange(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140151f30L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Assist_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x1401520c0L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Atp_Lost_Handler(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140150910L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Atp_SearchStart_OnLoop(struct Us_HFSM* p, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x1401506c0L))(p, dwEvent, lpParam);
    };
    void DfAIMgr::Atp_Searched_Handler(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x1401507f0L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::ChangeTargetPos(struct CMonster* pMon, float* pTarPos)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, float*);
        (org_ptr(0x140150e20L))(pMon, pTarPos);
    };
    int DfAIMgr::CheckAlienation(struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140151260L))(pMon);
    };
    int DfAIMgr::CheckEmotionBad(struct CMonster* pMon, struct CMonsterAI* pAI, int nDamage)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CMonsterAI*, int);
        return (org_ptr(0x140151090L))(pMon, pAI, nDamage);
    };
    int DfAIMgr::CheckGen(struct CMonsterAI* pAI, struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*);
        return (org_ptr(0x140152e40L))(pAI, pMon);
    };
    int DfAIMgr::CheckMonArea_N_ChangeState(struct CMonsterAI* pAI, struct CMonster* pMon, int bAttackState)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*, int);
        return (org_ptr(0x140153350L))(pAI, pMon, bAttackState);
    };
    int DfAIMgr::CheckSPF(struct CMonsterAI* pAI, struct CMonster* pMon)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*);
        return (org_ptr(0x140152150L))(pAI, pMon);
    };
    int DfAIMgr::CheckSPFDelayTime(struct CMonsterAI* pAI, int nAttackType, unsigned int dwLoopTime)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterAI*, int, unsigned int);
        return (org_ptr(0x140151850L))(pAI, nAttackType, dwLoopTime);
    };
    int DfAIMgr::CheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        return (org_ptr(0x140152c60L))(pSkill, nMotiveValue, pAI, pMon, ppTar);
    };
    int DfAIMgr::CheckSPF_MON_MOTIVE_DF(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        return (org_ptr(0x1401525f0L))(pSkill, nMotiveValue, pAI, pMon, ppTar);
    };
    int DfAIMgr::CheckSPF_MON_MOTIVE_MY_HP_DOWN(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        return (org_ptr(0x1401527a0L))(pSkill, nMotiveValue, pAI, pMon, ppTar);
    };
    int DfAIMgr::CheckSPF_MON_MOTIVE_OTHER_HP_DOWN(struct CMonsterSkill* pSkill, int nMotiveValue, struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter** ppTar)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        return (org_ptr(0x140152900L))(pSkill, nMotiveValue, pAI, pMon, ppTar);
    };
    void DfAIMgr::Condition_OnChange(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140151e70L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Condition_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140151c60L))(pHFS, dwEvent, lpParam);
    };
    DfAIMgr::DfAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct DfAIMgr*);
        (org_ptr(0x140155300L))(this);
    };
    void DfAIMgr::ctor_DfAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct DfAIMgr*);
        (org_ptr(0x140155300L))(this);
    };
    void DfAIMgr::Emotion_OnChange(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140153c90L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Emotion_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140153b40L))(pHFS, dwEvent, lpParam);
    };
    struct CCharacter* DfAIMgr::GetWisdomTarget(int nDstCaseType, struct CMonsterAI* pAI, struct CMonster* pMon)
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(int, struct CMonsterAI*, struct CMonster*);
        return (org_ptr(0x140152570L))(nDstCaseType, pAI, pMon);
    };
    void DfAIMgr::Mon_SearchStart_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140150a50L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Mon_Searched_Handler(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140150d50L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Mv_Go_OnLoop(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140150d70L))(pHFS, dwEvent, lpParam);
    };
    void DfAIMgr::Mv_Stop_Handler(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        (org_ptr(0x140150fc0L))(pHFS, dwEvent, lpParam);
    };
    int DfAIMgr::OnDFInitHFSM(struct UsStateTBL* pStateTBL, struct Us_HFSM* pHFSM)
    {
        using org_ptr = int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*);
        return (org_ptr(0x140153e80L))(pStateTBL, pHFSM);
    };
    void DfAIMgr::OnDfExternCallFun(struct Us_HFSM* pHFS, unsigned int dwEvent, void* lpParam, int nParam)
    {
        using org_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int);
        (org_ptr(0x140153f30L))(pHFS, dwEvent, lpParam, nParam);
    };
    int DfAIMgr::OnUsStateTBLInit()
    {
        using org_ptr = int (WINAPIV*)();
        return (org_ptr(0x14014fd10L))();
    };
    bool DfAIMgr::SearchCharacterPath(struct CMonsterAI* pAI, struct CMonster* pMon, struct CCharacter* pTarget)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterAI*, struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140153070L))(pAI, pMon, pTarget);
    };
    void DfAIMgr::SearchPatrollPath(struct CMonsterAI* pAI, struct CMonster* pMon)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAI*, struct CMonster*);
        (org_ptr(0x1401532f0L))(pAI, pMon);
    };
    int DfAIMgr::UseSkill_Target(struct CMonster* pMon, struct CCharacter* pTarget, struct CMonsterSkill* pSkill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        return (org_ptr(0x140152460L))(pMon, pTarget, pSkill);
    };
    DfAIMgr::~DfAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct DfAIMgr*);
        (org_ptr(0x1401553e0L))(this);
    };
    void DfAIMgr::dtor_DfAIMgr()
    {
        using org_ptr = void (WINAPIV*)(struct DfAIMgr*);
        (org_ptr(0x1401553e0L))(this);
    };
END_ATF_NAMESPACE
