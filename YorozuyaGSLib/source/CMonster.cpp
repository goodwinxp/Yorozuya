#include <CMonster.hpp>


START_ATF_NAMESPACE
    bool CMonster::AddEventItem(struct _event_loot_item* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct _event_loot_item*);
        return (org_ptr(0x140142ab0L))(this, pItem);
    };
    int CMonster::AssistSF(struct CCharacter* pDst, struct CMonsterSkill* pskill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        return (org_ptr(0x14014ce30L))(this, pDst, pskill);
    };
    int CMonster::Attack(struct CCharacter* pDst, struct CMonsterSkill* pskill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        return (org_ptr(0x14014e4c0L))(this, pDst, pskill);
    };
    int CMonster::AttackObject(int nDamage, struct CGameObject* pOri)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, int, struct CGameObject*);
        return (org_ptr(0x140142a60L))(this, nDamage, pOri);
    };
    int CMonster::AttackableHeight()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401468d0L))(this);
    };
    void CMonster::AutoRecover()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140147440L))(this);
    };
    void CMonster::BeTargeted(struct CCharacter* pSeacher)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*);
        (org_ptr(0x1401427b0L))(this, pSeacher);
    };
    CMonster::CMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x1401414e0L))(this);
    };
    void CMonster::ctor_CMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x1401414e0L))(this);
    };
    void CMonster::ChangeApparition(bool bApparition, unsigned int dwAfterKillTerm)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, bool, unsigned int);
        (org_ptr(0x1401434e0L))(this, bApparition, dwAfterKillTerm);
    };
    void CMonster::CheckAutoRecoverHP()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140143370L))(this);
    };
    bool CMonster::CheckDelayDestroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401432f0L))(this);
    };
    void CMonster::CheckEmotionPresentation()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140147fd0L))(this);
    };
    bool CMonster::CheckEventEmotionPresentation(char byCheckType, struct CCharacter* pTarget)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, char, struct CCharacter*);
        return (org_ptr(0x140147f20L))(this, byCheckType, pTarget);
    };
    void CMonster::CheckLootItem(struct CPlayer* pOwner)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CPlayer*);
        (org_ptr(0x140144120L))(this, pOwner);
    };
    void CMonster::CheckMonsterRotate()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140147b80L))(this);
    };
    bool CMonster::CheckMonsterStateData()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401435c0L))(this);
    };
    bool CMonster::CheckRespawnProcess()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140143070L))(this);
    };
    void CMonster::ClearEmotionPresentation()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140147f80L))(this);
    };
    void CMonster::Command_ChildMonDestroy(unsigned int dwAfterKillTerm)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, unsigned int);
        (org_ptr(0x140143550L))(this, dwAfterKillTerm);
    };
    bool CMonster::ConvertTargetPlayer(struct CPlayer* pTar)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
        return (org_ptr(0x1401428c0L))(this, pTar);
    };
    bool CMonster::Create(struct _monster_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct _monster_create_setdata*);
        return (org_ptr(0x140141c50L))(this, pData);
    };
    int CMonster::CreateAI(int nType)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, int);
        return (org_ptr(0x1401423d0L))(this, nType);
    };
    bool CMonster::Destroy(char byDestroyCode, struct CGameObject* pAttObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, char, struct CGameObject*);
        return (org_ptr(0x1401424f0L))(this, byDestroyCode, pAttObj);
    };
    void CMonster::DisableStdItemLoot()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x1402a7900L))(this);
    };
    bool CMonster::FixTargetWhile(struct CCharacter* pkTarget, unsigned int dwMiliSecond)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, unsigned int);
        return (org_ptr(0x140146f20L))(this, pkTarget, dwMiliSecond);
    };
    float CMonster::GeEmotionImpStdTime()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401558d0L))(this);
    };
    unsigned int CMonster::GetAggroResetTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401617d0L))(this);
    };
    unsigned int CMonster::GetAggroShortTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140161790L))(this);
    };
    int CMonster::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bb10L))(this);
    };
    int CMonster::GetAttackPart()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014ddc0L))(this);
    };
    float CMonster::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140146660L))(this);
    };
    struct CCharacter* CMonster::GetAttackTarget()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140132a50L))(this);
    };
    float CMonster::GetBonusInAreaAggro()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140161890L))(this);
    };
    char CMonster::GetCombatState()
    {
        using org_ptr = char (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140143870L))(this);
    };
    int CMonster::GetCritical_Exception_Rate()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bb70L))(this);
    };
    int CMonster::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, int, struct CCharacter*, int*);
        return (org_ptr(0x140146790L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CMonster::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*, int);
        return (org_ptr(0x14014ba70L))(this, nPart);
    };
    float CMonster::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*, int);
        return (org_ptr(0x14014ba20L))(this, nPart);
    };
    int CMonster::GetDefSkill(bool bBackAttackDamage)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, bool);
        return (org_ptr(0x1401466b0L))(this, bBackAttackDamage);
    };
    char CMonster::GetEmotionState()
    {
        using org_ptr = char (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140143810L))(this);
    };
    int CMonster::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140145620L))(this);
    };
    int CMonster::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, int, bool);
        return (org_ptr(0x140146da0L))(this, pDst, nPart, bBackAttack);
    };
    int CMonster::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401461e0L))(this);
    };
    int CMonster::GetHelpMeCase()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401554f0L))(this);
    };
    int CMonster::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014b9e0L))(this);
    };
    int CMonster::GetMaxDMGSFContCount()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140147050L))(this);
    };
    int CMonster::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401462a0L))(this);
    };
    int CMonster::GetMob_AsistType()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140161590L))(this);
    };
    int CMonster::GetMob_SubRace()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140161570L))(this);
    };
    uint16_t CMonster::GetMonStateInfo()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140143720L))(this);
    };
    int CMonster::GetMonsterGrade()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bfd0L))(this);
    };
    float CMonster::GetMoveSpeed()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140142d80L))(this);
    };
    char CMonster::GetMoveType()
    {
        using org_ptr = char (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401437b0L))(this);
    };
    int CMonster::GetMyDMGSFContCount()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401470b0L))(this);
    };
    unsigned int CMonster::GetNewMonSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x14014bff0L))();
    };
    char* CMonster::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140142700L))(this);
    };
    int CMonster::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bb60L))(this);
    };
    int CMonster::GetOffensiveType()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401554d0L))(this);
    };
    struct CLuaSignalReActor* CMonster::GetSignalReActor()
    {
        using org_ptr = struct CLuaSignalReActor* (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140406790L))(this);
    };
    float CMonster::GetSkillDelayTime(struct CMonsterSkill* pSkill)
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*, struct CMonsterSkill*);
        return (org_ptr(0x140142c90L))(this, pSkill);
    };
    int CMonster::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140145820L))(this);
    };
    bool CMonster::GetViewAngleCap(int nCapKind, int* nOutValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, int, int*);
        return (org_ptr(0x140146c20L))(this, nCapKind, nOutValue);
    };
    float CMonster::GetVisualAngle()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014caa0L))(this);
    };
    float CMonster::GetVisualField()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bf80L))(this);
    };
    int CMonster::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140145720L))(this);
    };
    float CMonster::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bac0L))(this);
    };
    int CMonster::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014ba00L))(this);
    };
    float CMonster::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140146610L))(this);
    };
    int CMonster::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140145920L))(this);
    };
    float CMonster::GetYAngle()
    {
        using org_ptr = float (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401438d0L))(this);
    };
    char CMonster::GetYAngleByte()
    {
        using org_ptr = char (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014cb50L))(this);
    };
    bool CMonster::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct _object_id*);
        return (org_ptr(0x140141970L))(this, pID);
    };
    char CMonster::InsertSFContEffect(char byContCode, char byEffectCode, unsigned int dwEffectIndex, uint16_t wDurSec, char byLv, bool* pbUpMty, struct CCharacter* pActChar)
    {
        using org_ptr = char (WINAPIV*)(struct CMonster*, char, char, unsigned int, uint16_t, char, bool*, struct CCharacter*);
        return (org_ptr(0x1401475b0L))(this, byContCode, byEffectCode, dwEffectIndex, wDurSec, byLv, pbUpMty, pActChar);
    };
    bool CMonster::IsAttackableInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bb30L))(this);
    };
    bool CMonster::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, bool);
        return (org_ptr(0x1401468f0L))(this, bFirst);
    };
    bool CMonster::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140146c80L))(this, pAtter);
    };
    bool CMonster::IsBossMonster()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14007d4e0L))(this);
    };
    bool CMonster::IsMovable()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140142e20L))(this);
    };
    int CMonster::IsPreAttackAbleMon()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140155460L))(this);
    };
    bool CMonster::IsRecvableContEffect()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401469a0L))(this);
    };
    bool CMonster::IsRewardExp()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14014bb40L))(this);
    };
    bool CMonster::IsRoateMonster()
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x1401555d0L))(this);
    };
    int CMonster::IsValidPlayer()
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x140142e70L))(this);
    };
    bool CMonster::IsViewArea(struct CCharacter* pTarget)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140146a20L))(this, pTarget);
    };
    void CMonster::LinkEventRespawn(struct _event_respawn* pEventRespawn)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct _event_respawn*);
        (org_ptr(0x1402a78d0L))(this, pEventRespawn);
    };
    void CMonster::LinkEventSet(struct _event_set* pEventSet)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct _event_set*);
        (org_ptr(0x1402aa080L))(this, pEventSet);
    };
    void CMonster::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140147c90L))(this);
    };
    void CMonster::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x14014b990L))(this);
    };
    bool CMonster::RobbedHP(struct CCharacter* pDst, int nDecHP)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, int);
        return (org_ptr(0x140142800L))(this, pDst, nDecHP);
    };
    bool CMonster::SF_AllContHelpForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140145f20L))(this, pDstObj);
    };
    bool CMonster::SF_AllContHelpSkillRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140145e10L))(this, pDstObj);
    };
    bool CMonster::SF_HPInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, float);
        return (org_ptr(0x140145a20L))(this, pDstObj, fEffectValue);
    };
    bool CMonster::SF_LateContDamageRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140146030L))(this, pDstObj);
    };
    bool CMonster::SF_LateContHelpForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140145cc0L))(this, pDstObj);
    };
    bool CMonster::SF_LateContHelpSkillRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
        return (org_ptr(0x140145b70L))(this, pDstObj);
    };
    struct CCharacter* CMonster::SearchNearPlayer()
    {
        using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonster*);
        return (org_ptr(0x14026f340L))(this);
    };
    void CMonster::SendMsg_Assist_Force(char byErrCode, struct CCharacter* pDst, struct _force_fld* pForc_fld, int nSFLv)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char, struct CCharacter*, struct _force_fld*, int);
        (org_ptr(0x14014d690L))(this, byErrCode, pDst, pForc_fld, nSFLv);
    };
    void CMonster::SendMsg_Assist_Skill(char byErrCode, int nEffectCode, struct CCharacter* pDst, struct _skill_fld* pSkill_fld, int nSFLv)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char, int, struct CCharacter*, struct _skill_fld*, int);
        (org_ptr(0x14014d800L))(this, byErrCode, nEffectCode, pDst, pSkill_fld, nSFLv);
    };
    void CMonster::SendMsg_Attack_Force(struct CMonsterAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CMonsterAttack*);
        (org_ptr(0x14014ee20L))(this, pAt);
    };
    void CMonster::SendMsg_Attack_Gen(struct CMonsterAttack* pAT)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CMonsterAttack*);
        (org_ptr(0x14014ec70L))(this, pAT);
    };
    void CMonster::SendMsg_Attack_Skill(struct CMonsterAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CMonsterAttack*);
        (org_ptr(0x14014f040L))(this, pAt);
    };
    void CMonster::SendMsg_Change_MonsterRotate()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140148790L))(this);
    };
    void CMonster::SendMsg_Change_MonsterState()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140148700L))(this);
    };
    void CMonster::SendMsg_Change_MonsterTarget(struct CCharacter* pChar)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*);
        (org_ptr(0x140148820L))(this, pChar);
    };
    void CMonster::SendMsg_Create()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140148380L))(this);
    };
    void CMonster::SendMsg_Destroy(char byDestroyCode)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char);
        (org_ptr(0x1401489d0L))(this, byDestroyCode);
    };
    void CMonster::SendMsg_Emotion_Presentation(char bylhw, uint16_t wSubIndex, uint16_t wRandIndex, int nSendTargetIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char, uint16_t, uint16_t, int);
        (org_ptr(0x1401488e0L))(this, bylhw, wSubIndex, wRandIndex, nSendTargetIndex);
    };
    void CMonster::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, int);
        (org_ptr(0x140148490L))(this, n);
    };
    void CMonster::SendMsg_Move()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140148a70L))(this);
    };
    void CMonster::SendMsg_RealMovePoint(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, int);
        (org_ptr(0x1401485c0L))(this, n);
    };
    void CMonster::SetAttackTarget(struct CCharacter* p)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*);
        (org_ptr(0x1401429c0L))(this, p);
    };
    void CMonster::SetCombatState(char byCombatState)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char);
        (org_ptr(0x140143830L))(this, byCombatState);
    };
    int CMonster::SetDamage(int nDamage, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x1401462d0L))(this, nDamage, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    void CMonster::SetDefPart(struct _monster_fld* pRecordSet)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct _monster_fld*);
        (org_ptr(0x140142b40L))(this, pRecordSet);
    };
    void CMonster::SetEmotionState(char byEmotionState)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char);
        (org_ptr(0x1401437d0L))(this, byEmotionState);
    };
    bool CMonster::SetHP(int nHP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, int, bool);
        return (org_ptr(0x140146200L))(this, nHP, bOver);
    };
    void CMonster::SetMoveType(char bMoveType)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char);
        (org_ptr(0x140143770L))(this, bMoveType);
    };
    void CMonster::SetStun(bool bStun)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, bool);
        (org_ptr(0x140146130L))(this, bStun);
    };
    void CMonster::UpdateLookAtPos(float* vLookAt)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, float*);
        (org_ptr(0x140148220L))(this, vLookAt);
    };
    void CMonster::UpdateLookAtPos()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140148090L))(this);
    };
    void CMonster::UpdateSFCont()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140147170L))(this);
    };
    int CMonster::_AssistSF_Cont_Dmg(struct CCharacter* pDst, struct CMonsterSkill* pskill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        return (org_ptr(0x14014cf60L))(this, pDst, pskill);
    };
    int CMonster::_AssistSF_Cont_Support(struct CCharacter* pDst, struct CMonsterSkill* pskill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        return (org_ptr(0x14014cf10L))(this, pDst, pskill);
    };
    int CMonster::_AssistSF_Cont_Temp(struct CCharacter* pDst, struct CMonsterSkill* pskill)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        return (org_ptr(0x14014d330L))(this, pDst, pskill);
    };
    void CMonster::_BossBirthWriteLog()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140143910L))(this);
    };
    void CMonster::_BossDieWriteLog_End()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x1401440c0L))(this);
    };
    void CMonster::_BossDieWriteLog_Start(char byDestroyCode, struct CGameObject* pAttObj)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, char, struct CGameObject*);
        (org_ptr(0x1401439d0L))(this, byDestroyCode, pAttObj);
    };
    void CMonster::_DestroySDM()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140149460L))();
    };
    void CMonster::_InitSDM()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1401491a0L))();
    };
    void CMonster::_InitSDM_LootTBL()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1401492b0L))();
    };
    bool CMonster::_LootItem_EventSet(struct CPlayer* pOwner)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
        return (org_ptr(0x140144ff0L))(this, pOwner);
    };
    bool CMonster::_LootItem_Qst(struct CPlayer* pOwner)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
        return (org_ptr(0x140145390L))(this, pOwner);
    };
    bool CMonster::_LootItem_Rwp(struct CPlayer* pOwner)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
        return (org_ptr(0x140144d90L))(this, pOwner);
    };
    bool CMonster::_LootItem_Std(struct CPlayer* pOwner)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
        return (org_ptr(0x140144240L))(this, pOwner);
    };
    void CMonster::make_force_attack_param(struct CCharacter* pDst, struct CMonsterSkill* pSkill, struct _attack_param* pAP)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*, struct _attack_param*);
        (org_ptr(0x14014e0b0L))(this, pDst, pSkill, pAP);
    };
    void CMonster::make_gen_attack_param(struct CCharacter* pDst, struct _attack_param* pAP)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*, struct _attack_param*);
        (org_ptr(0x14014de80L))(this, pDst, pAP);
    };
    bool CMonster::make_skill_attack_param(struct CCharacter* pDst, struct CMonsterSkill* pSkill, int nEffectType, struct _attack_param* pAP)
    {
        using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*, int, struct _attack_param*);
        return (org_ptr(0x14014e260L))(this, pDst, pSkill, nEffectType, pAP);
    };
    CMonster::~CMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140141780L))(this);
    };
    void CMonster::dtor_CMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x140141780L))(this);
    };
    
    
    
    
    
END_ATF_NAMESPACE
