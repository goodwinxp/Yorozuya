#include <GUILD_BATTLE__CNormalGuildBattleGuildMember.hpp>


START_ATF_NAMESPACE
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::AddGoldCnt()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403eae50L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::AddKillCnt()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403eadf0L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleGuildMember::CNormalGuildBattleGuildMember()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403df960L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::ctor_CNormalGuildBattleGuildMember()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403df960L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::CleanUpBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403e00d0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403df9b0L))(this);
    };
    long double GUILD_BATTLE::CNormalGuildBattleGuildMember::DecPvpPoint(struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = long double (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403dfe10L))(this, kLogger);
    };
    uint16_t GUILD_BATTLE::CNormalGuildBattleGuildMember::GetGoalCount()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403eb380L))(this);
    };
    uint16_t GUILD_BATTLE::CNormalGuildBattleGuildMember::GetIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403e0300L))(this);
    };
    uint16_t GUILD_BATTLE::CNormalGuildBattleGuildMember::GetKillCount()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403eb360L))(this);
    };
    CPlayer* GUILD_BATTLE::CNormalGuildBattleGuildMember::GetPlayer()
    {
        using org_ptr = CPlayer* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403e0290L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleGuildMember::GetSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403eafa0L))(this);
    };
    long double GUILD_BATTLE::CNormalGuildBattleGuildMember::IncPvpPoint(long double dInc, struct GUILD_BATTLE::CNormalGuildBattleLogger* kLogger)
    {
        using org_ptr = long double (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, long double, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403dfce0L))(this, dInc, kLogger);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuildMember::IsCommitteeMember()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403e0220L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuildMember::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403ead50L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuildMember::IsEnableStart()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403e01b0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuildMember::IsExist()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403e0130L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleGuildMember::IsReStart()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        return (org_ptr(0x1403eadd0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::Join(struct _guild_member_info* pkMember)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, struct _guild_member_info*);
        (org_ptr(0x1403dfa30L))(this, pkMember);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::Login()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403dfa80L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::NetClose()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403dfae0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::PushDQSPvpPoint(unsigned int dwPvpPoint)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, unsigned int);
        (org_ptr(0x1403e03f0L))(this, dwPvpPoint);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::ReturnBindPos()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403e0020L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::ReturnStartPos()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403dffc0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::Send(char* byType, char* pSend, unsigned int uiSize)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, char*, char*, unsigned int);
        (org_ptr(0x1403e0360L))(this, byType, pSend, uiSize);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::SetBattleState(bool bFlag, char byColorInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, bool, char);
        (org_ptr(0x1403dfc80L))(this, bFlag, byColorInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::SetReStartFlag()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403eadb0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::StockOldInfo()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403dfb40L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleGuildMember::~CNormalGuildBattleGuildMember()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403df9a0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleGuildMember::dtor_CNormalGuildBattleGuildMember()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
        (org_ptr(0x1403df9a0L))(this);
    };
END_ATF_NAMESPACE
