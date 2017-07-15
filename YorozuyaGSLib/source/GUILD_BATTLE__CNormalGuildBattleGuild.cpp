#include <GUILD_BATTLE__CNormalGuildBattleGuild.hpp>


START_ATF_NAMESPACE
    void GUILD_BATTLE::CNormalGuildBattleGuild::AskJoin(char* wszDestGuildName)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*);
        (org_ptr(0x1403e1ed0L))(this, wszDestGuildName);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::AskJoin(int n, char* wszDestGuildName, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, char*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403e2c80L))(this, n, wszDestGuildName, kLogger);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::AskJoin(int n, unsigned int dwSerial, char GuildBattleNumber, char* wszDestGuild, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, char, char*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403e0d20L))(this, n, dwSerial, GuildBattleNumber, wszDestGuild, kLogger);
    };
    GUILD_BATTLE::CNormalGuildBattleGuild::CNormalGuildBattleGuild(char byID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
        (org_ptr(0x1403e04c0L))(this, byID);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::ctor_CNormalGuildBattleGuild(char byID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
        (org_ptr(0x1403e04c0L))(this, byID);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::CleanUpBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403e1e50L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403e0600L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::ClearInBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403e1680L))(this);
    };
    long double GUILD_BATTLE::CNormalGuildBattleGuild::DecPvpPoint(struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = long double (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403e1860L))(this, kLogger);
    };
    char* GUILD_BATTLE::CNormalGuildBattleGuild::GetANSIGuildName()
    {
        using org_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e0770L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleGuild::GetColorInx()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eafc0L))(this);
    };
    char* GUILD_BATTLE::CNormalGuildBattleGuild::GetColorName()
    {
        using org_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eb320L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleGuild::GetEmptyMember()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e29e0L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuild::GetGoalCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eb150L))(this);
    };
    CGuild* GUILD_BATTLE::CNormalGuildBattleGuild::GetGuild()
    {
        using org_ptr = CGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eb130L))(this);
    };
    char* GUILD_BATTLE::CNormalGuildBattleGuild::GetGuildName()
    {
        using org_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e0710L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleGuild::GetGuildRace()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e0830L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuild::GetGuildSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e07d0L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuild::GetJoinMemberCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e2b20L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuild::GetKillCountSum()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eb3f0L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuild::GetMaxJoinMemberCount()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eb410L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleGuild::GetMember(unsigned int dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403e2a60L))(this, dwSerial);
    };
    struct CPlayer* GUILD_BATTLE::CNormalGuildBattleGuild::GetMemberPlayer(unsigned int dwSerial)
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403e0890L))(this, dwSerial);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuildMember* GUILD_BATTLE::CNormalGuildBattleGuild::GetMemberPtr(unsigned int dwSerial)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403e0a00L))(this, dwSerial);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuild::GetScore()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403eb170L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuildMember* GUILD_BATTLE::CNormalGuildBattleGuild::GetTopGoalMember()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e0b00L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleGuildMember* GUILD_BATTLE::CNormalGuildBattleGuild::GetTopKillMember()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e0a70L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::Goal(struct GUILD_BATTLE::CNormalGuildBattleGuildMember* pkMember)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403e1600L))(this, pkMember);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::IncPvpPoint(long double dTotalInc, char byWin, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, long double, char, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403e1730L))(this, dTotalInc, byWin, kLogger);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuild::IsJoinMember(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403e2bc0L))(this, dwSerial);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuild::IsMember(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403eb1b0L))(this, dwSerial);
    };
    int GUILD_BATTLE::CNormalGuildBattleGuild::IsReStart(unsigned int dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403e0970L))(this, dwSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattleGuild::Join(unsigned int dwSerial, char GuildBattleNumber, int* iMemberInx, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, char, int*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403e0b90L))(this, dwSerial, GuildBattleNumber, iMemberInx, kLogger);
    };
    int GUILD_BATTLE::CNormalGuildBattleGuild::Kill(struct GUILD_BATTLE::CNormalGuildBattleGuildMember* pkSrcMember, struct GUILD_BATTLE::CNormalGuildBattleGuildMember* pkDestMember)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403e1560L))(this, pkSrcMember, pkDestMember);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::LeaveGuild(unsigned int dwSerial, bool bInGuildBattle, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, bool, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403e1460L))(this, dwSerial, bInGuildBattle, kLogger);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::LogIn(int n, unsigned int dwSerial, char GuildBattleNumber, char* wszDestGuild, unsigned int uiID, struct GUILD_BATTLE::CNormalGuildBattleField* pkField, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, char, char*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403e0dd0L))(this, n, dwSerial, GuildBattleNumber, wszDestGuild, uiID, pkField, kLogger);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::MoveMap(unsigned int uiID, struct GUILD_BATTLE::CNormalGuildBattleField* pkField)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403e0f60L))(this, uiID, pkField);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuild::MoveMember(int iMember, unsigned int uiID, struct GUILD_BATTLE::CNormalGuildBattleField* pkField, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403e1140L))(this, iMember, uiID, pkField, kLogger);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuild::NetClose(bool bInGuildBattle, unsigned int dwSerial, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403e13b0L))(this, bInGuildBattle, dwSerial, kLogger);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::NotifyLeftMinuteBeforeStart(char byLeftMin)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
        (org_ptr(0x1403e2050L))(this, byLeftMin);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::ReturnBindPosAll()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403e1cc0L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleGuild::ReturnHQPosAll()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        return (org_ptr(0x1403e1b50L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuild::ReturnStartPosAll(struct GUILD_BATTLE::CNormalGuildBattleField* pkField)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403e1d50L))(this, pkField);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::RewardItem(struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403e19b0L))(this, kLogger);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendDeleteNotifyPositionMember(int iMemberInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int);
        (org_ptr(0x1403e2d80L))(this, iMemberInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendGetGravityStone(struct GUILD_BATTLE::CNormalGuildBattleGuild* pkTakeGuild, struct CPlayer* pkPlayer, int iTakePortalInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*, int);
        (org_ptr(0x1403e2550L))(this, pkTakeGuild, pkPlayer, iTakePortalInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendMsg(char* byType, char* pMsg, unsigned int uiSize)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int);
        (org_ptr(0x1403e2730L))(this, byType, pMsg, uiSize);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendMsg(char* byType, char* pMsg, unsigned int uiSize, int iExeceptMemberInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, int);
        (org_ptr(0x1403e2800L))(this, byType, pMsg, uiSize, iExeceptMemberInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendMsg(char* byType, char* pMsg, unsigned int uiSize, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, unsigned int);
        (org_ptr(0x1403e28e0L))(this, byType, pMsg, uiSize, dwSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendOhterNotifyCommitteeMemberPosition(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*);
        (org_ptr(0x1403e22d0L))(this, pkPlayer);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendRegenBall(int iPortalInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int);
        (org_ptr(0x1403e2150L))(this, iPortalInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendSelfNotifyCommitteeMemberPositionList(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*);
        (org_ptr(0x1403e23d0L))(this, pkPlayer);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SendStartNotifyCommitteeMemberPosition(int iMember)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int);
        (org_ptr(0x1403e2250L))(this, iMember);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SetColorInx(char byInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
        (org_ptr(0x1403eb190L))(this, byInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::SetGuild(struct CGuild* pkGuild)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CGuild*);
        (org_ptr(0x1403eb0a0L))(this, pkGuild);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuild::SetReStartFlag(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
        return (org_ptr(0x1403e0900L))(this, dwSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::UpdateScore()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403eae20L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleGuild::~CNormalGuildBattleGuild()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403e05a0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuild::dtor_CNormalGuildBattleGuild()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
        (org_ptr(0x1403e05a0L))(this);
    };
    
    
END_ATF_NAMESPACE
