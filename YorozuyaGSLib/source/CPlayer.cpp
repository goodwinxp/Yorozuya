#include <CPlayer.hpp>


START_ATF_NAMESPACE
    void CPlayer::AddDalant(unsigned int dwPush, bool bApply)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, bool);
        (org_ptr(0x140055b00L))(this, dwPush, bApply);
    };
    void CPlayer::AddGold(unsigned int dwPush, bool bApply)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, bool);
        (org_ptr(0x140055d30L))(this, dwPush, bApply);
    };
    void CPlayer::AlterDalant(long double dDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double);
        (org_ptr(0x1400f7a70L))(this, dDalant);
    };
    void CPlayer::AlterExp(long double dAlterExp, bool bReward, bool bUseExpRecoverItem, bool bUseExpAdditionItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double, bool, bool, bool);
        (org_ptr(0x14005bb50L))(this, dAlterExp, bReward, bUseExpRecoverItem, bUseExpAdditionItem);
    };
    void CPlayer::AlterExp_Animus(int64_t nAlterExp)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int64_t);
        (org_ptr(0x1400d0e00L))(this, nAlterExp);
    };
    void CPlayer::AlterExp_Potion(long double dAlterExp)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double);
        (org_ptr(0x14005c550L))(this, dAlterExp);
    };
    void CPlayer::AlterFP_Animus(int nNewFP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d0d40L))(this, nNewFP);
    };
    void CPlayer::AlterGold(long double dGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double);
        (org_ptr(0x1400f7b20L))(this, dGold);
    };
    void CPlayer::AlterHP_Animus(int nNewHP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d0c80L))(this, nNewHP);
    };
    void CPlayer::AlterMaxLevel(char byMaxLevel)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d11a0L))(this, byMaxLevel);
    };
    void CPlayer::AlterMode_Animus(char byMode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d0fd0L))(this, byMode);
    };
    void CPlayer::AlterPvPCashBag(long double dAlter, PVP_MONEY_ALTER_TYPE IOCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double, PVP_MONEY_ALTER_TYPE);
        (org_ptr(0x14005f990L))(this, dAlter, IOCode);
    };
    void CPlayer::AlterPvPPoint(long double dAlter, PVP_ALTER_TYPE AlterType, unsigned int dwDstSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double, PVP_ALTER_TYPE, unsigned int);
        (org_ptr(0x14005f660L))(this, dAlter, AlterType, dwDstSerial);
    };
    void CPlayer::AlterPvpPointLeak(long double dAlter)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double);
        (org_ptr(0x140068f30L))(this, dAlter);
    };
    void CPlayer::AlterSec()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400554b0L))(this);
    };
    bool CPlayer::ApplyEquipItemEffect(int iItemEffectCode, bool bEquip)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, bool);
        return (org_ptr(0x140062fc0L))(this, iItemEffectCode, bEquip);
    };
    void CPlayer::ApplySetItemEffect(struct si_interpret* pSI, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum, bool bSetEffect)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct si_interpret*, unsigned int, char, char, bool);
        (org_ptr(0x140063130L))(this, pSI, dwSetItem, bySetItemNum, bySetEffectNum, bSetEffect);
    };
    int CPlayer::AttackableHeight()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140061490L))(this);
    };
    void CPlayer::AutoCharge_Booster()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400570b0L))(this);
    };
    void CPlayer::AutoRecover()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140056270L))(this);
    };
    void CPlayer::AutoRecover_Animus()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140056ee0L))(this);
    };
    void CPlayer::Billing_Logout()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140067ca0L))(this);
    };
    void CPlayer::BreakCloakBooster()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140064590L))(this);
    };
    CPlayer::CPlayer()
        : m_CashChangeStateFlag(0)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400478b0L))(this);
    };
    void CPlayer::ctor_CPlayer()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400478b0L))(this);
    };
    long double CPlayer::CalPvpCashPoint(int nDstLv, int nSrcLv, char* pSrcClass)
    {
        using org_ptr = long double (WINAPIV*)(struct CPlayer*, int, int, char*);
        return (org_ptr(0x14005ace0L))(this, nDstLv, nSrcLv, pSrcClass);
    };
    void CPlayer::CalPvpTempCash(struct CPlayer* pDier, char byKillerObjID)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*, char);
        (org_ptr(0x14005ad50L))(this, pDier, byKillerObjID);
    };
    void CPlayer::CalcAddPointByClass()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140064630L))(this);
    };
    uint16_t CPlayer::CalcCurFPRate()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400efbd0L))(this);
    };
    uint16_t CPlayer::CalcCurHPRate()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005f560L))(this);
    };
    uint16_t CPlayer::CalcCurSPRate()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400efc40L))(this);
    };
    float CPlayer::CalcDPRate()
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005fb70L))(this);
    };
    void CPlayer::CalcDefTol()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140050720L))(this);
    };
    int CPlayer::CalcEquipAttackDelay()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400575c0L))(this);
    };
    void CPlayer::CalcEquipMaxDP(bool bInit)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x140057430L))(this, bInit);
    };
    void CPlayer::CalcEquipSpeed()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140057220L))(this);
    };
    void CPlayer::CalcExp(struct CCharacter* pDst, int nDam, struct CPartyModeKillMonsterExpNotify* kPartyExpNotify)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, int, struct CPartyModeKillMonsterExpNotify*);
        (org_ptr(0x14005a600L))(this, pDst, nDam, kPartyExpNotify);
    };
    void CPlayer::CalcPvP(struct CPlayer* pDier, char byKillerObjID)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*, char);
        (org_ptr(0x14005b4e0L))(this, pDier, byKillerObjID);
    };
    void CPlayer::CheckAlterMaxPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a2420L))(this);
    };
    void CPlayer::CheckBattleMode()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400685b0L))(this);
    };
    void CPlayer::CheckGroupMapPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ffa80L))(this);
    };
    void CPlayer::CheckGroupTargeting()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400febc0L))(this);
    };
    void CPlayer::CheckMentalTakeAndUpdateLastMetalTicket(char* strItemCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400ce2c0L))(this, strItemCode);
    };
    void CPlayer::CheckNameChange()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140069080L))(this);
    };
    void CPlayer::CheckPosInTown()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400648f0L))(this);
    };
    void CPlayer::CheckPos_Region()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c7c50L))(this);
    };
    void CPlayer::CheckUnitCutTime()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140106b70L))(this);
    };
    void CPlayer::Cheet_BufEffectEnd()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a3a00L))(this);
    };
    void CPlayer::ClearGravityStone()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a0520L))(this);
    };
    bool CPlayer::Corpse(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14004f140L))(this, pAtter);
    };
    bool CPlayer::Create()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140049ab0L))(this);
    };
    void CPlayer::CreateComplete()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14004b150L))(this);
    };
    void CPlayer::DTradeInit()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400538c0L))(this);
    };
    bool CPlayer::DecHalfSFContDam(float fEffVal)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, float);
        return (org_ptr(0x1400a1fa0L))(this, fEffVal);
    };
    void CPlayer::DelPostData(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c9be0L))(this, dwIndex);
    };
    void CPlayer::DeleteCouponItem(struct _STORAGE_POS_INDIV* CouponItem, int n)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, int);
        (org_ptr(0x1400686f0L))(this, CouponItem, n);
    };
    bool CPlayer::DeleteUseConsumeItem(_STORAGE_LIST::_db_con** ppConsumeItems, int* pnConsume, bool* pbOverLap)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con**, int*, bool*);
        return (org_ptr(0x140067f60L))(this, ppConsumeItems, pnConsume, pbOverLap);
    };
    _STORAGE_LIST::_db_con* CPlayer::Emb_AddStorage(char byStorageCode, struct _STORAGE_LIST::_storage_con* pCon, bool bEquipChange, bool bAdd)
    {
        using org_ptr = _STORAGE_LIST::_db_con* (WINAPIV*)(struct CPlayer*, char, struct _STORAGE_LIST::_storage_con*, bool, bool);
        return (org_ptr(0x140057d90L))(this, byStorageCode, pCon, bEquipChange, bAdd);
    };
    unsigned int CPlayer::Emb_AlterDurPoint(char byStorageCode, char byStorageIndex, int nAlter, bool bUpdate, bool bSend)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*, char, char, int, bool, bool);
        return (org_ptr(0x140058a80L))(this, byStorageCode, byStorageIndex, nAlter, bUpdate, bSend);
    };
    void CPlayer::Emb_AlterStat(char byMasteryClass, char byIndex, unsigned int dwAlter, char byReason, char* strErrorCodePos, bool bPcbangPrimiumFavorReward)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int, char, char*, bool);
        (org_ptr(0x140059430L))(this, byMasteryClass, byIndex, dwAlter, byReason, strErrorCodePos, bPcbangPrimiumFavorReward);
    };
    void CPlayer::Emb_AlterStat_F(char byMasteryClass, char byIndex, float fAlter, char byReason)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, float, char);
        (org_ptr(0x140059af0L))(this, byMasteryClass, byIndex, fAlter, byReason);
    };
    bool CPlayer::Emb_CheckActForQuest(int nActCode, char* pszReqCode, uint16_t wAddCount, bool bParty)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, char*, uint16_t, bool);
        return (org_ptr(0x1400caa70L))(this, nActCode, pszReqCode, wAddCount, bParty);
    };
    void CPlayer::Emb_CheckActForQuestParty(int nActCode, char* pszReqCode, uint16_t wAddCount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, char*, uint16_t);
        (org_ptr(0x1400cad40L))(this, nActCode, pszReqCode, wAddCount);
    };
    void CPlayer::Emb_CompleteQuest(char byQuestDBSlot, char byRewardItemIndex, char byLinkQuestIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char);
        (org_ptr(0x1400cae50L))(this, byQuestDBSlot, byRewardItemIndex, byLinkQuestIndex);
    };
    bool CPlayer::Emb_CreateNPCQuest(char* pszEventCode, unsigned int dwNPCQuestIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, unsigned int);
        return (org_ptr(0x1400cb890L))(this, pszEventCode, dwNPCQuestIndex);
    };
    bool CPlayer::Emb_CreateQuestEvent(QUEST_HAPPEN HappenType, char* pszEventCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, QUEST_HAPPEN, char*);
        return (org_ptr(0x1400ca830L))(this, HappenType, pszEventCode);
    };
    bool CPlayer::Emb_DelStorage(char byStorageCode, char byStorageIndex, bool bEquipChange, bool bDelete, char* strErrorCodePos)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, char, bool, bool, char*);
        return (org_ptr(0x1400583b0L))(this, byStorageCode, byStorageIndex, bEquipChange, bDelete, strErrorCodePos);
    };
    void CPlayer::Emb_EquipLink()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14005a0f0L))(this);
    };
    void CPlayer::Emb_ItemUpgrade(char byUpgradeType, char byStorageCode, char byStorageIndex, unsigned int dwGradeInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, unsigned int);
        (org_ptr(0x1400590d0L))(this, byUpgradeType, byStorageCode, byStorageIndex, dwGradeInfo);
    };
    void CPlayer::Emb_RidindUnit(bool bRiding, struct CParkingUnit* pCreateUnit)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, struct CParkingUnit*);
        (org_ptr(0x140059e80L))(this, bRiding, pCreateUnit);
    };
    bool CPlayer::Emb_StartQuest(char bySelectQuest, struct _happen_event_cont* pHappenEvent)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, struct _happen_event_cont*);
        return (org_ptr(0x1400cbe20L))(this, bySelectQuest, pHappenEvent);
    };
    int CPlayer::Emb_UpdateStat(unsigned int dwStatIndex, unsigned int dwNewData, unsigned int dwOldData)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x140059340L))(this, dwStatIndex, dwNewData, dwOldData);
    };
    void CPlayer::ExitUpdateDataToWorld()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14005a220L))(this);
    };
    void CPlayer::ExtractStringToTime(unsigned int dwTemp, struct _SYSTEMTIME* tm)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, struct _SYSTEMTIME*);
        (org_ptr(0x140069290L))(this, dwTemp, tm);
    };
    struct CPlayer* CPlayer::FindFarChatPlayerWithTemp(char* pwszName)
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x140091160L))(this, pwszName);
    };
    bool CPlayer::FixTargetWhile(struct CCharacter* pkTarget, unsigned int dwMiliSecond)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, unsigned int);
        return (org_ptr(0x1400a2260L))(this, pkTarget, dwMiliSecond);
    };
    void CPlayer::ForcePullUnit(bool bLogout)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1401065a0L))(this, bLogout);
    };
    float CPlayer::GetAddSpeed()
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400644c0L))(this);
    };
    struct _sf_continous* CPlayer::GetAfterEffect()
    {
        using org_ptr = struct _sf_continous* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14004edf0L))(this);
    };
    int CPlayer::GetAttackDP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140063600L))(this);
    };
    int CPlayer::GetAttackLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140063430L))(this);
    };
    float CPlayer::GetAttackRange()
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060200L))(this);
    };
    int CPlayer::GetAvoidRate()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140063370L))(this);
    };
    int CPlayer::GetBillingType()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400600a0L))(this);
    };
    struct _dummy_position* CPlayer::GetBindDummy()
    {
        using org_ptr = struct _dummy_position* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1403eac50L))(this);
    };
    struct CMapData* CPlayer::GetBindMap(float* pfPos, bool bIgnoreMapClass)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CPlayer*, float*, bool);
        return (org_ptr(0x1400a0160L))(this, pfPos, bIgnoreMapClass);
    };
    struct CMapData* CPlayer::GetBindMapData()
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1403eac30L))(this);
    };
    int CPlayer::GetCashAmount()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1402f2770L))(this);
    };
    int CPlayer::GetDP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007c480L))(this);
    };
    int CPlayer::GetDamageDP(int nAttackPart)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400636f0L))(this, nAttackPart);
    };
    int CPlayer::GetDamageLevel(int nAttackPart)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x140063520L))(this, nAttackPart);
    };
    int CPlayer::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int, struct CCharacter*, int*);
        return (org_ptr(0x140060260L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float CPlayer::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x140061340L))(this, nPart);
    };
    float CPlayer::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400611f0L))(this, nPart);
    };
    int CPlayer::GetDefSkill(bool bBackAttackDamage)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x140060c00L))(this, bBackAttackDamage);
    };
    char CPlayer::GetEffectEquipCode(char byStorageCode, char bySlotIndex)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, char, char);
        return (org_ptr(0x140057d00L))(this, byStorageCode, bySlotIndex);
    };
    int CPlayer::GetFP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007c3e0L))(this);
    };
    int CPlayer::GetFireTol()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060d00L))(this);
    };
    int CPlayer::GetGauge(int nParamCode)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x14005f4e0L))(this, nParamCode);
    };
    int CPlayer::GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*, int, bool);
        return (org_ptr(0x1400614c0L))(this, pDst, nPart, bBackAttack);
    };
    struct CPlayer::__target* CPlayer::GetGroupTarget(char byGroupType)
    {
        using org_ptr = struct CPlayer::__target* (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x140047880L))(this, byGroupType);
    };
    int CPlayer::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400743a0L))(this);
    };
    unsigned int CPlayer::GetInitClassCost()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060110L))(this);
    };
    int CPlayer::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140074420L))(this);
    };
    int CPlayer::GetMasteryCumAfterAttack(int nDstLv)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x140063800L))(this, nDstLv);
    };
    int CPlayer::GetMaxDP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140078970L))(this);
    };
    int CPlayer::GetMaxFP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007a930L))(this);
    };
    int CPlayer::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140074220L))(this);
    };
    int CPlayer::GetMaxSP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007a9d0L))(this);
    };
    unsigned int CPlayer::GetMoney(char byMoneyCode)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x140056200L))(this, byMoneyCode);
    };
    float CPlayer::GetMoveSpeed()
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005d7c0L))(this);
    };
    char* CPlayer::GetObjName()
    {
        using org_ptr = char* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140061950L))(this);
    };
    int CPlayer::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140074470L))(this);
    };
    float CPlayer::GetPartyExpDistributionRate(int iPartyMemberLevel, int iMaxLevel, int i2ndLevel)
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*, int, int, int);
        return (org_ptr(0x14005d6a0L))(this, iPartyMemberLevel, iMaxLevel, i2ndLevel);
    };
    struct CPvpOrderView* CPlayer::GetPvpOrderView()
    {
        using org_ptr = struct CPvpOrderView* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14029d860L))(this);
    };
    long double CPlayer::GetPvpPointLeak()
    {
        using org_ptr = long double (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140068fb0L))(this);
    };
    struct CPvpPointLimiter* CPlayer::GetPvpPointLimiter(struct CPvpPointLimiter* result)
    {
        using org_ptr = struct CPvpPointLimiter* (WINAPIV*)(struct CPlayer*, struct CPvpPointLimiter*);
        return (org_ptr(0x14029d4d0L))(this, result);
    };
    struct CAnimus* CPlayer::GetRecallAnimus()
    {
        using org_ptr = struct CAnimus* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140172210L))(this);
    };
    int CPlayer::GetRewardItems_DarkDungeon(struct _dh_reward_sub_setup* pSetup, _STORAGE_LIST::_db_con* pItems, int bRealBoss)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct _dh_reward_sub_setup*, _STORAGE_LIST::_db_con*, int);
        return (org_ptr(0x1400cda30L))(this, pSetup, pItems, bRealBoss);
    };
    int CPlayer::GetSP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007c430L))(this);
    };
    int CPlayer::GetSoilTol()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060ee0L))(this);
    };
    uint64_t CPlayer::GetStateFlag()
    {
        using org_ptr = uint64_t (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007c4f0L))(this);
    };
    struct CGameObject* CPlayer::GetTargetObj()
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005fda0L))(this);
    };
    bool CPlayer::GetUseConsumeItem(struct _consume_item_list* pConsumeList, uint16_t* pItemSerials, _STORAGE_LIST::_db_con** ppConsumeItems, int* pnConsume, bool* pbOverLap)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _consume_item_list*, uint16_t*, _STORAGE_LIST::_db_con**, int*, bool*);
        return (org_ptr(0x140067d50L))(this, pConsumeList, pItemSerials, ppConsumeItems, pnConsume, pbOverLap);
    };
    int CPlayer::GetVisualVer()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140053a10L))(this);
    };
    int CPlayer::GetWaterTol()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060df0L))(this);
    };
    float CPlayer::GetWeaponAdjust()
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400610c0L))(this);
    };
    int CPlayer::GetWeaponClass()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400744f0L))(this);
    };
    int CPlayer::GetWeaponRange()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060240L))(this);
    };
    float CPlayer::GetWidth()
    {
        using org_ptr = float (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400601c0L))(this);
    };
    int CPlayer::GetWindTol()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140060fd0L))(this);
    };
    void CPlayer::Guild_Buy_Emblem_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400aa500L))(pData);
    };
    void CPlayer::Guild_Disjoint_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400aa820L))(pData);
    };
    void CPlayer::Guild_Force_Leave_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400a9560L))(pData);
    };
    void CPlayer::Guild_Insert_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400a8a10L))(pData);
    };
    void CPlayer::Guild_Join_Accept_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400a98b0L))(pData);
    };
    void CPlayer::Guild_Pop_Money_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400aa050L))(pData);
    };
    void CPlayer::Guild_Push_Money_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400a9ce0L))(pData);
    };
    void CPlayer::Guild_Self_Leave_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400a9120L))(pData);
    };
    void CPlayer::Guild_Update_GuildMater_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1400aa960L))(pData);
    };
    void CPlayer::HSKQuestEnd_Att(char byDestroyStoneRaceCode, struct CPlayer* pDestroyer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct CPlayer*);
        (org_ptr(0x1400ccbc0L))(this, byDestroyStoneRaceCode, pDestroyer);
    };
    void CPlayer::HideNameEffect(bool bAdd)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400532f0L))(this, bAdd);
    };
    void CPlayer::IncCriEffKillPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14005ffc0L))(this);
    };
    void CPlayer::IncCriEffPvPCashBag(long double dAlter)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double);
        (org_ptr(0x14005fec0L))(this, dAlter);
    };
    void CPlayer::IncPvPPoint(long double dAlter, PVP_ALTER_TYPE AlterType, unsigned int dwDstSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double, PVP_ALTER_TYPE, unsigned int);
        (org_ptr(0x14005fb00L))(this, dAlter, AlterType, dwDstSerial);
    };
    bool CPlayer::Init(struct _object_id* pID)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _object_id*);
        return (org_ptr(0x140048660L))(this, pID);
    };
    bool CPlayer::IntoMap(char byMapInMode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x1400505a0L))(this, byMapInMode);
    };
    bool CPlayer::IsActingSiegeMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14008f230L))(this);
    };
    bool CPlayer::IsApplyPcbangPrimium()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140067d00L))(this);
    };
    bool CPlayer::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x140063290L))(this, bFirst);
    };
    bool CPlayer::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x1400f0dc0L))(this, pAtter);
    };
    _STORAGE_LIST::_db_con* CPlayer::IsBulletValidity(uint16_t wBulletSerial)
    {
        using org_ptr = _STORAGE_LIST::_db_con* (WINAPIV*)(struct CPlayer*, uint16_t);
        return (org_ptr(0x14008a1e0L))(this, wBulletSerial);
    };
    bool CPlayer::IsChaosMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007a8d0L))(this);
    };
    _STORAGE_LIST::_db_con* CPlayer::IsEffBulletValidity(uint16_t wEffBulletSerial)
    {
        using org_ptr = _STORAGE_LIST::_db_con* (WINAPIV*)(struct CPlayer*, uint16_t);
        return (org_ptr(0x140089f60L))(this, wEffBulletSerial);
    };
    bool CPlayer::IsEffectableEquip(struct _STORAGE_LIST::_storage_con* pCon)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _STORAGE_LIST::_storage_con*);
        return (org_ptr(0x140057870L))(this, pCon);
    };
    bool CPlayer::IsEquipAbleGrade(char byGradeLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x140057af0L))(this, byGradeLv);
    };
    bool CPlayer::IsHaveMentalTicket()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400ce610L))(this);
    };
    bool CPlayer::IsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400744c0L))(this);
    };
    bool CPlayer::IsLastAttBuff()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140069060L))(this);
    };
    bool CPlayer::IsMapLoading()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1403eacd0L))(this);
    };
    bool CPlayer::IsMineMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1402e1830L))(this);
    };
    bool CPlayer::IsMiningByMinigTicket()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400ce530L))(this);
    };
    bool CPlayer::IsOutExtraStopPos(float* pfStopPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, float*);
        return (org_ptr(0x140057790L))(this, pfStopPos);
    };
    bool CPlayer::IsOverOneDay()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14004cc20L))(this);
    };
    bool CPlayer::IsPassExpLimitLvDiff(int iDstLevel, bool* bGetAttackExp)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, bool*);
        return (org_ptr(0x14007d3c0L))(this, iDstLevel, bGetAttackExp);
    };
    bool CPlayer::IsPassMasteryLimitLvDiff(int iDstLevel)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x14007d8f0L))(this, iDstLevel);
    };
    bool CPlayer::IsPunished(char byType, bool bSend)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, bool);
        return (org_ptr(0x140068150L))(this, byType, bSend);
    };
    bool CPlayer::IsRecallAnimus()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14007be20L))(this);
    };
    bool CPlayer::IsRecvableContEffect()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140063200L))(this);
    };
    bool CPlayer::IsReturnPostUpdate()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400c9b50L))(this);
    };
    bool CPlayer::IsRidingShip()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400f0d40L))(this);
    };
    bool CPlayer::IsRidingUnit()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x140106da0L))(this);
    };
    bool CPlayer::IsSFActableByClass(char byEffectCode, struct _base_fld* pSFFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, struct _base_fld*);
        return (org_ptr(0x1400a1e40L))(this, byEffectCode, pSFFld);
    };
    bool CPlayer::IsSFUsableGauge(char byEffectCode, uint16_t wEffectIndex, uint16_t* pwDelPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, uint16_t, uint16_t*);
        return (org_ptr(0x1400a1250L))(this, byEffectCode, wEffectIndex, pwDelPoint);
    };
    bool CPlayer::IsSFUsableSFMastery(char byMasteryCode, int nMasteryIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, int);
        return (org_ptr(0x1400a0fe0L))(this, byMasteryCode, nMasteryIndex);
    };
    bool CPlayer::IsSFUseableRace(char byEffectCode, uint16_t wEffectIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, uint16_t);
        return (org_ptr(0x1400a1150L))(this, byEffectCode, wEffectIndex);
    };
    bool CPlayer::IsSiegeMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400f0d10L))(this);
    };
    bool CPlayer::IsTargetObj(struct CGameObject* pkObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CGameObject*);
        return (org_ptr(0x14005fc30L))(this, pkObj);
    };
    bool CPlayer::IsUsableAccountType(int nCashType)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x140069d20L))(this, nCashType);
    };
    bool CPlayer::IsUseCloakBooster()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400645e0L))(this);
    };
    bool CPlayer::IsUseReleaseRaceBuffPotion()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400a3a50L))(this);
    };
    bool CPlayer::Is_Battle_Mode()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400686c0L))(this);
    };
    void CPlayer::LimLvNpcQuestDelete(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400cb810L))(this, byQuestDBSlot);
    };
    bool CPlayer::Load(struct CUserDB* pUser, bool bFirstStart)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CUserDB*, bool);
        return (org_ptr(0x1400489b0L))(this, pUser, bFirstStart);
    };
    void CPlayer::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400541a0L))(this);
    };
    void CPlayer::NetClose(bool bMoveOutLobby)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x14004cee0L))(this, bMoveOutLobby);
    };
    void CPlayer::NewViewCircleObject()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14005d4a0L))(this);
    };
    void CPlayer::OnLoop_Static()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140066350L))();
    };
    bool CPlayer::OutOfMap(struct CMapData* pIntoMap, uint16_t wLayerIndex, char byMapOutType, float* pfStartPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CMapData*, uint16_t, char, float*);
        return (org_ptr(0x1400501d0L))(this, pIntoMap, wLayerIndex, byMapOutType, pfStartPos);
    };
    void CPlayer::OutOfSec()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140055510L))(this);
    };
    void CPlayer::PastWhisperInit()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140053860L))(this);
    };
    void CPlayer::Potion_Buf_Extend()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a39b0L))(this);
    };
    void CPlayer::PushDQSCheatPlyerVoteInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140069b90L))(this);
    };
    void CPlayer::PushDQSUpdatePlyerVoteInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400699f0L))(this);
    };
    void CPlayer::PushDQSUpdateVoteAvilable()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140069900L))(this);
    };
    void CPlayer::ReCalcMaxHFSP(bool bSend, bool bRatio)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, bool);
        (org_ptr(0x14005c9a0L))(this, bSend, bRatio);
    };
    void CPlayer::RecallRandomPositionInRange(struct CMapData* pIntoMap, uint16_t wMapLayerIndex, float* pStartPos, int iRange)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CMapData*, uint16_t, float*, int);
        (org_ptr(0x1400bf7a0L))(this, pIntoMap, wMapLayerIndex, pStartPos, iRange);
    };
    void CPlayer::RecvHSKQuest(char byHSKQuestCode, char byCristalBattleDBInfo, int nPvpPoint, uint16_t wKillPoint, uint16_t wDieCount, char byHSKTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, int, uint16_t, uint16_t, char);
        (org_ptr(0x1400cc840L))(this, byHSKQuestCode, byCristalBattleDBInfo, nPvpPoint, wKillPoint, wDieCount, byHSKTime);
    };
    void CPlayer::RecvKillMessage(struct CCharacter* pDier)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        (org_ptr(0x140053a30L))(this, pDier);
    };
    void CPlayer::ReservationForceClose()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400663b0L))(this);
    };
    void CPlayer::Resurrect()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400500a0L))(this);
    };
    void CPlayer::Return_AnimusAsk(char byReturnType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d1030L))(this, byReturnType);
    };
    void CPlayer::RewardChangeClass(struct _class_fld* pClassFld, char bySelectRewardItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _class_fld*, char);
        (org_ptr(0x140096550L))(this, pClassFld, bySelectRewardItem);
    };
    void CPlayer::RewardChangeClassMastery(struct _class_fld* pClassFld)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _class_fld*);
        (org_ptr(0x140095880L))(this, pClassFld);
    };
    void CPlayer::RewardChangeClassRewardItem(struct _class_fld* pClassFld, char bySelectRewardItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _class_fld*, char);
        (org_ptr(0x140096100L))(this, pClassFld, bySelectRewardItem);
    };
    void CPlayer::RewardRaceWarPvpCash()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140056070L))(this);
    };
    void CPlayer::Reward_DarkDungeon(struct _dh_reward_sub_setup* pSetup, char* pszTitle, int bRealBoss, _STORAGE_LIST::_db_con* pItem, int* bIsRewarded)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _dh_reward_sub_setup*, char*, int, _STORAGE_LIST::_db_con*, int*);
        (org_ptr(0x1400cdc00L))(this, pSetup, pszTitle, bRealBoss, pItem, bIsRewarded);
    };
    bool CPlayer::RobbedHP(struct CCharacter* pDst, int nDecHP)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, int);
        return (org_ptr(0x1400a2190L))(this, pDst, nDecHP);
    };
    void CPlayer::SFContDelMessage(char byContCode, char byListIndex, bool bSend, bool bAura)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, bool, bool);
        (org_ptr(0x140053f70L))(this, byContCode, byListIndex, bSend, bAura);
    };
    void CPlayer::SFContInsertMessage(char byContCode, char byListIndex, bool bAuraSkill, struct CPlayer* pPlayerAct)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, bool, struct CPlayer*);
        (org_ptr(0x140053d30L))(this, byContCode, byListIndex, bAuraSkill, pPlayerAct);
    };
    void CPlayer::SFContUpdateTimeMessage(char byContCode, char byListIndex, int nLeftTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, int);
        (org_ptr(0x140054120L))(this, byContCode, byListIndex, nLeftTime);
    };
    bool CPlayer::SF_AllContDamageForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009ea60L))(this, pDstObj);
    };
    bool CPlayer::SF_AllContDamageRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x1400a3e00L))(this, pDstObj);
    };
    bool CPlayer::SF_AllContHelpForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009e950L))(this, pDstObj);
    };
    bool CPlayer::SF_AllContHelpSkillRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009e840L))(this, pDstObj);
    };
    bool CPlayer::SF_AttHPtoDstFP_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009dab0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_ContDamageTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009dbd0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_ContHelpTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009e0a0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_ConvertMonsterTarget(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009f040L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_ConvertTargetDest(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x1400a0720L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_DamageAndStun(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009fcc0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_FPDec(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009fc10L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_HFSInc_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x1400a3c60L))(this, pDstObj);
    };
    bool CPlayer::SF_HPInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009de60L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_IncHPCircleParty(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009f820L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_IncreaseDP(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x1400a0670L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_LateContDamageRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009e6a0L))(this, pDstObj);
    };
    bool CPlayer::SF_LateContHelpForceRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009e550L))(this, pDstObj);
    };
    bool CPlayer::SF_LateContHelpSkillRemove_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009e400L))(this, pDstObj);
    };
    bool CPlayer::SF_MakePortalReturnBindPositionPartyMember(struct CCharacter* pDstObj, float fEffectValue, char* byRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float, char*);
        return (org_ptr(0x1400a00e0L))(this, pDstObj, fEffectValue, byRet);
    };
    bool CPlayer::SF_MakeZeroAnimusRecallTimeOnce(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x1400a0920L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_OthersContHelpSFRemove_Once(float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, float);
        return (org_ptr(0x14009eba0L))(this, fEffectValue);
    };
    bool CPlayer::SF_OverHealing_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009e2c0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_RecoverAllReturnStateAnimusHPFull(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x1400a0790L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_ReleaseMonsterTarget(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009f610L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_RemoveAllContHelp_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009ff50L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_Resurrect_Once(struct CCharacter* pDstObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x14009dde0L))(this, pDstObj);
    };
    bool CPlayer::SF_ReturnBindPosition(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x1400a0590L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_SPDec(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009fb60L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_STInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009dfa0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_SelfDestruction(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x1400a0990L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_SkillContHelpTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009ee20L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_Stun(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009fad0L))(this, pDstObj, fEffectValue);
    };
    bool CPlayer::SF_TeleportToDestination(struct CCharacter* pDstObj, bool bStone)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, bool);
        return (org_ptr(0x1400a0a10L))(this, pDstObj, bStone);
    };
    bool CPlayer::SF_TransDestHP(struct CCharacter* pDstObj, float fEffectValue, char* byRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float, char*);
        return (org_ptr(0x14009fd50L))(this, pDstObj, fEffectValue, byRet);
    };
    bool CPlayer::SF_TransMonsterHP(struct CCharacter* pDstObj, float fEffectValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, float);
        return (org_ptr(0x14009f260L))(this, pDstObj, fEffectValue);
    };
    void CPlayer::SendData_ChatTrans(char byChatType, unsigned int dwSenderSerial, char byRaceCode, bool bFilter, char* pwszMessage, char byPvpGrade, char* pwszSender)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char, bool, char*, char, char*);
        (org_ptr(0x1400dcab0L))(this, byChatType, dwSenderSerial, byRaceCode, bFilter, pwszMessage, byPvpGrade, pwszSender);
    };
    void CPlayer::SendData_PartyMemberEffect(char byAlterCode, uint16_t wEffectCode, char byLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, char);
        (org_ptr(0x1400de2a0L))(this, byAlterCode, wEffectCode, byLv);
    };
    void CPlayer::SendData_PartyMemberFP()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ddbb0L))(this);
    };
    void CPlayer::SendData_PartyMemberHP()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dda70L))(this);
    };
    void CPlayer::SendData_PartyMemberInfo(uint16_t wDstIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400dd7e0L))(this, wDstIndex);
    };
    void CPlayer::SendData_PartyMemberInfoToMembers()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dd4a0L))(this);
    };
    void CPlayer::SendData_PartyMemberLv()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dde30L))(this);
    };
    void CPlayer::SendData_PartyMemberMaxHFSP()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400de120L))(this);
    };
    void CPlayer::SendData_PartyMemberPos()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ddf80L))(this);
    };
    void CPlayer::SendData_PartyMemberSP()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ddcf0L))(this);
    };
    void CPlayer::SendMsg_AMPInvenDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d91a0L))(this);
    };
    void CPlayer::SendMsg_AddBagResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dc320L))(this, byErrCode);
    };
    void CPlayer::SendMsg_AddEffect(uint16_t wEffectCode, char byLv, uint16_t wDurSec, unsigned int dwPlayerSerial, char* wszPlayerName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char, uint16_t, unsigned int, char*);
        (org_ptr(0x1400e0a80L))(this, wEffectCode, byLv, wDurSec, dwPlayerSerial, wszPlayerName);
    };
    void CPlayer::SendMsg_AdjustAmountInform(char byStorageCode, uint16_t wSerial, unsigned int dwDur)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, unsigned int);
        (org_ptr(0x1400dc450L))(this, byStorageCode, wSerial, dwDur);
    };
    void CPlayer::SendMsg_AlterBooster()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d6630L))(this);
    };
    void CPlayer::SendMsg_AlterContEffectTime(char byContType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e07f0L))(this, byContType);
    };
    void CPlayer::SendMsg_AlterEquipSPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dee10L))(this);
    };
    void CPlayer::SendMsg_AlterExpInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400de5b0L))(this);
    };
    void CPlayer::SendMsg_AlterGradeInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400def40L))(this);
    };
    void CPlayer::SendMsg_AlterHPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400deea0L))(this);
    };
    void CPlayer::SendMsg_AlterItemDurInform(char byStorageCode, uint16_t wItemSerial, uint64_t dwDur)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, uint64_t);
        (org_ptr(0x1400de7a0L))(this, byStorageCode, wItemSerial, dwDur);
    };
    void CPlayer::SendMsg_AlterMaxDP()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400df280L))(this);
    };
    void CPlayer::SendMsg_AlterMoneyInform(char byReasonCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400df070L))(this, byReasonCode);
    };
    void CPlayer::SendMsg_AlterPvPCash(int nIOCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400decd0L))(this, nIOCode);
    };
    void CPlayer::SendMsg_AlterPvPPoint()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dec30L))(this);
    };
    void CPlayer::SendMsg_AlterPvPRank(uint16_t wPvpRate, unsigned int dwPvpRank)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int);
        (org_ptr(0x1400defd0L))(this, wPvpRate, dwPvpRank);
    };
    void CPlayer::SendMsg_AlterRegionInform(int nRegionIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d7030L))(this, nRegionIndex);
    };
    void CPlayer::SendMsg_AlterSPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ded80L))(this);
    };
    void CPlayer::SendMsg_AlterTol()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400df130L))(this);
    };
    void CPlayer::SendMsg_AlterTowerHP(uint16_t wItemSerial, uint16_t wLeftHP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t);
        (org_ptr(0x1400e0750L))(this, wItemSerial, wLeftHP);
    };
    void CPlayer::SendMsg_AlterTownOrField()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d6fa0L))(this);
    };
    void CPlayer::SendMsg_AlterUnitBulletInform(char byPart, uint16_t wLeftNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400deb90L))(this, byPart, wLeftNum);
    };
    void CPlayer::SendMsg_AlterUnitHPInform(char bySlotIndex, unsigned int dwGauge)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400db830L))(this, bySlotIndex, dwGauge);
    };
    void CPlayer::SendMsg_AlterWeaponBulletInform(uint16_t wItemSerial, uint16_t wLeftNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t);
        (org_ptr(0x1400deaf0L))(this, wItemSerial, wLeftNum);
    };
    void CPlayer::SendMsg_Alter_Action_Point(char byActCode, unsigned int dwActPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e8e60L))(this, byActCode, dwActPoint);
    };
    void CPlayer::SendMsg_AnimusExpInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dbcc0L))(this);
    };
    void CPlayer::SendMsg_AnimusFPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dbbf0L))(this);
    };
    void CPlayer::SendMsg_AnimusHPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dbb20L))(this);
    };
    void CPlayer::SendMsg_AnimusInvenChange(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dc0b0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_AnimusModeInform(char byMode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dbda0L))(this, byMode);
    };
    void CPlayer::SendMsg_AnimusRecallResult(char byResultCode, uint16_t wLeftFP, struct CAnimus* pNewAnimus)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, struct CAnimus*);
        (org_ptr(0x1400db8d0L))(this, byResultCode, wLeftFP, pNewAnimus);
    };
    void CPlayer::SendMsg_AnimusRecallWaitTimeFree(bool bFree)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400dbe30L))(this, bFree);
    };
    void CPlayer::SendMsg_AnimusReturnResult(char byRetCode, uint16_t wAnimusItemSerial, char byReturnType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, char);
        (org_ptr(0x1400db9e0L))(this, byRetCode, wAnimusItemSerial, byReturnType);
    };
    void CPlayer::SendMsg_AnimusTargetResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dba90L))(this, byRetCode);
    };
    void CPlayer::SendMsg_ApexInform(unsigned int dwRecvSize, char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char*);
        (org_ptr(0x1400e9460L))(this, dwRecvSize, pMsg);
    };
    void CPlayer::SendMsg_AttackResult_Count(struct CAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CAttack*);
        (org_ptr(0x1400d4bb0L))(this, pAt);
    };
    void CPlayer::SendMsg_AttackResult_Error(int nErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d4210L))(this, nErrCode);
    };
    void CPlayer::SendMsg_AttackResult_Force(struct CAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CAttack*);
        (org_ptr(0x1400d4760L))(this, pAt);
    };
    void CPlayer::SendMsg_AttackResult_Gen(struct CAttack* pAt, uint16_t wBulletIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CAttack*, uint16_t);
        (org_ptr(0x1400d42a0L))(this, pAt, wBulletIndex);
    };
    void CPlayer::SendMsg_AttackResult_SelfDestruction(struct CAttack* pAt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CAttack*);
        (org_ptr(0x1400d4db0L))(this, pAt);
    };
    void CPlayer::SendMsg_AttackResult_Siege(struct CAttack* pAt, uint16_t wBulletIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CAttack*, uint16_t);
        (org_ptr(0x1400d5080L))(this, pAt, wBulletIndex);
    };
    void CPlayer::SendMsg_AttackResult_Skill(char byEffectCode, struct CPlayerAttack* pAt, uint16_t wBulletIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct CPlayerAttack*, uint16_t);
        (org_ptr(0x1400d44c0L))(this, byEffectCode, pAt, wBulletIndex);
    };
    void CPlayer::SendMsg_AttackResult_Unit(struct CAttack* pAt, char byWeaponPart, uint16_t wBulletIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CAttack*, char, uint16_t);
        (org_ptr(0x1400d49e0L))(this, pAt, byWeaponPart, wBulletIndex);
    };
    void CPlayer::SendMsg_AwayPartyInvitationQuestion(uint16_t wJoinerIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400e7160L))(this, wJoinerIndex);
    };
    void CPlayer::SendMsg_AwayPartyRequestResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e70d0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_BackTowerResult(char byErrCode, uint16_t wItemSerial, uint16_t wLeftHP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, uint16_t);
        (org_ptr(0x1400e06a0L))(this, byErrCode, wItemSerial, wLeftHP);
    };
    void CPlayer::SendMsg_BackTrapResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e0f80L))(this, byErrCode);
    };
    void CPlayer::SendMsg_BaseDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d8820L))(this);
    };
    void CPlayer::SendMsg_BillingExipreInform(char byKind, uint16_t wWaitSec)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400e4730L))(this, byKind, wWaitSec);
    };
    void CPlayer::SendMsg_BillingTypeChangeInform(int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate, char byReason)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int16_t, int, struct _SYSTEMTIME*, char);
        (org_ptr(0x1400e4640L))(this, iType, lRemainTime, pstEndDate, byReason);
    };
    void CPlayer::SendMsg_BreakdownEquipItem(char byPartIndex, uint16_t wSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400dbf50L))(this, byPartIndex, wSerial);
    };
    void CPlayer::SendMsg_BuddhaEventMsg(char byErrorCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e7c20L))(this, byErrorCode);
    };
    void CPlayer::SendMsg_BuddyAddAnswerResult(char byRetCode, bool bAccept, unsigned int dwAskerSerial, uint16_t wIndex, unsigned int dwSerial, char* pwszCharName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, bool, unsigned int, uint16_t, unsigned int, char*);
        (org_ptr(0x1400e4ac0L))(this, byRetCode, bAccept, dwAskerSerial, wIndex, dwSerial, pwszCharName);
    };
    void CPlayer::SendMsg_BuddyAddAsk(uint16_t wAskerIndex, unsigned int dwAskerSerial, char* pwszAskerName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int, char*);
        (org_ptr(0x1400e4910L))(this, wAskerIndex, dwAskerSerial, pwszAskerName);
    };
    void CPlayer::SendMsg_BuddyAddFail(char byRetCode, char* pwszDstName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x1400e49f0L))(this, byRetCode, pwszDstName);
    };
    void CPlayer::SendMsg_BuddyDelResult(char byRetCode, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e4bd0L))(this, byRetCode, dwSerial);
    };
    void CPlayer::SendMsg_BuddyLoginInform(unsigned int dwObjSerial, char byMapIndex, char byPosCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char, char);
        (org_ptr(0x1400e47d0L))(this, dwObjSerial, byMapIndex, byPosCode);
    };
    void CPlayer::SendMsg_BuddyLogoffInform(unsigned int dwObjSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400e4880L))(this, dwObjSerial);
    };
    void CPlayer::SendMsg_BuddyNameReNewal(unsigned int dwSerial, char* wszName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char*);
        (org_ptr(0x1400e8500L))(this, dwSerial, wszName);
    };
    void CPlayer::SendMsg_BuddyPosInform(unsigned int dwDstSerial, char byMapIndex, char byPosCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char, char);
        (org_ptr(0x1400e4c70L))(this, dwDstSerial, byMapIndex, byPosCode);
    };
    void CPlayer::SendMsg_BuyCashItemMode()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e96a0L))(this);
    };
    void CPlayer::SendMsg_BuyItemStoreResult(struct CItemStore* pStore, int nOfferNum, struct _buy_offer* pCard, char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*, int, struct _buy_offer*, char);
        (org_ptr(0x1400d70c0L))(this, pStore, nOfferNum, pCard, byErrCode);
    };
    void CPlayer::SendMsg_CancelSuggestResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e3ed0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_CastVoteResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2d90L))(this, byRetCode);
    };
    void CPlayer::SendMsg_ChangeClassCommand()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400de860L))(this);
    };
    void CPlayer::SendMsg_CharacterRenameCashResult(bool bChange, char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, char);
        (org_ptr(0x1400e8460L))(this, bChange, byErrCode);
    };
    void CPlayer::SendMsg_ChatFarFailure(bool bBlock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400dcc30L))(this, bBlock);
    };
    void CPlayer::SendMsg_Circle_DelEffect(char byEffectCode, uint16_t wEffectIndex, char byLv, bool bToOne)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, char, bool);
        (org_ptr(0x1400e0ca0L))(this, byEffectCode, wEffectIndex, byLv, bToOne);
    };
    void CPlayer::SendMsg_ClassSkillResult(char byErrCode, struct _CHRID* pidDst, uint16_t wSkillIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _CHRID*, uint16_t);
        (org_ptr(0x1400dfb00L))(this, byErrCode, pidDst, wSkillIndex);
    };
    void CPlayer::SendMsg_ClearDarkHole(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400da9f0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_CombineItemExAcceptResult(struct _combine_ex_item_accept_result_zocl* pSend)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _combine_ex_item_accept_result_zocl*);
        (org_ptr(0x1400d82d0L))(this, pSend);
    };
    void CPlayer::SendMsg_CombineItemExResult(struct _combine_ex_item_result_zocl* pSend)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _combine_ex_item_result_zocl*);
        (org_ptr(0x1400d8250L))(this, pSend);
    };
    void CPlayer::SendMsg_CombineItemResult(char byErrCode, unsigned int dwFee, _STORAGE_LIST::_db_con* pNewItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d8000L))(this, byErrCode, dwFee, pNewItem);
    };
    void CPlayer::SendMsg_CombineLendItemResult(char byErrCode, unsigned int dwFee, _STORAGE_LIST::_db_con* pNewItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d8100L))(this, byErrCode, dwFee, pNewItem);
    };
    void CPlayer::SendMsg_CreateTowerResult(char byErrCode, unsigned int dwTowerObjSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e05f0L))(this, byErrCode, dwTowerObjSerial);
    };
    void CPlayer::SendMsg_CreateTrapResult(char byErrCode, unsigned int dwTrapObjSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e0d70L))(this, byErrCode, dwTrapObjSerial);
    };
    void CPlayer::SendMsg_CumDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d9360L))(this);
    };
    void CPlayer::SendMsg_CuttingCompleteResult(char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dca10L))(this, byRet);
    };
    void CPlayer::SendMsg_DTradeAccomplishInform(bool bSucc, uint16_t wStartSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, uint16_t);
        (org_ptr(0x1400e1a30L))(this, bSucc, wStartSerial);
    };
    void CPlayer::SendMsg_DTradeAddInform(char bySlotIndex, _STORAGE_LIST::_db_con* pItem, char byAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*, char);
        (org_ptr(0x1400e15a0L))(this, bySlotIndex, pItem, byAmount);
    };
    void CPlayer::SendMsg_DTradeAddResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1510L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeAnswerResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1140L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeAskInform(struct CPlayer* pAsker)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*);
        (org_ptr(0x1400e10a0L))(this, pAsker);
    };
    void CPlayer::SendMsg_DTradeAskResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1010L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeBetInform(char byUnitCode, unsigned int dwAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e1880L))(this, byUnitCode, dwAmount);
    };
    void CPlayer::SendMsg_DTradeBetResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e17f0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeCancleInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e1380L))(this);
    };
    void CPlayer::SendMsg_DTradeCancleResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e12f0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeCloseInform(char byCloseCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1b10L))(this, byCloseCode);
    };
    void CPlayer::SendMsg_DTradeDelInform(char bySlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1750L))(this, bySlotIndex);
    };
    void CPlayer::SendMsg_DTradeDelResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e16c0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeLockInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e1490L))(this);
    };
    void CPlayer::SendMsg_DTradeLockResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1400L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeOKInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e19b0L))(this);
    };
    void CPlayer::SendMsg_DTradeOKResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e1920L))(this, byErrCode);
    };
    void CPlayer::SendMsg_DTradeStartInform(struct CPlayer* pAsker, struct CPlayer* pAnswer, unsigned int* pdwKey)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*, struct CPlayer*, unsigned int*);
        (org_ptr(0x1400e11d0L))(this, pAsker, pAnswer, pdwKey);
    };
    void CPlayer::SendMsg_DTradeUnitAddInform(uint16_t wUnitKeySerial, struct _UNIT_DB_BASE::_LIST* pUnitData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, struct _UNIT_DB_BASE::_LIST*);
        (org_ptr(0x1400e1cf0L))(this, wUnitKeySerial, pUnitData);
    };
    void CPlayer::SendMsg_DTradeUnitInfoInform(char byTradeSlotIndex, struct _UNIT_DB_BASE::_LIST* pUnitData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _UNIT_DB_BASE::_LIST*);
        (org_ptr(0x1400e1ba0L))(this, byTradeSlotIndex, pUnitData);
    };
    void CPlayer::SendMsg_DamageResult(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d5290L))(this, pItem);
    };
    void CPlayer::SendMsg_DarkHoleOpenFail(int n, char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, char);
        (org_ptr(0x1400da760L))(this, n, byErrCode);
    };
    void CPlayer::SendMsg_DarkHoleOpenResult(int n, int bPartyOnly, char byErrCode, uint16_t wHoleIndex, unsigned int dwHoleSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, int, char, uint16_t, unsigned int);
        (org_ptr(0x1400da5b0L))(this, n, bPartyOnly, byErrCode, wHoleIndex, dwHoleSerial);
    };
    void CPlayer::SendMsg_DarkHoleRewardMessage(_STORAGE_LIST::_db_con* pItem, unsigned int dwMemberIndex, int isRewarded)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*, unsigned int, int);
        (org_ptr(0x1400e7330L))(this, pItem, dwMemberIndex, isRewarded);
    };
    void CPlayer::SendMsg_DelEffect(char byEffectCode, uint16_t wEffectIndex, char byLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, char);
        (org_ptr(0x1400e0bb0L))(this, byEffectCode, wEffectIndex, byLv);
    };
    void CPlayer::SendMsg_DeleteStorageInform(char byStorageCode, uint16_t wSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400dc3b0L))(this, byStorageCode, wSerial);
    };
    void CPlayer::SendMsg_Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d5950L))(this);
    };
    void CPlayer::SendMsg_Die()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d59f0L))(this);
    };
    void CPlayer::SendMsg_EconomyHistoryInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d77c0L))(this);
    };
    void CPlayer::SendMsg_EconomyRateInform(bool bStart)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400d7900L))(this, bStart);
    };
    void CPlayer::SendMsg_EmbellishResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d7dc0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_EnterDarkHole(char byErrCode, unsigned int dwHoleSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400da800L))(this, byErrCode, dwHoleSerial);
    };
    void CPlayer::SendMsg_EquipItemLevelLimit(int nCurPlayerLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400e8930L))(this, nCurPlayerLv);
    };
    void CPlayer::SendMsg_EquipPartChange(char byPart)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d5340L))(this, byPart);
    };
    void CPlayer::SendMsg_EquipPartResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d7d30L))(this, byErrCode);
    };
    void CPlayer::SendMsg_ExchangeItemResult(char byErrCode, _STORAGE_LIST::_db_con* pNewItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d8350L))(this, byErrCode, pNewItem);
    };
    void CPlayer::SendMsg_ExchangeLendItemResult(char byErrCode, _STORAGE_LIST::_db_con* pNewItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d8440L))(this, byErrCode, pNewItem);
    };
    void CPlayer::SendMsg_ExchangeMoneyResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d7700L))(this, byErrCode);
    };
    void CPlayer::SendMsg_ExitWorldResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d6c50L))(this, byRetCode);
    };
    void CPlayer::SendMsg_ExtTrunkExtendResult(char byRetCode, char bySlotNum, char byLackSlotNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char);
        (org_ptr(0x1400e35e0L))(this, byRetCode, bySlotNum, byLackSlotNum);
    };
    void CPlayer::SendMsg_FanfareItem(char byGetType, _STORAGE_LIST::_db_con* pItem, struct CItemBox* pItemBox)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*, struct CItemBox*);
        (org_ptr(0x1400e6bc0L))(this, byGetType, pItem, pItemBox);
    };
    void CPlayer::SendMsg_FcitemInform(uint16_t wItemSerial, unsigned int dwNewStat)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int);
        (org_ptr(0x1400d6d80L))(this, wItemSerial, dwNewStat);
    };
    void CPlayer::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d5a80L))(this, n);
    };
    void CPlayer::SendMsg_ForceDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d9510L))(this);
    };
    void CPlayer::SendMsg_ForceInvenChange(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dc020L))(this, byErrCode);
    };
    void CPlayer::SendMsg_ForceResult(char byErrCode, struct _CHRID* pidDst, _STORAGE_LIST::_db_con* pForceItem, int nSFLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _CHRID*, _STORAGE_LIST::_db_con*, int);
        (org_ptr(0x1400df770L))(this, byErrCode, pidDst, pForceItem, nSFLv);
    };
    void CPlayer::SendMsg_GM_Greeting(char* wszGMName, char* wszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char*);
        (org_ptr(0x1400e60e0L))(this, wszGMName, wszMsg);
    };
    void CPlayer::SendMsg_GUILD_Greeting(char* wszName, char* wszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char*);
        (org_ptr(0x1400e63e0L))(this, wszName, wszMsg);
    };
    void CPlayer::SendMsg_GestureInform(char byGestureType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400da520L))(this, byGestureType);
    };
    void CPlayer::SendMsg_GiveupDarkHole(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400da900L))(this, byErrCode);
    };
    void CPlayer::SendMsg_GotoBasePortalResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d6a90L))(this, byErrCode);
    };
    void CPlayer::SendMsg_GotoRecallResult(char byErrCode, char byMapCode, float* pfStartPos, char byMapInType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, float*, char);
        (org_ptr(0x1400d6b80L))(this, byErrCode, byMapCode, pfStartPos, byMapInType);
    };
    void CPlayer::SendMsg_GroupTargetInform(char byGroupType, char* pwszName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x1400e2c30L))(this, byGroupType, pwszName);
    };
    void CPlayer::SendMsg_GuildEstablishFail(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e3b90L))(this, byRetCode);
    };
    void CPlayer::SendMsg_GuildForceLeaveBoradori()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e7740L))(this);
    };
    void CPlayer::SendMsg_GuildJoinAcceptFail(char byRetCode, unsigned int dwApplierSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e4000L))(this, byRetCode, dwApplierSerial);
    };
    void CPlayer::SendMsg_GuildJoinApplyCancelResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e3d20L))(this, byRetCode);
    };
    void CPlayer::SendMsg_GuildJoinApplyRejectInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e40a0L))(this);
    };
    void CPlayer::SendMsg_GuildJoinApplyResult(char byRetCode, struct CGuild* pApplyGuild)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct CGuild*);
        (org_ptr(0x1400e3c20L))(this, byRetCode, pApplyGuild);
    };
    void CPlayer::SendMsg_GuildJoinOtherInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e41e0L))(this);
    };
    void CPlayer::SendMsg_GuildManageResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e5d70L))(this, byRetCode);
    };
    void CPlayer::SendMsg_GuildMasterEffect(char byState, char byGrade, char byEffSubAttack, char byEffSubDefence, char byEffAddAttack, char byEffAddDefence)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, char, char, char);
        (org_ptr(0x1400e7650L))(this, byState, byGrade, byEffSubAttack, byEffSubDefence, byEffAddAttack, byEffAddDefence);
    };
    void CPlayer::SendMsg_GuildPushMoneyResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e4120L))(this, byRetCode);
    };
    void CPlayer::SendMsg_GuildRoomEnterResult(char byRetCode, char bySubRetCode, char byMapIndex, uint16_t wMapLayer, float* pPos, int tt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, uint16_t, float*, int);
        (org_ptr(0x1400e59e0L))(this, byRetCode, bySubRetCode, byMapIndex, wMapLayer, pPos, tt);
    };
    void CPlayer::SendMsg_GuildRoomOutResult(char byRetCode, char byMapIndex, uint16_t wMapLayer, float* pPos)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, float*);
        (org_ptr(0x1400e5af0L))(this, byRetCode, byMapIndex, wMapLayer, pPos);
    };
    void CPlayer::SendMsg_GuildRoomRentResult(char byRetCode, char bySubRetCode, char byRoomType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char);
        (org_ptr(0x1400e5930L))(this, byRetCode, bySubRetCode, byRoomType);
    };
    void CPlayer::SendMsg_GuildRoomRestTimeResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e5bf0L))(this);
    };
    void CPlayer::SendMsg_GuildSelfLeaveResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e3db0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_GuildSetHonorResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e75c0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_HSKQuestActCum()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400df310L))(this);
    };
    void CPlayer::SendMsg_HSKQuestSucc(char byQuestCode, bool bSucc)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, bool);
        (org_ptr(0x1400df450L))(this, byQuestCode, bSucc);
    };
    void CPlayer::SendMsg_HonorGuildMark(char byRank)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e7860L))(this, byRank);
    };
    void CPlayer::SendMsg_InformTaxIncome(char byRet, unsigned int dwComm, char* pwszDate)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*);
        (org_ptr(0x1400e74a0L))(this, byRet, dwComm, pwszDate);
    };
    void CPlayer::SendMsg_Init_Action_Point()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e8f00L))(this);
    };
    void CPlayer::SendMsg_InsertItemInform(char byStorageCode, _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400e0440L))(this, byStorageCode, pItem);
    };
    void CPlayer::SendMsg_InsertNewQuest(char bySlotIndex, struct _QUEST_DB_BASE::_LIST* pQuestDB)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _QUEST_DB_BASE::_LIST*);
        (org_ptr(0x1400e1ed0L))(this, bySlotIndex, pQuestDB);
    };
    void CPlayer::SendMsg_InsertNextQuest(char bySlotIndex, struct _QUEST_DB_BASE::_LIST* pQuestDB)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _QUEST_DB_BASE::_LIST*);
        (org_ptr(0x1400e1fb0L))(this, bySlotIndex, pQuestDB);
    };
    void CPlayer::SendMsg_InsertQuestFailure(char byEventType, unsigned int dwEventIndex, char byEventNodeIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char);
        (org_ptr(0x1400e2140L))(this, byEventType, dwEventIndex, byEventNodeIndex);
    };
    void CPlayer::SendMsg_InsertQuestItemInform(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400e0530L))(this, pItem);
    };
    void CPlayer::SendMsg_InvenDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d8f70L))(this);
    };
    void CPlayer::SendMsg_ItemDowngrade(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d85f0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_ItemStorageRefresh(char byStorageCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d6e20L))(this, byStorageCode);
    };
    void CPlayer::SendMsg_ItemUpgrade(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d8560L))(this, byErrCode);
    };
    void CPlayer::SendMsg_JadeEffectErr(char byErrorCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e8330L))(this, byErrorCode);
    };
    void CPlayer::SendMsg_LendItemTimeExpired(char byStorageCode, uint16_t wSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400e8af0L))(this, byStorageCode, wSerial);
    };
    void CPlayer::SendMsg_Level(int nLevel)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d63f0L))(this, nLevel);
    };
    void CPlayer::SendMsg_LinkBoardDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400da1c0L))(this);
    };
    void CPlayer::SendMsg_MacroRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e4f00L))(this);
    };
    void CPlayer::SendMsg_MadeTrapNumInform(char byNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e0e20L))(this, byNum);
    };
    void CPlayer::SendMsg_MakeItemCheatSendButtonEnable(bool bEnableSendButton)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400d7ee0L))(this, bEnableSendButton);
    };
    void CPlayer::SendMsg_MakeItemResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d7f70L))(this, byErrCode);
    };
    void CPlayer::SendMsg_MapEnvInform(char byMapCode, unsigned int dwMapEnvCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e4d20L))(this, byMapCode, dwMapEnvCode);
    };
    void CPlayer::SendMsg_MapOut(char byMapOutCode, char byNextMapCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char);
        (org_ptr(0x1400d6950L))(this, byMapOutCode, byNextMapCode);
    };
    void CPlayer::SendMsg_MaxHFSP()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d6480L))(this);
    };
    void CPlayer::SendMsg_MaxPvpPointInform(int nMax)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400e9500L))(this, nMax);
    };
    void CPlayer::SendMsg_MineCancle()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dc620L))(this);
    };
    void CPlayer::SendMsg_MineCompleteResult(char byErrCode, char byNewOreIndex, uint16_t dwOreSerial, char byOreDur, uint16_t dwBatteryLeftDurPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, char, uint16_t);
        (org_ptr(0x1400dc6a0L))(this, byErrCode, byNewOreIndex, dwOreSerial, byOreDur, dwBatteryLeftDurPoint);
    };
    void CPlayer::SendMsg_MineStartResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dc590L))(this, byErrCode);
    };
    void CPlayer::SendMsg_MonsterAggroData(struct CCharacter* pCharacter)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        (org_ptr(0x1400e5270L))(this, pCharacter);
    };
    void CPlayer::SendMsg_MoveError(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d6340L))(this, byRetCode);
    };
    void CPlayer::SendMsg_MoveNext(bool bOtherSend)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400d5dd0L))(this, bOtherSend);
    };
    void CPlayer::SendMsg_MovePortal(char byMapIndex, float* pfStartPos, char byZoneCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, float*, char);
        (org_ptr(0x1400da070L))(this, byMapIndex, pfStartPos, byZoneCode);
    };
    void CPlayer::SendMsg_MovePortal(char byRet, char byMapIndex, char byPotalIndex, float* pfStartPos, bool bEqualZone)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, float*, bool);
        (org_ptr(0x1400d9f90L))(this, byRet, byMapIndex, byPotalIndex, pfStartPos, bEqualZone);
    };
    void CPlayer::SendMsg_MoveToOwnStoneMapInform(char byStoneMapMoveInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e5ce0L))(this, byStoneMapMoveInfo);
    };
    void CPlayer::SendMsg_MoveToOwnStoneMapResult(char byRetCode, char byMapIndex, float* pos)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, float*);
        (org_ptr(0x1400e5c00L))(this, byRetCode, byMapIndex, pos);
    };
    void CPlayer::SendMsg_NPCLinkItemCheckResult(char byResCode, struct _STORAGE_POS_INDIV* pStorage)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400e7b40L))(this, byResCode, pStorage);
    };
    void CPlayer::SendMsg_NewMovePotionResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e9620L))(this);
    };
    void CPlayer::SendMsg_NewViewOther(char byViewType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d40c0L))(this, byViewType);
    };
    void CPlayer::SendMsg_NotifyEffectForGetItem(char byBoxType, unsigned int dwCharSerial, char* szCharName, _STORAGE_LIST::_db_con* pItem, bool bCircle)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*, _STORAGE_LIST::_db_con*, bool);
        (org_ptr(0x1400e92b0L))(this, byBoxType, dwCharSerial, szCharName, pItem, bCircle);
    };
    void CPlayer::SendMsg_NotifyGetExpInfo(long double dOldExp, long double dAlterExp, long double dCurExp)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double, long double, long double);
        (org_ptr(0x1400de640L))(this, dOldExp, dAlterExp, dCurExp);
    };
    void CPlayer::SendMsg_Notify_ExceptFromRaceRanking(int bExcepted)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400e7d50L))(this, bExcepted);
    };
    void CPlayer::SendMsg_Notify_Get_Golden_Box(char byBoxType, unsigned int dwCharSerial, char* szCharName, _STORAGE_LIST::_db_con* pItem, bool bCircle)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*, _STORAGE_LIST::_db_con*, bool);
        (org_ptr(0x1400e9100L))(this, byBoxType, dwCharSerial, szCharName, pItem, bCircle);
    };
    void CPlayer::SendMsg_Notify_Gravity_Stone_Owner_Die()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e42b0L))(this);
    };
    void CPlayer::SendMsg_Notify_Me_Get_Golden_Box(char byBoxType, _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400e8fd0L))(this, byBoxType, pItem);
    };
    void CPlayer::SendMsg_NpcQuestHistoryInform(char bySlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400df580L))(this, bySlotIndex);
    };
    void CPlayer::SendMsg_NpcQuestListResult(struct _NPCQuestIndexTempData* pQuestIndexData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _NPCQuestIndexTempData*);
        (org_ptr(0x1400df670L))(this, pQuestIndexData);
    };
    void CPlayer::SendMsg_OffPartResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d7e50L))(this, byErrCode);
    };
    void CPlayer::SendMsg_OfferSuggestResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e3e40L))(this, byRetCode);
    };
    void CPlayer::SendMsg_OreCuttingResult(char byErrCode, char byLeftOreNum, unsigned int dwConsumDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int);
        (org_ptr(0x1400dc790L))(this, byErrCode, byLeftOreNum, dwConsumDalant);
    };
    void CPlayer::SendMsg_OreIntoBagResult(char byErrCode, uint16_t wNewSerial, char byLendType, unsigned int dwLendTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, char, unsigned int);
        (org_ptr(0x1400dc950L))(this, byErrCode, wNewSerial, byLendType, dwLendTime);
    };
    void CPlayer::SendMsg_OreTransferCount()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e8780L))(this);
    };
    void CPlayer::SendMsg_OtherShapeAll(struct CPlayer* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*);
        (org_ptr(0x1400d55b0L))(this, pDst);
    };
    void CPlayer::SendMsg_OtherShapeError(struct CPlayer* pDst, char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*, char);
        (org_ptr(0x1400d58b0L))(this, pDst, byErrCode);
    };
    void CPlayer::SendMsg_OtherShapePart(struct CPlayer* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*);
        (org_ptr(0x1400d5690L))(this, pDst);
    };
    void CPlayer::SendMsg_OtherShapePartEx_CashChange(struct CPlayer* pDst, CPlayer::CashChangeStateFlag ServerData, CPlayer::CashChangeStateFlag ClinetData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*, CPlayer::CashChangeStateFlag, CPlayer::CashChangeStateFlag);
        (org_ptr(0x1400d5770L))(this, pDst, ServerData, ClinetData);
    };
    void CPlayer::SendMsg_PartyAlterLootShareResult(char byLootShareMode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400de400L))(this, byLootShareMode);
    };
    void CPlayer::SendMsg_PartyDisjointResult(char bSuccess)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dd2e0L))(this, bSuccess);
    };
    void CPlayer::SendMsg_PartyJoinApplicationQuestion(struct CPlayer* pJoiner)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*);
        (org_ptr(0x1400dd070L))(this, pJoiner);
    };
    void CPlayer::SendMsg_PartyJoinFailLevel()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dd110L))(this);
    };
    void CPlayer::SendMsg_PartyJoinInvitationQuestion(uint16_t wJoinerIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400dccc0L))(this, wJoinerIndex);
    };
    void CPlayer::SendMsg_PartyJoinJoinerResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400dce50L))(this);
    };
    void CPlayer::SendMsg_PartyJoinMemberResult(struct CPartyPlayer* pJoiner, char byLootShareMode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPartyPlayer*, char);
        (org_ptr(0x1400dcd60L))(this, pJoiner, byLootShareMode);
    };
    void CPlayer::SendMsg_PartyLeaveCompulsionResult(struct CPartyPlayer* pLeaver)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPartyPlayer*);
        (org_ptr(0x1400dd240L))(this, pLeaver);
    };
    void CPlayer::SendMsg_PartyLeaveSelfResult(struct CPartyPlayer* pLeaver, bool bWorldExit)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPartyPlayer*, bool);
        (org_ptr(0x1400dd190L))(this, pLeaver, bWorldExit);
    };
    void CPlayer::SendMsg_PartyLockResult(char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dd410L))(this, byRet);
    };
    void CPlayer::SendMsg_PartyLootItemInform(unsigned int dwTakerSerial, char byTableCode, uint16_t wItemIndex, char byNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char, uint16_t, char);
        (org_ptr(0x1400de490L))(this, dwTakerSerial, byTableCode, wItemIndex, byNum);
    };
    void CPlayer::SendMsg_PartySuccessResult(struct CPartyPlayer* pSuccessor)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPartyPlayer*);
        (org_ptr(0x1400dd370L))(this, pSuccessor);
    };
    void CPlayer::SendMsg_PcRoomCharClass(unsigned int dwPcRoomClassIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400e8810L))(this, dwPcRoomClassIndex);
    };
    void CPlayer::SendMsg_PcRoomError(char byErrorCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e88a0L))(this, byErrorCode);
    };
    void CPlayer::SendMsg_PostContent(char byErrCode, unsigned int dwPostSerial, char* wszContent, char byTableCode, uint16_t wItemIndex, uint64_t dwDur, unsigned int dwLv, unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*, char, uint16_t, uint64_t, unsigned int, unsigned int);
        (org_ptr(0x1400e68a0L))(this, byErrCode, dwPostSerial, wszContent, byTableCode, wItemIndex, dwDur, dwLv, dwGold);
    };
    void CPlayer::SendMsg_PostDelete(char byErrCode, unsigned int dwPostSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e6a80L))(this, byErrCode, dwPostSerial);
    };
    void CPlayer::SendMsg_PostDelivery(char byIndex, unsigned int dwPostSerial, char* wszSendName, char* wszTitle, bool bItem, bool bGold, char byState)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*, char*, bool, bool, char);
        (org_ptr(0x1400e6620L))(this, byIndex, dwPostSerial, wszSendName, wszTitle, bItem, bGold, byState);
    };
    void CPlayer::SendMsg_PostItemGold(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e69f0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_PostReturn(char byErrCode, unsigned int dwPostSerial, char* wszRecvName, char* wszTitle, char* wszContent, char byTableCode, uint16_t wItemIndex, uint64_t dwDur, unsigned int dwLv, unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*, char*, char*, char, uint16_t, uint64_t, unsigned int, unsigned int);
        (org_ptr(0x1400e6740L))(this, byErrCode, dwPostSerial, wszRecvName, wszTitle, wszContent, byTableCode, wItemIndex, dwDur, dwLv, dwGold);
    };
    void CPlayer::SendMsg_PostReturnConfirm(char byErrCode, unsigned int dwPostSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e6b20L))(this, byErrCode, dwPostSerial);
    };
    void CPlayer::SendMsg_PostSendReply(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e6560L))(this, byErrCode);
    };
    void CPlayer::SendMsg_PotionDelayTime(unsigned int* pdwPotionNextUseTime, unsigned int dwCurTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int*, unsigned int);
        (org_ptr(0x1400e8660L))(this, pdwPotionNextUseTime, dwCurTime);
    };
    void CPlayer::SendMsg_PotionDivision(uint16_t wSerial, char byParentAmount, uint16_t wChildSerial, char byChildAmount, int nRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char, uint16_t, char, int);
        (org_ptr(0x1400d8750L))(this, wSerial, byParentAmount, wChildSerial, byChildAmount, nRet);
    };
    void CPlayer::SendMsg_PotionSeparation(uint16_t wParentSerial, char byParentAmount, uint16_t wChildSerial, char byChildAmount, int nRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char, uint16_t, char, int);
        (org_ptr(0x1400d8680L))(this, wParentSerial, byParentAmount, wChildSerial, byChildAmount, nRet);
    };
    void CPlayer::SendMsg_PremiumCashItemUse(uint16_t wSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400e9590L))(this, wSerial);
    };
    void CPlayer::SendMsg_ProposeVoteResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2d00L))(this, byRetCode);
    };
    void CPlayer::SendMsg_PvpRankListVersionUp(char byVersion)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2640L))(this, byVersion);
    };
    void CPlayer::SendMsg_QuestComplete(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e21f0L))(this, byQuestDBSlot);
    };
    void CPlayer::SendMsg_QuestDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d96c0L))(this);
    };
    void CPlayer::SendMsg_QuestFailure(char byFailCode, char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char);
        (org_ptr(0x1400e2330L))(this, byFailCode, byQuestDBSlot);
    };
    void CPlayer::SendMsg_QuestGiveUpResult(char byReturnSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e23d0L))(this, byReturnSlot);
    };
    void CPlayer::SendMsg_QuestHistoryDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d9860L))(this);
    };
    void CPlayer::SendMsg_QuestProcess(char byQuestDBSlot, char byActIndex, uint16_t wCount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t);
        (org_ptr(0x1400e2280L))(this, byQuestDBSlot, byActIndex, wCount);
    };
    void CPlayer::SendMsg_RACE_Greeting(char* wszBossName, char* wszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char*);
        (org_ptr(0x1400e6260L))(this, wszBossName, wszMsg);
    };
    void CPlayer::SendMsg_RaceBattlePenelty(int nAlterPoint, char byAlterType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, char);
        (org_ptr(0x1400e77c0L))(this, nAlterPoint, byAlterType);
    };
    void CPlayer::SendMsg_RaceBossCryMsg()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e6ff0L))(this);
    };
    void CPlayer::SendMsg_RaceTopInform(bool bTop)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400df1f0L))(this, bTop);
    };
    void CPlayer::SendMsg_RadarCharSearchResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e5eb0L))(this);
    };
    void CPlayer::SendMsg_RadarDelayTime(unsigned int dwDelay)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400e6050L))(this, dwDelay);
    };
    void CPlayer::SendMsg_ReEnterAsk(uint16_t wChannelIndex, unsigned int dwChannelSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int);
        (org_ptr(0x1400dab70L))(this, wChannelIndex, dwChannelSerial);
    };
    void CPlayer::SendMsg_ReEnterDarkHoleResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400daae0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_RealMovePoint(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400d5c00L))(this, n);
    };
    void CPlayer::SendMsg_Recover()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d6540L))(this);
    };
    void CPlayer::SendMsg_RecvHSKQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e24f0L))(this);
    };
    void CPlayer::SendMsg_RefeshGroupTargetPosition(char byGroupType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2b00L))(this, byGroupType);
    };
    void CPlayer::SendMsg_RegistBindResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400da130L))(this, byRetCode);
    };
    void CPlayer::SendMsg_ReleaseGroupTargetObjectResult(char byGroupType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2a70L))(this, byGroupType);
    };
    void CPlayer::SendMsg_ReleaseSiegeModeResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e4480L))(this, byRetCode);
    };
    void CPlayer::SendMsg_RemainOreRate()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e85d0L))(this);
    };
    void CPlayer::SendMsg_RemainTimeInform(int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int16_t, int, struct _SYSTEMTIME*);
        (org_ptr(0x1400e4570L))(this, iType, lRemainTime, pstEndDate);
    };
    void CPlayer::SendMsg_ResDivision(char byErrCode, _STORAGE_LIST::_db_con* pStartOre, _STORAGE_LIST::_db_con* pTargetOre)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400dc220L))(this, byErrCode, pStartOre, pTargetOre);
    };
    void CPlayer::SendMsg_ResSeparation(char byErrCode, _STORAGE_LIST::_db_con* pStartOre, _STORAGE_LIST::_db_con* pNewOre)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400dc140L))(this, byErrCode, pStartOre, pNewOre);
    };
    void CPlayer::SendMsg_ResultChangeTaxRate(char byRetCode, char byNextTax)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char);
        (org_ptr(0x1400e7400L))(this, byRetCode, byNextTax);
    };
    void CPlayer::SendMsg_ResultNpcQuest(bool bSucc)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400df4f0L))(this, bSucc);
    };
    void CPlayer::SendMsg_Resurrect(char byRet, bool bQuickPotion)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, bool);
        (org_ptr(0x1400d60b0L))(this, byRet, bQuickPotion);
    };
    void CPlayer::SendMsg_ResurrectInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d61c0L))(this);
    };
    void CPlayer::SendMsg_Revival(char byRet, bool bEquialZone)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, bool);
        (org_ptr(0x1400d5f30L))(this, byRet, bEquialZone);
    };
    void CPlayer::SendMsg_RevivalOfJade(uint16_t wSuccRate)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400e82b0L))(this, wSuccRate);
    };
    void CPlayer::SendMsg_RewardAddItem(_STORAGE_LIST::_db_con* pItem, char byReason)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*, char);
        (org_ptr(0x1400de9e0L))(this, pItem, byReason);
    };
    void CPlayer::SendMsg_SFDelayRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e78f0L))(this);
    };
    void CPlayer::SendMsg_SelectClassResult(char byErrCode, uint16_t wSelClassIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400de8f0L))(this, byErrCode, wSelClassIndex);
    };
    void CPlayer::SendMsg_SelectQuestReward(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2460L))(this, byQuestDBSlot);
    };
    void CPlayer::SendMsg_SelectWaitedQuest(char byEventType, unsigned int dwEventIndex, char byEventNodeIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char);
        (org_ptr(0x1400e2090L))(this, byEventType, dwEventIndex, byEventNodeIndex);
    };
    void CPlayer::SendMsg_SellItemStoreResult(struct CItemStore* pStore, char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*, char);
        (org_ptr(0x1400d7490L))(this, pStore, byErrCode);
    };
    void CPlayer::SendMsg_SetDPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e03a0L))(this);
    };
    void CPlayer::SendMsg_SetFPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e01c0L))(this);
    };
    void CPlayer::SendMsg_SetGroupMapPoint(char byRetCode, char byGroupType, char byMapCode, float* pzTar, char byRemain)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, float*, char);
        (org_ptr(0x1400e7250L))(this, byRetCode, byGroupType, byMapCode, pzTar, byRemain);
    };
    void CPlayer::SendMsg_SetGroupTargetObjectResult(char byRetCode, char byGroupType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char);
        (org_ptr(0x1400e28f0L))(this, byRetCode, byGroupType);
    };
    void CPlayer::SendMsg_SetHPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e0260L))(this);
    };
    void CPlayer::SendMsg_SetItemCheckResult(char byResult, unsigned int dwSetItem, char bySetEffectNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char);
        (org_ptr(0x1400e51c0L))(this, byResult, dwSetItem, bySetEffectNum);
    };
    void CPlayer::SendMsg_SetSPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e0300L))(this);
    };
    void CPlayer::SendMsg_SetTargetObjectResult(char byRetCode, bool bForce)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, bool);
        (org_ptr(0x1400e27a0L))(this, byRetCode, bForce);
    };
    void CPlayer::SendMsg_SkillResult(char byErrCode, struct _CHRID* pidDst, char bySkillIndex, int nSFLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _CHRID*, char, int);
        (org_ptr(0x1400df950L))(this, byErrCode, pidDst, bySkillIndex, nSFLv);
    };
    void CPlayer::SendMsg_SpecialDownloadResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d99f0L))(this);
    };
    void CPlayer::SendMsg_StartContSF(struct _sf_continous* pCont)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _sf_continous*);
        (org_ptr(0x1400e09b0L))(this, pCont);
    };
    void CPlayer::SendMsg_StartNewPos(char byMapInMode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dbec0L))(this, byMapInMode);
    };
    void CPlayer::SendMsg_StartShopping()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e1e50L))(this);
    };
    void CPlayer::SendMsg_StatInform(char byStatIndex, unsigned int dwNewStat, char byReason)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char);
        (org_ptr(0x1400d6cd0L))(this, byStatIndex, dwNewStat, byReason);
    };
    void CPlayer::SendMsg_StateInform(uint64_t dwStateFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint64_t);
        (org_ptr(0x1400d69f0L))(this, dwStateFlag);
    };
    void CPlayer::SendMsg_Stop(bool bAll)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400d6240L))(this, bAll);
    };
    void CPlayer::SendMsg_StoreLimitItemAmountInfo(unsigned int dwStoreIndex, struct _limit_amount_info* pAmountInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, struct _limit_amount_info*);
        (org_ptr(0x1400d75c0L))(this, dwStoreIndex, pAmountInfo);
    };
    void CPlayer::SendMsg_StoreListResult()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d9db0L))(this);
    };
    void CPlayer::SendMsg_TLStatusInfo(unsigned int dwFatigue, char wStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char);
        (org_ptr(0x1400e8b90L))(this, dwFatigue, wStatus);
    };
    void CPlayer::SendMsg_TLStatusPenalty(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e8dd0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_TakeAddResult(char byErrCode, _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d6800L))(this, byErrCode, pItem);
    };
    void CPlayer::SendMsg_TakeNewResult(char byErrCode, _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400d66e0L))(this, byErrCode, pItem);
    };
    void CPlayer::SendMsg_TalikCrystalExchangeResult(char byRet, char byExchangeNum, _STORAGE_LIST::_db_con* pNewItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400e94e0L))(this, byRet, byExchangeNum, pNewItem);
    };
    void CPlayer::SendMsg_TargetObjectHPInform()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e26d0L))(this);
    };
    void CPlayer::SendMsg_TeleportError(char byErrorCode, unsigned int dwMapIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e7cb0L))(this, byErrorCode, dwMapIndex);
    };
    void CPlayer::SendMsg_TestAttackResult(char byEffectCode, char byEffectIndex, uint16_t wBulletItemIndex, char byEffectLv, char byWeaponPart, int16_t* pzTar)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, char, char, int16_t*);
        (org_ptr(0x1400d4f60L))(this, byEffectCode, byEffectIndex, wBulletItemIndex, byEffectLv, byWeaponPart, pzTar);
    };
    void CPlayer::SendMsg_ThrowSkillResult(char byErrCode, struct _CHRID* pidDst, char bySkillIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _CHRID*, char);
        (org_ptr(0x1400dfca0L))(this, byErrCode, pidDst, bySkillIndex);
    };
    void CPlayer::SendMsg_ThrowStorageResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d68c0L))(this, byErrCode);
    };
    void CPlayer::SendMsg_ThrowUnitResult(char byErrCode, struct _CHRID* pidDst, uint16_t wBulletIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _CHRID*, uint16_t);
        (org_ptr(0x1400dff30L))(this, byErrCode, pidDst, wBulletIndex);
    };
    void CPlayer::SendMsg_TowerContinue(uint16_t wItemSerial, struct CGuardTower* pTwr)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, struct CGuardTower*);
        (org_ptr(0x1400e0eb0L))(this, wItemSerial, pTwr);
    };
    void CPlayer::SendMsg_TransShipRenewTicketResult(char byErrCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400dc500L))(this, byErrCode);
    };
    void CPlayer::SendMsg_TransformSiegeModeResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e4340L))(this, byRetCode);
    };
    void CPlayer::SendMsg_TrunkChangPasswdResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e3490L))(this, byRetCode);
    };
    void CPlayer::SendMsg_TrunkDownloadResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e2ec0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_TrunkEstResult(char byRetCode, unsigned int dwLeftDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400e3390L))(this, byRetCode, dwLeftDalant);
    };
    void CPlayer::SendMsg_TrunkExtendResult(char byRetCode, char bySlotNum, unsigned int dwLeftDalant, unsigned int dwConsumDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int, unsigned int);
        (org_ptr(0x1400e3520L))(this, byRetCode, bySlotNum, dwLeftDalant, dwConsumDalant);
    };
    void CPlayer::SendMsg_TrunkHintAnswerResult(char byRetCode, char* pwszPassword)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x1400e3ab0L))(this, byRetCode, pwszPassword);
    };
    void CPlayer::SendMsg_TrunkIoMoneyResult(char byRetCode, long double dTrunkDalant, long double dTrunkGold, unsigned int dwDalant, unsigned int dwGold, unsigned int dwFeeDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, long double, long double, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1400e3930L))(this, byRetCode, dTrunkDalant, dTrunkGold, dwDalant, dwGold, dwFeeDalant);
    };
    void CPlayer::SendMsg_TrunkIoResult(char byCase, char byRetCode, unsigned int dwLeftDalant, unsigned int dwConsumDanlant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int, unsigned int);
        (org_ptr(0x1400e3870L))(this, byCase, byRetCode, dwLeftDalant, dwConsumDanlant);
    };
    void CPlayer::SendMsg_TrunkPotionDivision(uint16_t wSerial, uint16_t wParentAmount, uint16_t wChildSerial, uint16_t wChildAmount, int nRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, uint16_t, uint16_t, int);
        (org_ptr(0x1400e37a0L))(this, wSerial, wParentAmount, wChildSerial, wChildAmount, nRet);
    };
    void CPlayer::SendMsg_TrunkPwHintIndexResult(char byRetCode, char byHintIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char);
        (org_ptr(0x1400e3a10L))(this, byRetCode, byHintIndex);
    };
    void CPlayer::SendMsg_TrunkResDivision(char byErrCode, _STORAGE_LIST::_db_con* pStartOre, _STORAGE_LIST::_db_con* pTargetOre)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, _STORAGE_LIST::_db_con*, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400e36a0L))(this, byErrCode, pStartOre, pTargetOre);
    };
    void CPlayer::SendMsg_UILock_FindPW_Result(char byRet, char* uszUILockPW, char byFindPassFailCount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*, char);
        (org_ptr(0x1400e7fb0L))(this, byRet, uszUILockPW, byFindPassFailCount);
    };
    void CPlayer::SendMsg_UILock_Init_Request_ToAccount(unsigned int dwSerial, char* uszUILockPW, uint16_t wUserIndex, char byHintIndex, char* uszHintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char*, uint16_t, char, char*);
        (org_ptr(0x1400e80b0L))(this, dwSerial, uszUILockPW, wUserIndex, byHintIndex, uszHintAnswer);
    };
    void CPlayer::SendMsg_UILock_Init_Result(char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e7de0L))(this, byRet);
    };
    void CPlayer::SendMsg_UILock_Login_Result(char byRet, char byFailCount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char);
        (org_ptr(0x1400e7e80L))(this, byRet, byFailCount);
    };
    void CPlayer::SendMsg_UILock_Update_Request_ToAccount(unsigned int dwSerial, char* uszUILockPW, uint16_t wUserIndex, char byHintIndex, char* uszHintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char*, uint16_t, char, char*);
        (org_ptr(0x1400e81b0L))(this, dwSerial, uszUILockPW, wUserIndex, byHintIndex, uszHintAnswer);
    };
    void CPlayer::SendMsg_UILock_Update_Result(char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400e7f20L))(this, byRet);
    };
    void CPlayer::SendMsg_UnitAlterFeeInform(char bySlotIndex, unsigned int dwPullingFee)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400db5d0L))(this, bySlotIndex, dwPullingFee);
    };
    void CPlayer::SendMsg_UnitBulletFillResult(char byRetCode, char bySlotIndex, uint16_t* pwBulletIndex, unsigned int* pdwConsumMoney)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t*, unsigned int*);
        (org_ptr(0x1400db090L))(this, byRetCode, bySlotIndex, pwBulletIndex, pdwConsumMoney);
    };
    void CPlayer::SendMsg_UnitBulletReplaceResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400db670L))(this, byRetCode);
    };
    void CPlayer::SendMsg_UnitDeliveryResult(char byRetCode, char bySlotIndex, unsigned int dwParkingUnitSerial, unsigned int dwPayDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int, unsigned int);
        (org_ptr(0x1400db310L))(this, byRetCode, bySlotIndex, dwParkingUnitSerial, dwPayDalant);
    };
    void CPlayer::SendMsg_UnitDestroy(char bySlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400db700L))(this, bySlotIndex);
    };
    void CPlayer::SendMsg_UnitForceReturnInform(char bySlotIndex, unsigned int dwDebt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400db790L))(this, bySlotIndex, dwDebt);
    };
    void CPlayer::SendMsg_UnitFrameBuyResult(char byRetCode, char byFrameCode, char byUnitSlotIndex, uint16_t wKeyIndex, uint16_t wKeySerial, unsigned int* pdwConsumMoney)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, uint16_t, uint16_t, unsigned int*);
        (org_ptr(0x1400dac10L))(this, byRetCode, byFrameCode, byUnitSlotIndex, wKeyIndex, wKeySerial, pdwConsumMoney);
    };
    void CPlayer::SendMsg_UnitFrameRepairResult(char byRetCode, char bySlotIndex, unsigned int dwNewGauge, unsigned int dwConsumDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int, unsigned int);
        (org_ptr(0x1400dafb0L))(this, byRetCode, bySlotIndex, dwNewGauge, dwConsumDalant);
    };
    void CPlayer::SendMsg_UnitLeaveResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400db540L))(this, byRetCode);
    };
    void CPlayer::SendMsg_UnitPackFillResult(char byRetCode, char bySlotIndex, char byFillNum, struct _unit_pack_fill_request_clzo::__list* pList, unsigned int* pdwConsumMoney)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char, struct _unit_pack_fill_request_clzo::__list*, unsigned int*);
        (org_ptr(0x1400db1d0L))(this, byRetCode, bySlotIndex, byFillNum, pList, pdwConsumMoney);
    };
    void CPlayer::SendMsg_UnitPartTuningResult(char byRetCode, char bySlotIndex, int* pnCost)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, int*);
        (org_ptr(0x1400dae30L))(this, byRetCode, bySlotIndex, pnCost);
    };
    void CPlayer::SendMsg_UnitReturnResult(char byRetCode, unsigned int dwPayDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400db3f0L))(this, byRetCode, dwPayDalant);
    };
    void CPlayer::SendMsg_UnitRideChange(bool bTake, struct CParkingUnit* pUnit)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, struct CParkingUnit*);
        (org_ptr(0x1400d54a0L))(this, bTake, pUnit);
    };
    void CPlayer::SendMsg_UnitSellResult(char byRetCode, char bySlotIndex, uint16_t wKeySerial, int nAddMoney, unsigned int dwTotalNonpay, unsigned int dwSumDalant, unsigned int dwSumGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, int, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1400dad40L))(this, byRetCode, bySlotIndex, wKeySerial, nAddMoney, dwTotalNonpay, dwSumDalant, dwSumGold);
    };
    void CPlayer::SendMsg_UnitTakeResult(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400db4b0L))(this, byRetCode);
    };
    void CPlayer::SendMsg_UpdateTLStatusInfo(unsigned int dwFatigue, char wStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char);
        (org_ptr(0x1400e8cb0L))(this, dwFatigue, wStatus);
    };
    void CPlayer::SendMsg_UsPotionResultOther(char byRetcode, uint16_t wPotionIndex, struct CPlayer* pUsePlayer, bool bCircle)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, struct CPlayer*, bool);
        (org_ptr(0x1400d7b80L))(this, byRetcode, wPotionIndex, pUsePlayer, bCircle);
    };
    void CPlayer::SendMsg_UseJadeResult(char byErrCode, uint16_t wItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t);
        (org_ptr(0x1400e83c0L))(this, byErrCode, wItemSerial);
    };
    void CPlayer::SendMsg_UsePotionResult(char byErrCode, uint16_t wSerial, char byLeftNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, char);
        (org_ptr(0x1400d7a70L))(this, byErrCode, wSerial, byLeftNum);
    };
    void CPlayer::SendMsg_UseRadarResult(char byErrCode, uint16_t wSerial, unsigned int dwDelay)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, unsigned int);
        (org_ptr(0x1400e5e00L))(this, byErrCode, wSerial, dwDelay);
    };
    void CPlayer::SendMsg_VoteResult(unsigned int dwMatterVoteSynKey, char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char);
        (org_ptr(0x1400e3f60L))(this, dwMatterVoteSynKey, byRetCode);
    };
    void CPlayer::SendTargetMonsterSFContInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e5520L))(this);
    };
    void CPlayer::SendTargetPlayerDamageContInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400e5740L))(this);
    };
    void CPlayer::SenseState()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400577f0L))(this);
    };
    void CPlayer::SetAttackPart(int nAttactPart)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400743f0L))(this, nAttactPart);
    };
    void CPlayer::SetBattleMode(bool bAttack)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x140068650L))(this, bAttack);
    };
    void CPlayer::SetBindDummy(struct _dummy_position* pDummy)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _dummy_position*);
        (org_ptr(0x1403eaca0L))(this, pDummy);
    };
    void CPlayer::SetBindMapData(struct CMapData* pMapData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CMapData*);
        (org_ptr(0x1403eac70L))(this, pMapData);
    };
    bool CPlayer::SetBindPosition(struct CMapData* pMap, struct _dummy_position* pDummy)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CMapData*, struct _dummy_position*);
        return (org_ptr(0x1400a03c0L))(this, pMap, pDummy);
    };
    void CPlayer::SetCashAmount(int nAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1402f2740L))(this, nAmount);
    };
    void CPlayer::SetCntEnable(bool bSet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400cfd80L))(this, bSet);
    };
    bool CPlayer::SetDP(int nDP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, bool);
        return (org_ptr(0x14005f340L))(this, nDP, bOver);
    };
    int CPlayer::SetDamage(int nDamage, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x14005da70L))(this, nDamage, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    void CPlayer::SetEffectEquipCode(char byStorageCode, char bySlotIndex, char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char);
        (org_ptr(0x140057c70L))(this, byStorageCode, bySlotIndex, byCode);
    };
    void CPlayer::SetEquipEffect(struct _STORAGE_LIST::_storage_con* pItem, bool bEquip)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_LIST::_storage_con*, bool);
        (org_ptr(0x140050cc0L))(this, pItem, bEquip);
    };
    void CPlayer::SetEquipJadeEffect(int nParam, float fCurVal, bool bAdd)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, float, bool);
        (org_ptr(0x140052280L))(this, nParam, fCurVal, bAdd);
    };
    bool CPlayer::SetFP(int nFP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, bool);
        return (org_ptr(0x14005f140L))(this, nFP, bOver);
    };
    void CPlayer::SetGauge(int nParamCode, int nValue, bool bOver)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, int, bool);
        (org_ptr(0x14005f430L))(this, nParamCode, nValue, bOver);
    };
    void CPlayer::SetGrade(char byGrade)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400647d0L))(this, byGrade);
    };
    bool CPlayer::SetHP(int nHP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, bool);
        return (org_ptr(0x14005efa0L))(this, nHP, bOver);
    };
    void CPlayer::SetHaveEffect(bool bLogin)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x140050d30L))(this, bLogin);
    };
    void CPlayer::SetHaveEffectUseTime(_STORAGE_LIST::_db_con* pItem, bool bAdd)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*, bool);
        (org_ptr(0x140068840L))(this, pItem, bAdd);
    };
    void CPlayer::SetLastAttBuff(bool bSet)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x140068ff0L))(this, bSet);
    };
    void CPlayer::SetLevel(char byNewLevel)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x140055630L))(this, byNewLevel);
    };
    void CPlayer::SetLevelD(char byDownLevel)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x140055930L))(this, byDownLevel);
    };
    void CPlayer::SetMstHaveEffect(struct _ResourceItem_fld* pFld, _STORAGE_LIST::_db_con* pItem, bool bAdd, int nAlter)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _ResourceItem_fld*, _STORAGE_LIST::_db_con*, bool, int);
        (org_ptr(0x140052970L))(this, pFld, pItem, bAdd, nAlter);
    };
    void CPlayer::SetMstPt(int nMstCode, float fVal, bool bAdd, int nWpType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, float, bool, int);
        (org_ptr(0x140052c20L))(this, nMstCode, fVal, bAdd, nWpType);
    };
    void CPlayer::SetPotionActDelay(char byPotionClass, unsigned int dwCurrTime, unsigned int dwActDelay)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, unsigned int);
        (org_ptr(0x1400a3920L))(this, byPotionClass, dwCurrTime, dwActDelay);
    };
    void CPlayer::SetPvpPointLeak(long double dValue)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, long double);
        (org_ptr(0x140068ed0L))(this, dValue);
    };
    void CPlayer::SetRankRate(uint16_t wRankRate, unsigned int dwRank)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int);
        (org_ptr(0x140064850L))(this, wRankRate, dwRank);
    };
    bool CPlayer::SetSP(int nSP, bool bOver)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, bool);
        return (org_ptr(0x14005f240L))(this, nSP, bOver);
    };
    void CPlayer::SetShapeAllBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140064a40L))(this);
    };
    void CPlayer::SetSiege(_STORAGE_LIST::_db_con* pSiegeItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400f0bc0L))(this, pSiegeItem);
    };
    void CPlayer::SetStateFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140063a90L))(this);
    };
    void CPlayer::SetStaticMember()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140065ee0L))();
    };
    bool CPlayer::SetTarPos(float* fTarPos, bool bColl)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, float*, bool);
        return (org_ptr(0x14005d760L))(this, fTarPos, bColl);
    };
    void CPlayer::SetUseReleaseRaceBuffPotion()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a3b40L))(this);
    };
    void CPlayer::SetVote(int nSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1401087b0L))(this, nSerial);
    };
    void CPlayer::SortPost(int nNumber)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x1400c9a60L))(this, nNumber);
    };
    void CPlayer::SubActPoint(char byCode, unsigned int dwSub)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x140056140L))(this, byCode, dwSub);
    };
    void CPlayer::SubDalant(unsigned int dwSub)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x140055c40L))(this, dwSub);
    };
    void CPlayer::SubGold(unsigned int dwSub)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x140055e70L))(this, dwSub);
    };
    void CPlayer::SubPoint(unsigned int dwSub)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x140055f60L))(this, dwSub);
    };
    unsigned int CPlayer::SumMinuteBetween(struct _SYSTEMTIME* tmLast, struct _SYSTEMTIME* tmLocal)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*, struct _SYSTEMTIME*, struct _SYSTEMTIME*);
        return (org_ptr(0x140069600L))(this, tmLast, tmLocal);
    };
    unsigned int CPlayer::SumMinuteOne(struct _SYSTEMTIME* tm)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*, struct _SYSTEMTIME*);
        return (org_ptr(0x140069480L))(this, tm);
    };
    void CPlayer::TakeGravityStone()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a0480L))(this);
    };
    void CPlayer::UpdateAuraSFCont()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a3620L))(this);
    };
    void CPlayer::UpdateChaosModeState(unsigned int dwCurTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x14007be90L))(this, dwCurTime);
    };
    bool CPlayer::UpdateDelPost(unsigned int dwPostSerial, int nIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int, int);
        return (org_ptr(0x1400c9a00L))(this, dwPostSerial, nIndex);
    };
    void CPlayer::UpdateLastCriTicket(uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char, char, char, char);
        (org_ptr(0x1400ce390L))(this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime);
    };
    void CPlayer::UpdateLastMetalTicket(uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char, char, char, char);
        (org_ptr(0x1400ce440L))(this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime);
    };
    void CPlayer::UpdatePost(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c98f0L))(this, dwIndex);
    };
    void CPlayer::UpdatePostAddLog(unsigned int dwIndex, bool bLog, int nItemKey)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, bool, int);
        (org_ptr(0x1400c9c40L))(this, dwIndex, bLog, nItemKey);
    };
    void CPlayer::UpdatePvpOrderView(int64_t tCurTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int64_t);
        (org_ptr(0x140068390L))(this, tCurTime);
    };
    void CPlayer::UpdatePvpPointLimiter(int64_t tCurTime)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int64_t);
        (org_ptr(0x1402081c0L))(this, tCurTime);
    };
    void CPlayer::UpdateReturnPost(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c9b90L))(this, dwSerial);
    };
    void CPlayer::UpdateVisualVer(CPlayer::CashChangeStateFlag byChangeFlagMask)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, CPlayer::CashChangeStateFlag);
        (org_ptr(0x140053970L))(this, byChangeFlagMask);
    };
    bool CPlayer::Update_GoldPoint(unsigned int dwPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int);
        return (org_ptr(0x140069c80L))(this, dwPoint);
    };
    void CPlayer::UpdatedMasteryWriteHistory()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400638c0L))(this);
    };
    bool CPlayer::WPActiveForce(struct _be_damaged_char* pDamList, int nDamagedObjNum, struct _force_fld* pForceFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _be_damaged_char*, int, struct _force_fld*);
        return (org_ptr(0x1400a25b0L))(this, pDamList, nDamagedObjNum, pForceFld);
    };
    bool CPlayer::WPActiveSkill(struct _be_damaged_char* pDamList, int nDamagedObjNum, struct _skill_fld* pSkillFld, int nEffectCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _be_damaged_char*, int, struct _skill_fld*, int);
        return (org_ptr(0x1400a2b60L))(this, pDamList, nDamagedObjNum, pSkillFld, nEffectCode);
    };
    bool CPlayer::WeaponSFActive(struct _be_damaged_char* pDamList, int* nDamagedObjNum, int* nShotNum, uint16_t wBulletSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _be_damaged_char*, int*, int*, uint16_t);
        return (org_ptr(0x14008a400L))(this, pDamList, nDamagedObjNum, nShotNum, wBulletSerial);
    };
    void CPlayer::_AnimusReturn(char byReturnType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d1080L))(this, byReturnType);
    };
    int CPlayer::_CalcMaxFP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005cdf0L))(this);
    };
    int CPlayer::_CalcMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005cd30L))(this);
    };
    int CPlayer::_CalcMaxSP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14005d1c0L))(this);
    };
    void CPlayer::_CheckForcePullUnit()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140106a10L))(this);
    };
    uint16_t CPlayer::_DeleteUnitKey(char bySlotIndex)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x1401067d0L))(this, bySlotIndex);
    };
    struct _ITEM_EFFECT* CPlayer::_GetItemEffect(_STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = struct _ITEM_EFFECT* (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14005ca20L))(this, pItem);
    };
    char CPlayer::_GetPartyMemberInCircle(struct CPlayer** out_ppMember, int nMax, bool bOne)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, struct CPlayer**, int, bool);
        return (org_ptr(0x14005d2d0L))(this, out_ppMember, nMax, bOne);
    };
    bool CPlayer::_LockUnitKey(char bySlotIndex, bool bLock)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, bool);
        return (org_ptr(0x1401068b0L))(this, bySlotIndex, bLock);
    };
    struct _Quest_fld* CPlayer::_Reward_Quest(struct _Quest_fld* pQuestFld, char byRewardItemIndex)
    {
        using org_ptr = struct _Quest_fld* (WINAPIV*)(struct CPlayer*, struct _Quest_fld*, char);
        return (org_ptr(0x1400cce90L))(this, pQuestFld, byRewardItemIndex);
    };
    void CPlayer::_TowerAllReturn(char byDestroyType, bool bForceReturn)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, bool);
        (org_ptr(0x1400a1bd0L))(this, byDestroyType, bForceReturn);
    };
    void CPlayer::_TowerDestroy(struct CGuardTower* pTowerObj)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CGuardTower*);
        (org_ptr(0x1400a1480L))(this, pTowerObj);
    };
    uint16_t CPlayer::_TowerReturn(_STORAGE_LIST::_db_con* pTowerItem)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1400a1a50L))(this, pTowerItem);
    };
    void CPlayer::_TrapDestroy(struct CTrap* pTrap, char byDestroyCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CTrap*, char);
        (org_ptr(0x1400a15d0L))(this, pTrap, byDestroyCode);
    };
    void CPlayer::_TrapReturn(struct CTrap* pTrap, uint16_t wAddSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CTrap*, uint16_t);
        (org_ptr(0x1400a1650L))(this, pTrap, wAddSerial);
    };
    void CPlayer::_UnitDestroy(char byUnitSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x140106de0L))(this, byUnitSlot);
    };
    void CPlayer::_UpdateUnitDebt(char bySlotIndex, unsigned int dwPull)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x140106970L))(this, bySlotIndex, dwPull);
    };
    void CPlayer::_check_dst_param_after_attack(int nTotalDam, struct CCharacter* pTarget)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, struct CCharacter*);
        (org_ptr(0x140089a60L))(this, nTotalDam, pTarget);
    };
    bool CPlayer::_check_embel_part(_STORAGE_LIST::_db_con* pFixingItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1400ff4c0L))(this, pFixingItem);
    };
    bool CPlayer::_check_equip_part(_STORAGE_LIST::_db_con* pFixingItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1400ff2d0L))(this, pFixingItem);
    };
    int CPlayer::_check_equipmastery_lim(int EquipMasteryCode)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x140065e00L))(this, EquipMasteryCode);
    };
    int CPlayer::_check_exp_after_attack(int nDamagedObjNum, struct _be_damaged_char* pList, struct CPartyModeKillMonsterExpNotify* kPartyExpNotify)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, int, struct _be_damaged_char*, struct CPartyModeKillMonsterExpNotify*);
        return (org_ptr(0x140089930L))(this, nDamagedObjNum, pList, kPartyExpNotify);
    };
    void CPlayer::_check_guild_target_object()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ff6d0L))(this);
    };
    void CPlayer::_check_hp_send_party()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ff190L))(this);
    };
    unsigned int CPlayer::_check_mastery_cum_lim(char byMasteryClass, char byIndex)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*, char, char);
        return (org_ptr(0x140065140L))(this, byMasteryClass, byIndex);
    };
    unsigned int CPlayer::_check_mastery_lim(char byMasteryClass, char byIndex)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayer*, char, char);
        return (org_ptr(0x1400657a0L))(this, byMasteryClass, byIndex);
    };
    void CPlayer::_check_party_target_object()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ff5b0L))(this);
    };
    void CPlayer::_check_race_target_object()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ff7f0L))(this);
    };
    void CPlayer::_check_target_object()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ff020L))(this);
    };
    int CPlayer::_pre_check_force_attack(struct CCharacter* pDst, float* pfTarPos, uint16_t wForceItemSerial, struct _force_fld** ppForceFld, _STORAGE_LIST::_db_con** ppForceItem, uint16_t* pdwDecPoint, uint16_t wEffBtSerial, _STORAGE_LIST::_db_con** ppEffBtProp, struct _BulletItem_fld** ppfldEffBt)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, uint16_t, struct _force_fld**, _STORAGE_LIST::_db_con**, uint16_t*, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**);
        return (org_ptr(0x1400861e0L))(this, pDst, pfTarPos, wForceItemSerial, ppForceFld, ppForceItem, pdwDecPoint, wEffBtSerial, ppEffBtProp, ppfldEffBt);
    };
    int CPlayer::_pre_check_in_guild_battle(struct CCharacter* pDst)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*);
        return (org_ptr(0x140087670L))(this, pDst);
    };
    bool CPlayer::_pre_check_in_guild_battle_race(struct CCharacter* pDst, bool bEqueal)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CCharacter*, bool);
        return (org_ptr(0x1400878b0L))(this, pDst, bEqueal);
    };
    int CPlayer::_pre_check_normal_attack(struct CCharacter* pDst, uint16_t wBulletSerial, bool bCount, _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet, uint16_t wEffBtSerial, _STORAGE_LIST::_db_con** ppEffBtProp, struct _BulletItem_fld** ppfldEffBt)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*, uint16_t, bool, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**);
        return (org_ptr(0x140084670L))(this, pDst, wBulletSerial, bCount, ppBulletProp, ppfldBullet, wEffBtSerial, ppEffBtProp, ppfldEffBt);
    };
    int CPlayer::_pre_check_siege_attack(struct CCharacter* pDst, float* pfAttackPos, uint16_t wBulletSerial, _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet, uint16_t wEffBtSerial, _STORAGE_LIST::_db_con** ppEffBulletProp, struct _BulletItem_fld** ppfldEffBullet)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**);
        return (org_ptr(0x140086de0L))(this, pDst, pfAttackPos, wBulletSerial, ppBulletProp, ppfldBullet, wEffBtSerial, ppEffBulletProp, ppfldEffBullet);
    };
    int CPlayer::_pre_check_skill_attack(struct CCharacter* pDst, float* pfAttackPos, char byEffectCode, struct _skill_fld* pSkillFld, uint16_t wBulletSerial, _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet, int nEffectGroup, uint16_t* pdwDecPoint, uint16_t wEffBtSerial, _STORAGE_LIST::_db_con** ppEffBtProp, struct _BulletItem_fld** ppfldEffBt)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, char, struct _skill_fld*, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**, int, uint16_t*, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**);
        return (org_ptr(0x140085420L))(this, pDst, pfAttackPos, byEffectCode, pSkillFld, wBulletSerial, ppBulletProp, ppfldBullet, nEffectGroup, pdwDecPoint, wEffBtSerial, ppEffBtProp, ppfldEffBt);
    };
    bool CPlayer::_pre_check_skill_enable(struct _skill_fld* pSkillFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _skill_fld*);
        return (org_ptr(0x1400a3c30L))(this, pSkillFld);
    };
    bool CPlayer::_pre_check_skill_gradelimit(struct _skill_fld* pSkillFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _skill_fld*);
        return (org_ptr(0x1400a3100L))(this, pSkillFld);
    };
    int CPlayer::_pre_check_unit_attack(struct CCharacter* pDst, char byWeaponPart, struct _UnitPart_fld** ppWeaponFld, struct _UnitBullet_fld** ppBulletFld, struct _unit_bullet_param** ppBulletParam)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, struct CCharacter*, char, struct _UnitPart_fld**, struct _UnitBullet_fld**, struct _unit_bullet_param**);
        return (org_ptr(0x1400869e0L))(this, pDst, byWeaponPart, ppWeaponFld, ppBulletFld, ppBulletParam);
    };
    bool CPlayer::_pre_check_wpactive_force_attack()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x14008b780L))(this);
    };
    bool CPlayer::_pre_check_wpactive_skill_attack(char byEffectCode, struct _skill_fld* pSkillFld, uint16_t wBulletSerial, _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, struct _skill_fld*, uint16_t, _STORAGE_LIST::_db_con**, struct _BulletItem_fld**);
        return (org_ptr(0x14008b5c0L))(this, byEffectCode, pSkillFld, wBulletSerial, ppBulletProp, ppfldBullet);
    };
    void CPlayer::_set_db_sf_effect(struct _SFCONT_DB_BASE* pDBBase)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _SFCONT_DB_BASE*);
        (org_ptr(0x14004e2c0L))(this, pDBBase);
    };
    void CPlayer::apply_case_equip_std_effect(_STORAGE_LIST::_db_con* pItem, bool bEquip)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*, bool);
        (org_ptr(0x140061a60L))(this, pItem, bEquip);
    };
    void CPlayer::apply_case_equip_upgrade_effect(_STORAGE_LIST::_db_con* pItem, bool bEquip)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*, bool);
        (org_ptr(0x1400623c0L))(this, pItem, bEquip);
    };
    void CPlayer::apply_have_item_std_effect(int nEffCode, float fVal, bool bAdd, int nDiffCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, float, bool, int);
        (org_ptr(0x140051850L))(this, nEffCode, fVal, bAdd, nDiffCnt);
    };
    void CPlayer::apply_normal_item_std_effect(int nEffCode, float fVal, bool bEquip)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, float, bool);
        (org_ptr(0x140061b10L))(this, nEffCode, fVal, bEquip);
    };
    bool CPlayer::dev_SetGuildGrade(char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x1400bfa90L))(this, byGrade);
    };
    bool CPlayer::dev_SetGuildGradeByGuildSerial(unsigned int dwGuildSerial, char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int, char);
        return (org_ptr(0x1400bfbc0L))(this, dwGuildSerial, byGrade);
    };
    bool CPlayer::dev_SetGuildGradeByName(char* uszGuildName, char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, char);
        return (org_ptr(0x1400bfb20L))(this, uszGuildName, byGrade);
    };
    bool CPlayer::dev_after_effect()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400c0370L))(this);
    };
    bool CPlayer::dev_all_kill()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400baf30L))(this);
    };
    bool CPlayer::dev_animus_recall_time_free(bool bFree)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400bc7e0L))(this, bFree);
    };
    bool CPlayer::dev_avator_copy(char* pwszDstName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bda50L))(this, pwszDstName);
    };
    bool CPlayer::dev_change_class(char* pszClassCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bb930L))(this, pszClassCode);
    };
    bool CPlayer::dev_cont_effect_del()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bdc90L))(this);
    };
    bool CPlayer::dev_cont_effect_time(unsigned int dwSec)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int);
        return (org_ptr(0x1400bdc30L))(this, dwSec);
    };
    bool CPlayer::dev_dalant(unsigned int dwDalant)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int);
        return (org_ptr(0x1400bcad0L))(this, dwDalant);
    };
    bool CPlayer::dev_die()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bb330L))(this);
    };
    bool CPlayer::dev_drop_item(char* pszItemCode, int nNum, char* pszUpTalCode, int nUpNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, int, char*, int);
        return (org_ptr(0x1400c0630L))(this, pszItemCode, nNum, pszUpTalCode, nUpNum);
    };
    bool CPlayer::dev_free_sf_by_class()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bb910L))(this);
    };
    bool CPlayer::dev_full_animus_gauge()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400c00c0L))(this);
    };
    bool CPlayer::dev_full_force()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bcd30L))(this);
    };
    bool CPlayer::dev_full_point()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bb710L))(this);
    };
    bool CPlayer::dev_gold(unsigned int dwGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int);
        return (org_ptr(0x1400bcc00L))(this, dwGold);
    };
    bool CPlayer::dev_goto_monster(struct CMonster* pMon)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CMonster*);
        return (org_ptr(0x1400c0490L))(this, pMon);
    };
    bool CPlayer::dev_goto_npc(struct CMerchant* pNpc)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct CMerchant*);
        return (org_ptr(0x1400c0560L))(this, pNpc);
    };
    bool CPlayer::dev_half_inven_amount(uint64_t dwAmount)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, uint64_t);
        return (org_ptr(0x1400bb7b0L))(this, dwAmount);
    };
    bool CPlayer::dev_half_point()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bb640L))(this);
    };
    bool CPlayer::dev_init_monster()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bca80L))(this);
    };
    bool CPlayer::dev_inven_empty()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bd840L))(this);
    };
    bool CPlayer::dev_item_make_no_use_matrial(bool noUsingMatrial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400bb470L))(this, noUsingMatrial);
    };
    bool CPlayer::dev_loot_bag()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bd540L))(this);
    };
    bool CPlayer::dev_loot_free(bool bFree)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400bd800L))(this, bFree);
    };
    bool CPlayer::dev_loot_fullitem(char byLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x1400be510L))(this, byLv);
    };
    bool CPlayer::dev_loot_item(char* pszItemCode, int nNum, char* pszUpTalCode, int nUpNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, int, char*, int);
        return (org_ptr(0x1400bd2f0L))(this, pszItemCode, nNum, pszUpTalCode, nUpNum);
    };
    bool CPlayer::dev_loot_material()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bd000L))(this);
    };
    bool CPlayer::dev_loot_mine()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bd630L))(this);
    };
    bool CPlayer::dev_loot_tower()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bd350L))(this);
    };
    bool CPlayer::dev_lv(int nLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400bb180L))(this, nLv);
    };
    bool CPlayer::dev_make_succ(bool bSucc)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400bdbf0L))(this, bSucc);
    };
    bool CPlayer::dev_max_level_ext(char byMaxLevel)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x1400be670L))(this, byMaxLevel);
    };
    bool CPlayer::dev_never_die(bool bSet)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400bb430L))(this, bSet);
    };
    bool CPlayer::dev_quest_complete()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bb4f0L))(this);
    };
    bool CPlayer::dev_quest_complete_other(char* pwszCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400ba4f0L))(this, pwszCharName);
    };
    bool CPlayer::dev_set_animus_exp(uint64_t dwExpPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, uint64_t);
        return (org_ptr(0x1400bc8b0L))(this, dwExpPoint);
    };
    bool CPlayer::dev_set_animus_lv(int nAnimusLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400bfc60L))(this, nAnimusLv);
    };
    bool CPlayer::dev_set_hp(float prob)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, float);
        return (org_ptr(0x1400c0960L))(this, prob);
    };
    bool CPlayer::dev_trap_attack_grade(int nPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400c08b0L))(this, nPoint);
    };
    bool CPlayer::dev_up_all(int nCum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400bc1c0L))(this, nCum);
    };
    bool CPlayer::dev_up_all_pt(int nLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b9c50L))(this, nLv);
    };
    bool CPlayer::dev_up_cashbag(long double dPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, long double);
        return (org_ptr(0x1400bc760L))(this, dPoint);
    };
    bool CPlayer::dev_up_forceitem(int nCum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400bb9a0L))(this, nCum);
    };
    bool CPlayer::dev_up_forcemastery(int nCum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400bbb40L))(this, nCum);
    };
    bool CPlayer::dev_up_mastery(int nMasteryCode, int nMasteryIndex, int nLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, int, int);
        return (org_ptr(0x1400bbbb0L))(this, nMasteryCode, nMasteryIndex, nLv);
    };
    bool CPlayer::dev_up_pvp(long double dPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, long double);
        return (org_ptr(0x1400bc6f0L))(this, dPoint);
    };
    bool CPlayer::dev_up_skill(char* pszSkillCode, int nCum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, int);
        return (org_ptr(0x1400bbac0L))(this, pszSkillCode, nCum);
    };
    bool CPlayer::dev_view_boss()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bad40L))(this);
    };
    bool CPlayer::dev_view_method(char* pwszDstName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bdea0L))(this, pwszDstName);
    };
    void CPlayer::make_force_attack_param(struct CCharacter* pDst, struct _force_fld* pForceFld, _STORAGE_LIST::_db_con* pForceItem, float* pTar, struct _attack_param* pAP, _STORAGE_LIST::_db_con* pEffBulletItem, float fAddEffBtFc)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, struct _force_fld*, _STORAGE_LIST::_db_con*, float*, struct _attack_param*, _STORAGE_LIST::_db_con*, float);
        (org_ptr(0x140088ec0L))(this, pDst, pForceFld, pForceItem, pTar, pAP, pEffBulletItem, fAddEffBtFc);
    };
    void CPlayer::make_gen_attack_param(struct CCharacter* pDst, char byPart, struct _BulletItem_fld* pBulletFld, float fAddBulletFc, struct _attack_param* pAP, struct _BulletItem_fld* pEffBtFld, float fAddEffBtFc)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, char, struct _BulletItem_fld*, float, struct _attack_param*, struct _BulletItem_fld*, float);
        (org_ptr(0x140087f40L))(this, pDst, byPart, pBulletFld, fAddBulletFc, pAP, pEffBtFld, fAddEffBtFc);
    };
    void CPlayer::make_siege_attack_param(struct CCharacter* pDst, float* pfAttackPos, char byPart, struct _BulletItem_fld* pBulletFld, float fAddBulletFc, struct _attack_param* pAP, struct _BulletItem_fld* pEffBulletFld, float fAddEffBtFc)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, char, struct _BulletItem_fld*, float, struct _attack_param*, struct _BulletItem_fld*, float);
        (org_ptr(0x1400893f0L))(this, pDst, pfAttackPos, byPart, pBulletFld, fAddBulletFc, pAP, pEffBulletFld, fAddEffBtFc);
    };
    void CPlayer::make_skill_attack_param(struct CCharacter* pDst, float* pfAttackPos, char byEffectCode, struct _skill_fld* pSkillFld, int nAttType, _STORAGE_LIST::_db_con* pBulletItem, float fAddBulletFc, struct _attack_param* pAP, _STORAGE_LIST::_db_con* pEffBulletItem, float fAddEffBulletFc)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, char, struct _skill_fld*, int, _STORAGE_LIST::_db_con*, float, struct _attack_param*, _STORAGE_LIST::_db_con*, float);
        (org_ptr(0x140088340L))(this, pDst, pfAttackPos, byEffectCode, pSkillFld, nAttType, pBulletItem, fAddBulletFc, pAP, pEffBulletItem, fAddEffBulletFc);
    };
    void CPlayer::make_unit_attack_param(struct CCharacter* pDst, struct _UnitPart_fld* pWeaponFld, float fAddBulletFc, struct _attack_param* pAP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, struct _UnitPart_fld*, float, struct _attack_param*);
        (org_ptr(0x140089230L))(this, pDst, pWeaponFld, fAddBulletFc, pAP);
    };
    void CPlayer::make_wpactive_force_attack_param(struct CCharacter* pDst, struct _force_fld* pForceFld, float* pfAttackPos, struct _attack_param* pAP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, struct _force_fld*, float*, struct _attack_param*);
        (org_ptr(0x14008ae80L))(this, pDst, pForceFld, pfAttackPos, pAP);
    };
    void CPlayer::make_wpactive_skill_attack_param(struct CCharacter* pDst, struct _skill_fld* pSkillFld, float* pfAttackPos, char byEffectCode, int nAttType, _STORAGE_LIST::_db_con* pBulletItem, float fAddBulletFc, struct _attack_param* pAP, int* nShotNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, struct _skill_fld*, float*, char, int, _STORAGE_LIST::_db_con*, float, struct _attack_param*, int*);
        (org_ptr(0x14008b0a0L))(this, pDst, pSkillFld, pfAttackPos, byEffectCode, nAttType, pBulletItem, fAddBulletFc, pAP, nShotNum);
    };
    bool CPlayer::mgr_MaxAttackPoint(int nMax)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b8e60L))(this, nMax);
    };
    bool CPlayer::mgr_TrunkInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400b8ea0L))(this);
    };
    bool CPlayer::mgr_all_item_muzi(int nLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b9070L))(this, nLv);
    };
    bool CPlayer::mgr_change_degree(int nDegree)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b8670L))(this, nDegree);
    };
    bool CPlayer::mgr_defense_item_grace(char byItemCode, int nLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char, int);
        return (org_ptr(0x1400b9200L))(this, byItemCode, nLv);
    };
    bool CPlayer::mgr_destroy_system_tower()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bec30L))(this);
    };
    bool CPlayer::mgr_dungeon_pass()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bddc0L))(this);
    };
    bool CPlayer::mgr_exit_keeper()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400b8db0L))(this);
    };
    bool CPlayer::mgr_exit_stone()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400b8da0L))(this);
    };
    bool CPlayer::mgr_free_ride_ship()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bac60L))(this);
    };
    bool CPlayer::mgr_gotoCoordinates(char* pszMapCode, float fX, float fY, float fZ)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, float, float, float);
        return (org_ptr(0x1400b87b0L))(this, pszMapCode, fX, fY, fZ);
    };
    bool CPlayer::mgr_gotoDstCoordinates(char* pwszDstName, char* pszMapCode, float fX, float fY, float fZ)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, char*, float, float, float);
        return (org_ptr(0x1400b88e0L))(this, pwszDstName, pszMapCode, fX, fY, fZ);
    };
    bool CPlayer::mgr_goto_mine()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400b8dc0L))(this);
    };
    bool CPlayer::mgr_goto_shipport(int nRaceCode, int nPort)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, int);
        return (org_ptr(0x1400baa20L))(this, nRaceCode, nPort);
    };
    bool CPlayer::mgr_goto_stone(char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char);
        return (org_ptr(0x1400b8ce0L))(this, byRaceCode);
    };
    bool CPlayer::mgr_goto_store(int nRaceCode, char* pszNPCName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int, char*);
        return (org_ptr(0x1400ba860L))(this, nRaceCode, pszNPCName);
    };
    bool CPlayer::mgr_holykeeper_start(int nRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b8cc0L))(this, nRace);
    };
    bool CPlayer::mgr_holystone_start(int nNumOfTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b8ca0L))(this, nNumOfTime);
    };
    bool CPlayer::mgr_item_telekinesis()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400b9480L))(this);
    };
    bool CPlayer::mgr_kick(char* pwszCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400b8b30L))(this, pwszCharName);
    };
    bool CPlayer::mgr_make_system_tower(char* pszTowerCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400be750L))(this, pszTowerCode);
    };
    bool CPlayer::mgr_matchless(bool bMatchless)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400b8770L))(this, bMatchless);
    };
    bool CPlayer::mgr_pass_sch_one_step()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400bac20L))(this);
    };
    bool CPlayer::mgr_recall_guild_player(char* wszDestCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bf8c0L))(this, wszDestCharName);
    };
    bool CPlayer::mgr_recall_mon(char* pszMonCode, int nCreateNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, int);
        return (org_ptr(0x1400ba760L))(this, pszMonCode, nCreateNum);
    };
    bool CPlayer::mgr_recall_party_player(char* wszDestCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bf5c0L))(this, wszDestCharName);
    };
    bool CPlayer::mgr_recall_player(char* pwszCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400ba690L))(this, pwszCharName);
    };
    bool CPlayer::mgr_resurrect_player(char* pwszCharName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bef20L))(this, pwszCharName);
    };
    bool CPlayer::mgr_set_animus_attack_point(int nPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, int);
        return (org_ptr(0x1400b9410L))(this, nPoint);
    };
    bool CPlayer::mgr_tracing(bool bOn)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400b86e0L))(this, bOn);
    };
    bool CPlayer::mgr_user_ban(char* uszCharName, int iPeriod, char* uszReason, char byBlockType)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*, int, char*, char);
        return (org_ptr(0x1400bf3d0L))(this, uszCharName, iPeriod, uszReason, byBlockType);
    };
    bool CPlayer::mgr_whisper(char* pwszMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400bae10L))(this, pwszMsg);
    };
    void CPlayer::pc_AddBag(uint16_t wBagItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400b4340L))(this, wBagItemSerial);
    };
    void CPlayer::pc_AlterItemSlotRequest(char byNum, struct _alter_item_slot_request_clzo::__list* pList)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _alter_item_slot_request_clzo::__list*);
        (org_ptr(0x1400fd570L))(this, byNum, pList);
    };
    void CPlayer::pc_AlterLinkBoardSlotRequest(char byNum, struct _alter_link_slot_request_clzo::__list* pList, char byLBLock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _alter_link_slot_request_clzo::__list*, char);
        (org_ptr(0x1400fd690L))(this, byNum, pList, byLBLock);
    };
    void CPlayer::pc_AlterWindowInfoRequest(unsigned int* pdwSkill, unsigned int* pdwForce, unsigned int* pdwChar, unsigned int* pdwAnimus, unsigned int dwInven, unsigned int* pdwInvenBag)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int, unsigned int*);
        (org_ptr(0x1400fd900L))(this, pdwSkill, pdwForce, pdwChar, pdwAnimus, dwInven, pdwInvenBag);
    };
    void CPlayer::pc_AnimusCommandRequest(char byCommandCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d0ae0L))(this, byCommandCode);
    };
    void CPlayer::pc_AnimusInvenChange(struct _STORAGE_POS_INDIV* pItem, uint16_t wReplaceSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, uint16_t);
        (org_ptr(0x1400fc8e0L))(this, pItem, wReplaceSerial);
    };
    void CPlayer::pc_AnimusRecallRequest(uint16_t wAnimusItemSerial, uint16_t wAnimusClientHP, uint16_t wAnimusClientFP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, uint16_t);
        (org_ptr(0x1400d02e0L))(this, wAnimusItemSerial, wAnimusClientHP, wAnimusClientFP);
    };
    void CPlayer::pc_AnimusReturnRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d0a50L))(this);
    };
    void CPlayer::pc_AnimusTargetRequest(char byObjectID, uint16_t wObjectIndex, unsigned int dwObjectSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t, unsigned int);
        (org_ptr(0x1400d0b60L))(this, byObjectID, wObjectIndex, dwObjectSerial);
    };
    void CPlayer::pc_AwayPartyJoinInvitationAnswer(struct _CLID* pidBoss, char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _CLID*, char);
        (org_ptr(0x1400c4130L))(this, pidBoss, byRetCode);
    };
    void CPlayer::pc_AwaypartyInvitationRequest(char* pwszCharName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400c3d70L))(this, pwszCharName);
    };
    void CPlayer::pc_BackTowerRequest(unsigned int dwTowerObjSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x14009d050L))(this, dwTowerObjSerial);
    };
    void CPlayer::pc_BackTrapRequest(unsigned int dwTrapObjSerial, uint16_t wAddSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, uint16_t);
        (org_ptr(0x14009d8b0L))(this, dwTrapObjSerial, wAddSerial);
    };
    void CPlayer::pc_BillingInfoRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14008f4d0L))(this);
    };
    void CPlayer::pc_BriefPass(char byQuestSlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400cc500L))(this, byQuestSlotIndex);
    };
    void CPlayer::pc_BuddyAddAnswer(bool bAccept, uint16_t wAskerIndex, unsigned int dwAskerSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, uint16_t, unsigned int);
        (org_ptr(0x14008f750L))(this, bAccept, wAskerIndex, dwAskerSerial);
    };
    void CPlayer::pc_BuddyAddRequest(uint16_t wDstIndex, unsigned int dwDstSerial, char* pwszDstName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int, char*);
        (org_ptr(0x14008f4e0L))(this, wDstIndex, dwDstSerial, pwszDstName);
    };
    void CPlayer::pc_BuddyDelRequest(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x14008fbc0L))(this, dwSerial);
    };
    void CPlayer::pc_BuddyDownloadRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14008fc80L))(this);
    };
    void CPlayer::pc_BuyItemStore(struct CItemStore* pStore, char byOfferNum, struct _buy_store_request_clzo::_list* pList, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*, char, struct _buy_store_request_clzo::_list*, int);
        (org_ptr(0x1400f1140L))(this, pStore, byOfferNum, pList, bUseNPCLinkIntem);
    };
    char CPlayer::pc_CanSelectClassRequest(char* pIsRealClassUp)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x140097770L))(this, pIsRealClassUp);
    };
    void CPlayer::pc_CastVoteRequest(int nVoteSerial, char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, char);
        (org_ptr(0x140108590L))(this, nVoteSerial, byCode);
    };
    void CPlayer::pc_ChangeModeType(int nModeType, int nStandType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, int);
        (org_ptr(0x1400fd840L))(this, nModeType, nStandType);
    };
    bool CPlayer::pc_CharacterRenameCash(bool bChange, struct _STORAGE_POS_INDIV* pItem, char* strCharacterName)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool, struct _STORAGE_POS_INDIV*, char*);
        return (org_ptr(0x1400b5770L))(this, bChange, pItem, strCharacterName);
    };
    char CPlayer::pc_CharacterRenameCheck(char* strCharacterName)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, char*);
        return (org_ptr(0x1400b5c40L))(this, strCharacterName);
    };
    void CPlayer::pc_ChatAllRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140092860L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatCircleRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140090c20L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatFarRequest(char* pwszName, char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char*);
        (org_ptr(0x140091500L))(this, pwszName, pwszChatData);
    };
    void CPlayer::pc_ChatGmNoticeRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140092410L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatGuildEstSenRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400936c0L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatGuildRequest(unsigned int dwDstSerial, char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char*);
        (org_ptr(0x140091b30L))(this, dwDstSerial, pwszChatData);
    };
    void CPlayer::pc_ChatMapRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140092480L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatMgrWhisperRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140091ad0L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatMultiFarRequest(char byDstNum, struct _w_name* pDstName, char* pwszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _w_name*, char*);
        (org_ptr(0x1400939e0L))(this, byDstNum, pDstName, pwszMsg);
    };
    void CPlayer::pc_ChatOperatorRequest(char byRaceCode, char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x140090b00L))(this, byRaceCode, pwszChatData);
    };
    void CPlayer::pc_ChatPartyRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140091880L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatRaceBossCryRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140092150L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatRaceBossRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140092cd0L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatRaceRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140091e70L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatRePresentationRequest(char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x140093380L))(this, pwszChatData);
    };
    void CPlayer::pc_ChatTradeRequestMsg(char bySubType, char* pwszTradeMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x140093000L))(this, bySubType, pwszTradeMsg);
    };
    void CPlayer::pc_ClassSkillRequest(uint16_t wSkillIndex, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, struct _CHRID*, uint16_t*);
        (org_ptr(0x14009a590L))(this, wSkillIndex, pidDst, pConsumeSerial);
    };
    void CPlayer::pc_CombineItem(uint16_t wManualIndex, char byMaterialNum, struct _STORAGE_POS_INDIV* pipMaterials, uint16_t wOverlapSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char, struct _STORAGE_POS_INDIV*, uint16_t);
        (org_ptr(0x1400af6c0L))(this, wManualIndex, byMaterialNum, pipMaterials, wOverlapSerial);
    };
    void CPlayer::pc_CombineItemEx(struct _combine_ex_item_request_clzo* pRecv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _combine_ex_item_request_clzo*);
        (org_ptr(0x1400b0560L))(this, pRecv);
    };
    void CPlayer::pc_CombineItemExAccept(struct _combine_ex_item_accept_request_clzo* pRecv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _combine_ex_item_accept_request_clzo*);
        (org_ptr(0x1400b0600L))(this, pRecv);
    };
    void CPlayer::pc_CuttingComplete(char byNpcRace)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400d32b0L))(this, byNpcRace);
    };
    void CPlayer::pc_DTradeAddRequest(char bySlotIndex, char byStorageCode, unsigned int dwSerial, char byAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, unsigned int, char);
        (org_ptr(0x1400f4080L))(this, bySlotIndex, byStorageCode, dwSerial, byAmount);
    };
    void CPlayer::pc_DTradeAnswerRequest(struct _CLID* pidAsker)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _CLID*);
        (org_ptr(0x1400f3a20L))(this, pidAsker);
    };
    void CPlayer::pc_DTradeAskRequest(uint16_t wDstIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400f3790L))(this, wDstIndex);
    };
    void CPlayer::pc_DTradeBetRequest(char byMoneyUnit, unsigned int dwBetAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int);
        (org_ptr(0x1400f4670L))(this, byMoneyUnit, dwBetAmount);
    };
    void CPlayer::pc_DTradeCancleRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400f3e60L))(this);
    };
    void CPlayer::pc_DTradeDelRequest(char bySlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400f4420L))(this, bySlotIndex);
    };
    void CPlayer::pc_DTradeLockRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400f3f60L))(this);
    };
    void CPlayer::pc_DTradeOKRequest(unsigned int* pdwKey)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int*);
        (org_ptr(0x1400f4810L))(this, pdwKey);
    };
    void CPlayer::pc_DarkHoleAnswerReenterRequest(bool bEnter, uint16_t wChannelIndex, unsigned int dwChannelSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, uint16_t, unsigned int);
        (org_ptr(0x140098da0L))(this, bEnter, wChannelIndex, dwChannelSerial);
    };
    void CPlayer::pc_DarkHoleClearOutRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140098ca0L))(this);
    };
    void CPlayer::pc_DarkHoleEnterRequest(uint16_t wHoleIndex, unsigned int dwHoleSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, unsigned int);
        (org_ptr(0x140098780L))(this, wHoleIndex, dwHoleSerial);
    };
    void CPlayer::pc_DarkHoleGiveupOutRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140098ba0L))(this);
    };
    void CPlayer::pc_DarkHoleOpenRequest(unsigned int dwItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400982c0L))(this, dwItemSerial);
    };
    void CPlayer::pc_DowngradeItem(struct _STORAGE_POS_INDIV* pposTalik, struct _STORAGE_POS_INDIV* pposToolItem, struct _STORAGE_POS_INDIV* pposUpgItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400b2b70L))(this, pposTalik, pposToolItem, pposUpgItem);
    };
    void CPlayer::pc_EmbellishPart(struct _STORAGE_POS_INDIV* pItem, uint16_t wChangeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, uint16_t);
        (org_ptr(0x1400ade20L))(this, pItem, wChangeSerial);
    };
    void CPlayer::pc_EquipPart(struct _STORAGE_POS_INDIV* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400ad960L))(this, pItem);
    };
    void CPlayer::pc_ExchangeDalantForGold(unsigned int dwDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400f2ed0L))(this, dwDalant);
    };
    void CPlayer::pc_ExchangeGoldForDalant(unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400f3190L))(this, dwGold);
    };
    void CPlayer::pc_ExchangeGoldForPvP(unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400f3420L))(this, dwGold);
    };
    void CPlayer::pc_ExchangeItem(uint16_t wManualIndex, uint16_t wItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t);
        (org_ptr(0x1400b0690L))(this, wManualIndex, wItemSerial);
    };
    void CPlayer::pc_ExitWorldRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x14004e630L))(this);
    };
    void CPlayer::pc_ForceInvenChange(struct _STORAGE_POS_INDIV* pItem, uint16_t wReplaceSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, uint16_t);
        (org_ptr(0x1400fc2f0L))(this, pItem, wReplaceSerial);
    };
    void CPlayer::pc_ForceRequest(uint16_t wForceSerial, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, struct _CHRID*, uint16_t*);
        (org_ptr(0x1400995b0L))(this, wForceSerial, pidDst, pConsumeSerial);
    };
    void CPlayer::pc_GestureRequest(char byGestureType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400fd8b0L))(this, byGestureType);
    };
    bool CPlayer::pc_GiveItem(_STORAGE_LIST::_db_con* kItem, char* szReason, bool bDrop)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, _STORAGE_LIST::_db_con*, char*, bool);
        return (org_ptr(0x14004e750L))(this, kItem, szReason, bDrop);
    };
    void CPlayer::pc_GotoAvatorRequest(char* pwszAvatorName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400c7440L))(this, pwszAvatorName);
    };
    void CPlayer::pc_GotoBasePortalRequest(uint16_t wItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400c6cf0L))(this, wItemSerial);
    };
    void CPlayer::pc_GuildBattleBlock(bool bBlock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400fef90L))(this, bBlock);
    };
    void CPlayer::pc_GuildCancelSuggestRequest(unsigned int dwMatterVoteSynKey)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400a8350L))(this, dwMatterVoteSynKey);
    };
    void CPlayer::pc_GuildDownLoadRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a7890L))(this);
    };
    void CPlayer::pc_GuildEstablishRequest(char* pwszGuildName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400a6d10L))(this, pwszGuildName);
    };
    void CPlayer::pc_GuildHonorListRequest(char byUI)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400ab9e0L))(this, byUI);
    };
    void CPlayer::pc_GuildJoinAcceptRequest(unsigned int dwApplierSerial, bool bAccept)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, bool);
        (org_ptr(0x1400a7bf0L))(this, dwApplierSerial, bAccept);
    };
    void CPlayer::pc_GuildJoinApplyCancelRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a7af0L))(this);
    };
    void CPlayer::pc_GuildJoinApplyRequest(char* pwszGuildName)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400a7910L))(this, pwszGuildName);
    };
    void CPlayer::pc_GuildListRequest(char byPage)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400ab850L))(this, byPage);
    };
    void CPlayer::pc_GuildManageRequest(char byType, unsigned int dwDst, unsigned int dwObj1, unsigned int dwObj2, unsigned int dwObj3)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1400abb10L))(this, byType, dwDst, dwObj1, dwObj2, dwObj3);
    };
    void CPlayer::pc_GuildNextHonorListRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400aba50L))(this);
    };
    void CPlayer::pc_GuildOfferSuggestRequest(char byMatterType, unsigned int dwMatterDst, char* pwszComment, unsigned int dwMatterObj1, unsigned int dwMatterObj2, unsigned int dwMatterObj3)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, char*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1400a8190L))(this, byMatterType, dwMatterDst, pwszComment, dwMatterObj1, dwMatterObj2, dwMatterObj3);
    };
    void CPlayer::pc_GuildPushMoneyRequest(unsigned int dwPushDalant, unsigned int dwPushGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, unsigned int);
        (org_ptr(0x1400a8620L))(this, dwPushDalant, dwPushGold);
    };
    void CPlayer::pc_GuildQueryInfoRequest(unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400a8550L))(this, dwGuildSerial);
    };
    void CPlayer::pc_GuildRoomEnterRequest(struct _guildroom_enter_request_clzo* pProtocol)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _guildroom_enter_request_clzo*);
        (org_ptr(0x1400aaff0L))(this, pProtocol);
    };
    void CPlayer::pc_GuildRoomOutRequest(struct _guildroom_out_request_clzo* pProtocol)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _guildroom_out_request_clzo*);
        (org_ptr(0x1400ab560L))(this, pProtocol);
    };
    void CPlayer::pc_GuildRoomRentRequest(struct _guildroom_rent_request_clzo* pProtocol)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _guildroom_rent_request_clzo*);
        (org_ptr(0x1400aaa60L))(this, pProtocol);
    };
    void CPlayer::pc_GuildRoomRestTimeRequest(struct _guildroom_resttime_request_clzo* pProtocol)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _guildroom_resttime_request_clzo*);
        (org_ptr(0x1400ab780L))(this, pProtocol);
    };
    void CPlayer::pc_GuildSelfLeaveRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400a7f50L))(this);
    };
    void CPlayer::pc_GuildSetHonorRequest(struct _guild_honor_set_request_clzo* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _guild_honor_set_request_clzo*);
        (org_ptr(0x1400ab910L))(this, pData);
    };
    void CPlayer::pc_GuildVoteRequest(unsigned int dwMatterVoteSynKey, char byVoteCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char);
        (org_ptr(0x1400a8410L))(this, dwMatterVoteSynKey, byVoteCode);
    };
    char CPlayer::pc_InitClass()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400972f0L))(this);
    };
    char CPlayer::pc_InitClassRequest()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400976c0L))(this);
    };
    void CPlayer::pc_LimitItemNumRequest(unsigned int dwStoreIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400f3580L))(this, dwStoreIndex);
    };
    void CPlayer::pc_LinkBoardRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400fefc0L))(this);
    };
    void CPlayer::pc_MacroUpdate(char* pBuf)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400ff920L))(this, pBuf);
    };
    void CPlayer::pc_MakeItem(struct _STORAGE_POS_INDIV* pipMakeTool, uint16_t wManualIndex, char byMaterialNum, struct _STORAGE_POS_INDIV* pipMaterials)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, uint16_t, char, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400ae750L))(this, pipMakeTool, wManualIndex, byMaterialNum, pipMaterials);
    };
    void CPlayer::pc_MakeTowerRequest(uint16_t wSkillIndex, uint16_t wTowerItemSerial, char byMaterialNum, struct _make_tower_request_clzo::__material* pMaterial, float* pfPos, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, char, struct _make_tower_request_clzo::__material*, float*, uint16_t*);
        (org_ptr(0x14009c6e0L))(this, wSkillIndex, wTowerItemSerial, byMaterialNum, pMaterial, pfPos, pConsumeSerial);
    };
    void CPlayer::pc_MakeTrapRequest(uint16_t wSkillIndex, uint16_t wTrapItemSerial, float* pfPos, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, float*, uint16_t*);
        (org_ptr(0x14009d1c0L))(this, wSkillIndex, wTrapItemSerial, pfPos, pConsumeSerial);
    };
    void CPlayer::pc_MineCancle()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d1ed0L))(this);
    };
    void CPlayer::pc_MineComplete()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400d1f40L))(this);
    };
    void CPlayer::pc_MineStart(char byMineIndex, char byOreIndex, uint16_t wBatterySerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t);
        (org_ptr(0x1400d18e0L))(this, byMineIndex, byOreIndex, wBatterySerial);
    };
    void CPlayer::pc_MoveModeChangeRequest(char byMoveType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400c7810L))(this, byMoveType);
    };
    void CPlayer::pc_MoveNext(char byMoveType, float* pfCur, float* pfTar, char byDirect)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, float*, float*, char);
        (org_ptr(0x1400c6230L))(this, byMoveType, pfCur, pfTar, byDirect);
    };
    void CPlayer::pc_MovePortal(int nPortalIndex, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int, uint16_t*);
        (org_ptr(0x1400c54a0L))(this, nPortalIndex, pConsumeSerial);
    };
    void CPlayer::pc_MoveStop(float* pfCur)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, float*);
        (org_ptr(0x1400c6ab0L))(this, pfCur);
    };
    void CPlayer::pc_MoveToOwnStoneMapRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ce6d0L))(this);
    };
    bool CPlayer::pc_NPCLinkCheckItemRequest(struct _STORAGE_POS_INDIV* pStorage)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*);
        return (org_ptr(0x1400b5710L))(this, pStorage);
    };
    char CPlayer::pc_NPCLinkCheckItemRequest_Check(struct _STORAGE_POS_INDIV* pStorage)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*);
        return (org_ptr(0x1400b54e0L))(this, pStorage);
    };
    char CPlayer::pc_NPCLinkCheckItemRequest_Use(struct _STORAGE_POS_INDIV* pStorage)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*);
        return (org_ptr(0x1400b5340L))(this, pStorage);
    };
    void CPlayer::pc_NewPosStart()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c4bc0L))(this);
    };
    void CPlayer::pc_NotifyRaceBossCryMsg()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400ffa30L))(this);
    };
    void CPlayer::pc_NuclearAfterEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c5160L))(this);
    };
    void CPlayer::pc_OffPart(struct _STORAGE_POS_INDIV* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400ae4d0L))(this, pItem);
    };
    void CPlayer::pc_OreCutting(uint16_t wOreSerial, char byProcessNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char);
        (org_ptr(0x1400d26b0L))(this, wOreSerial, byProcessNum);
    };
    void CPlayer::pc_OreIntoBag(uint16_t wResIndex, uint16_t wSerial, char byAddAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, char);
        (org_ptr(0x1400d2eb0L))(this, wResIndex, wSerial, byAddAmount);
    };
    void CPlayer::pc_PartyAlterLootShareReqeuest(char byLootShareMode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400c3cf0L))(this, byLootShareMode);
    };
    void CPlayer::pc_PartyDisJointReqeuest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c3b30L))(this);
    };
    void CPlayer::pc_PartyJoinApplication(uint16_t wBossIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400c3580L))(this, wBossIndex);
    };
    void CPlayer::pc_PartyJoinApplicationAnswer(struct _CLID* pidApplicant)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _CLID*);
        (org_ptr(0x1400c3800L))(this, pidApplicant);
    };
    void CPlayer::pc_PartyJoinInvitation(uint16_t wDstIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400c2fd0L))(this, wDstIndex);
    };
    void CPlayer::pc_PartyJoinInvitationAnswer(struct _CLID* pidBoss)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _CLID*);
        (org_ptr(0x1400c32c0L))(this, pidBoss);
    };
    void CPlayer::pc_PartyLeaveCompulsionReqeuest(unsigned int dwExiterSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c3a80L))(this, dwExiterSerial);
    };
    void CPlayer::pc_PartyLeaveSelfReqeuest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c3a10L))(this);
    };
    void CPlayer::pc_PartyLockReqeuest(bool bLock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400c3c50L))(this, bLock);
    };
    void CPlayer::pc_PartyReqBlock(bool bBlock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400feed0L))(this, bBlock);
    };
    void CPlayer::pc_PartySuccessionReqeuest(unsigned int dwSuccessorSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c3ba0L))(this, dwSuccessorSerial);
    };
    void CPlayer::pc_PlayAttack_Force(struct CCharacter* pDst, float* pfAreaPos, uint16_t wForceSerial, uint16_t* pConsumeSerial, uint16_t wEffBtSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, uint16_t, uint16_t*, uint16_t);
        (org_ptr(0x140082210L))(this, pDst, pfAreaPos, wForceSerial, pConsumeSerial, wEffBtSerial);
    };
    void CPlayer::pc_PlayAttack_Gen(struct CCharacter* pDst, char byAttPart, uint16_t wBulletSerial, uint16_t wEffBtSerial, bool bCount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, char, uint16_t, uint16_t, bool);
        (org_ptr(0x1400804d0L))(this, pDst, byAttPart, wBulletSerial, wEffBtSerial, bCount);
    };
    void CPlayer::pc_PlayAttack_SelfDestruction()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140084e10L))(this);
    };
    void CPlayer::pc_PlayAttack_Siege(struct CCharacter* pDst, float* pfAttackPos, char byAttPart, uint16_t wBulletSerial, uint16_t wEffBtSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, char, uint16_t, uint16_t);
        (org_ptr(0x140083a20L))(this, pDst, pfAttackPos, byAttPart, wBulletSerial, wEffBtSerial);
    };
    void CPlayer::pc_PlayAttack_Skill(struct CCharacter* pDst, float* pfAttackPos, char byEffectCode, uint16_t wSkillIndex, uint16_t wBulletSerial, uint16_t* pConsumeSerial, uint16_t wEffBtSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, float*, char, uint16_t, uint16_t, uint16_t*, uint16_t);
        (org_ptr(0x140081190L))(this, pDst, pfAttackPos, byEffectCode, wSkillIndex, wBulletSerial, pConsumeSerial, wEffBtSerial);
    };
    void CPlayer::pc_PlayAttack_Test(char byEffectCode, char byEffectIndex, uint16_t wBulletItemSerial, char byWeaponPart, int16_t* pzTar)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, char, int16_t*);
        (org_ptr(0x1400835a0L))(this, byEffectCode, byEffectIndex, wBulletItemSerial, byWeaponPart, pzTar);
    };
    void CPlayer::pc_PlayAttack_Unit(struct CCharacter* pDst, char byWeaponPart)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CCharacter*, char);
        (org_ptr(0x1400830d0L))(this, pDst, byWeaponPart);
    };
    void CPlayer::pc_PostContentRequest(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c8db0L))(this, dwIndex);
    };
    void CPlayer::pc_PostDeleteRequest(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c9320L))(this, dwIndex);
    };
    void CPlayer::pc_PostItemGoldRequest(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c8f90L))(this, dwIndex);
    };
    void CPlayer::pc_PostListRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c8cf0L))(this);
    };
    void CPlayer::pc_PostReturnConfirmRequest(unsigned int dwPostSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int);
        (org_ptr(0x1400c9450L))(this, dwPostSerial);
    };
    void CPlayer::pc_PotionDivision(uint16_t wSerial, uint16_t wTarSerial, char byAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, char);
        (org_ptr(0x1400fd0d0L))(this, wSerial, wTarSerial, byAmount);
    };
    void CPlayer::pc_PotionSeparation(uint16_t wSerial, char byAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char);
        (org_ptr(0x1400fd060L))(this, wSerial, byAmount);
    };
    void CPlayer::pc_PotionUseTrunkExtend()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400fb310L))(this);
    };
    void CPlayer::pc_ProposeVoteRequest(char byLimGrade, char* pwszCont)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x140108450L))(this, byLimGrade, pwszCont);
    };
    void CPlayer::pc_PvpCashRecorver(unsigned int dwItemSerial, char byItemCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char);
        (org_ptr(0x1400f5fd0L))(this, dwItemSerial, byItemCnt);
    };
    void CPlayer::pc_QuestGiveupRequest(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400cc5b0L))(this, byQuestDBSlot);
    };
    bool CPlayer::pc_RadarCharInfo()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400b5280L))(this);
    };
    void CPlayer::pc_RealMovPos(float* pfCur)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, float*);
        (org_ptr(0x1400c6820L))(this, pfCur);
    };
    void CPlayer::pc_RefreshGroupTargetPosition(char byGroupType, struct CGameObject* pObject)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct CGameObject*);
        (org_ptr(0x1400fe7d0L))(this, byGroupType, pObject);
    };
    void CPlayer::pc_RegistBind(struct CItemStore* pStore)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*);
        (org_ptr(0x1400c7640L))(this, pStore);
    };
    void CPlayer::pc_ReleaseGroupTargetObjectRequest(char byGroupType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400fe3d0L))(this, byGroupType);
    };
    void CPlayer::pc_ReleaseSiegeModeRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400f0b20L))(this);
    };
    void CPlayer::pc_ReleaseTargetObjectRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400fdba0L))(this);
    };
    char CPlayer::pc_RenameItemNConditionCheck(struct _STORAGE_POS_INDIV* pItemInfo, _STORAGE_LIST::_db_con** ppItem)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, _STORAGE_LIST::_db_con**);
        return (org_ptr(0x1400b5d60L))(this, pItemInfo, ppItem);
    };
    void CPlayer::pc_RequestChangeTaxRate(char byTaxRate)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x140100a00L))(this, byTaxRate);
    };
    void CPlayer::pc_RequestDialogWithNPC(struct CItemStore* pStore)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*);
        (org_ptr(0x1400cc410L))(this, pStore);
    };
    void CPlayer::pc_RequestPatriarchPunishment(char byType, char* pwszName, char* pwszCont)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*, char*);
        (org_ptr(0x140100720L))(this, byType, pwszName, pwszCont);
    };
    void CPlayer::pc_RequestQuestFromNPC(struct CItemStore* pStore, unsigned int dwNPCQuestIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*, unsigned int);
        (org_ptr(0x1400cc330L))(this, pStore, dwNPCQuestIndex);
    };
    void CPlayer::pc_RequestQuestListFromNPC(struct CItemStore* pStore)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*);
        (org_ptr(0x1400cc720L))(this, pStore);
    };
    void CPlayer::pc_RequestTaxRate()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140100950L))(this);
    };
    void CPlayer::pc_RequestUILockCertify(struct CUserDB* pUserDB, char* uszUILockPW)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CUserDB*, char*);
        (org_ptr(0x140100e20L))(this, pUserDB, uszUILockPW);
    };
    void CPlayer::pc_RequestUILockFindPW(struct CUserDB* pUserDB, char* uszHintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CUserDB*, char*);
        (org_ptr(0x140101300L))(this, pUserDB, uszHintAnswer);
    };
    void CPlayer::pc_RequestUILockInit(struct CUserDB* pUserDB, char* szUILockPW, char* szUILockPW_Confirm, char byUILock_HintIndex, char* uszUILock_HintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CUserDB*, char*, char*, char, char*);
        (org_ptr(0x140100ba0L))(this, pUserDB, szUILockPW, szUILockPW_Confirm, byUILock_HintIndex, uszUILock_HintAnswer);
    };
    void CPlayer::pc_RequestUILockUpdate(char* uszUILockPWOld, char* uszUILockPW, char* uszUILockPW_Confirm, char byUILock_HintIndex, char* uszUILock_HintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char*, char*, char, char*);
        (org_ptr(0x140100fd0L))(this, uszUILockPWOld, uszUILockPW, uszUILockPW_Confirm, byUILock_HintIndex, uszUILock_HintAnswer);
    };
    void CPlayer::pc_RequestWatchingWithNPC(struct CItemStore* pStore)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*);
        (org_ptr(0x1400cc650L))(this, pStore);
    };
    void CPlayer::pc_ResDivision(uint16_t wStartSerial, uint16_t wTarSerial, char byMoveAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, char);
        (org_ptr(0x1400fd320L))(this, wStartSerial, wTarSerial, byMoveAmount);
    };
    void CPlayer::pc_ResSeparation(uint16_t wStartSerial, char byMoveAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char);
        (org_ptr(0x1400fd2d0L))(this, wStartSerial, byMoveAmount);
    };
    bool CPlayer::pc_Resurrect(bool bQuickPotion)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, bool);
        return (org_ptr(0x1400c7a80L))(this, bQuickPotion);
    };
    void CPlayer::pc_Revival(bool bUseableJade)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400c4e90L))(this, bUseableJade);
    };
    void CPlayer::pc_SelectClassRequest(uint16_t wSelClassIndex, char bySelectRewardItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, char);
        (org_ptr(0x1400951c0L))(this, wSelClassIndex, bySelectRewardItem);
    };
    void CPlayer::pc_SelectQuestAfterHappenEvent(char bySelectIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char);
        (org_ptr(0x1400ca9b0L))(this, bySelectIndex);
    };
    void CPlayer::pc_SelectQuestReward(char byQuestDBSlot, char bySelectItemSlotIndex, char bySelectLinkQuestIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char);
        (org_ptr(0x1400cbc80L))(this, byQuestDBSlot, bySelectItemSlotIndex, bySelectLinkQuestIndex);
    };
    void CPlayer::pc_SellItemStore(struct CItemStore* pStore, char byOfferNum, struct _sell_store_request_clzo::_list* pList, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemStore*, char, struct _sell_store_request_clzo::_list*, int);
        (org_ptr(0x1400f2530L))(this, pStore, byOfferNum, pList, bUseNPCLinkIntem);
    };
    void CPlayer::pc_SetGroupMapPointRequest(char byGroupType, float* pzTar)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, float*);
        (org_ptr(0x1400ffd00L))(this, byGroupType, pzTar);
    };
    void CPlayer::pc_SetGroupTargetObjectRequest(struct CGameObject* pTar, unsigned int dwSerial, char byGroupType)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CGameObject*, unsigned int, char);
        (org_ptr(0x1400fdbc0L))(this, pTar, dwSerial, byGroupType);
    };
    void CPlayer::pc_SetInGuildBattle(bool bInGuildBattle, char byColorInx)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool, char);
        (org_ptr(0x1400aa8f0L))(this, bInGuildBattle, byColorInx);
    };
    bool CPlayer::pc_SetItemCheckRequest(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum, bool bSet)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, unsigned int, char, char, bool);
        return (org_ptr(0x1400b47f0L))(this, dwSetItem, bySetItemNum, bySetEffectNum, bSet);
    };
    void CPlayer::pc_SetRaceBossCryMsg(char bySlot, char* pwszCryMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char*);
        (org_ptr(0x1400ff970L))(this, bySlot, pwszCryMsg);
    };
    void CPlayer::pc_SetTargetObjectRequest(struct CGameObject* pTar, unsigned int dwSerial, bool bForce)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CGameObject*, unsigned int, bool);
        (org_ptr(0x1400fda40L))(this, pTar, dwSerial, bForce);
    };
    void CPlayer::pc_SkillRequest(char bySkillIndex, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _CHRID*, uint16_t*);
        (org_ptr(0x14009a4b0L))(this, bySkillIndex, pidDst, pConsumeSerial);
    };
    void CPlayer::pc_Stop()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c7bf0L))(this);
    };
    void CPlayer::pc_TakeGroundingItem(struct CItemBox* pBox, uint16_t wAddSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CItemBox*, uint16_t);
        (org_ptr(0x1400b3240L))(this, pBox, wAddSerial);
    };
    void CPlayer::pc_TalikCrystalExchange(char byExchangeNum, struct _talik_crystal_exchange_clzo::_list* pList)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct _talik_crystal_exchange_clzo::_list*);
        (org_ptr(0x1400b5ee0L))(this, byExchangeNum, pList);
    };
    void CPlayer::pc_ThrowSkillRequest(uint16_t wBulletSerial, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, struct _CHRID*, uint16_t*);
        (org_ptr(0x14009a660L))(this, wBulletSerial, pidDst, pConsumeSerial);
    };
    void CPlayer::pc_ThrowStorageItem(struct _STORAGE_POS_INDIV* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400b3f10L))(this, pItem);
    };
    void CPlayer::pc_ThrowUnitRequest(struct _CHRID* pidDst, uint16_t* pConsumeSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _CHRID*, uint16_t*);
        (org_ptr(0x14009b030L))(this, pidDst, pConsumeSerial);
    };
    void CPlayer::pc_TradeBlock(bool bBlock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400fef50L))(this, bBlock);
    };
    void CPlayer::pc_TransShipRenewTicketRequest(uint16_t wTicketItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400c7880L))(this, wTicketItemSerial);
    };
    void CPlayer::pc_TransformSiegeModeRequest(uint16_t wItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t);
        (org_ptr(0x1400f0880L))(this, wItemSerial);
    };
    void CPlayer::pc_TrunkAlterItemSlotRequest(unsigned int dwItemSerial, char byClientSlotIndex, char byStorageIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, unsigned int, char, char);
        (org_ptr(0x1400fa560L))(this, dwItemSerial, byClientSlotIndex, byStorageIndex);
    };
    void CPlayer::pc_TrunkChangePasswdRequest(char* pwszPrevPassword, char* pwszChngPassword, char byHintIndex, char* pwszHintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char*, char, char*);
        (org_ptr(0x1400f8240L))(this, pwszPrevPassword, pwszChngPassword, byHintIndex, pwszHintAnswer);
    };
    char CPlayer::pc_TrunkCreateCostIsFreeRequest()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*);
        return (org_ptr(0x1400fb2a0L))(this);
    };
    void CPlayer::pc_TrunkDownloadRequest(char* pwszPassword)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400f7c30L))(this, pwszPassword);
    };
    void CPlayer::pc_TrunkEstRequest(char* pwszPassword, char byHintIndex, char* pwszHintAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*, char, char*);
        (org_ptr(0x1400f7d00L))(this, pwszPassword, byHintIndex, pwszHintAnswer);
    };
    void CPlayer::pc_TrunkExtendRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400f84d0L))(this);
    };
    void CPlayer::pc_TrunkHintAnswerRequest(char* pwszAnswer)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char*);
        (org_ptr(0x1400fb170L))(this, pwszAnswer);
    };
    void CPlayer::pc_TrunkIoMergeRequest(char byStartStorageIndex, char byTarStorageIndex, uint16_t wStartItemSerial, uint16_t wTarItemSerial, uint16_t wMoveAmount)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, uint16_t, uint16_t);
        (org_ptr(0x1400f9e70L))(this, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial, wMoveAmount);
    };
    void CPlayer::pc_TrunkIoMoneyRequest(char byCase, unsigned int dwDalant, unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, unsigned int, unsigned int);
        (org_ptr(0x1400fab80L))(this, byCase, dwDalant, dwGold);
    };
    void CPlayer::pc_TrunkIoMoveRequest(char byStartStorageIndex, char byTarStorageIndex, uint16_t wItemSerial, char byClientSlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, char);
        (org_ptr(0x1400f8830L))(this, byStartStorageIndex, byTarStorageIndex, wItemSerial, byClientSlotIndex);
    };
    void CPlayer::pc_TrunkIoSwapRequest(char byStartStorageIndex, char byTarStorageIndex, uint16_t wStartItemSerial, uint16_t wTarItemSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, uint16_t, uint16_t);
        (org_ptr(0x1400f9130L))(this, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial);
    };
    void CPlayer::pc_TrunkPotionDivision(uint16_t wStartSerial, uint16_t wTarSerial, uint16_t wMoveAmount, char byStorageIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, uint16_t, char);
        (org_ptr(0x1400fa920L))(this, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex);
    };
    void CPlayer::pc_TrunkPwHintIndexRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400fb0e0L))(this);
    };
    void CPlayer::pc_TrunkResDivision(uint16_t wStartSerial, uint16_t wTarSerial, uint16_t wMoveAmount, char byStorageIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t, uint16_t, char);
        (org_ptr(0x1400fa610L))(this, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex);
    };
    void CPlayer::pc_UnitBulletFillRequest(char bySlotIndex, uint16_t* pwBulletIndex, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, uint16_t*, int);
        (org_ptr(0x1401047e0L))(this, bySlotIndex, pwBulletIndex, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitBulletReplaceRequest(char bySlotIndex, char byPackIndex, char byBulletPart)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, char);
        (org_ptr(0x140105630L))(this, bySlotIndex, byPackIndex, byBulletPart);
    };
    void CPlayer::pc_UnitDeliveryRequest(char bySlotIndex, struct CItemStore* pStore, bool bPayFee, float* pfNewPos, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, struct CItemStore*, bool, float*, int);
        (org_ptr(0x140105750L))(this, bySlotIndex, pStore, bPayFee, pfNewPos, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitFrameBuyRequest(char byFrameCode, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, int);
        (org_ptr(0x140102920L))(this, byFrameCode, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitFrameRepairRequest(char bySlotIndex, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, int);
        (org_ptr(0x140104240L))(this, bySlotIndex, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitLeaveRequest(float* pfNewPos)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, float*);
        (org_ptr(0x140106310L))(this, pfNewPos);
    };
    void CPlayer::pc_UnitPackFillRequest(char bySlotIndex, char byFillNum, struct _unit_pack_fill_request_clzo::__list* pList, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, struct _unit_pack_fill_request_clzo::__list*, int);
        (org_ptr(0x140104f00L))(this, bySlotIndex, byFillNum, pList, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitPartTuningRequest(char bySlotIndex, char byTuningNum, struct _tuning_data* pTuningData, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, char, struct _tuning_data*, int);
        (org_ptr(0x140103740L))(this, bySlotIndex, byTuningNum, pTuningData, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitReturnRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140105e20L))(this);
    };
    void CPlayer::pc_UnitSellRequest(char bySlotIndex, int bUseNPCLinkIntem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, char, int);
        (org_ptr(0x140103140L))(this, bySlotIndex, bUseNPCLinkIntem);
    };
    void CPlayer::pc_UnitTakeRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140105fc0L))(this);
    };
    void CPlayer::pc_UpdateDataForPostSend()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x1400c9820L))(this);
    };
    void CPlayer::pc_UpdateDataForTrade(struct CPlayer* pTrader)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*);
        (org_ptr(0x1400f5ba0L))(this, pTrader);
    };
    void CPlayer::pc_UpgradeItem(struct _STORAGE_POS_INDIV* pposTalik, struct _STORAGE_POS_INDIV* pposToolItem, struct _STORAGE_POS_INDIV* pposUpgItem, char byJewelNum, struct _STORAGE_POS_INDIV* pposUpgJewel)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*, char, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400b13e0L))(this, pposTalik, pposToolItem, pposUpgItem, byJewelNum, pposUpgJewel);
    };
    int CPlayer::pc_UseFireCracker(uint16_t wItemSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayer*, uint16_t);
        return (org_ptr(0x1400b45e0L))(this, wItemSerial);
    };
    void CPlayer::pc_UsePotionItem(struct CPlayer* pTargetPlayer, struct _STORAGE_POS_INDIV* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, struct CPlayer*, struct _STORAGE_POS_INDIV*);
        (org_ptr(0x1400ad4d0L))(this, pTargetPlayer, pItem);
    };
    bool CPlayer::pc_UseRadarItem(struct _STORAGE_POS_INDIV* pItem, uint16_t* pConsumeSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _STORAGE_POS_INDIV*, uint16_t*);
        return (org_ptr(0x1400b4e10L))(this, pItem, pConsumeSerial);
    };
    char CPlayer::pc_UseRecoverLossExpItem(uint16_t wItemSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, uint16_t);
        return (org_ptr(0x14004e910L))(this, wItemSerial);
    };
    char CPlayer::pc_UserSoccerBall(uint16_t wItemSerial, uint16_t* wItemIndex)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, uint16_t, uint16_t*);
        return (org_ptr(0x1400b4bd0L))(this, wItemSerial, wItemIndex);
    };
    bool CPlayer::pc_WPActiveAttack_Force(struct _be_damaged_char* pDamList, int* nDamagedObjNum, struct _force_fld* pForceFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _be_damaged_char*, int*, struct _force_fld*);
        return (org_ptr(0x14008a6f0L))(this, pDamList, nDamagedObjNum, pForceFld);
    };
    bool CPlayer::pc_WPActiveAttack_Skill(struct _be_damaged_char* pDamList, int* nDamagedObjNum, int* nShotNum, struct _skill_fld* pSkillFld, char byEffectCode, uint16_t wBulletSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayer*, struct _be_damaged_char*, int*, int*, struct _skill_fld*, char, uint16_t);
        return (org_ptr(0x14008aa30L))(this, pDamList, nDamagedObjNum, nShotNum, pSkillFld, byEffectCode, wBulletSerial);
    };
    void CPlayer::pc_WhisperBlock(bool bBlock)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, bool);
        (org_ptr(0x1400fef10L))(this, bBlock);
    };
    char CPlayer::skill_process(int nEffectCode, int nSkillIndex, struct _CHRID* pidDst, uint16_t* pConsumeSerial, int* pnLv)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, int, int, struct _CHRID*, uint16_t*, int*);
        return (org_ptr(0x14009b750L))(this, nEffectCode, nSkillIndex, pidDst, pConsumeSerial, pnLv);
    };
    void CPlayer::skill_process_for_aura(int nSkillIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*, int);
        (org_ptr(0x14009c450L))(this, nSkillIndex);
    };
    char CPlayer::skill_process_for_item(int nSkillIndex, struct _CHRID* pidDst, int* pnLv)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayer*, int, struct _CHRID*, int*);
        return (org_ptr(0x14009c430L))(this, nSkillIndex, pidDst, pnLv);
    };
    CPlayer::~CPlayer()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140048050L))(this);
    };
    void CPlayer::dtor_CPlayer()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer*);
        (org_ptr(0x140048050L))(this);
    };
    
    
    
    CPlayer::CashChangeStateFlag::CashChangeStateFlag(int cashrename)
    {
        using org_ptr = void (WINAPIV*)(CPlayer::CashChangeStateFlag*, int);
        (org_ptr(0x140073f40L))(this, cashrename);
    };
    void CPlayer::CashChangeStateFlag::ctor_CashChangeStateFlag(int cashrename)
    {
        using org_ptr = void (WINAPIV*)(CPlayer::CashChangeStateFlag*, int);
        (org_ptr(0x140073f40L))(this, cashrename);
    };
    CPlayer::__target::__target()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer::__target*);
        (org_ptr(0x140073f80L))(this);
    };
    void CPlayer::__target::ctor___target()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer::__target*);
        (org_ptr(0x140073f80L))(this);
    };
    void CPlayer::__target::init()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayer::__target*);
        (org_ptr(0x1400741b0L))(this);
    };
END_ATF_NAMESPACE
