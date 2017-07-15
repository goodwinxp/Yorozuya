#include <MonsterSFContDamageToleracne.hpp>


START_ATF_NAMESPACE
    float MonsterSFContDamageToleracne::GetToleranceProb()
    {
        using org_ptr = float (WINAPIV*)(struct MonsterSFContDamageToleracne*);
        return (org_ptr(0x14014caf0L))(this);
    };
    void MonsterSFContDamageToleracne::Init(float fMaxTolValue)
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSFContDamageToleracne*, float);
        (org_ptr(0x140157ef0L))(this, fMaxTolValue);
    };
    bool MonsterSFContDamageToleracne::IsSFContDamage()
    {
        using org_ptr = bool (WINAPIV*)(struct MonsterSFContDamageToleracne*);
        return (org_ptr(0x140157f90L))(this);
    };
    MonsterSFContDamageToleracne::MonsterSFContDamageToleracne()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSFContDamageToleracne*);
        (org_ptr(0x140157e80L))(this);
    };
    void MonsterSFContDamageToleracne::ctor_MonsterSFContDamageToleracne()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSFContDamageToleracne*);
        (org_ptr(0x140157e80L))(this);
    };
    void MonsterSFContDamageToleracne::OnlyOnceInit(struct CMonster* pMonster)
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSFContDamageToleracne*, struct CMonster*);
        (org_ptr(0x140157ed0L))(this, pMonster);
    };
    void MonsterSFContDamageToleracne::SetSFDamageToleracne_Variation(float fAddValue)
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSFContDamageToleracne*, float);
        (org_ptr(0x140158000L))(this, fAddValue);
    };
    void MonsterSFContDamageToleracne::Update()
    {
        using org_ptr = void (WINAPIV*)(struct MonsterSFContDamageToleracne*);
        (org_ptr(0x140158080L))(this);
    };
END_ATF_NAMESPACE
