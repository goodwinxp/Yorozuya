#include <CTrap.hpp>


START_ATF_NAMESPACE
    void CTrap::Attack(struct CCharacter* pTarget)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, struct CCharacter*);
        (org_ptr(0x14013ebf0L))(this, pTarget);
    };
    int CTrap::AttackableHeight()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x1401412d0L))(this);
    };
    CTrap::CTrap()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013e7a0L))(this);
    };
    void CTrap::ctor_CTrap()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013e7a0L))(this);
    };
    void CTrap::CheckTranspar()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013ef00L))(this);
    };
    bool CTrap::Create(struct _trap_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CTrap*, struct _trap_create_setdata*);
        return (org_ptr(0x14013e960L))(this, pData);
    };
    bool CTrap::Destroy(char byDesType)
    {
        using org_ptr = bool (WINAPIV*)(struct CTrap*, char);
        return (org_ptr(0x14013eb10L))(this, byDesType);
    };
    int CTrap::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x1401412b0L))(this);
    };
    float CTrap::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141070L))(this);
    };
    int CTrap::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*, int, struct CCharacter*, int*);
        return (org_ptr(0x1401410c0L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CTrap::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CTrap*, int);
        return (org_ptr(0x140141210L))(this, nPart);
    };
    float CTrap::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CTrap*, int);
        return (org_ptr(0x1401411c0L))(this, nPart);
    };
    int CTrap::GetDefSkill(bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*, bool);
        return (org_ptr(0x140141110L))(this, bBackAttack);
    };
    int CTrap::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141140L))(this);
    };
    int CTrap::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*, struct CCharacter*, int, bool);
        return (org_ptr(0x14013f290L))(this, pDst, nPart, bBackAttack);
    };
    int CTrap::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140140ff0L))(this);
    };
    int CTrap::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x1401410f0L))(this);
    };
    int CTrap::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141010L))(this);
    };
    unsigned int CTrap::GetNewSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x1401413a0L))();
    };
    char* CTrap::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x14013f3d0L))(this);
    };
    int CTrap::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141310L))(this);
    };
    int CTrap::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141180L))(this);
    };
    int CTrap::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141160L))(this);
    };
    float CTrap::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141260L))(this);
    };
    int CTrap::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x1401412a0L))(this);
    };
    float CTrap::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141030L))(this);
    };
    int CTrap::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x1401411a0L))(this);
    };
    bool CTrap::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CTrap*, struct _object_id*);
        return (org_ptr(0x14013e850L))(this, pID);
    };
    bool CTrap::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CTrap*, bool);
        return (org_ptr(0x1401412e0L))(this, bFirst);
    };
    bool CTrap::IsHaveEmpty()
    {
        using org_ptr = bool (WINAPIV*)();
        return (org_ptr(0x140140440L))();
    };
    bool CTrap::IsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x140141300L))(this);
    };
    void CTrap::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013f040L))(this);
    };
    void CTrap::MasterNetClose(long double dPvPPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, long double);
        (org_ptr(0x14013ef90L))(this, dPvPPoint);
    };
    void CTrap::MasterReStart(struct CPlayer* pMaster)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, struct CPlayer*);
        (org_ptr(0x14013efd0L))(this, pMaster);
    };
    void CTrap::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x140140fa0L))(this);
    };
    void CTrap::RecvKillMessage(struct CCharacter* pDier)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, struct CCharacter*);
        (org_ptr(0x14013f4f0L))(this, pDier);
    };
    struct CCharacter* CTrap::SearchNearEnemy()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CTrap*);
        return (org_ptr(0x14013fe20L))(this);
    };
    void CTrap::SendMsg_AlterTranspar(bool bTranspar)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, bool);
        (org_ptr(0x14013fd90L))(this, bTranspar);
    };
    void CTrap::SendMsg_Attack(struct CAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, struct CAttack*);
        (org_ptr(0x14013fa00L))(this, pAt);
    };
    void CTrap::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013f7f0L))(this);
    };
    void CTrap::SendMsg_Destroy(char byDesType)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, char);
        (org_ptr(0x14013f900L))(this, byDesType);
    };
    void CTrap::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*, int);
        (org_ptr(0x14013fb80L))(this, n);
    };
    void CTrap::SendMsg_TrapCompleteInform()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013fd10L))(this);
    };
    int CTrap::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CTrap*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x14013f1c0L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    CTrap::~CTrap()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013e800L))(this);
    };
    void CTrap::dtor_CTrap()
    {
        using org_ptr = void (WINAPIV*)(struct CTrap*);
        (org_ptr(0x14013e800L))(this);
    };
END_ATF_NAMESPACE
