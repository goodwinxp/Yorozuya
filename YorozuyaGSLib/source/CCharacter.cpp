#include <CCharacter.hpp>


START_ATF_NAMESPACE
    void CCharacter::AlterContDurSec(char byContCode, uint16_t wListIndex, unsigned int dwStartSec, uint16_t wNewDur)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, char, uint16_t, unsigned int, uint16_t);
        (org_ptr(0x140174d50L))(this, byContCode, wListIndex, dwStartSec, wNewDur);
    };
    bool CCharacter::AssistForce(struct CCharacter* pDstChar, struct _force_fld* pForceFld, int nForceLv, char* pbyErrorCode, bool* pbUpMty)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, struct _force_fld*, int, char*, bool*);
        return (org_ptr(0x140175630L))(this, pDstChar, pForceFld, nForceLv, pbyErrorCode, pbUpMty);
    };
    bool CCharacter::AssistForceToOne(struct CCharacter* pDst, struct _force_fld* pForceFld, int nForceLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, struct _force_fld*, int);
        return (org_ptr(0x1401764f0L))(this, pDst, pForceFld, nForceLv);
    };
    bool CCharacter::AssistSkill(struct CCharacter* pDstChar, int nEffectCode, struct _skill_fld* pSkillFld, int nSkillLv, char* pbyErrorCode, bool* pbUpMty)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, int, struct _skill_fld*, int, char*, bool*);
        return (org_ptr(0x140175d80L))(this, pDstChar, nEffectCode, pSkillFld, nSkillLv, pbyErrorCode, pbUpMty);
    };
    bool CCharacter::AssistSkillToOne(struct CCharacter* pDst, int nEffectCode, struct _skill_fld* pSkillFld, int nSkillLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct CCharacter*, int, struct _skill_fld*, int);
        return (org_ptr(0x140176970L))(this, pDst, nEffectCode, pSkillFld, nSkillLv);
    };
    void CCharacter::BreakStealth()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140175460L))(this);
    };
    CCharacter::CCharacter()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140172230L))(this);
    };
    void CCharacter::ctor_CCharacter()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140172230L))(this);
    };
    float CCharacter::CalcDistForSec(float fSec, float fSpeed)
    {
        using org_ptr = float (WINAPIV*)(struct CCharacter*, float, float);
        return (org_ptr(0x140173360L))(this, fSec, fSpeed);
    };
    uint16_t CCharacter::CalcEffectBit(uint16_t wEffectCode, uint16_t wEffectIndex)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CCharacter*, uint16_t, uint16_t);
        return (org_ptr(0x14007b990L))(this, wEffectCode, wEffectIndex);
    };
    bool CCharacter::Create(struct _character_create_setdata* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, struct _character_create_setdata*);
        return (org_ptr(0x1401725e0L))(this, pData);
    };
    bool CCharacter::Destroy()
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*);
        return (org_ptr(0x140172700L))(this);
    };
    int CCharacter::FindEffectDst(int nEffectCode, int nAreaType, int nLv, bool bBenefit, struct CCharacter* pOriDst, char* psActableDst, struct CCharacter** ppDsts)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, int, int, int, bool, struct CCharacter*, char*, struct CCharacter**);
        return (org_ptr(0x140177010L))(this, nEffectCode, nAreaType, nLv, bBenefit, pOriDst, psActableDst, ppDsts);
    };
    int CCharacter::FindPotionEffectDst(int nAreaType, int nEffectAreaVal, bool bBenefit, struct CCharacter* pOriDst, char* psActableDst, struct CCharacter** ppDsts, bool* pbPath)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, int, int, bool, struct CCharacter*, char*, struct CCharacter**, bool*);
        return (org_ptr(0x140177200L))(this, nAreaType, nEffectAreaVal, bBenefit, pOriDst, psActableDst, ppDsts, pbPath);
    };
    int CCharacter::GetAttackDamPoint(int nAttPnt, int nAttPart, int nTolType, struct CCharacter* pDst, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, int, int, int, struct CCharacter*, bool);
        return (org_ptr(0x1401727a0L))(this, nAttPnt, nAttPart, nTolType, pDst, bBackAttack);
    };
    int CCharacter::GetAttackRandomPart()
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*);
        return (org_ptr(0x140173630L))(this);
    };
    bool CCharacter::GetInvisible()
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*);
        return (org_ptr(0x1401753e0L))(this);
    };
    int CCharacter::GetNearEmptySlot(int pos, float dist, float* cur, float* target)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, int, float, float*, float*);
        return (org_ptr(0x140173720L))(this, pos, dist, cur, target);
    };
    unsigned int CCharacter::GetNextGenAttTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CCharacter*);
        return (org_ptr(0x140132a00L))(this);
    };
    int CCharacter::GetSlot(struct CCharacter* p)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, struct CCharacter*);
        return (org_ptr(0x140173b40L))(this, p);
    };
    bool CCharacter::GetStealth(bool bInvisible)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, bool);
        return (org_ptr(0x140175310L))(this, bInvisible);
    };
    int CCharacter::GetTotalTol(char byAttTolType, int nDamPoint)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, char, int);
        return (org_ptr(0x1401733b0L))(this, byAttTolType, nDamPoint);
    };
    void CCharacter::Go()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140173330L))(this);
    };
    void CCharacter::Init(struct _object_id* pID)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, struct _object_id*);
        (org_ptr(0x140172440L))(this, pID);
    };
    char CCharacter::InsertSFContEffect(char byContCode, char byEffectCode, unsigned int dwEffectIndex, uint16_t wDurSec, char byLv, bool* pbUpMty, struct CCharacter* pActChar)
    {
        using org_ptr = char (WINAPIV*)(struct CCharacter*, char, char, unsigned int, uint16_t, char, bool*, struct CCharacter*);
        return (org_ptr(0x140173d90L))(this, byContCode, byEffectCode, dwEffectIndex, wDurSec, byLv, pbUpMty, pActChar);
    };
    int CCharacter::InsertSlot(struct CCharacter* p, int pos)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, struct CCharacter*, int);
        return (org_ptr(0x140173a10L))(this, p, pos);
    };
    bool CCharacter::IsDamageEffect(unsigned int uiEffectCodeType, uint16_t wEffectIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, unsigned int, uint16_t);
        return (org_ptr(0x140178690L))(this, uiEffectCodeType, wEffectIndex);
    };
    bool CCharacter::IsEffectableDst(char* psActableDst, struct CCharacter* pDst)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, char*, struct CCharacter*);
        return (org_ptr(0x140177e60L))(this, psActableDst, pDst);
    };
    bool CCharacter::IsPotionEffectableDst(char* psActableDst, struct CCharacter* pDst)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, char*, struct CCharacter*);
        return (org_ptr(0x140178270L))(this, psActableDst, pDst);
    };
    void CCharacter::Move(float fSpeed)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, float);
        (org_ptr(0x140172c50L))(this, fSpeed);
    };
    void CCharacter::MoveBreak(float fSpeed)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, float);
        (org_ptr(0x1401730b0L))(this, fSpeed);
    };
    bool CCharacter::RemoveAllContinousEffect()
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*);
        return (org_ptr(0x1401787c0L))(this);
    };
    bool CCharacter::RemoveAllContinousEffectGroup(unsigned int uiEffectCodeType)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, unsigned int);
        return (org_ptr(0x140178830L))(this, uiEffectCodeType);
    };
    void CCharacter::RemoveSFContEffect(char byContCode, uint16_t wListIndex, bool bInit, bool bAura)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, char, uint16_t, bool, bool);
        (org_ptr(0x140174930L))(this, byContCode, wListIndex, bInit, bAura);
    };
    void CCharacter::RemoveSFContHelpByEffect(int nContParamCode, int nContParamIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, int, int);
        (org_ptr(0x140174bd0L))(this, nContParamCode, nContParamIndex);
    };
    int CCharacter::RemoveSlot(struct CCharacter* p)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, struct CCharacter*);
        return (org_ptr(0x140173aa0L))(this, p);
    };
    void CCharacter::ResetSlot()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140173bb0L))(this);
    };
    void CCharacter::SFContInit()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140175500L))(this);
    };
    void CCharacter::SendMsg_AttackActEffect(char byActEffect, struct CCharacter* pDamer)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, char, struct CCharacter*);
        (org_ptr(0x140176f40L))(this, byActEffect, pDamer);
    };
    void CCharacter::SendMsg_LastEffectChangeInform()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140176ea0L))(this);
    };
    void CCharacter::SendMsg_RobedHP(struct CCharacter* pkPerform, uint16_t wRobedHP)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, struct CCharacter*, uint16_t);
        (org_ptr(0x140178910L))(this, pkPerform, wRobedHP);
    };
    void CCharacter::SendMsg_StunInform()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140176e00L))(this);
    };
    void CCharacter::SetNextGenAttTime(unsigned int dwNextTime)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, unsigned int);
        (org_ptr(0x140132a20L))(this, dwNextTime);
    };
    bool CCharacter::SetTarPos(float* fTarPos, bool bColl)
    {
        using org_ptr = bool (WINAPIV*)(struct CCharacter*, float*, bool);
        return (org_ptr(0x140173190L))(this, fTarPos, bColl);
    };
    void CCharacter::Stop()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x1401732c0L))(this);
    };
    void CCharacter::UpdateSFCont()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140174de0L))(this);
    };
    int CCharacter::_GetAreaEffectMember(struct CCharacter* pOriDst, bool bBenefit, int nLimitRadius, float* pTar, char* psActableDst, struct CCharacter** ppDsts)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, struct CCharacter*, bool, int, float*, char*, struct CCharacter**);
        return (org_ptr(0x140177440L))(this, pOriDst, bBenefit, nLimitRadius, pTar, psActableDst, ppDsts);
    };
    int CCharacter::_GetFlashEffectMember(struct CCharacter* pOriDst, bool bBenefit, int nLimitRadius, int nLimitAngle, struct CCharacter* pOriTar, char* psActableDst, struct CCharacter** ppDsts)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, struct CCharacter*, bool, int, int, struct CCharacter*, char*, struct CCharacter**);
        return (org_ptr(0x140177970L))(this, pOriDst, bBenefit, nLimitRadius, nLimitAngle, pOriTar, psActableDst, ppDsts);
    };
    int CCharacter::_GetPartyEffectMember(struct CCharacter* pOriDst, bool bCircle, struct CCharacter** ppDsts)
    {
        using org_ptr = int (WINAPIV*)(struct CCharacter*, struct CCharacter*, bool, struct CCharacter**);
        return (org_ptr(0x140177e40L))(this, pOriDst, bCircle, ppDsts);
    };
    void CCharacter::_set_sf_cont(struct _sf_continous* pCont, char byEffectCode, uint16_t wEffectIndex, char byLv, unsigned int dwStartSec, uint16_t wDurSec, int nCumulCount)
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*, struct _sf_continous*, char, uint16_t, char, unsigned int, uint16_t, int);
        (org_ptr(0x1401750d0L))(this, pCont, byEffectCode, wEffectIndex, byLv, dwStartSec, wDurSec, nCumulCount);
    };
    CCharacter::~CCharacter()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140172360L))(this);
    };
    void CCharacter::dtor_CCharacter()
    {
        using org_ptr = void (WINAPIV*)(struct CCharacter*);
        (org_ptr(0x140172360L))(this);
    };
END_ATF_NAMESPACE
