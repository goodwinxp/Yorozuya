#include <CAggroNode.hpp>


START_ATF_NAMESPACE
    CAggroNode::CAggroNode()
    {
        using org_ptr = void (WINAPIV*)(struct CAggroNode*);
        (org_ptr(0x1401616e0L))(this);
    };
    void CAggroNode::ctor_CAggroNode()
    {
        using org_ptr = void (WINAPIV*)(struct CAggroNode*);
        (org_ptr(0x1401616e0L))(this);
    };
    void CAggroNode::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CAggroNode*);
        (org_ptr(0x140161730L))(this);
    };
    int CAggroNode::IsLive()
    {
        using org_ptr = int (WINAPIV*)(struct CAggroNode*);
        return (org_ptr(0x1400f00b0L))(this);
    };
    void CAggroNode::Set(struct CCharacter* pCharacter)
    {
        using org_ptr = void (WINAPIV*)(struct CAggroNode*, struct CCharacter*);
        (org_ptr(0x140161810L))(this, pCharacter);
    };
    void CAggroNode::SetAggro(int nDam, float fAdd, int nAttackType, unsigned int dwAttackSerial, int bOtherPlayerSupport, int bFirstAttack, int bTempSkill)
    {
        using org_ptr = void (WINAPIV*)(struct CAggroNode*, int, float, int, unsigned int, int, int, int);
        (org_ptr(0x14015d5f0L))(this, nDam, fAdd, nAttackType, dwAttackSerial, bOtherPlayerSupport, bFirstAttack, bTempSkill);
    };
END_ATF_NAMESPACE
