#include <CNuclearBomb.hpp>


START_ATF_NAMESPACE
    void CNuclearBomb::Attack(int StartNum, int Obj_num)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, int, int);
        (org_ptr(0x14013c4f0L))(this, StartNum, Obj_num);
    };
    CNuclearBomb::CNuclearBomb()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013bd50L))(this);
    };
    void CNuclearBomb::ctor_CNuclearBomb()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013bd50L))(this);
    };
    bool CNuclearBomb::Create(struct _nuclear_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBomb*, struct _nuclear_create_setdata*);
        return (org_ptr(0x14013bf50L))(this, pData);
    };
    bool CNuclearBomb::Destroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013c0d0L))(this);
    };
    char CNuclearBomb::GetBombStatus()
    {
        using org_ptr = char (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e1b0L))(this);
    };
    uint16_t CNuclearBomb::GetControlSerial()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e2a0L))(this);
    };
    int CNuclearBomb::GetDamagedObjNum()
    {
        using org_ptr = int (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e3a0L))(this);
    };
    int CNuclearBomb::GetGenAttackProb(struct CCharacter* pDst, int nPart)
    {
        using org_ptr = int (WINAPIV*)(struct CNuclearBomb*, struct CCharacter*, int);
        return (org_ptr(0x14013e4a0L))(this, pDst, nPart);
    };
    uint16_t CNuclearBomb::GetItemIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e320L))(this);
    };
    char CNuclearBomb::GetMasterClass()
    {
        using org_ptr = char (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013d3b0L))(this);
    };
    char CNuclearBomb::GetMasterRace()
    {
        using org_ptr = char (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e530L))(this);
    };
    float* CNuclearBomb::GetMissilePos()
    {
        using org_ptr = float* (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e1d0L))(this);
    };
    unsigned int CNuclearBomb::GetNewSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x14013bf30L))();
    };
    void CNuclearBomb::GetShowEffectList()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013c210L))(this);
    };
    bool CNuclearBomb::GetUse()
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBomb*);
        return (org_ptr(0x14013e190L))(this);
    };
    bool CNuclearBomb::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CNuclearBomb*, struct _object_id*);
        return (org_ptr(0x14013be90L))(this, pID);
    };
    void CNuclearBomb::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013ba70L))(this);
    };
    void CNuclearBomb::NuclearDamege()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013c660L))(this);
    };
    void CNuclearBomb::RecvKillMessage(struct CCharacter* pDier)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, struct CCharacter*);
        (org_ptr(0x14013d300L))(this, pDier);
    };
    void CNuclearBomb::SendMsg_AddEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013ce00L))(this);
    };
    void CNuclearBomb::SendMsg_Attack(int StartNum, int Obj_Num)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, int, int);
        (org_ptr(0x14013cde0L))(this, StartNum, Obj_Num);
    };
    void CNuclearBomb::SendMsg_DropMissile()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013cd10L))(this);
    };
    void CNuclearBomb::SendMsg_InformAttack()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013cf70L))(this);
    };
    void CNuclearBomb::SendMsg_InformDropPos()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013cb90L))(this);
    };
    void CNuclearBomb::SendMsg_MasterDie()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013d0d0L))(this);
    };
    void CNuclearBomb::SendMsg_NuclearFind(int n, char race)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, int, char);
        (org_ptr(0x14013caf0L))(this, n, race);
    };
    void CNuclearBomb::SendMsg_Result(int n, char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, int, char);
        (org_ptr(0x14013d260L))(this, n, byCode);
    };
    void CNuclearBomb::SetBombStatus()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013e3c0L))(this);
    };
    void CNuclearBomb::SetControlSerial(uint16_t wControlSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, uint16_t);
        (org_ptr(0x14013e220L))(this, wControlSerial);
    };
    void CNuclearBomb::SetNuclearIndex(uint16_t wItemIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, uint16_t);
        (org_ptr(0x14013e1f0L))(this, wItemIndex);
    };
    void CNuclearBomb::WarningToAll(char byRaceCode)
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*, char);
        (org_ptr(0x14013ca00L))(this, byRaceCode);
    };
    CNuclearBomb::~CNuclearBomb()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013be40L))(this);
    };
    void CNuclearBomb::dtor_CNuclearBomb()
    {
        using org_ptr = void (WINAPIV*)(struct CNuclearBomb*);
        (org_ptr(0x14013be40L))(this);
    };
END_ATF_NAMESPACE
