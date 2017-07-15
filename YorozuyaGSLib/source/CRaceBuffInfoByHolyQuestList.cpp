#include <CRaceBuffInfoByHolyQuestList.hpp>


START_ATF_NAMESPACE
    bool CRaceBuffInfoByHolyQuestList::Apply(unsigned int uiContinueCnt, int iResultType, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*, unsigned int, int, struct CPlayer*);
        return (org_ptr(0x1403b52b0L))(this, uiContinueCnt, iResultType, pkDest);
    };
    CRaceBuffInfoByHolyQuestList::CRaceBuffInfoByHolyQuestList()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*);
        (org_ptr(0x1403b7c00L))(this);
    };
    void CRaceBuffInfoByHolyQuestList::ctor_CRaceBuffInfoByHolyQuestList()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*);
        (org_ptr(0x1403b7c00L))(this);
    };
    bool CRaceBuffInfoByHolyQuestList::CreateComplete(unsigned int uiContinueCnt, int iResultType, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*, unsigned int, int, struct CPlayer*);
        return (org_ptr(0x1403b5230L))(this, uiContinueCnt, iResultType, pkDest);
    };
    unsigned int CRaceBuffInfoByHolyQuestList::GetMaxThCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*);
        return (org_ptr(0x1403b7d10L))(this);
    };
    bool CRaceBuffInfoByHolyQuestList::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*);
        return (org_ptr(0x1403b5040L))(this);
    };
    bool CRaceBuffInfoByHolyQuestList::Release(unsigned int uiContinueCnt, int iResultType, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*, unsigned int, int, struct CPlayer*);
        return (org_ptr(0x1403b5330L))(this, uiContinueCnt, iResultType, pkDest);
    };
    CRaceBuffInfoByHolyQuestList::~CRaceBuffInfoByHolyQuestList()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*);
        (org_ptr(0x1403b4db0L))(this);
    };
    void CRaceBuffInfoByHolyQuestList::dtor_CRaceBuffInfoByHolyQuestList()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffInfoByHolyQuestList*);
        (org_ptr(0x1403b4db0L))(this);
    };
END_ATF_NAMESPACE
