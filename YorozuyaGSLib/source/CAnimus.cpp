#include <CAnimus.hpp>


START_ATF_NAMESPACE
    void CAnimus::AIInit()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140125fc0L))(this);
    };
    void CAnimus::Action()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140127a30L))(this);
    };
    void CAnimus::AlterExp(int64_t nAddExp)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, int64_t);
        (org_ptr(0x1401265a0L))(this, nAddExp);
    };
    void CAnimus::AlterExp_MasterReport(int64_t nAlterExp)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, int64_t);
        (org_ptr(0x1401292b0L))(this, nAlterExp);
    };
    void CAnimus::AlterFP_MasterReport()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140129250L))(this);
    };
    void CAnimus::AlterHP_MasterReport()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x1401291f0L))(this);
    };
    void CAnimus::AlterMode_MasterReport(char byMode)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, char);
        (org_ptr(0x140129310L))(this, byMode);
    };
    bool CAnimus::Attack(unsigned int skill)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, unsigned int);
        return (org_ptr(0x140126ac0L))(this, skill);
    };
    int CAnimus::AttackableHeight()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140129880L))(this);
    };
    CAnimus::CAnimus()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140125e90L))(this);
    };
    void CAnimus::ctor_CAnimus()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140125e90L))(this);
    };
    void CAnimus::CalcAttExp(struct CAttack* pAT)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CAttack*);
        (org_ptr(0x140126f40L))(this, pAT);
    };
    void CAnimus::CalcDefExp(struct CCharacter* pAttackObj, int nDamage)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, int);
        (org_ptr(0x140126da0L))(this, pAttackObj, nDamage);
    };
    void CAnimus::ChangeMode(unsigned int mode)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, unsigned int);
        (org_ptr(0x1401262e0L))(this, mode);
    };
    void CAnimus::ChangeMode_MasterCommand(int nMode)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, int);
        (org_ptr(0x140128df0L))(this, nMode);
    };
    bool CAnimus::ChangeTarget_MasterCommand(struct CCharacter* pTarget)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        return (org_ptr(0x140128e40L))(this, pTarget);
    };
    void CAnimus::CheckPosInTown()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140129bf0L))(this);
    };
    bool CAnimus::Create(struct _animus_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, struct _animus_create_setdata*);
        return (org_ptr(0x140128970L))(this, pData);
    };
    bool CAnimus::Destroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140128b90L))(this);
    };
    int CAnimus::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x14012cdf0L))(this);
    };
    int CAnimus::GetAttackPart()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401264e0L))(this);
    };
    float CAnimus::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401295c0L))(this);
    };
    int CAnimus::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*, int, struct CCharacter*, int*);
        return (org_ptr(0x140129610L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CAnimus::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CAnimus*, int);
        return (org_ptr(0x140129830L))(this, nPart);
    };
    float CAnimus::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CAnimus*, int);
        return (org_ptr(0x1401297e0L))(this, nPart);
    };
    int CAnimus::GetDefSkill(bool bBackAttackDamage)
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*, bool);
        return (org_ptr(0x140129730L))(this, bBackAttackDamage);
    };
    int CAnimus::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140129760L))(this);
    };
    int CAnimus::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*, struct CCharacter*, int, bool);
        return (org_ptr(0x1401298d0L))(this, pDst, nPart, bBackAttack);
    };
    int CAnimus::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401293d0L))(this);
    };
    int CAnimus::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401296c0L))(this);
    };
    int CAnimus::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401293f0L))(this);
    };
    char CAnimus::GetMaxLevel()
    {
        using org_ptr = char (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401296e0L))(this);
    };
    bool CAnimus::GetMoveTarget(struct CCharacter* target, float fMoveSpeed, char byMoveMode)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, float, char);
        return (org_ptr(0x140127fe0L))(this, target, fMoveSpeed, byMoveMode);
    };
    unsigned int CAnimus::GetNewMonSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x14012d610L))();
    };
    char* CAnimus::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140129a60L))(this);
    };
    int CAnimus::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401299f0L))(this);
    };
    int CAnimus::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401297a0L))(this);
    };
    void CAnimus::GetTarget()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140126350L))(this);
    };
    int CAnimus::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140129780L))(this);
    };
    float CAnimus::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x14012cda0L))(this);
    };
    int CAnimus::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401298a0L))(this);
    };
    float CAnimus::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140129570L))(this);
    };
    int CAnimus::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x1401297c0L))(this);
    };
    bool CAnimus::Heal(unsigned int skill)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, unsigned int);
        return (org_ptr(0x140127580L))(this, skill);
    };
    bool CAnimus::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, struct _object_id*);
        return (org_ptr(0x140128760L))(this, pID);
    };
    bool CAnimus::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, bool);
        return (org_ptr(0x14012ce10L))(this, bFirst);
    };
    bool CAnimus::IsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x14012ce30L))(this);
    };
    bool CAnimus::IsValidTarget()
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140129d10L))(this);
    };
    void CAnimus::LifeTimeCheck()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x1401284a0L))(this);
    };
    void CAnimus::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140128c20L))(this);
    };
    void CAnimus::MasterAttack_MasterInform(struct CCharacter* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        (org_ptr(0x140129170L))(this, pDst);
    };
    void CAnimus::MasterBeAttacked_MasterInform(struct CCharacter* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        (org_ptr(0x1401291b0L))(this, pDst);
    };
    void CAnimus::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x14012cd60L))(this);
    };
    void CAnimus::Process()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140128570L))(this);
    };
    void CAnimus::RecvKillMessage(struct CCharacter* pDier)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        (org_ptr(0x140129b80L))(this, pDier);
    };
    void CAnimus::Return_MasterRequest(char byReturnType)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, char);
        (org_ptr(0x140129370L))(this, byReturnType);
    };
    bool CAnimus::RobbedHP(struct CCharacter* pDst, int nDecHP)
    {
        using org_ptr = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, int);
        return (org_ptr(0x14012a7e0L))(this, pDst, nDecHP);
    };
    struct CCharacter* CAnimus::SearchNearEnemy()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140127e90L))(this);
    };
    struct CCharacter* CAnimus::SearchNearPlayerAttack()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CAnimus*);
        return (org_ptr(0x140127d20L))(this);
    };
    void CAnimus::SendMsg_AnimusActHealInform(unsigned int dwDstSerial, int nAddHP)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, unsigned int, int);
        (org_ptr(0x14012a730L))(this, dwDstSerial, nAddHP);
    };
    void CAnimus::SendMsg_Attack_Gen(struct CAttack* pAT)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CAttack*);
        (org_ptr(0x14012a4c0L))(this, pAT);
    };
    void CAnimus::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140129ef0L))(this);
    };
    void CAnimus::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x14012a020L))(this);
    };
    void CAnimus::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, int);
        (org_ptr(0x14012a1e0L))(this, n);
    };
    void CAnimus::SendMsg_LevelUp()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x14012a670L))(this);
    };
    void CAnimus::SendMsg_Move()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x14012a0d0L))(this);
    };
    void CAnimus::SendMsg_RealMovePoint(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, int);
        (org_ptr(0x14012a330L))(this, n);
    };
    int CAnimus::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CAnimus*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x140129420L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    bool CAnimus::SetStaticMember()
    {
        using org_ptr = bool (WINAPIV*)();
        return (org_ptr(0x14012a8a0L))();
    };
    void CAnimus::TransPoToMaster()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x14012acc0L))(this);
    };
    void CAnimus::_ProcComsumeMaterFP()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140128cf0L))(this);
    };
    void CAnimus::make_gen_attack_param(struct CCharacter* pDst, char byPart, struct _attack_param* pAP, int nSkillIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, char, struct _attack_param*, int);
        (org_ptr(0x14012aa70L))(this, pDst, byPart, pAP, nSkillIndex);
    };
    CAnimus::~CAnimus()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140125f70L))(this);
    };
    void CAnimus::dtor_CAnimus()
    {
        using org_ptr = void (WINAPIV*)(struct CAnimus*);
        (org_ptr(0x140125f70L))(this);
    };
END_ATF_NAMESPACE
