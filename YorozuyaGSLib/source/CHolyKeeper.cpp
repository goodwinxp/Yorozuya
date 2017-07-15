#include <CHolyKeeper.hpp>


START_ATF_NAMESPACE
    CHolyKeeper::CHolyKeeper()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140132b00L))(this);
    };
    void CHolyKeeper::ctor_CHolyKeeper()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140132b00L))(this);
    };
    bool CHolyKeeper::CheckAttack()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x1401338d0L))(this);
    };
    void CHolyKeeper::CheckCurPos()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140133cc0L))(this);
    };
    void CHolyKeeper::CheckExit()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140133bf0L))(this);
    };
    void CHolyKeeper::CheckMove()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140133470L))(this);
    };
    bool CHolyKeeper::Create(struct _keeper_create_setdata* pData, int nCreateType)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*, struct _keeper_create_setdata*, int);
        return (org_ptr(0x140132e20L))(this, pData, nCreateType);
    };
    bool CHolyKeeper::Destroy(char byDestroyCode, struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*, char, struct CCharacter*);
        return (org_ptr(0x1401332e0L))(this, byDestroyCode, pAtter);
    };
    void CHolyKeeper::DropItem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140135540L))(this);
    };
    bool CHolyKeeper::Exit()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x1401333d0L))(this);
    };
    int CHolyKeeper::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136b30L))(this);
    };
    float* CHolyKeeper::GetAttackPivot()
    {
        using org_ptr = float* (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140133e40L))(this);
    };
    float CHolyKeeper::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136880L))(this);
    };
    int CHolyKeeper::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*, int, struct CCharacter*, int*);
        return (org_ptr(0x140134ac0L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CHolyKeeper::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CHolyKeeper*, int);
        return (org_ptr(0x140136a50L))(this, nPart);
    };
    float CHolyKeeper::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CHolyKeeper*, int);
        return (org_ptr(0x1401369f0L))(this, nPart);
    };
    int CHolyKeeper::GetDefSkill(bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*, bool);
        return (org_ptr(0x140136900L))(this, bBackAttack);
    };
    int CHolyKeeper::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136930L))(this);
    };
    int CHolyKeeper::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*, struct CCharacter*, int, bool);
        return (org_ptr(0x140134b40L))(this, pDst, nPart, bBackAttack);
    };
    int CHolyKeeper::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136780L))(this);
    };
    int CHolyKeeper::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x1401368d0L))(this);
    };
    int CHolyKeeper::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x1401367a0L))(this);
    };
    char* CHolyKeeper::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140134c80L))(this);
    };
    int CHolyKeeper::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136b50L))(this);
    };
    int CHolyKeeper::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136990L))(this);
    };
    int CHolyKeeper::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136960L))(this);
    };
    float CHolyKeeper::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136ab0L))(this);
    };
    int CHolyKeeper::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136b20L))(this);
    };
    float CHolyKeeper::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140136830L))(this);
    };
    int CHolyKeeper::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x1401369c0L))(this);
    };
    bool CHolyKeeper::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*, struct _object_id*);
        return (org_ptr(0x140132c90L))(this, pID);
    };
    bool CHolyKeeper::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*, bool);
        return (org_ptr(0x140136b00L))(this, bFirst);
    };
    bool CHolyKeeper::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyKeeper*, struct CCharacter*);
        return (org_ptr(0x140133d90L))(this, pAtter);
    };
    void CHolyKeeper::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140134920L))(this);
    };
    void CHolyKeeper::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140136730L))(this);
    };
    struct CCharacter* CHolyKeeper::SearchAttackTarget()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140133f70L))(this);
    };
    struct CPlayer* CHolyKeeper::SearchMoveTarget()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CHolyKeeper*);
        return (org_ptr(0x140134660L))(this);
    };
    void CHolyKeeper::SendMsg_Attack()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140134ef0L))(this);
    };
    void CHolyKeeper::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140134d70L))(this);
    };
    void CHolyKeeper::SendMsg_Destroy(char byDesType)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*, char);
        (org_ptr(0x140134e60L))(this, byDesType);
    };
    void CHolyKeeper::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*, int);
        (org_ptr(0x1401351d0L))(this, n);
    };
    void CHolyKeeper::SendMsg_Move()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x1401350a0L))(this);
    };
    void CHolyKeeper::SendMsg_RealMovePoint(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*, int);
        (org_ptr(0x1401352d0L))(this, n);
    };
    int CHolyKeeper::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyKeeper*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x1401349b0L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    void CHolyKeeper::SetDamageAbleState(bool bDamageAbState)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*, bool);
        (org_ptr(0x140284770L))(this, bDamageAbState);
    };
    void CHolyKeeper::SetDropItem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x1401353f0L))(this);
    };
    void CHolyKeeper::SetHP(int nHP)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*, int);
        (org_ptr(0x1401367d0L))(this, nHP);
    };
    void CHolyKeeper::SetMaxHP(int nMaxHP)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*, int);
        (org_ptr(0x140136800L))(this, nMaxHP);
    };
    void CHolyKeeper::SetStateChaos()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140133e00L))(this);
    };
    CHolyKeeper::~CHolyKeeper()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140132bc0L))(this);
    };
    void CHolyKeeper::dtor_CHolyKeeper()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyKeeper*);
        (org_ptr(0x140132bc0L))(this);
    };
END_ATF_NAMESPACE
