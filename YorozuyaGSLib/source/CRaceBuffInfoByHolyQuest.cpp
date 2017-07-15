#include <CRaceBuffInfoByHolyQuest.hpp>


START_ATF_NAMESPACE
    bool CRaceBuffInfoByHolyQuest::Apply(struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct CPlayer*);
        return (org_ptr(0x1403b4080L))(this, pkDest);
    };
    bool CRaceBuffInfoByHolyQuest::ApplyEffect(struct CPlayer* pkDest, bool bAdd)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct CPlayer*, bool);
        return (org_ptr(0x1403b4160L))(this, pkDest, bAdd);
    };
    CRaceBuffInfoByHolyQuest::CRaceBuffInfoByHolyQuest(struct _skill_fld* pFld, char byLv)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct _skill_fld*, char);
        (org_ptr(0x1403b3ea0L))(this, pFld, byLv);
    };
    void CRaceBuffInfoByHolyQuest::ctor_CRaceBuffInfoByHolyQuest(struct _skill_fld* pFld, char byLv)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct _skill_fld*, char);
        (org_ptr(0x1403b3ea0L))(this, pFld, byLv);
    };
    struct CRaceBuffInfoByHolyQuest* CRaceBuffInfoByHolyQuest::Create(unsigned int uiNTh, char* szItemName)
    {
        using org_ptr = struct CRaceBuffInfoByHolyQuest* (WINAPIV*)(unsigned int, char*);
        return (org_ptr(0x1403b3ee0L))(uiNTh, szItemName);
    };
    bool CRaceBuffInfoByHolyQuest::CreateComplete(struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct CPlayer*);
        return (org_ptr(0x1403b4010L))(this, pkDest);
    };
    bool CRaceBuffInfoByHolyQuest::LoadINISubProcLoadCode(unsigned int uiTh, char* szItemName, struct _skill_fld** ppFld, char* byLv)
    {
        using org_ptr = bool (WINAPIV*)(unsigned int, char*, struct _skill_fld**, char*);
        return (org_ptr(0x1403b44b0L))(uiTh, szItemName, ppFld, byLv);
    };
    void CRaceBuffInfoByHolyQuest::NotifyLogInSetBuff(uint16_t wUserInx)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, uint16_t);
        (org_ptr(0x1403b42d0L))(this, wUserInx);
    };
    void CRaceBuffInfoByHolyQuest::NotifyReleaseBuff(uint16_t wUserInx)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, uint16_t);
        (org_ptr(0x1403b4430L))(this, wUserInx);
    };
    void CRaceBuffInfoByHolyQuest::NotifySetBuff(struct CPlayer* pkDest)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct CPlayer*);
        (org_ptr(0x1403b4380L))(this, pkDest);
    };
    bool CRaceBuffInfoByHolyQuest::Release(struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*, struct CPlayer*);
        return (org_ptr(0x1403b40f0L))(this, pkDest);
    };
    CRaceBuffInfoByHolyQuest::~CRaceBuffInfoByHolyQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*);
        (org_ptr(0x1403b7800L))(this);
    };
    void CRaceBuffInfoByHolyQuest::dtor_CRaceBuffInfoByHolyQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuest*);
        (org_ptr(0x1403b7800L))(this);
    };
END_ATF_NAMESPACE
