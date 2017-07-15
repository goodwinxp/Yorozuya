#include <CGameObject.hpp>


START_ATF_NAMESPACE
    void CGameObject::AlterSec()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14012c640L))(this);
    };
    int CGameObject::AttackableHeight()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e340L))(this);
    };
    void CGameObject::BeTargeted(struct CCharacter* pSeacher)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        (org_ptr(0x140072b50L))(this, pSeacher);
    };
    CGameObject::CGameObject()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017a570L))(this);
    };
    void CGameObject::ctor_CGameObject()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017a570L))(this);
    };
    void CGameObject::CalcAbsPos()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017b220L))(this);
    };
    int CGameObject::CalcCirclePlayerNum(int nRange)
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*, int);
        return (org_ptr(0x14017c2e0L))(this, nRange);
    };
    int CGameObject::CalcCirclePlayerNum(int nRange, bool (WINAPIV* fnComp)(struct CGameObject*))
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*, int, bool (WINAPIV*)(struct CGameObject*));
        return (org_ptr(0x14017c720L))(this, nRange, fnComp);
    };
    uint16_t CGameObject::CalcCurHPRate()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012c5b0L))(this);
    };
    void CGameObject::CalcScrExtendPoint(struct CRect* prcWnd, struct CRect* prcExtend)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CRect*, struct CRect*);
        (org_ptr(0x14017bb40L))(this, prcWnd, prcExtend);
    };
    void CGameObject::CalcScrNormalPoint(struct CRect* prcWnd)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CRect*);
        (org_ptr(0x14017baa0L))(this, prcWnd);
    };
    unsigned int CGameObject::CalcSecIndex()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14017b960L))(this);
    };
    void CGameObject::CircleReport(char* pbyType, char* szMsg, int nMsgSize, bool bToOne)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, char*, char*, int, bool);
        (org_ptr(0x14017bc50L))(this, pbyType, szMsg, nMsgSize, bToOne);
    };
    void CGameObject::CircleReport(char* pbyType, char* szMsg, int nMsgSize, unsigned int dwPassObjSerial, bool bToOne)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, char*, char*, int, unsigned int, bool);
        (org_ptr(0x14017bf90L))(this, pbyType, szMsg, nMsgSize, dwPassObjSerial, bToOne);
    };
    bool CGameObject::Create(struct _object_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct _object_create_setdata*);
        return (org_ptr(0x14017a970L))(this, pData);
    };
    bool CGameObject::Destroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14017ab40L))(this);
    };
    bool CGameObject::FixTargetWhile(struct CCharacter* pkTarget, unsigned int dwMiliSecond)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, unsigned int);
        return (org_ptr(0x14012c6e0L))(this, pkTarget, dwMiliSecond);
    };
    int CGameObject::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e360L))(this);
    };
    int CGameObject::GetAttackLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012c720L))(this);
    };
    float CGameObject::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e300L))(this);
    };
    int CGameObject::GetAvoidRate()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012c710L))(this);
    };
    unsigned int CGameObject::GetCurSecNum()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14017ba50L))(this);
    };
    int CGameObject::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*, int, struct CCharacter*, int*);
        return (org_ptr(0x14012e140L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CGameObject::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CGameObject*, int);
        return (org_ptr(0x14012e200L))(this, nPart);
    };
    float CGameObject::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CGameObject*, int);
        return (org_ptr(0x14012e1b0L))(this, nPart);
    };
    int CGameObject::GetDefSkill(bool bBackAttackDamage)
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*, bool);
        return (org_ptr(0x14012e2a0L))(this, bBackAttackDamage);
    };
    int CGameObject::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e170L))(this);
    };
    int CGameObject::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*, struct CCharacter*, int, bool);
        return (org_ptr(0x14012e100L))(this, pDst, nPart, bBackAttack);
    };
    int CGameObject::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e0b0L))(this);
    };
    int CGameObject::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e290L))(this);
    };
    int CGameObject::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e0c0L))(this);
    };
    char* CGameObject::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e380L))(this);
    };
    int CGameObject::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e370L))(this);
    };
    int CGameObject::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e190L))(this);
    };
    bool CGameObject::GetStun()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14014cb30L))(this);
    };
    int CGameObject::GetUseSectorRange()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14007d8c0L))(this);
    };
    int CGameObject::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e180L))(this);
    };
    float CGameObject::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e250L))(this);
    };
    int CGameObject::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e350L))(this);
    };
    float CGameObject::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e2c0L))(this);
    };
    int CGameObject::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e1a0L))(this);
    };
    void CGameObject::Init(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, struct _object_id*);
        (org_ptr(0x14017a730L))(this, pID);
    };
    bool CGameObject::IsAttackableInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x140072b70L))(this);
    };
    bool CGameObject::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, bool);
        return (org_ptr(0x14012e390L))(this, bFirst);
    };
    bool CGameObject::IsBeCirclePlayer(int nRange)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, int);
        return (org_ptr(0x14017c440L))(this, nRange);
    };
    bool CGameObject::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c780L))(this, pAtter);
    };
    bool CGameObject::IsCircleObject(int nRange, struct CGameObject* pObject)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, int, struct CGameObject*);
        return (org_ptr(0x14017c5a0L))(this, nRange, pObject);
    };
    bool CGameObject::IsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012e3b0L))(this);
    };
    bool CGameObject::IsRecvableContEffect()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012c770L))(this);
    };
    bool CGameObject::IsRewardExp()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x140072b60L))(this);
    };
    bool CGameObject::Is_Battle_Mode()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14012cbc0L))(this);
    };
    void CGameObject::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14012e080L))(this);
    };
    void CGameObject::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017ad00L))(this);
    };
    void CGameObject::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14012e090L))(this);
    };
    void CGameObject::RecvKillMessage(struct CCharacter* pDier)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        (org_ptr(0x14012e0d0L))(this, pDier);
    };
    unsigned int CGameObject::RerangeSecIndex(unsigned int dwOld, unsigned int dwNew)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CGameObject*, unsigned int, unsigned int);
        return (org_ptr(0x14017b2c0L))(this, dwOld, dwNew);
    };
    void CGameObject::ResetSector(unsigned int dwOldSec, unsigned int dwNewSec)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, unsigned int, unsigned int);
        (org_ptr(0x14017b530L))(this, dwOldSec, dwNewSec);
    };
    bool CGameObject::RobbedHP(struct CCharacter* pDst, int nDecHP)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, int);
        return (org_ptr(0x14012e0e0L))(this, pDst, nDecHP);
    };
    void CGameObject::SFContDelMessage(char byContCode, char byListIndex, bool bSend, bool bAura)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, char, char, bool, bool);
        (org_ptr(0x14012c6a0L))(this, byContCode, byListIndex, bSend, bAura);
    };
    void CGameObject::SFContInsertMessage(char byContCode, char byListIndex, bool bAura, struct CPlayer* pPlayerAct)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, char, char, bool, struct CPlayer*);
        (org_ptr(0x14012c680L))(this, byContCode, byListIndex, bAura, pPlayerAct);
    };
    void CGameObject::SFContUpdateTimeMessage(char byContCode, char byListIndex, int nLeftTime)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, char, char, int);
        (org_ptr(0x14012c6c0L))(this, byContCode, byListIndex, nLeftTime);
    };
    bool CGameObject::SF_AllContDamageForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c920L))(this, pDstObj);
    };
    bool CGameObject::SF_AllContHelpForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c900L))(this, pDstObj);
    };
    bool CGameObject::SF_AllContHelpSkillRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c8e0L))(this, pDstObj);
    };
    bool CGameObject::SF_AttHPtoDstFP_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c7a0L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_ContDamageTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c7c0L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_ContHelpTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c840L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_ConvertMonsterTarget(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c980L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_ConvertTargetDest(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012cb20L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_DamageAndStun(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012ca60L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_FPDec(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012ca40L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_HPInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c800L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_IncHPCircleParty(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c9e0L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_IncreaseDP(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012cb00L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_LateContDamageRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c8c0L))(this, pDstObj);
    };
    bool CGameObject::SF_LateContHelpForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c8a0L))(this, pDstObj);
    };
    bool CGameObject::SF_LateContHelpSkillRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c880L))(this, pDstObj);
    };
    bool CGameObject::SF_MakePortalReturnBindPositionPartyMember(struct CCharacter* pDstObj, float fEffectValue, char* byRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float, char*);
        return (org_ptr(0x14012cac0L))(this, pDstObj, fEffectValue, byRet);
    };
    bool CGameObject::SF_MakeZeroAnimusRecallTimeOnce(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012cb60L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_OthersContHelpSFRemove_Once(float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, float);
        return (org_ptr(0x14012c940L))(this, fEffectValue);
    };
    bool CGameObject::SF_OverHealing_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c860L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_RecoverAllReturnStateAnimusHPFull(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012cb40L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_ReleaseMonsterTarget(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c9c0L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_RemoveAllContHelp_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012caa0L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_Resurrect_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
        return (org_ptr(0x14012c7e0L))(this, pDstObj);
    };
    bool CGameObject::SF_ReturnBindPosition(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012cae0L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_SPDec(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012ca20L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_STInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c820L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_SelfDestruction(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012cb80L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_SkillContHelpTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c960L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_Stun(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012ca00L))(this, pDstObj, fEffectValue);
    };
    bool CGameObject::SF_TeleportToDestination(struct CCharacter* pDstObj, bool bStone)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, bool);
        return (org_ptr(0x14012cba0L))(this, pDstObj, bStone);
    };
    bool CGameObject::SF_TransDestHP(struct CCharacter* pDstObj, float fEffectValue, char* byRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float, char*);
        return (org_ptr(0x14012ca80L))(this, pDstObj, fEffectValue, byRet);
    };
    bool CGameObject::SF_TransMonsterHP(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
        return (org_ptr(0x14012c9a0L))(this, pDstObj, fEffectValue);
    };
    void CGameObject::SendMsg_BreakStop()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017b140L))(this);
    };
    void CGameObject::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, int);
        (org_ptr(0x14013e3f0L))(this, n);
    };
    void CGameObject::SendMsg_RealFixPosition(bool bCircle)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, bool);
        (org_ptr(0x14017b050L))(this, bCircle);
    };
    void CGameObject::SendMsg_RealMovePoint(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, int);
        (org_ptr(0x14012e0a0L))(this, n);
    };
    void CGameObject::SendMsg_SetHPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14012c650L))(this);
    };
    void CGameObject::SendMsg_StunInform()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x140164850L))(this);
    };
    void CGameObject::SetAttackPart(int nAttactPart)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, int);
        (org_ptr(0x14012c700L))(this, nAttactPart);
    };
    void CGameObject::SetBreakTranspar(bool bBreak)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, bool);
        (org_ptr(0x14017afe0L))(this, bBreak);
    };
    bool CGameObject::SetCurBspMap(struct CMapData* pMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CMapData*);
        return (org_ptr(0x14017af30L))(this, pMap);
    };
    bool CGameObject::SetCurPos(float* pPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, float*);
        return (org_ptr(0x14017aec0L))(this, pPos);
    };
    void CGameObject::SetCurSecNum(unsigned int dwNewSecNum)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, unsigned int);
        (org_ptr(0x14017ba70L))(this, dwNewSecNum);
    };
    int CGameObject::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CGameObject*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x14012e120L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    bool CGameObject::SetHP(int nHP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, int, bool);
        return (org_ptr(0x14012c660L))(this, nHP, bOver);
    };
    void CGameObject::SetMaxVersion()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017ac80L))(this);
    };
    void CGameObject::SetStun(bool bStun)
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*, bool);
        (org_ptr(0x14017af70L))(this, bStun);
    };
    bool CGameObject::UpdateSecList()
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*);
        return (org_ptr(0x14017b430L))(this);
    };
    void CGameObject::_ResetCirclePlayer()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017c8e0L))(this);
    };
    CGameObject::~CGameObject()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017a6b0L))(this);
    };
    void CGameObject::dtor_CGameObject()
    {
        using org_ptr = void (WINAPIV*)(struct CGameObject*);
        (org_ptr(0x14017a6b0L))(this);
    };
END_ATF_NAMESPACE
