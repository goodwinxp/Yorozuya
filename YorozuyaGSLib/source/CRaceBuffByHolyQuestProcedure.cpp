#include <CRaceBuffByHolyQuestProcedure.hpp>


START_ATF_NAMESPACE
    CRaceBuffByHolyQuestProcedure::CRaceBuffByHolyQuestProcedure()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        (org_ptr(0x1403b60f0L))(this);
    };
    void CRaceBuffByHolyQuestProcedure::ctor_CRaceBuffByHolyQuestProcedure()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        (org_ptr(0x1403b60f0L))(this);
    };
    int CRaceBuffByHolyQuestProcedure::CancelPlayerRaceBuff(struct CPlayer* pkPlayer, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE eReleaseType, unsigned int uiReleaseLv)
    {
        using org_ptr = int (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*, struct CPlayer*, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE, unsigned int);
        return (org_ptr(0x1403b63d0L))(this, pkPlayer, eReleaseType, uiReleaseLv);
    };
    bool CRaceBuffByHolyQuestProcedure::CreateComplete(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*, struct CPlayer*);
        return (org_ptr(0x1403b6260L))(this, pkPlayer);
    };
    int CRaceBuffByHolyQuestProcedure::GetRaceBuffLevel(struct CPlayer* pOne)
    {
        using org_ptr = int (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*, struct CPlayer*);
        return (org_ptr(0x1403b64f0L))(this, pOne);
    };
    bool CRaceBuffByHolyQuestProcedure::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        return (org_ptr(0x1403b61a0L))(this);
    };
    void CRaceBuffByHolyQuestProcedure::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        (org_ptr(0x1403b6210L))(this);
    };
    void CRaceBuffByHolyQuestProcedure::LoopSubProcSetRaceBuff()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        (org_ptr(0x1403b6820L))(this);
    };
    bool CRaceBuffByHolyQuestProcedure::Request(int iType)
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*, int);
        return (org_ptr(0x1403b6340L))(this, iType);
    };
    bool CRaceBuffByHolyQuestProcedure::RequestSubProcCancelRaceBuff()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        return (org_ptr(0x1403b6590L))(this);
    };
    bool CRaceBuffByHolyQuestProcedure::RequestSubProcSetRaceBattleResult()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        return (org_ptr(0x1403b66e0L))(this);
    };
    bool CRaceBuffByHolyQuestProcedure::RequestSubProcSetRaceBuff()
    {
        using org_ptr = bool (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        return (org_ptr(0x1403b67a0L))(this);
    };
    CRaceBuffByHolyQuestProcedure::~CRaceBuffByHolyQuestProcedure()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        (org_ptr(0x1403b7f30L))(this);
    };
    void CRaceBuffByHolyQuestProcedure::dtor_CRaceBuffByHolyQuestProcedure()
    {
        using org_ptr = void (WINAPIV*)(struct CRaceBuffByHolyQuestProcedure*);
        (org_ptr(0x1403b7f30L))(this);
    };
    
END_ATF_NAMESPACE
