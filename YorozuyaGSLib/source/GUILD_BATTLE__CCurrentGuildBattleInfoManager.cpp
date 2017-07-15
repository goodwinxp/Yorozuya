#include <GUILD_BATTLE__CCurrentGuildBattleInfoManager.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CCurrentGuildBattleInfoManager::CCurrentGuildBattleInfoManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*);
        (org_ptr(0x1403cde40L))(this);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::ctor_CCurrentGuildBattleInfoManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*);
        (org_ptr(0x1403cde40L))(this);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*);
        (org_ptr(0x1403ce510L))(this);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::Clear(unsigned int uiMapID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*, unsigned int);
        (org_ptr(0x1403ce220L))(this, uiMapID);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403cdf80L))();
    };
    char GUILD_BATTLE::CCurrentGuildBattleInfoManager::GetLeftTime(unsigned int uiMapID)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*, unsigned int);
        return (org_ptr(0x1403ce5c0L))(this, uiMapID);
    };
    bool GUILD_BATTLE::CCurrentGuildBattleInfoManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*);
        return (org_ptr(0x1403ce000L))(this);
    };
    struct GUILD_BATTLE::CCurrentGuildBattleInfoManager* GUILD_BATTLE::CCurrentGuildBattleInfoManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CCurrentGuildBattleInfoManager* (WINAPIV*)();
        return (org_ptr(0x1403cdec0L))();
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::Send(int n, unsigned int uiMapID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*, int, unsigned int);
        (org_ptr(0x1403ce3d0L))(this, n, uiMapID);
    };
    bool GUILD_BATTLE::CCurrentGuildBattleInfoManager::Set(unsigned int uiMapID, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403ce160L))(this, uiMapID, pkBattle);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::UpdateGoalCnt(unsigned int uiMapID, char byColorInx, unsigned int dwGoalCnt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*, unsigned int, char, unsigned int);
        (org_ptr(0x1403ce340L))(this, uiMapID, byColorInx, dwGoalCnt);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::UpdateScore(unsigned int uiMapID, char byColorInx, unsigned int dwScore)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*, unsigned int, char, unsigned int);
        (org_ptr(0x1403ce2b0L))(this, uiMapID, byColorInx, dwScore);
    };
    GUILD_BATTLE::CCurrentGuildBattleInfoManager::~CCurrentGuildBattleInfoManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*);
        (org_ptr(0x1403cde80L))(this);
    };
    void GUILD_BATTLE::CCurrentGuildBattleInfoManager::dtor_CCurrentGuildBattleInfoManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CCurrentGuildBattleInfoManager*);
        (org_ptr(0x1403cde80L))(this);
    };
END_ATF_NAMESPACE
