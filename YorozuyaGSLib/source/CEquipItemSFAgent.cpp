#include <CEquipItemSFAgent.hpp>


START_ATF_NAMESPACE
    void CEquipItemSFAgent::AllEndContSF()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        (org_ptr(0x140121040L))(this);
    };
    CEquipItemSFAgent::CEquipItemSFAgent()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        (org_ptr(0x140120f90L))(this);
    };
    void CEquipItemSFAgent::ctor_CEquipItemSFAgent()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        (org_ptr(0x140120f90L))(this);
    };
    void CEquipItemSFAgent::EndContSF(struct _sf_continous* pSF_Cont)
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, struct _sf_continous*);
        (org_ptr(0x1401215e0L))(this, pSF_Cont);
    };
    float CEquipItemSFAgent::GetBoosterAddSpeed()
    {
        using org_ptr = float (WINAPIV*)(struct CEquipItemSFAgent*);
        return (org_ptr(0x140121890L))(this);
    };
    struct _STORAGE_LIST::_db_con* CEquipItemSFAgent::GetEquip(int nEquipTblIndex)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct CEquipItemSFAgent*, int);
        return (org_ptr(0x1401210a0L))(this, nEquipTblIndex);
    };
    struct _sf_continous* CEquipItemSFAgent::GetEquipSFCont(int nEquipTblIndex)
    {
        using org_ptr = struct _sf_continous* (WINAPIV*)(struct CEquipItemSFAgent*, int);
        return (org_ptr(0x140121140L))(this, nEquipTblIndex);
    };
    bool CEquipItemSFAgent::GetRequireSFSlot(struct CEquipItemSFAgent::_requireSlot* pSlot, struct _skill_fld* pSkillFld)
    {
        using org_ptr = bool (WINAPIV*)(struct CEquipItemSFAgent*, struct CEquipItemSFAgent::_requireSlot*, struct _skill_fld*);
        return (org_ptr(0x140121290L))(this, pSlot, pSkillFld);
    };
    void CEquipItemSFAgent::Init(struct CPlayer* pMaster)
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, struct CPlayer*);
        (org_ptr(0x140120fe0L))(this, pMaster);
    };
    char CEquipItemSFAgent::IsEnableSkill(struct _skill_fld* pSkill)
    {
        using org_ptr = char (WINAPIV*)(struct CEquipItemSFAgent*, struct _skill_fld*);
        return (org_ptr(0x140121180L))(this, pSkill);
    };
    char CEquipItemSFAgent::IsEnableSkill(int nEquipTblIndex, struct _skill_fld* pSkill)
    {
        using org_ptr = char (WINAPIV*)(struct CEquipItemSFAgent*, int, struct _skill_fld*);
        return (org_ptr(0x140121200L))(this, nEquipTblIndex, pSkill);
    };
    bool CEquipItemSFAgent::IsUseBooster()
    {
        using org_ptr = bool (WINAPIV*)(struct CEquipItemSFAgent*);
        return (org_ptr(0x140121780L))(this);
    };
    void CEquipItemSFAgent::ReleaseSFCont(int nEquipTblIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, int);
        (org_ptr(0x140121670L))(this, nEquipTblIndex);
    };
    float CEquipItemSFAgent::SearchItemAddSpeed(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = float (WINAPIV*)(struct CEquipItemSFAgent*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1401217e0L))(this, pItem);
    };
    void CEquipItemSFAgent::SetSFCont(int nEquipTblIndex, struct _sf_continous* pSF)
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, int, struct _sf_continous*);
        (org_ptr(0x1401212e0L))(this, nEquipTblIndex, pSF);
    };
    void CEquipItemSFAgent::StartContSF(struct _sf_continous* pSF_Cont)
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, struct _sf_continous*);
        (org_ptr(0x140121490L))(this, pSF_Cont);
    };
    CEquipItemSFAgent::~CEquipItemSFAgent()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        (org_ptr(0x140073b00L))(this);
    };
    void CEquipItemSFAgent::dtor_CEquipItemSFAgent()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        (org_ptr(0x140073b00L))(this);
    };
    void CEquipItemSFAgent::_requireSlot::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*);
        (org_ptr(0x140122f60L))(this);
    };
    CEquipItemSFAgent::_requireSlot::_requireSlot()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*);
        (org_ptr(0x140122f10L))(this);
    };
    void CEquipItemSFAgent::_requireSlot::ctor__requireSlot()
    {
        using org_ptr = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*);
        (org_ptr(0x140122f10L))(this);
    };
END_ATF_NAMESPACE
