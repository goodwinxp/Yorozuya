#include <CHolyStone.hpp>


START_ATF_NAMESPACE
    void CHolyStone::AutoRecover()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x1401373d0L))(this);
    };
    CHolyStone::CHolyStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140136d10L))(this);
    };
    void CHolyStone::ctor_CHolyStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140136d10L))(this);
    };
    uint16_t CHolyStone::CalcCurHPRate()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138f10L))(this);
    };
    bool CHolyStone::Create(struct _stone_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, struct _stone_create_setdata*);
        return (org_ptr(0x140136fa0L))(this, pData);
    };
    bool CHolyStone::Destroy(char byDestroyCode, struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, char, struct CCharacter*);
        return (org_ptr(0x140137140L))(this, byDestroyCode, pAtter);
    };
    void CHolyStone::DropItem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140137fa0L))(this);
    };
    uint16_t CHolyStone::GetAddCountWithPlayer()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140137ee0L))(this);
    };
    int CHolyStone::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138eb0L))(this);
    };
    int CHolyStone::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*, int, struct CCharacter*, int*);
        return (org_ptr(0x1401376f0L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CHolyStone::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CHolyStone*, int);
        return (org_ptr(0x140138e00L))(this, nPart);
    };
    float CHolyStone::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CHolyStone*, int);
        return (org_ptr(0x140138da0L))(this, nPart);
    };
    int CHolyStone::GetDefSkill(bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*, bool);
        return (org_ptr(0x140138cb0L))(this, bBackAttack);
    };
    int CHolyStone::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138ce0L))(this);
    };
    int CHolyStone::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138be0L))(this);
    };
    int CHolyStone::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138c80L))(this);
    };
    int CHolyStone::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138c00L))(this);
    };
    unsigned int CHolyStone::GetNewStoneSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x140138fc0L))();
    };
    char* CHolyStone::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x1401378e0L))(this);
    };
    int CHolyStone::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138ef0L))(this);
    };
    int CHolyStone::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138d40L))(this);
    };
    int CHolyStone::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138d10L))(this);
    };
    float CHolyStone::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138e60L))(this);
    };
    float CHolyStone::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138c30L))(this);
    };
    int CHolyStone::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*);
        return (org_ptr(0x140138d70L))(this);
    };
    bool CHolyStone::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, struct _object_id*);
        return (org_ptr(0x140136e40L))(this, pID);
    };
    bool CHolyStone::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, bool);
        return (org_ptr(0x140138ed0L))(this, bFirst);
    };
    bool CHolyStone::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, struct CCharacter*);
        return (org_ptr(0x140137770L))(this, pAtter);
    };
    bool CHolyStone::IsChangedHP(uint16_t wAlterRate)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, uint16_t);
        return (org_ptr(0x1402847d0L))(this, wAlterRate);
    };
    void CHolyStone::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140137370L))(this);
    };
    void CHolyStone::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140138b90L))(this);
    };
    void CHolyStone::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x1401379d0L))(this);
    };
    void CHolyStone::SendMsg_Destroy(char byDestroyCode, unsigned int dwDestroySerial)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*, char, unsigned int);
        (org_ptr(0x140137ad0L))(this, byDestroyCode, dwDestroySerial);
    };
    void CHolyStone::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*, int);
        (org_ptr(0x140137b80L))(this, n);
    };
    void CHolyStone::SendMsg_StoneAlterOper()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140137cd0L))(this);
    };
    int CHolyStone::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStone*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x140137590L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    void CHolyStone::SetDropItem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140137d80L))(this);
    };
    bool CHolyStone::SetHP(int nHP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStone*, int, bool);
        return (org_ptr(0x140137510L))(this, nHP, bOver);
    };
    void CHolyStone::SetOper(bool bOper, float fHPRate)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*, bool, float);
        (org_ptr(0x140137290L))(this, bOper, fHPRate);
    };
    CHolyStone::~CHolyStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140136db0L))(this);
    };
    void CHolyStone::dtor_CHolyStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStone*);
        (org_ptr(0x140136db0L))(this);
    };
END_ATF_NAMESPACE
