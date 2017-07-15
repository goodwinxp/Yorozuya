#include <GUILD_BATTLE__CGuildBattleStateList.hpp>


START_ATF_NAMESPACE
    void GUILD_BATTLE::CGuildBattleStateList::Advance(int iAdvance)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, int);
        (org_ptr(0x1403df610L))(this, iAdvance);
    };
    GUILD_BATTLE::CGuildBattleStateList::CGuildBattleStateList(int iStateMax, int iLoopType, unsigned int uiLoopCnt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, int, int, unsigned int);
        (org_ptr(0x1403def90L))(this, iStateMax, iLoopType, uiLoopCnt);
    };
    void GUILD_BATTLE::CGuildBattleStateList::ctor_CGuildBattleStateList(int iStateMax, int iLoopType, unsigned int uiLoopCnt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, int, int, unsigned int);
        (org_ptr(0x1403def90L))(this, iStateMax, iLoopType, uiLoopCnt);
    };
    int GUILD_BATTLE::CGuildBattleStateList::CheckLoop()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        return (org_ptr(0x1403df4d0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleStateList::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x1403df030L))(this);
    };
    void GUILD_BATTLE::CGuildBattleStateList::ForceNext()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x1403df6a0L))(this);
    };
    struct ::ATF::ATL::CTimeSpan* GUILD_BATTLE::CGuildBattleStateList::GetTerm(struct ::ATF::ATL::CTimeSpan* result)
    {
        using org_ptr = struct ::ATF::ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, struct ::ATF::ATL::CTimeSpan*);
        return (org_ptr(0x1403df470L))(this, result);
    };
    int GUILD_BATTLE::CGuildBattleStateList::Goto()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        return (org_ptr(0x1403df2c0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleStateList::GotoState(int iState)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, int);
        return (org_ptr(0x1403f3370L))(this, iState);
    };
    bool GUILD_BATTLE::CGuildBattleStateList::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        return (org_ptr(0x1403df8e0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleStateList::IsProc()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        return (org_ptr(0x1403d9250L))(this);
    };
    void GUILD_BATTLE::CGuildBattleStateList::Log(char* szMsg)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, char*);
        (org_ptr(0x1403df340L))(this, szMsg);
    };
    int GUILD_BATTLE::CGuildBattleStateList::Next(bool bForce)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, bool);
        return (org_ptr(0x1403df220L))(this, bForce);
    };
    void GUILD_BATTLE::CGuildBattleStateList::Process(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*, struct GUILD_BATTLE::CGuildBattle*);
        (org_ptr(0x1403df090L))(this, pkBattle);
    };
    void GUILD_BATTLE::CGuildBattleStateList::SetNextState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x14007f830L))(this);
    };
    void GUILD_BATTLE::CGuildBattleStateList::SetReady()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x1403eb0d0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleStateList::SetWait()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x1403eb110L))(this);
    };
    GUILD_BATTLE::CGuildBattleStateList::~CGuildBattleStateList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x14007f810L))(this);
    };
    void GUILD_BATTLE::CGuildBattleStateList::dtor_CGuildBattleStateList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x14007f810L))(this);
    };
    
END_ATF_NAMESPACE
