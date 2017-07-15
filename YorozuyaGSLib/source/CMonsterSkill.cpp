#include <CMonsterSkill.hpp>


START_ATF_NAMESPACE
    CMonsterSkill::CMonsterSkill()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        (org_ptr(0x14014b5a0L))(this);
    };
    void CMonsterSkill::ctor_CMonsterSkill()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        (org_ptr(0x14014b5a0L))(this);
    };
    void CMonsterSkill::Copy(struct CMonsterSkill* Cls)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*, struct CMonsterSkill*);
        (org_ptr(0x140156140L))(this, Cls);
    };
    int CMonsterSkill::GetAccumulationCount()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155730L))(this);
    };
    float CMonsterSkill::GetAttackDist()
    {
        using org_ptr = float (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x1401556f0L))(this);
    };
    unsigned int CMonsterSkill::GetBeforeTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155870L))(this);
    };
    int CMonsterSkill::GetDstCaseType()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155850L))(this);
    };
    int CMonsterSkill::GetElement()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014f7e0L))(this);
    };
    int CMonsterSkill::GetExceptMotive()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x1401557d0L))(this);
    };
    int CMonsterSkill::GetExceptMotiveValue()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155810L))(this);
    };
    struct _base_fld* CMonsterSkill::GetFld()
    {
        using org_ptr = struct _base_fld* (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014dd80L))(this);
    };
    int CMonsterSkill::GetMaxDmg()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014f820L))(this);
    };
    int CMonsterSkill::GetMaxProb()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014f860L))(this);
    };
    int CMonsterSkill::GetMinDmg()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014f800L))(this);
    };
    int CMonsterSkill::GetMinProb()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014f840L))(this);
    };
    int CMonsterSkill::GetMotive()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x1401556b0L))(this);
    };
    int CMonsterSkill::GetMotiveValue()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155690L))(this);
    };
    unsigned int CMonsterSkill::GetNextActionDelayTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014c2e0L))(this);
    };
    int CMonsterSkill::GetSFLv()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014dda0L))(this);
    };
    int CMonsterSkill::GetSPActionProbability()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155790L))(this);
    };
    int CMonsterSkill::GetSPLimitCount()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x140155750L))(this);
    };
    int CMonsterSkill::GetType()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014c2c0L))(this);
    };
    int CMonsterSkill::GetUseType()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014dd60L))(this);
    };
    void CMonsterSkill::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        (org_ptr(0x140156030L))(this);
    };
    bool CMonsterSkill::IsAttackAble()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x14014f880L))(this);
    };
    bool CMonsterSkill::IsExit()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonsterSkill*);
        return (org_ptr(0x1401556d0L))(this);
    };
    void CMonsterSkill::NextPass()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        (org_ptr(0x140156980L))(this);
    };
    void CMonsterSkill::SetAccumulationCountAdd(int nTempAccumulationCount)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*, int);
        (org_ptr(0x140161500L))(this, nTempAccumulationCount);
    };
    int CMonsterSkill::SetForce(struct _monster_fld* pMonsterFld, struct _monster_sp_fld* pSPCont, int nSFLv, struct _force_fld* pForceFld, unsigned int dwDelayTime, float fAttackDist, unsigned int dwCastDelay, int nMotive, int nMotiveValue, int skillDestType)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, struct _monster_sp_fld*, int, struct _force_fld*, unsigned int, float, unsigned int, int, int, int);
        return (org_ptr(0x140156700L))(this, pMonsterFld, pSPCont, nSFLv, pForceFld, dwDelayTime, fAttackDist, dwCastDelay, nMotive, nMotiveValue, skillDestType);
    };
    int CMonsterSkill::SetGen(struct _monster_fld* pMonsterFld, int nSFLv, unsigned int dwDelayTime, float fAttackDist, unsigned int dwCastDelay)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, int, unsigned int, float, unsigned int);
        return (org_ptr(0x1401562b0L))(this, pMonsterFld, nSFLv, dwDelayTime, fAttackDist, dwCastDelay);
    };
    int CMonsterSkill::SetSkill(struct _monster_fld* pMonsterFld, struct _monster_sp_fld* pSPCont, int nSFLv, int nEffectType, struct _skill_fld* pSkillFld, unsigned int dwDelayTime, float fAttackDist, unsigned int dwCastDelay, int nMotive, int nMotiveValue, int skillDestType)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, struct _monster_fld*, struct _monster_sp_fld*, int, int, struct _skill_fld*, unsigned int, float, unsigned int, int, int, int);
        return (org_ptr(0x1401564a0L))(this, pMonsterFld, pSPCont, nSFLv, nEffectType, pSkillFld, dwDelayTime, fAttackDist, dwCastDelay, nMotive, nMotiveValue, skillDestType);
    };
    int CMonsterSkill::Use(unsigned int dwUsedTime, bool bCount)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkill*, unsigned int, bool);
        return (org_ptr(0x140156920L))(this, dwUsedTime, bCount);
    };
    CMonsterSkill::~CMonsterSkill()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        (org_ptr(0x14014b5f0L))(this);
    };
    void CMonsterSkill::dtor_CMonsterSkill()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkill*);
        (org_ptr(0x14014b5f0L))(this);
    };
END_ATF_NAMESPACE
