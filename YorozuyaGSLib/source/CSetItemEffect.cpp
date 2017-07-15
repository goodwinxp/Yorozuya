#include <CSetItemEffect.hpp>


START_ATF_NAMESPACE
    bool CSetItemEffect::Attach_Set(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemEffect*, unsigned int, char, char);
        return (org_ptr(0x1402e2c80L))(this, dwSetItem, bySetItemNum, bySetEffectNum);
    };
    CSetItemEffect::CSetItemEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*);
        (org_ptr(0x1402e20b0L))(this);
    };
    void CSetItemEffect::ctor_CSetItemEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*);
        (org_ptr(0x1402e20b0L))(this);
    };
    char CSetItemEffect::Check_Base_EquipItem(struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld)
    {
        using org_ptr = char (WINAPIV*)(struct CSetItemEffect*, struct _AVATOR_DATA*, struct _SetItemEff_fld*);
        return (org_ptr(0x1402e25b0L))(this, pData, pSetFld);
    };
    char CSetItemEffect::Check_EquipItem(struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld)
    {
        using org_ptr = char (WINAPIV*)(struct CSetItemEffect*, struct _AVATOR_DATA*, struct _SetItemEff_fld*);
        return (org_ptr(0x1402e2510L))(this, pData, pSetFld);
    };
    char CSetItemEffect::Check_Other_EquipItem(struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld)
    {
        using org_ptr = char (WINAPIV*)(struct CSetItemEffect*, struct _AVATOR_DATA*, struct _SetItemEff_fld*);
        return (org_ptr(0x1402e28a0L))(this, pData, pSetFld);
    };
    bool CSetItemEffect::Detach_Set(unsigned int dwSetItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemEffect*, unsigned int);
        return (org_ptr(0x1402e2db0L))(this, dwSetItem);
    };
    char CSetItemEffect::GetResetEffectNum()
    {
        using org_ptr = char (WINAPIV*)(struct CSetItemEffect*);
        return (org_ptr(0x1402e3090L))(this);
    };
    unsigned int CSetItemEffect::GetResetIdx()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CSetItemEffect*);
        return (org_ptr(0x1402e3030L))(this);
    };
    char CSetItemEffect::GetResetItemNum()
    {
        using org_ptr = char (WINAPIV*)(struct CSetItemEffect*);
        return (org_ptr(0x1402e3060L))(this);
    };
    void CSetItemEffect::Init_Data(char byIdx)
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*, char);
        (org_ptr(0x1402e2490L))(this, byIdx);
    };
    void CSetItemEffect::Init_Info()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*);
        (org_ptr(0x1402e2420L))(this);
    };
    bool CSetItemEffect::IsSetOn(unsigned int dwSetItem)
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemEffect*, unsigned int);
        return (org_ptr(0x1402e2bf0L))(this, dwSetItem);
    };
    bool CSetItemEffect::IsSetOnComplete(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemEffect*, unsigned int, char, char);
        return (org_ptr(0x1402e2b20L))(this, dwSetItem, bySetItemNum, bySetEffectNum);
    };
    bool CSetItemEffect::Reset_Set(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CSetItemEffect*, unsigned int, char, char);
        return (org_ptr(0x1402e2e90L))(this, dwSetItem, bySetItemNum, bySetEffectNum);
    };
    int CSetItemEffect::SetOffEffect(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
    {
        using org_ptr = int (WINAPIV*)(struct CSetItemEffect*, unsigned int, char, char);
        return (org_ptr(0x1402e2390L))(this, dwSetItem, bySetItemNum, bySetEffectNum);
    };
    int CSetItemEffect::SetOnEffect(struct _AVATOR_DATA* pData, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
    {
        using org_ptr = int (WINAPIV*)(struct CSetItemEffect*, struct _AVATOR_DATA*, unsigned int, char, char);
        return (org_ptr(0x1402e2130L))(this, pData, dwSetItem, bySetItemNum, bySetEffectNum);
    };
    void CSetItemEffect::SetResetInfo(bool bSet, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*, bool, unsigned int, char, char);
        (org_ptr(0x1402e2fb0L))(this, bSet, dwSetItem, bySetItemNum, bySetEffectNum);
    };
    CSetItemEffect::~CSetItemEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*);
        (org_ptr(0x1402e20f0L))(this);
    };
    void CSetItemEffect::dtor_CSetItemEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CSetItemEffect*);
        (org_ptr(0x1402e20f0L))(this);
    };
    
END_ATF_NAMESPACE
