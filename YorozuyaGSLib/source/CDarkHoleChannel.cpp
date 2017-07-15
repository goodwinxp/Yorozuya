#include <CDarkHoleChannel.hpp>


START_ATF_NAMESPACE
    void CDarkHoleChannel::AddMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140268f40L))(this);
    };
    CDarkHoleChannel::CDarkHoleChannel()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140266830L))(this);
    };
    void CDarkHoleChannel::ctor_CDarkHoleChannel()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140266830L))(this);
    };
    bool CDarkHoleChannel::CanYouEnterHole(struct CPlayer* pEnter)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        return (org_ptr(0x14026a710L))(this, pEnter);
    };
    void CDarkHoleChannel::ChangeMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140268570L))(this);
    };
    void CDarkHoleChannel::ChangeMonsterApparition(int nTermMSec)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        (org_ptr(0x140269700L))(this, nTermMSec);
    };
    void CDarkHoleChannel::CheckCurrentMission()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x1402691e0L))(this);
    };
    bool CDarkHoleChannel::CheckEvent(EM_DH_EVENT eventType, int nContentTable, int nContentIndex, int nCount, struct CGameObject* pObj)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, EM_DH_EVENT, int, int, int, struct CGameObject*);
        return (org_ptr(0x140266c60L))(this, eventType, nContentTable, nContentIndex, nCount, pObj);
    };
    void CDarkHoleChannel::CheckInnerEventDummy()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x1402699f0L))(this);
    };
    void CDarkHoleChannel::CheckMember()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140269880L))(this);
    };
    void CDarkHoleChannel::CheckRespawnMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x14026a0d0L))(this);
    };
    void CDarkHoleChannel::CheckSendNewMissionMsg()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140267640L))(this);
    };
    void CDarkHoleChannel::CheckWaitNextMission()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x1402676b0L))(this);
    };
    bool CDarkHoleChannel::ClearMember(struct CPlayer* pMember, bool bDisconnect, struct _dh_player_mgr::_pos* poutPlayerPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, struct _dh_player_mgr::_pos*);
        return (org_ptr(0x14026ab00L))(this, pMember, bDisconnect, poutPlayerPos);
    };
    void CDarkHoleChannel::CloseDungeon()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140267ba0L))(this);
    };
    void CDarkHoleChannel::CreateMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x1402682c0L))(this);
    };
    int CDarkHoleChannel::GetAllMemberNum()
    {
        using org_ptr = int (WINAPIV*)(struct CDarkHoleChannel*);
        return (org_ptr(0x14026a6c0L))(this);
    };
    int CDarkHoleChannel::GetCurrentMemberNum()
    {
        using org_ptr = int (WINAPIV*)(struct CDarkHoleChannel*);
        return (org_ptr(0x14026a630L))(this);
    };
    bool CDarkHoleChannel::GetEnterNewPos(struct _ENTER_DUNGEON_NEW_POS* pNewPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct _ENTER_DUNGEON_NEW_POS*);
        return (org_ptr(0x14026a570L))(this, pNewPos);
    };
    unsigned int CDarkHoleChannel::GetLeaderSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CDarkHoleChannel*);
        return (org_ptr(0x14026ae60L))(this);
    };
    int CDarkHoleChannel::GetMonsterNumInCurMissionArea(int nMonsterRecIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CDarkHoleChannel*, int);
        return (org_ptr(0x14026b170L))(this, nMonsterRecIndex);
    };
    struct _dh_player_mgr* CDarkHoleChannel::GetPlayerInfo(unsigned int dwSerial)
    {
        using org_ptr = struct _dh_player_mgr* (WINAPIV*)(struct CDarkHoleChannel*, unsigned int);
        return (org_ptr(0x14026adb0L))(this, dwSerial);
    };
    bool CDarkHoleChannel::GotoNextMission()
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*);
        return (org_ptr(0x140267730L))(this);
    };
    bool CDarkHoleChannel::GotoNextMissionByPosition(float* pfStartPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, float*);
        return (org_ptr(0x140267840L))(this, pfStartPos);
    };
    void CDarkHoleChannel::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140266980L))(this);
    };
    bool CDarkHoleChannel::IsAllMemberNearPosition(float* pfCenterPos, int nLen)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, float*, int);
        return (org_ptr(0x14026afb0L))(this, pfCenterPos, nLen);
    };
    bool CDarkHoleChannel::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*);
        return (org_ptr(0x140266ac0L))(this);
    };
    bool CDarkHoleChannel::IsMoveNextMission(int nPortalIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, int);
        return (org_ptr(0x14026aef0L))(this, nPortalIndex);
    };
    bool CDarkHoleChannel::IsOpenPartyMember(struct CPlayer* pOpener)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        return (org_ptr(0x14026af60L))(this, pOpener);
    };
    bool CDarkHoleChannel::IsReEnterable(unsigned int dwEnterSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, unsigned int);
        return (org_ptr(0x14026a4e0L))(this, dwEnterSerial);
    };
    void CDarkHoleChannel::NextMissionOtherQuester(struct CPlayer* pLeader, struct _dh_mission_setup* pNextMission)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, struct _dh_mission_setup*);
        (org_ptr(0x140267400L))(this, pLeader, pNextMission);
    };
    void CDarkHoleChannel::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140266ae0L))(this);
    };
    void CDarkHoleChannel::OpenDungeon(struct _dh_quest_setup* pQuestSetup, int nLayerIndex, struct CPlayer* pOpener, struct CDarkHole* pHoleObj)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct _dh_quest_setup*, int, struct CPlayer*, struct CDarkHole*);
        (org_ptr(0x1402678f0L))(this, pQuestSetup, nLayerIndex, pOpener, pHoleObj);
    };
    bool CDarkHoleChannel::PushMember(struct CPlayer* pMember, bool bReconnect, struct CMapData* pOldMap, uint16_t wLastLayer, float* pfOldPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, struct CMapData*, uint16_t, float*);
        return (org_ptr(0x14026a8c0L))(this, pMember, bReconnect, pOldMap, wLastLayer, pfOldPos);
    };
    struct _dh_mission_setup* CDarkHoleChannel::SearchMissionFromPos(float* pfStartPos)
    {
        using org_ptr = struct _dh_mission_setup* (WINAPIV*)(struct CDarkHoleChannel*, float*);
        return (org_ptr(0x14026b090L))(this, pfStartPos);
    };
    void CDarkHoleChannel::SendMsg_AskReEnter(struct CPlayer* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        (org_ptr(0x14026c9b0L))(this, pDst);
    };
    void CDarkHoleChannel::SendMsg_ChannelClose()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x14026c4a0L))(this);
    };
    void CDarkHoleChannel::SendMsg_GateDestroy(char* byType, char* pSend, int nSize)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, char*, char*, int);
        (org_ptr(0x14026cd30L))(this, byType, pSend, nSize);
    };
    void CDarkHoleChannel::SendMsg_JobCount(int nJobIndex, int nCount)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int, int);
        (org_ptr(0x14026bcf0L))(this, nJobIndex, nCount);
    };
    void CDarkHoleChannel::SendMsg_JobPass(int nJobIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        (org_ptr(0x14026c140L))(this, nJobIndex);
    };
    void CDarkHoleChannel::SendMsg_LeaderChange(struct CPlayer* pNewLeader)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        (org_ptr(0x14026b540L))(this, pNewLeader);
    };
    void CDarkHoleChannel::SendMsg_MemberInfo(struct CPlayer* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        (org_ptr(0x14026bb00L))(this, pDst);
    };
    void CDarkHoleChannel::SendMsg_MissionInfo(struct CPlayer* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        (org_ptr(0x14026b7c0L))(this, pDst);
    };
    void CDarkHoleChannel::SendMsg_MissionPass()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x14026c230L))(this);
    };
    void CDarkHoleChannel::SendMsg_NewMember(struct CPlayer* pNewMember, bool bReconnect)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool);
        (org_ptr(0x14026b2e0L))(this, pNewMember, bReconnect);
    };
    void CDarkHoleChannel::SendMsg_NewMission()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x14026c580L))(this);
    };
    void CDarkHoleChannel::SendMsg_OpenPortalByReact(int nPortalIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        (org_ptr(0x14026be00L))(this, nPortalIndex);
    };
    void CDarkHoleChannel::SendMsg_OpenPortalByResult(int nPortalIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        (org_ptr(0x14026bef0L))(this, nPortalIndex);
    };
    void CDarkHoleChannel::SendMsg_PopMember(struct CPlayer* pPopMember, bool bDisconnect)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool);
        (org_ptr(0x14026b430L))(this, pPopMember, bDisconnect);
    };
    void CDarkHoleChannel::SendMsg_QuestInfo(struct CPlayer* pDst)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        (org_ptr(0x14026b640L))(this, pDst);
    };
    void CDarkHoleChannel::SendMsg_QuestPass()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x14026c3c0L))(this);
    };
    void CDarkHoleChannel::SendMsg_RealAddLimTime(int nAddSec, char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int, char*);
        (org_ptr(0x14026cb80L))(this, nAddSec, pMsg);
    };
    void CDarkHoleChannel::SendMsg_RealMsgInform(char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, char*);
        (org_ptr(0x14026ca60L))(this, pMsg);
    };
    void CDarkHoleChannel::SendMsg_TimeOut()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x14026c8d0L))(this);
    };
    void CDarkHoleChannel::ShareItemToMonster()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140268990L))(this);
    };
    void CDarkHoleChannel::WaitNextMission()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x1402677f0L))(this);
    };
    bool CDarkHoleChannel::_Reward()
    {
        using org_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*);
        return (org_ptr(0x140267ef0L))(this);
    };
    CDarkHoleChannel::~CDarkHoleChannel()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140266920L))(this);
    };
    void CDarkHoleChannel::dtor_CDarkHoleChannel()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        (org_ptr(0x140266920L))(this);
    };
    CDarkHoleChannel::__enter_member::__enter_member(bool active, bool disnormal, unsigned int time)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel::__enter_member*, bool, bool, unsigned int);
        (org_ptr(0x14026f420L))(this, active, disnormal, time);
    };
    void CDarkHoleChannel::__enter_member::ctor___enter_member(bool active, bool disnormal, unsigned int time)
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel::__enter_member*, bool, bool, unsigned int);
        (org_ptr(0x14026f420L))(this, active, disnormal, time);
    };
    CDarkHoleChannel::__enter_member::__enter_member()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel::__enter_member*);
        (org_ptr(0x14026ea50L))(this);
    };
    void CDarkHoleChannel::__enter_member::ctor___enter_member()
    {
        using org_ptr = void (WINAPIV*)(struct CDarkHoleChannel::__enter_member*);
        (org_ptr(0x14026ea50L))(this);
    };
END_ATF_NAMESPACE
