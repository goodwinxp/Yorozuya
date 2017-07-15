#include <CMonsterAttack.hpp>


START_ATF_NAMESPACE
    void CMonsterAttack::AttackMonsterForce(struct _attack_param* pParam)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*);
        (org_ptr(0x14015ba60L))(this, pParam);
    };
    void CMonsterAttack::AttackMonsterGen(struct _attack_param* pParam, bool bMustMiss)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*, bool);
        (org_ptr(0x14015b300L))(this, pParam, bMustMiss);
    };
    void CMonsterAttack::AttackMonsterSkill(struct _attack_param* pParam)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*);
        (org_ptr(0x14015abd0L))(this, pParam);
    };
    CMonsterAttack::CMonsterAttack(struct CCharacter* pThis)
        : CAttack(pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct CCharacter*);
        (org_ptr(0x14014f8e0L))(this, pThis);
    };
    void CMonsterAttack::ctor_CMonsterAttack(struct CCharacter* pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct CCharacter*);
        (org_ptr(0x14014f8e0L))(this, pThis);
    };
    float CMonsterAttack::ModifyMonsterAttFc(float fAttFc)
    {
        using org_ptr = float (WINAPIV*)(struct CMonsterAttack*, float);
        return (org_ptr(0x1401615b0L))(this, fAttFc);
    };
    int CMonsterAttack::_CalcMonSkillAttPnt()
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterAttack*);
        return (org_ptr(0x14015a6a0L))(this);
    };
END_ATF_NAMESPACE
