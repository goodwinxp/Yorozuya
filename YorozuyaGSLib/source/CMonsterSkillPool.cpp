#include <CMonsterSkillPool.hpp>


START_ATF_NAMESPACE
    CMonsterSkillPool::CMonsterSkillPool()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkillPool*);
        (org_ptr(0x14014b4b0L))(this);
    };
    void CMonsterSkillPool::ctor_CMonsterSkillPool()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkillPool*);
        (org_ptr(0x14014b4b0L))(this);
    };
    struct CMonsterSkill* CMonsterSkillPool::GetMonSkill(int nIndex)
    {
        using org_ptr = struct CMonsterSkill* (WINAPIV*)(struct CMonsterSkillPool*, int);
        return (org_ptr(0x140156b00L))(this, nIndex);
    };
    struct CMonsterSkill* CMonsterSkillPool::GetMonSkillKind(int nKind)
    {
        using org_ptr = struct CMonsterSkill* (WINAPIV*)(struct CMonsterSkillPool*, int);
        return (org_ptr(0x140156b50L))(this, nKind);
    };
    void CMonsterSkillPool::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkillPool*);
        (org_ptr(0x1401569b0L))(this);
    };
    int CMonsterSkillPool::InsertSkill(struct CMonsterSkill* skill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkillPool*, struct CMonsterSkill*);
        return (org_ptr(0x140156a30L))(this, skill);
    };
    int CMonsterSkillPool::Set(struct CMonster* pMyMonster)
    {
        using org_ptr = int (WINAPIV*)(struct CMonsterSkillPool*, struct CMonster*);
        return (org_ptr(0x140156bf0L))(this, pMyMonster);
    };
    CMonsterSkillPool::~CMonsterSkillPool()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkillPool*);
        (org_ptr(0x14014b600L))(this);
    };
    void CMonsterSkillPool::dtor_CMonsterSkillPool()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterSkillPool*);
        (org_ptr(0x14014b600L))(this);
    };
END_ATF_NAMESPACE
