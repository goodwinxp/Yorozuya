#include <CPlayerAttack.hpp>


START_ATF_NAMESPACE
    void CPlayerAttack::AttackSkill(struct _attack_param* pParam, bool bUseEffBullet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*, bool);
        (org_ptr(0x14016e140L))(this, pParam, bUseEffBullet);
    };
    void CPlayerAttack::AttackUnit(struct _attack_param* pParam)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*);
        (org_ptr(0x14016f330L))(this, pParam);
    };
    CPlayerAttack::CPlayerAttack(struct CCharacter* pThis)
        : CAttack(pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct CCharacter*);
        (org_ptr(0x14008ebf0L))(this, pThis);
    };
    void CPlayerAttack::ctor_CPlayerAttack(struct CCharacter* pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct CCharacter*);
        (org_ptr(0x14008ebf0L))(this, pThis);
    };
    void CPlayerAttack::WPActiveAttackForce(struct _attack_param* pParam)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*);
        (org_ptr(0x14016fd90L))(this, pParam);
    };
    void CPlayerAttack::WPActiveAttackSkill(struct _attack_param* pParam)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*);
        (org_ptr(0x1401700f0L))(this, pParam);
    };
    int CPlayerAttack::_CalcSkillAttPnt(bool bUseEffBullet)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerAttack*, bool);
        return (org_ptr(0x14016ec00L))(this, bUseEffBullet);
    };
END_ATF_NAMESPACE
