#include <CRaceBuffInfoByHolyQuestfGroup.hpp>


START_ATF_NAMESPACE
    bool CRaceBuffInfoByHolyQuestfGroup::Apply(int iResultType, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*, int, struct CPlayer*);
        return (org_ptr(0x1403b4c70L))(this, iResultType, pkDest);
    };
    CRaceBuffInfoByHolyQuestfGroup::CRaceBuffInfoByHolyQuestfGroup(unsigned int uiNTh)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*, unsigned int);
        (org_ptr(0x1403b7ab0L))(this, uiNTh);
    };
    void CRaceBuffInfoByHolyQuestfGroup::ctor_CRaceBuffInfoByHolyQuestfGroup(unsigned int uiNTh)
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*, unsigned int);
        (org_ptr(0x1403b7ab0L))(this, uiNTh);
    };
    bool CRaceBuffInfoByHolyQuestfGroup::CreateComplete(int iResultType, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*, int, struct CPlayer*);
        return (org_ptr(0x1403b4bd0L))(this, iResultType, pkDest);
    };
    bool CRaceBuffInfoByHolyQuestfGroup::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*);
        return (org_ptr(0x1403b4a30L))(this);
    };
    bool CRaceBuffInfoByHolyQuestfGroup::Release(int iResultType, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*, int, struct CPlayer*);
        return (org_ptr(0x1403b4d10L))(this, iResultType, pkDest);
    };
    CRaceBuffInfoByHolyQuestfGroup::~CRaceBuffInfoByHolyQuestfGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*);
        (org_ptr(0x1403b4790L))(this);
    };
    void CRaceBuffInfoByHolyQuestfGroup::dtor_CRaceBuffInfoByHolyQuestfGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestfGroup*);
        (org_ptr(0x1403b4790L))(this);
    };
    
END_ATF_NAMESPACE
