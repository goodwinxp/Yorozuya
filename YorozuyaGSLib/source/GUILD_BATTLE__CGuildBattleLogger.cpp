#include <GUILD_BATTLE__CGuildBattleLogger.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleLogger::CGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*);
        (org_ptr(0x1403ce6f0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleLogger::ctor_CGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*);
        (org_ptr(0x1403ce6f0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleLogger::CreateLogFile(char* szLogName)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*, char*);
        (org_ptr(0x1403ce9e0L))(this, szLogName);
    };
    void GUILD_BATTLE::CGuildBattleLogger::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403ce850L))();
    };
    bool GUILD_BATTLE::CGuildBattleLogger::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*);
        return (org_ptr(0x1403ce8d0L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleLogger* GUILD_BATTLE::CGuildBattleLogger::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleLogger* (WINAPIV*)();
        return (org_ptr(0x1403ce790L))();
    };
    void GUILD_BATTLE::CGuildBattleLogger::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*, char*);
        (org_ptr(0x1403ceac0L))(this, fmt);
    };
    void GUILD_BATTLE::CGuildBattleLogger::Log(wchar_t* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*, wchar_t*);
        (org_ptr(0x1403ceb50L))(this, fmt);
    };
    GUILD_BATTLE::CGuildBattleLogger::~CGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*);
        (org_ptr(0x1403ce710L))(this);
    };
    void GUILD_BATTLE::CGuildBattleLogger::dtor_CGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleLogger*);
        (org_ptr(0x1403ce710L))(this);
    };
END_ATF_NAMESPACE
