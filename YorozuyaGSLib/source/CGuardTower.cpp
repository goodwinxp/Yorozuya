#include <CGuardTower.hpp>


START_ATF_NAMESPACE
    void CGuardTower::Attack(struct CCharacter* pTarget)
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        (org_ptr(0x14012f840L))(this, pTarget);
    };
    int CGuardTower::AttackableHeight()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401328e0L))(this);
    };
    CGuardTower::CGuardTower()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x14012f340L))(this);
    };
    void CGuardTower::ctor_CGuardTower()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x14012f340L))(this);
    };
    bool CGuardTower::Create(struct _tower_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*, struct _tower_create_setdata*);
        return (org_ptr(0x14012f510L))(this, pData);
    };
    bool CGuardTower::Destroy(char byDesType, bool bSystemBack)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*, char, bool);
        return (org_ptr(0x14012f6f0L))(this, byDesType, bSystemBack);
    };
    int CGuardTower::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401328c0L))(this);
    };
    float CGuardTower::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132670L))(this);
    };
    int CGuardTower::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*, int, struct CCharacter*, int*);
        return (org_ptr(0x1401326c0L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CGuardTower::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CGuardTower*, int);
        return (org_ptr(0x140132810L))(this, nPart);
    };
    float CGuardTower::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CGuardTower*, int);
        return (org_ptr(0x1401327c0L))(this, nPart);
    };
    int CGuardTower::GetDefSkill(bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*, bool);
        return (org_ptr(0x140132710L))(this, bBackAttack);
    };
    int CGuardTower::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132740L))(this);
    };
    int CGuardTower::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*, struct CCharacter*, int, bool);
        return (org_ptr(0x1401302b0L))(this, pDst, nPart, bBackAttack);
    };
    int CGuardTower::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401325e0L))(this);
    };
    int CGuardTower::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401326f0L))(this);
    };
    int CGuardTower::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132600L))(this);
    };
    unsigned int CGuardTower::GetNewSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x1401329b0L))();
    };
    char* CGuardTower::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401303f0L))(this);
    };
    int CGuardTower::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132920L))(this);
    };
    int CGuardTower::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132780L))(this);
    };
    int CGuardTower::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132760L))(this);
    };
    float CGuardTower::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132860L))(this);
    };
    int CGuardTower::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401328b0L))(this);
    };
    float CGuardTower::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132620L))(this);
    };
    int CGuardTower::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x1401327a0L))(this);
    };
    bool CGuardTower::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*, struct _object_id*);
        return (org_ptr(0x14012f3f0L))(this, pID);
    };
    bool CGuardTower::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*, bool);
        return (org_ptr(0x1401328f0L))(this, bFirst);
    };
    bool CGuardTower::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        return (org_ptr(0x140131a80L))(this, pAtter);
    };
    bool CGuardTower::IsHaveEmpty()
    {
        using org_ptr = bool (WINAPIV*)();
        return (org_ptr(0x1401317e0L))();
    };
    bool CGuardTower::IsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140132910L))(this);
    };
    bool CGuardTower::IsValidTarget()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140130000L))(this);
    };
    void CGuardTower::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x14012fc10L))(this);
    };
    void CGuardTower::NotifyOwnerAttackInform(struct CCharacter* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        (org_ptr(0x1401312e0L))(this, pDst);
    };
    void CGuardTower::OnLoop_Static()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140131720L))();
    };
    void CGuardTower::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x140132590L))(this);
    };
    void CGuardTower::RecvKillMessage(struct CCharacter* pDier)
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        (org_ptr(0x140130610L))(this, pDier);
    };
    bool CGuardTower::RobbedHP(struct CCharacter* pDst, int nDecHP)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuardTower*, struct CCharacter*, int);
        return (org_ptr(0x14012fb50L))(this, pDst, nDecHP);
    };
    struct CCharacter* CGuardTower::SearchNearEnemy()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CGuardTower*);
        return (org_ptr(0x140130b10L))(this);
    };
    void CGuardTower::SendMsg_Attack(struct CAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*, struct CAttack*);
        (org_ptr(0x140130840L))(this, pAt);
    };
    void CGuardTower::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x140130680L))(this);
    };
    void CGuardTower::SendMsg_Destroy(char byDesType)
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*, char);
        (org_ptr(0x140130780L))(this, byDesType);
    };
    void CGuardTower::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*, int);
        (org_ptr(0x140130930L))(this, n);
    };
    void CGuardTower::SendMsg_TowerCompleteInform()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x140130a80L))(this);
    };
    int CGuardTower::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CGuardTower*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x14012fe50L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    CGuardTower::~CGuardTower()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x14012f3a0L))(this);
    };
    void CGuardTower::dtor_CGuardTower()
    {
        using org_ptr = void (WINAPIV*)(struct CGuardTower*);
        (org_ptr(0x14012f3a0L))(this);
    };
END_ATF_NAMESPACE
