#include <CHolyStoneSystem.hpp>


START_ATF_NAMESPACE
    void CHolyStoneSystem::AlterSchedule(char byScheduleCode, char byNumOfTime)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char, char);
        (org_ptr(0x14027b2b0L))(this, byScheduleCode, byNumOfTime);
    };
    bool CHolyStoneSystem::AuthMiningTicket(unsigned int dwKey)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        return (org_ptr(0x14027dbd0L))(this, dwKey);
    };
    CHolyStoneSystem::CHolyStoneSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027a780L))(this);
    };
    void CHolyStoneSystem::ctor_CHolyStoneSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027a780L))(this);
    };
    void CHolyStoneSystem::CheckDestroyerIsArriveMine()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027ced0L))(this);
    };
    bool CHolyStoneSystem::CheckHolyMaster(struct CPlayer* pAtter, char byDestroyStoneRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, char);
        return (org_ptr(0x14027dd50L))(this, pAtter, byDestroyStoneRaceCode);
    };
    void CHolyStoneSystem::CheckKeeperPlusTime()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027dcb0L))(this);
    };
    bool CHolyStoneSystem::ContinueStartSystem()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14027aff0L))(this);
    };
    void CHolyStoneSystem::CreateHolyKeeper(int nCreateType)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x14027d8b0L))(this, nCreateType);
    };
    void CHolyStoneSystem::CreateHolyStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027d4a0L))(this);
    };
    void CHolyStoneSystem::DestroyHolyKeeper()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027db80L))(this);
    };
    void CHolyStoneSystem::DestroyHolyStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027d790L))(this);
    };
    struct _QUEST_CASH* CHolyStoneSystem::FindStoragedQuestCash(unsigned int dwAvatorSerial)
    {
        using org_ptr = struct _QUEST_CASH* (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        return (org_ptr(0x140079640L))(this, dwAvatorSerial);
    };
    int CHolyStoneSystem::GetControlLeftTime()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14027e690L))(this);
    };
    int CHolyStoneSystem::GetDestroyStoneRace()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1403b7d80L))(this);
    };
    unsigned int CHolyStoneSystem::GetDestroyerGuildSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140079620L))(this);
    };
    unsigned int CHolyStoneSystem::GetDestroyerSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14007da40L))(this);
    };
    int CHolyStoneSystem::GetDestroyerState()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400a6a40L))(this);
    };
    bool CHolyStoneSystem::GetGoldBoxConsumable()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140416c40L))(this);
    };
    int CHolyStoneSystem::GetHolyMasterRace()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400ef2b0L))(this);
    };
    char* CHolyStoneSystem::GetHolyMentalString()
    {
        using org_ptr = char* (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14029d6b0L))(this);
    };
    char CHolyStoneSystem::GetKeeperDestroyRace()
    {
        using org_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140284d10L))(this);
    };
    struct CMapData* CHolyStoneSystem::GetMapData()
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400d02c0L))(this);
    };
    char CHolyStoneSystem::GetNumOfTime()
    {
        using org_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400795e0L))(this);
    };
    struct _portal_dummy* CHolyStoneSystem::GetPortalDummy(char byRace)
    {
        using org_ptr = struct _portal_dummy* (WINAPIV*)(struct CHolyStoneSystem*, char);
        return (org_ptr(0x140282130L))(this, byRace);
    };
    int CHolyStoneSystem::GetSceneCode()
    {
        using org_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140079600L))(this);
    };
    unsigned int CHolyStoneSystem::GetStartBattleTickTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14027b5c0L))(this);
    };
    char CHolyStoneSystem::GetStartDay()
    {
        using org_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400795a0L))(this);
    };
    char CHolyStoneSystem::GetStartHour()
    {
        using org_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400795c0L))(this);
    };
    char CHolyStoneSystem::GetStartMin()
    {
        using org_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1402845f0L))(this);
    };
    char CHolyStoneSystem::GetStartMonth()
    {
        using org_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140079580L))(this);
    };
    uint16_t CHolyStoneSystem::GetStartYear()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140079560L))(this);
    };
    void CHolyStoneSystem::GiveHSKQuest()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027d1a0L))(this);
    };
    void CHolyStoneSystem::HSKRespawnSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027ca40L))(this);
    };
    bool CHolyStoneSystem::InitHolySystem()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14027ac60L))(this);
    };
    void CHolyStoneSystem::InitQuestCash()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x140284a00L))(this);
    };
    void CHolyStoneSystem::InitQuestCash_Other()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x140281ef0L))(this);
    };
    bool CHolyStoneSystem::IsControlScene()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x14007a010L))(this);
    };
    bool CHolyStoneSystem::IsItemLootAuthority(struct CPlayer* pOne, char byCreateCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, char);
        return (org_ptr(0x1402811d0L))(this, pOne, byCreateCode);
    };
    bool CHolyStoneSystem::IsMentalPass()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x140282170L))(this);
    };
    bool CHolyStoneSystem::IsMinigeTicketCheck()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1400d0140L))(this);
    };
    bool CHolyStoneSystem::IsUseReturnItem(unsigned int dwObjSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        return (org_ptr(0x1400c8c70L))(this, dwObjSerial);
    };
    void CHolyStoneSystem::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027b490L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_BATTLE_END_WAIT_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c3e0L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_BATTLE_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c120L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_INIT()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c0d0L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_KEEPER_ATTACKABLE_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c540L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_KEEPER_CHAOS_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c770L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_KEEPER_DEATTACKABLE_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c610L))(this);
    };
    void CHolyStoneSystem::On_HS_SCENE_KEEPER_DIE_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027c720L))(this);
    };
    void CHolyStoneSystem::PeneltyFailRace(char byFailRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        (org_ptr(0x140280dd0L))(this, byFailRace);
    };
    void CHolyStoneSystem::PeneltyLoseRace(char byDestroyedRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        (org_ptr(0x140280b30L))(this, byDestroyedRace);
    };
    struct _QUEST_CASH_OTHER* CHolyStoneSystem::PopStoredQuestCash_Other(unsigned int dwAvatorSerial)
    {
        using org_ptr = struct _QUEST_CASH_OTHER* (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        return (org_ptr(0x140282080L))(this, dwAvatorSerial);
    };
    void CHolyStoneSystem::PushQuestCash_Other(unsigned int dwAvatorSerial, char byStoneMapMoveInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, char);
        (org_ptr(0x140281f70L))(this, dwAvatorSerial, byStoneMapMoveInfo);
    };
    void CHolyStoneSystem::PushStoreQuestCash(unsigned int dwAvatorSerial, char byQuestType, int nPvpPoint, uint16_t wKillPoint, uint16_t wDiePoint, char byCristalBattleDBInfo, char byHSKTime)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, char, int, uint16_t, uint16_t, char, char);
        (org_ptr(0x140280310L))(this, dwAvatorSerial, byQuestType, nPvpPoint, wKillPoint, wDiePoint, byCristalBattleDBInfo, byHSKTime);
    };
    void CHolyStoneSystem::ReceiveDestroyKeeper(struct CCharacter* pCharacter)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CCharacter*);
        (org_ptr(0x14027cd30L))(this, pCharacter);
    };
    void CHolyStoneSystem::RecoverPvpCash()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x140281070L))(this);
    };
    void CHolyStoneSystem::ReleaseLastAttBuff()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x1402814b0L))(this);
    };
    void CHolyStoneSystem::SendHolyStoneHP(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*);
        (org_ptr(0x14027ffc0L))(this, pkPlayer);
    };
    void CHolyStoneSystem::SendHolyStoneHPToRaceBoss()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027e9c0L))(this);
    };
    void CHolyStoneSystem::SendIsArriveDestroyer(char byArrive)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        (org_ptr(0x14027e860L))(this, byArrive);
    };
    void CHolyStoneSystem::SendMsg_CreateHolyMaster(struct CPlayer* pkDestroyer, int nControlSec)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, int);
        (org_ptr(0x14027f280L))(this, pkDestroyer, nControlSec);
    };
    void CHolyStoneSystem::SendMsg_EndBattle(char byLoseRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        (org_ptr(0x14027ec30L))(this, byLoseRace);
    };
    void CHolyStoneSystem::SendMsg_EnterKeeper(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x14027f510L))(this, n);
    };
    void CHolyStoneSystem::SendMsg_EnterStone(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x14027f9a0L))(this, n);
    };
    void CHolyStoneSystem::SendMsg_ExitStone()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027eb70L))(this);
    };
    void CHolyStoneSystem::SendMsg_HolyKeeperAttackAbleState(bool bAttackAble)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, bool);
        (org_ptr(0x14027fee0L))(this, bAttackAble);
    };
    void CHolyStoneSystem::SendMsg_HolyKeeperStateChaos()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027fe10L))(this);
    };
    void CHolyStoneSystem::SendMsg_HolyStoneSystemState(int nPlayerIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x14027f410L))(this, nPlayerIndex);
    };
    void CHolyStoneSystem::SendMsg_NoticeNextQuest(int n, char byStoneMapMoveInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int, char);
        (org_ptr(0x140280150L))(this, n, byStoneMapMoveInfo);
    };
    void CHolyStoneSystem::SendMsg_NotifyHolyKeeperAttackTimeBeKeepKeeper(bool bKeepKeeper)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, bool);
        (org_ptr(0x14027c7e0L))(this, bKeepKeeper);
    };
    void CHolyStoneSystem::SendMsg_StartBattle()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027fd40L))(this);
    };
    void CHolyStoneSystem::SendMsg_WaitKeeper(int n, char byWaitType)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int, char);
        (org_ptr(0x14027f7c0L))(this, n, byWaitType);
    };
    void CHolyStoneSystem::SendMsg_WaitStone(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x14027f8c0L))(this, n);
    };
    void CHolyStoneSystem::SendMsg_to_webagent_about_last_attacker_for_keeper(struct CPlayer* pPlayer, int bByAnimus)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, int);
        (org_ptr(0x14027c8a0L))(this, pPlayer, bByAnimus);
    };
    void CHolyStoneSystem::SendNotifyHolyStoneDestroyedToRaceBoss()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027fc00L))(this);
    };
    void CHolyStoneSystem::SendSMS_CompleteQuest(char byDestroyedRace, char* pwszMasterName, int nControlSec, char* szMasterClass, char byMasterLv)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char, char*, int, char*, char);
        (org_ptr(0x14027ed20L))(this, byDestroyedRace, pwszMasterName, nControlSec, szMasterClass, byMasterLv);
    };
    void CHolyStoneSystem::SendSMS_MineTimeExtend(int nControlSec)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x14027e720L))(this, nControlSec);
    };
    void CHolyStoneSystem::SetDestroyStoneRace(int nRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x140284b90L))(this, nRace);
    };
    void CHolyStoneSystem::SetEffectToDestroyerGuildMember()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x1402813a0L))(this);
    };
    void CHolyStoneSystem::SetGoldBoxConsumable(bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, bool);
        (org_ptr(0x1400f77d0L))(this, bFlag);
    };
    void CHolyStoneSystem::SetHolyMasterRace(int nMaster)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        (org_ptr(0x140284b60L))(this, nMaster);
    };
    void CHolyStoneSystem::SetKeeperDestroyRace(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        (org_ptr(0x1402847a0L))(this, byRace);
    };
    bool CHolyStoneSystem::SetScene(char byNumOfTime, int nSceneCode, unsigned int nPassTime, int nChangeReason)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, char, int, unsigned int, int);
        return (org_ptr(0x14027b840L))(this, byNumOfTime, nSceneCode, nPassTime, nChangeReason);
    };
    void CHolyStoneSystem::SetTermTimeDefault(char byNumOfTime)
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        (org_ptr(0x14027b520L))(this, byNumOfTime);
    };
    void CHolyStoneSystem::UnAllRegisterPerAutoMine()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027b740L))(this);
    };
    void CHolyStoneSystem::UpdateNotifyHolyStoneHPToRaceBoss()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027cc80L))(this);
    };
    void CHolyStoneSystem::WriteLogPer10Min_Combat()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x1402804e0L))(this);
    };
    bool CHolyStoneSystem::ct_KeeperStart(int nKeeperState, int nRace, int nPassTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, int, int, int);
        return (org_ptr(0x140281610L))(this, nKeeperState, nRace, nPassTime);
    };
    bool CHolyStoneSystem::ct_State(struct CPlayer* pOne)
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*);
        return (org_ptr(0x1402816b0L))(this, pOne);
    };
    bool CHolyStoneSystem::ct_StopBattle()
    {
        using org_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        return (org_ptr(0x1402815b0L))(this);
    };
    CHolyStoneSystem::~CHolyStoneSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027aa80L))(this);
    };
    void CHolyStoneSystem::dtor_CHolyStoneSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        (org_ptr(0x14027aa80L))(this);
    };
    
END_ATF_NAMESPACE
