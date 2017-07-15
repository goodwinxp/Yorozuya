#include <CMonsterAggroMgr.hpp>


START_ATF_NAMESPACE
    CMonsterAggroMgr::CMonsterAggroMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015db60L))(this);
    };
    void CMonsterAggroMgr::ctor_CMonsterAggroMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015db60L))(this);
    };
    struct CCharacter* CMonsterAggroMgr::GetKingPowerDamageCharacter()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonsterAggroMgr*);
        return (org_ptr(0x14015e060L))(this);
    };
    struct CCharacter* CMonsterAggroMgr::GetTopAggroCharacter()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonsterAggroMgr*);
        return (org_ptr(0x14015dfa0L))(this);
    };
    struct CCharacter* CMonsterAggroMgr::GetTopDamageCharacter()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonsterAggroMgr*);
        return (org_ptr(0x14015e000L))(this);
    };
    void CMonsterAggroMgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015dca0L))(this);
    };
    void CMonsterAggroMgr::OnlyOnceInit(struct CMonster* pMonster)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*, struct CMonster*);
        (org_ptr(0x14015dc40L))(this, pMonster);
    };
    void CMonsterAggroMgr::Process()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015e120L))(this);
    };
    void CMonsterAggroMgr::ResetAggro()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015e900L))(this);
    };
    struct CAggroNode* CMonsterAggroMgr::SearchAggroNode(struct CCharacter* pCharacter)
    {
        using org_ptr = struct CAggroNode* (WINAPIV*)(struct CMonsterAggroMgr*, struct CCharacter*);
        return (org_ptr(0x14017a520L))(this, pCharacter);
    };
    void CMonsterAggroMgr::SendChangeAggroData()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015e950L))(this);
    };
    void CMonsterAggroMgr::SetAggro(struct CCharacter* pCharacter, int nDam, int nAttackType, unsigned int dwAttackSerial, int bOtherPlayerSupport, int bTempSkill)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*, struct CCharacter*, int, int, unsigned int, int, int);
        (org_ptr(0x14015dda0L))(this, pCharacter, nDam, nAttackType, dwAttackSerial, bOtherPlayerSupport, bTempSkill);
    };
    void CMonsterAggroMgr::SetTopAggroCharacter(struct CCharacter* p)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*, struct CCharacter*);
        (org_ptr(0x14014c2a0L))(this, p);
    };
    void CMonsterAggroMgr::ShortRankDelay(unsigned int dwDelayTime)
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*, unsigned int);
        (org_ptr(0x14015e0c0L))(this, dwDelayTime);
    };
    struct CAggroNode* CMonsterAggroMgr::_GetBlinkNode()
    {
        using org_ptr = struct CAggroNode* (WINAPIV*)(struct CMonsterAggroMgr*);
        return (org_ptr(0x14015e2e0L))(this);
    };
    struct CAggroNode* CMonsterAggroMgr::_SearchAggroNode(struct CCharacter* pCharacter)
    {
        using org_ptr = struct CAggroNode* (WINAPIV*)(struct CMonsterAggroMgr*, struct CCharacter*);
        return (org_ptr(0x14015e210L))(this, pCharacter);
    };
    void CMonsterAggroMgr::_ShortRank()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015e370L))(this);
    };
    CMonsterAggroMgr::~CMonsterAggroMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015dc90L))(this);
    };
    void CMonsterAggroMgr::dtor_CMonsterAggroMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CMonsterAggroMgr*);
        (org_ptr(0x14015dc90L))(this);
    };
END_ATF_NAMESPACE
