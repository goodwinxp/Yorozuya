#include <CPotionMgr.hpp>


START_ATF_NAMESPACE
    int CPotionMgr::ApplyPotion(struct CPlayer* pUsePlayer, struct CPlayer* pApplyPlayer, struct _skill_fld* pEffecFld, struct _CheckPotion_fld* pCheckFld, struct _PotionItem_fld* pfB, bool bCommonPotion)
    {
        using org_ptr = int (WINAPIV*)(struct CPotionMgr*, struct CPlayer*, struct CPlayer*, struct _skill_fld*, struct _CheckPotion_fld*, struct _PotionItem_fld*, bool);
        return (org_ptr(0x14039e6d0L))(this, pUsePlayer, pApplyPlayer, pEffecFld, pCheckFld, pfB, bCommonPotion);
    };
    CPotionMgr::CPotionMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*);
        (org_ptr(0x1403a1120L))(this);
    };
    void CPotionMgr::ctor_CPotionMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*);
        (org_ptr(0x1403a1120L))(this);
    };
    bool CPotionMgr::CheckPotionUsableMap(struct _PotionItem_fld* pPotionFld, struct CMapData* pMap)
    {
        using org_ptr = bool (WINAPIV*)(struct CPotionMgr*, struct _PotionItem_fld*, struct CMapData*);
        return (org_ptr(0x14039f880L))(this, pPotionFld, pMap);
    };
    void CPotionMgr::Complete_RenameChar_DB_Select(char byRet, char* p)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*, char, char*);
        (org_ptr(0x14039f190L))(this, byRet, p);
    };
    void CPotionMgr::Complete_RenameChar_DB_Update(char byRet, char* p)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*, char, char*);
        (org_ptr(0x14039f2a0L))(this, byRet, p);
    };
    bool CPotionMgr::DatafileInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CPotionMgr*);
        return (org_ptr(0x14039c7b0L))(this);
    };
    void CPotionMgr::InsertMovePotionStoneEffect(struct CPlayer* pApplyPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*, struct CPlayer*);
        (org_ptr(0x14039edf0L))(this, pApplyPlayer);
    };
    int CPotionMgr::InsertPotionContEffect(struct CPlayer* pApplyPlayer, struct _ContPotionData* ContPotionData, struct _skill_fld* pEffecFld, unsigned int dwDurTime)
    {
        using org_ptr = int (WINAPIV*)(struct CPotionMgr*, struct CPlayer*, struct _ContPotionData*, struct _skill_fld*, unsigned int);
        return (org_ptr(0x14039ec60L))(this, pApplyPlayer, ContPotionData, pEffecFld, dwDurTime);
    };
    bool CPotionMgr::InsertRenamePotion(struct CRFWorldDatabase* pkWorldDB, char* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CPotionMgr*, struct CRFWorldDatabase*, char*);
        return (org_ptr(0x14039f6f0L))(this, pkWorldDB, pData);
    };
    bool CPotionMgr::IsPotionDelayUseIndex(int nIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CPotionMgr*, int);
        return (org_ptr(0x14039f9e0L))(this, nIndex);
    };
    int CPotionMgr::PreCheckPotion(struct CPlayer* pUsePlayer, struct CCharacter** pTargetCharacter, struct _PotionItem_fld* pfB, unsigned int nCurTime, struct _skill_fld* pFld, bool bCheckDist)
    {
        using org_ptr = int (WINAPIV*)(struct CPotionMgr*, struct CPlayer*, struct CCharacter**, struct _PotionItem_fld*, unsigned int, struct _skill_fld*, bool);
        return (org_ptr(0x14039cdd0L))(this, pUsePlayer, pTargetCharacter, pfB, nCurTime, pFld, bCheckDist);
    };
    void CPotionMgr::PushRenamePotionDBLog(char* pInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*, char*);
        (org_ptr(0x14039f780L))(this, pInfo);
    };
    int CPotionMgr::RemovePotionContEffect(struct CPlayer* pApplyPlayer, struct _ContPotionData* ContPotionData)
    {
        using org_ptr = int (WINAPIV*)(struct CPotionMgr*, struct CPlayer*, struct _ContPotionData*);
        return (org_ptr(0x14039ee70L))(this, pApplyPlayer, ContPotionData);
    };
    int CPotionMgr::SelectDeleteBuf(struct CPlayer* pOne, bool bUse, bool bRemove)
    {
        using org_ptr = int (WINAPIV*)(struct CPotionMgr*, struct CPlayer*, bool, bool);
        return (org_ptr(0x14039fa20L))(this, pOne, bUse, bRemove);
    };
    bool CPotionMgr::SetPotionDataName()
    {
        using org_ptr = bool (WINAPIV*)(struct CPotionMgr*);
        return (org_ptr(0x14039c8b0L))(this);
    };
    void CPotionMgr::UpdatePotionContEffect(struct CPlayer* pPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*, struct CPlayer*);
        (org_ptr(0x14039f030L))(this, pPlayer);
    };
    int CPotionMgr::UsePotion(struct CPlayer* pUsePlayer, struct CCharacter* pTargetCharacter, struct _PotionItem_fld* pfB, unsigned int nCurTime)
    {
        using org_ptr = int (WINAPIV*)(struct CPotionMgr*, struct CPlayer*, struct CCharacter*, struct _PotionItem_fld*, unsigned int);
        return (org_ptr(0x14039ddc0L))(this, pUsePlayer, pTargetCharacter, pfB, nCurTime);
    };
    CPotionMgr::~CPotionMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*);
        (org_ptr(0x1403a1450L))(this);
    };
    void CPotionMgr::dtor_CPotionMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionMgr*);
        (org_ptr(0x1403a1450L))(this);
    };
    
END_ATF_NAMESPACE
