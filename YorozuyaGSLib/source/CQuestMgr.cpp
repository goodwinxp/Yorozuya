#include <CQuestMgr.hpp>


START_ATF_NAMESPACE
    CQuestMgr::CQuestMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*);
        (org_ptr(0x1402875a0L))(this);
    };
    void CQuestMgr::ctor_CQuestMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*);
        (org_ptr(0x1402875a0L))(this);
    };
    bool CQuestMgr::CalcStartNPCQuestCnt(unsigned int* pdwCnt)
    {
        using org_ptr = bool (WINAPIV*)(unsigned int*);
        return (org_ptr(0x14028b6e0L))(pdwCnt);
    };
    bool CQuestMgr::CanGiveupQuest(char byQuestDBSlot)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char);
        return (org_ptr(0x140289630L))(this, byQuestDBSlot);
    };
    bool CQuestMgr::CheckFailCondition(char byQuestDBSlot, int nFailCond, char* pszCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, int, char*);
        return (org_ptr(0x14028a2a0L))(this, byQuestDBSlot, nFailCond, pszCode);
    };
    void CQuestMgr::CheckFailLoop(int nFailCond, char* pszCode)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, int, char*);
        (org_ptr(0x14028a220L))(this, nFailCond, pszCode);
    };
    struct _quest_fail_result* CQuestMgr::CheckLimLv(int nNewLv)
    {
        using org_ptr = struct _quest_fail_result* (WINAPIV*)(struct CQuestMgr*, int);
        return (org_ptr(0x140289510L))(this, nNewLv);
    };
    void CQuestMgr::CheckNPCQuestList(char* pszEventCode, char byRaceCode, struct _NPCQuestIndexTempData* pQuestIndexData)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, char*, char, struct _NPCQuestIndexTempData*);
        (org_ptr(0x140287ed0L))(this, pszEventCode, byRaceCode, pQuestIndexData);
    };
    struct _happen_event_cont* CQuestMgr::CheckNPCQuestStartable(char* pszEventCode, char byRaceCode, unsigned int dwQuestIndex, unsigned int dwHappenIndex)
    {
        using org_ptr = struct _happen_event_cont* (WINAPIV*)(struct CQuestMgr*, char*, char, unsigned int, unsigned int);
        return (org_ptr(0x1402881f0L))(this, pszEventCode, byRaceCode, dwQuestIndex, dwHappenIndex);
    };
    struct _happen_event_cont* CQuestMgr::CheckQuestHappenEvent(QUEST_HAPPEN HappenType, char* pszEventCode, char byRaceCode)
    {
        using org_ptr = struct _happen_event_cont* (WINAPIV*)(struct CQuestMgr*, QUEST_HAPPEN, char*, char);
        return (org_ptr(0x140287b60L))(this, HappenType, pszEventCode, byRaceCode);
    };
    struct _quest_check_result* CQuestMgr::CheckReqAct(int nActCode, char* pszReqCode, uint16_t wActCount, bool bPartyState)
    {
        using org_ptr = struct _quest_check_result* (WINAPIV*)(struct CQuestMgr*, int, char*, uint16_t, bool);
        return (org_ptr(0x140289080L))(this, nActCode, pszReqCode, wActCount, bPartyState);
    };
    bool CQuestMgr::CheckRewardMasteryData(int iInx, int iNth, struct _quest_reward_mastery* pData)
    {
        using org_ptr = bool (WINAPIV*)(int, int, struct _quest_reward_mastery*);
        return (org_ptr(0x140289bc0L))(iInx, iNth, pData);
    };
    void CQuestMgr::DeleteQuestData(char bySlot)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, char);
        (org_ptr(0x140287af0L))(this, bySlot);
    };
    bool CQuestMgr::DeleteQuestItem(char* pszItemCode, uint16_t wCount)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*, uint16_t);
        return (org_ptr(0x14028b040L))(this, pszItemCode, wCount);
    };
    int CQuestMgr::GetCountQuestType(int nType)
    {
        using org_ptr = int (WINAPIV*)(struct CQuestMgr*, int);
        return (org_ptr(0x140287a50L))(this, nType);
    };
    struct _happen_event_cont* CQuestMgr::GetLastHappenEvent()
    {
        using org_ptr = struct _happen_event_cont* (WINAPIV*)(struct CQuestMgr*);
        return (org_ptr(0x1400cfc30L))(this);
    };
    struct _Quest_fld* CQuestMgr::GetQuestFromEvent(char bySelect)
    {
        using org_ptr = struct _Quest_fld* (WINAPIV*)(struct CQuestMgr*, char);
        return (org_ptr(0x140288f10L))(this, bySelect);
    };
    bool CQuestMgr::GiveItem(char byQuestDBSlot, struct _action_node* pActionNode, bool bCheckOnly)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, struct _action_node*, bool);
        return (org_ptr(0x14028abe0L))(this, byQuestDBSlot, pActionNode, bCheckOnly);
    };
    void CQuestMgr::InitMgr(struct CPlayer* pMaster, struct _QUEST_DB_BASE* pQuestData)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, struct CPlayer*, struct _QUEST_DB_BASE*);
        (org_ptr(0x140287820L))(this, pMaster, pQuestData);
    };
    char CQuestMgr::InsertNpcQuestHistory(char* pszQuestCode, char byLevel, long double dRepeatTime)
    {
        using org_ptr = char (WINAPIV*)(struct CQuestMgr*, char*, char, long double);
        return (org_ptr(0x14028b320L))(this, pszQuestCode, byLevel, dRepeatTime);
    };
    bool CQuestMgr::IsCompleteNpcQuest(char* pszCode, int bQuestRepeat)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*, int);
        return (org_ptr(0x14028a850L))(this, pszCode, bQuestRepeat);
    };
    bool CQuestMgr::IsPossibleRepeatNpcQuest(char* pszCode, int nLinkQuestGroupID)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*, int);
        return (org_ptr(0x14028a900L))(this, pszCode, nLinkQuestGroupID);
    };
    bool CQuestMgr::IsProcLinkNpcQuest(char* pszCode, int nLinkQuestGroupID)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*, int);
        return (org_ptr(0x14028aa30L))(this, pszCode, nLinkQuestGroupID);
    };
    bool CQuestMgr::IsProcNpcQuest(char* pszCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*);
        return (org_ptr(0x14028ab00L))(this, pszCode);
    };
    bool CQuestMgr::IsRecvedQuestByNPC(char* pszNPCCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*);
        return (org_ptr(0x14028b020L))(this, pszNPCCode);
    };
    bool CQuestMgr::IsRecvedQuestByNPC(int nEventIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, int);
        return (org_ptr(0x14028b000L))(this, nEventIndex);
    };
    bool CQuestMgr::LoadQuestData()
    {
        using org_ptr = bool (WINAPIV*)();
        return (org_ptr(0x1402896f0L))();
    };
    void CQuestMgr::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*);
        (org_ptr(0x1402878d0L))(this);
    };
    bool CQuestMgr::ReturnItem(char* pszItemCode, int nEndReturnItemCnt, char byQuestDBSlot, bool bCheckOnly)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*, int, char, bool);
        return (org_ptr(0x14028abc0L))(this, pszItemCode, nEndReturnItemCnt, byQuestDBSlot, bCheckOnly);
    };
    void CQuestMgr::SendMsgToMaster_NoCompleteQuestFromNPC(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, char);
        (org_ptr(0x14028b530L))(this, byQuestDBSlot);
    };
    void CQuestMgr::SendMsgToMaster_NoHaveGiveItem(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, char);
        (org_ptr(0x14028b5c0L))(this, byQuestDBSlot);
    };
    void CQuestMgr::SendMsgToMaster_NoHaveReturnItem(char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, char);
        (org_ptr(0x14028b650L))(this, byQuestDBSlot);
    };
    void CQuestMgr::SendMsgToMaster_ReturnItemAfterQuest(uint16_t wItemSerial, char byNum, char byQuestDBSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*, uint16_t, char, char);
        (org_ptr(0x14028b480L))(this, wItemSerial, byNum, byQuestDBSlot);
    };
    bool CQuestMgr::_CheckCondition(struct _happen_event_condition_node* pCond)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, struct _happen_event_condition_node*);
        return (org_ptr(0x1402883c0L))(this, pCond);
    };
    bool CQuestMgr::__CheckCond_Class(char* pszClassCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*);
        return (org_ptr(0x140288e70L))(this, pszClassCode);
    };
    bool CQuestMgr::__CheckCond_Dalant(char byCompare, int nDalant)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, int);
        return (org_ptr(0x140288770L))(this, byCompare, nDalant);
    };
    bool CQuestMgr::__CheckCond_Dummy(int bInclude, char* pszDummyCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, int, char*);
        return (org_ptr(0x140288df0L))(this, bInclude, pszDummyCode);
    };
    bool CQuestMgr::__CheckCond_Equip(char* pszItemCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*);
        return (org_ptr(0x140288a40L))(this, pszItemCode);
    };
    bool CQuestMgr::__CheckCond_Gold(char byCompare, int nGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, int);
        return (org_ptr(0x140288830L))(this, byCompare, nGold);
    };
    bool CQuestMgr::__CheckCond_Grade(char byCompare, int nGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, int);
        return (org_ptr(0x1402886c0L))(this, byCompare, nGrade);
    };
    bool CQuestMgr::__CheckCond_Guild(int belong)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, int);
        return (org_ptr(0x140288990L))(this, belong);
    };
    bool CQuestMgr::__CheckCond_Have(int nAmonut, char* pszItemCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, int, char*);
        return (org_ptr(0x140288b30L))(this, nAmonut, pszItemCode);
    };
    bool CQuestMgr::__CheckCond_LV(char byCompare, int nLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, int);
        return (org_ptr(0x140288600L))(this, byCompare, nLv);
    };
    bool CQuestMgr::__CheckCond_Mastery(char byCompare, char* pszMasteryPack)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char, char*);
        return (org_ptr(0x140288cb0L))(this, byCompare, pszMasteryPack);
    };
    bool CQuestMgr::__CheckCond_Nation(int belong)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, int);
        return (org_ptr(0x140288a20L))(this, belong);
    };
    bool CQuestMgr::__CheckCond_Party(int belong)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, int);
        return (org_ptr(0x1402888f0L))(this, belong);
    };
    bool CQuestMgr::__CheckCond_Race(char* pszRaceSexFlag)
    {
        using org_ptr = bool (WINAPIV*)(struct CQuestMgr*, char*);
        return (org_ptr(0x140288e10L))(this, pszRaceSexFlag);
    };
    CQuestMgr::~CQuestMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*);
        (org_ptr(0x1402876d0L))(this);
    };
    void CQuestMgr::dtor_CQuestMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CQuestMgr*);
        (org_ptr(0x1402876d0L))(this);
    };
END_ATF_NAMESPACE
