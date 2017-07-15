#include <GUILD_BATTLE__CNormalGuildBattleLogger.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleLogger::CNormalGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403eb070L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleLogger::ctor_CNormalGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403eb070L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleLogger::CreateLogFile(char* szLogName)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*, char*);
        (org_ptr(0x1403ced50L))(this, szLogName);
    };
    bool GUILD_BATTLE::CNormalGuildBattleLogger::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        return (org_ptr(0x1403cec70L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleLogger::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*, char*);
        (org_ptr(0x1403cee40L))(this, fmt);
    };
    void GUILD_BATTLE::CNormalGuildBattleLogger::Log(wchar_t* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*, wchar_t*);
        (org_ptr(0x1403ceed0L))(this, fmt);
    };
    GUILD_BATTLE::CNormalGuildBattleLogger::~CNormalGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403cebe0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleLogger::dtor_CNormalGuildBattleLogger()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleLogger*);
        (org_ptr(0x1403cebe0L))(this);
    };
END_ATF_NAMESPACE
