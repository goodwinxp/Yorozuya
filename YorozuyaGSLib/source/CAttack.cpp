#include <CAttack.hpp>


START_ATF_NAMESPACE
    void CAttack::AreaDamageProc(int nLimitRadius, int nAttPower, float* pTar, int nEffAttPower, bool bUseEffBullet)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, int, int, float*, int, bool);
        (org_ptr(0x14016c320L))(this, nLimitRadius, nAttPower, pTar, nEffAttPower, bUseEffBullet);
    };
    void CAttack::AttackForce(struct _attack_param* pParam, bool bUseEffBullet)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, struct _attack_param*, bool);
        (org_ptr(0x14016a210L))(this, pParam, bUseEffBullet);
    };
    void CAttack::AttackGen(struct _attack_param* pParam, bool bMustMiss, bool bUseEffBullet)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, struct _attack_param*, bool, bool);
        (org_ptr(0x140169520L))(this, pParam, bMustMiss, bUseEffBullet);
    };
    CAttack::CAttack(struct CCharacter* pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, struct CCharacter*);
        (org_ptr(0x140169480L))(this, pThis);
    };
    void CAttack::ctor_CAttack(struct CCharacter* pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, struct CCharacter*);
        (org_ptr(0x140169480L))(this, pThis);
    };
    void CAttack::CalcAvgDamage()
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*);
        (org_ptr(0x14016dbb0L))(this);
    };
    bool CAttack::CheckGuildBattleLimit(struct CGameObject* pObject, bool* pbInGuildBattle)
    {
        using org_ptr = bool (WINAPIV*)(struct CAttack*, struct CGameObject*, bool*);
        return (org_ptr(0x14016b570L))(this, pObject, pbInGuildBattle);
    };
    void CAttack::FlashDamageProc(int nLimDist, int nAttPower, int nAngle, int nEffAttPower, bool bUseEffBullet)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, int, int, int, int, bool);
        (org_ptr(0x14016b6f0L))(this, nLimDist, nAttPower, nAngle, nEffAttPower, bUseEffBullet);
    };
    float CAttack::GetAttackFC(struct CPlayer* pPlayer, char bySkill, bool bNear, bool bUnit)
    {
        using org_ptr = float (WINAPIV*)(struct CAttack*, struct CPlayer*, char, bool, bool);
        return (org_ptr(0x14016dd00L))(this, pPlayer, bySkill, bNear, bUnit);
    };
    int CAttack::GetMeleeSkillIndex(int nMeleeTechCode)
    {
        using org_ptr = int (WINAPIV*)(int);
        return (org_ptr(0x14016d880L))(nMeleeTechCode);
    };
    int CAttack::IsCharInSector(float* chkpos, float* src, float* dest, float angle, float radius)
    {
        using org_ptr = int (WINAPIV*)(float*, float*, float*, float, float);
        return (org_ptr(0x14016d920L))(chkpos, src, dest, angle, radius);
    };
    int CAttack::MonsterCritical_Exception_Rate(struct CCharacter* pCharacter, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CAttack*, struct CCharacter*, bool);
        return (org_ptr(0x14016a8f0L))(this, pCharacter, bBackAttack);
    };
    void CAttack::SectorDamageProc(int nSkillLv, int nAttPower, int nAngle, int nShotNum, int nWeaponRange, int nEffAttPower, bool bUseEffBullet)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, int, int, int, int, int, int, bool);
        (org_ptr(0x14016cdd0L))(this, nSkillLv, nAttPower, nAngle, nShotNum, nWeaponRange, nEffAttPower, bUseEffBullet);
    };
    void CAttack::SetActiveSucc(bool bSucc)
    {
        using org_ptr = void (WINAPIV*)(struct CAttack*, bool);
        (org_ptr(0x14008e710L))(this, bSucc);
    };
    void CAttack::SetStaticMember(struct CRecordData* pSkillData)
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*);
        (org_ptr(0x14016d860L))(pSkillData);
    };
    int CAttack::_CalcForceAttPnt(bool bUseEffBullet)
    {
        using org_ptr = int (WINAPIV*)(struct CAttack*, bool);
        return (org_ptr(0x14016af70L))(this, bUseEffBullet);
    };
    int CAttack::_CalcGenAttPnt(bool bUseEffBullet)
    {
        using org_ptr = int (WINAPIV*)(struct CAttack*, bool);
        return (org_ptr(0x14016aa00L))(this, bUseEffBullet);
    };
END_ATF_NAMESPACE
