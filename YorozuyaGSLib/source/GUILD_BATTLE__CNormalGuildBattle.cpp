#include <GUILD_BATTLE__CNormalGuildBattle.hpp>


START_ATF_NAMESPACE
    void GUILD_BATTLE::CNormalGuildBattle::AddComplete(char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, char);
        (org_ptr(0x1403e3910L))(this, byRet);
    };
    void GUILD_BATTLE::CNormalGuildBattle::AskJoin(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, int, unsigned int, unsigned int);
        (org_ptr(0x1403e3f40L))(this, n, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattle::AskJoin()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e49e0L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattle::CNormalGuildBattle(unsigned int dwID)
        : m_k1P(0)
        , m_k2P(1)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int);
        (org_ptr(0x1403e2e40L))(this, dwID);
    };
    void GUILD_BATTLE::CNormalGuildBattle::ctor_CNormalGuildBattle(unsigned int dwID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int);
        (org_ptr(0x1403e2e40L))(this, dwID);
    };
    void GUILD_BATTLE::CNormalGuildBattle::CleanUpBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6fe0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e3660L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::ClearDBRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403e3740L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::CreateLogFile()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e7040L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::CreateLogger()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d9020L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::DecideColorInx()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e3e20L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattle::DecideWin()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403e76f0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::DividePvpPoint()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6490L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattle::DropGravityStone(unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int);
        return (org_ptr(0x1403e5830L))(this, dwCharacSerial);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuild* GUILD_BATTLE::CNormalGuildBattle::Get1P()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d9360L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuild* GUILD_BATTLE::CNormalGuildBattle::Get2P()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d9380L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuild* GUILD_BATTLE::CNormalGuildBattle::GetBlue()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f30e0L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleField* GUILD_BATTLE::CNormalGuildBattle::GetField()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1400a6a80L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattle::GetGravityStone(uint16_t wIndex, unsigned int dwObjSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, uint16_t, unsigned int, unsigned int);
        return (org_ptr(0x1403e4b80L))(this, wIndex, dwObjSerial, dwCharacSerial);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuild* GUILD_BATTLE::CNormalGuildBattle::GetGuild(unsigned int dwGuildSerial)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int);
        return (org_ptr(0x1403e3ab0L))(this, dwGuildSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattle::GetGuildBattleNumber()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d93a0L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattle::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d9340L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::GetInfo(struct _guild_battle_current_battle_info_result_zocl* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct _guild_battle_current_battle_info_result_zocl*);
        return (org_ptr(0x1403e39a0L))(this, kInfo);
    };
    struct GUILD_BATTLE::CNormalGuildBattleLogger* GUILD_BATTLE::CNormalGuildBattle::GetLogger()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleLogger* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f3100L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattle::GetObjType()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403eb090L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuild* GUILD_BATTLE::CNormalGuildBattle::GetRed()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f30c0L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattle::Goal(unsigned int dwCharacSerial, int iPortalInx)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int, int);
        return (org_ptr(0x1403e4ca0L))(this, dwCharacSerial, iPortalInx);
    };
    void GUILD_BATTLE::CNormalGuildBattle::GuildBattleResultLog()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6e10L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::GuildBattleResultLogNotifyWeb(struct _qry_case_guild_battel_result_log* Sheet)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct _qry_case_guild_battel_result_log*);
        (org_ptr(0x1403e83e0L))(this, Sheet);
    };
    void GUILD_BATTLE::CNormalGuildBattle::GuildBattleResultLogPushDBLog(struct _qry_case_guild_battel_result_log* Sheet, struct GUILD_BATTLE::CNormalGuildBattleGuildMember* pkTopGoalMember, struct GUILD_BATTLE::CNormalGuildBattleGuildMember* pkTopKillMember)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct _qry_case_guild_battel_result_log*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403e7d30L))(this, Sheet, pkTopGoalMember, pkTopKillMember);
    };
    void GUILD_BATTLE::CNormalGuildBattle::Init(struct CGuild* pk1P, struct CGuild* pk2P, struct GUILD_BATTLE::CNormalGuildBattleField* pkField, char byNumber, struct GUILD_BATTLE::CNormalGuildBattleStateList* pkStateList)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct CGuild*, struct CGuild*, struct GUILD_BATTLE::CNormalGuildBattleField*, char, struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        (org_ptr(0x1403e30d0L))(this, pk1P, pk2P, pkField, byNumber, pkStateList);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::Init(bool bToday, unsigned int uiDayID, unsigned int dwID, unsigned int dwP1GuildSerial, unsigned int dwP2GuildSerial, unsigned int dwMapID, char byNumber)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char);
        return (org_ptr(0x1403e3180L))(this, bToday, uiDayID, dwID, dwP1GuildSerial, dwP2GuildSerial, dwMapID, byNumber);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d9630L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::IsInBattle()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x14007c0a0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::IsInBattleRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d94b0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::IsMemberGuild(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int);
        return (org_ptr(0x1403d9690L))(this, dwGuildSerial);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::IsProc()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403d9200L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattle::IsReStart(unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int, unsigned int);
        return (org_ptr(0x1403e41a0L))(this, dwGuildSerial, dwCharacSerial);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::IsReadyOrCountState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x14007bfd0L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattle::Join(unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int, unsigned int);
        return (org_ptr(0x1403e3b90L))(this, dwGuildSerial, dwCharacSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattle::JudgeBattle()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403e6400L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattle::Kill(unsigned int dwSrcCharacSerial, unsigned int dwDestCharacSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int, unsigned int);
        return (org_ptr(0x1403e5c30L))(this, dwSrcCharacSerial, dwDestCharacSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattle::LeaveGuild(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct CPlayer*);
        return (org_ptr(0x1403e6070L))(this, pkPlayer);
    };
    void GUILD_BATTLE::CNormalGuildBattle::LogIn(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, int, unsigned int, unsigned int);
        (org_ptr(0x1403e4050L))(this, n, dwGuildSerial, dwCharacSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattle::NetClose(unsigned int dwCharacSerial, struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int, struct CPlayer*);
        return (org_ptr(0x1403e5940L))(this, dwCharacSerial, pkPlayer);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyAllProcessEnd()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e57a0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyBallPosition()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e53e0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyBattleResult(char byResult)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, char);
        (org_ptr(0x1403e6a90L))(this, byResult);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyBeforeStart()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e50e0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyCommitteeMemberPosition(unsigned int dwGuildSerial, unsigned int dwChracSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int, unsigned int);
        (org_ptr(0x1403e55b0L))(this, dwGuildSerial, dwChracSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyDestoryBall(unsigned int dwOwnerSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, unsigned int);
        (org_ptr(0x1403e5510L))(this, dwOwnerSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattle::NotifyPassGravityStoneLimitTime()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e5700L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::Process()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403d92f0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::PushDQSDrawRank()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e7b70L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::PushDQSWinLoseRank()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e7c40L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattle::ReStart(struct CPlayer* pkPlayer, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct CPlayer*, unsigned int, unsigned int);
        return (org_ptr(0x1403e42a0L))(this, pkPlayer, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattle::RewardGuildBattleMoney()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6840L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::RewardItem()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6960L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::Save()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403e37c0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendDrawResult()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e78e0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendGoalMsg(bool b1P, char* wszGuildName, struct CPlayer* pkPlayer, int iPortalInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, bool, char*, struct CPlayer*, int);
        (org_ptr(0x1403e71c0L))(this, b1P, wszGuildName, pkPlayer, iPortalInx);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendKillInform()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e7590L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendWebAddScheduleInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e8690L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendWebBattleEndInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6d50L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendWebBattleStartInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e6c90L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SendWinLoseResult()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e79f0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattle::SetGotoRegenStart()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f3240L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::SetReadyState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e3b30L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattle::Start(struct CPlayer* pkPlayer, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, struct CPlayer*, unsigned int, unsigned int);
        return (org_ptr(0x1403e4640L))(this, pkPlayer, dwGuildSerial, dwCharacSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattle::TakeGravityStone(int iPortalInx, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*, int, unsigned int);
        return (org_ptr(0x1403e4a60L))(this, iPortalInx, dwCharacSerial);
    };
    GUILD_BATTLE::CNormalGuildBattle::~CNormalGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e2fb0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattle::dtor_CNormalGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattle*);
        (org_ptr(0x1403e2fb0L))(this);
    };
END_ATF_NAMESPACE
