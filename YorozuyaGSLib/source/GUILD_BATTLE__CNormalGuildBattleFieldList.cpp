#include <GUILD_BATTLE__CNormalGuildBattleFieldList.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleFieldList::CNormalGuildBattleFieldList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
        (org_ptr(0x1403ee250L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleFieldList::ctor_CNormalGuildBattleFieldList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
        (org_ptr(0x1403ee250L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleFieldList::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403ee420L))();
    };
    struct CCircleZone* GUILD_BATTLE::CNormalGuildBattleFieldList::GetCircleZone(int iInx)
    {
        using org_ptr = struct CCircleZone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int);
        return (org_ptr(0x1403eed90L))(this, iInx);
    };
    struct GUILD_BATTLE::CNormalGuildBattleField* GUILD_BATTLE::CNormalGuildBattleFieldList::GetField(char byRace, unsigned int dwMapCode)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, unsigned int);
        return (org_ptr(0x1403ee870L))(this, byRace, dwMapCode);
    };
    struct GUILD_BATTLE::CNormalGuildBattleField* GUILD_BATTLE::CNormalGuildBattleFieldList::GetField(unsigned int dwMapID)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, unsigned int);
        return (org_ptr(0x1403ee950L))(this, dwMapID);
    };
    struct GUILD_BATTLE::CNormalGuildBattleField* GUILD_BATTLE::CNormalGuildBattleFieldList::GetFirstMapFieldByRace(char byRace)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char);
        return (org_ptr(0x1403eeb10L))(this, byRace);
    };
    bool GUILD_BATTLE::CNormalGuildBattleFieldList::GetFirstMapInxByRace(char byRace, char* byInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*);
        return (org_ptr(0x1403eea80L))(this, byRace, byInx);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleFieldList::GetMapCnt()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
        return (org_ptr(0x1403d0b10L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleFieldList::GetMapInx(char byRace, unsigned int dwMapCode, unsigned int* dwMapInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1403ee990L))(this, byRace, dwMapCode, dwMapInx);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleFieldList::GetMapInxList(char byRace, char* pbyInxList)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*);
        return (org_ptr(0x1403eeb70L))(this, byRace, pbyInxList);
    };
    struct CGravityStoneRegener* GUILD_BATTLE::CNormalGuildBattleFieldList::GetRegener(int iInx)
    {
        using org_ptr = struct CGravityStoneRegener* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int);
        return (org_ptr(0x1403eecf0L))(this, iInx);
    };
    struct CGravityStone* GUILD_BATTLE::CNormalGuildBattleFieldList::GetStone(int iInx)
    {
        using org_ptr = struct CGravityStone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int);
        return (org_ptr(0x1403eec50L))(this, iInx);
    };
    bool GUILD_BATTLE::CNormalGuildBattleFieldList::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
        return (org_ptr(0x1403ee4a0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleFieldList::InitUseField(char byRace, char* szKeyName, char* szStrBuff, char** szParseBuff)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*, char*, char**);
        return (org_ptr(0x1403eee30L))(this, byRace, szKeyName, szStrBuff, szParseBuff);
    };
    struct GUILD_BATTLE::CNormalGuildBattleFieldList* GUILD_BATTLE::CNormalGuildBattleFieldList::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleFieldList* (WINAPIV*)();
        return (org_ptr(0x1403ee360L))();
    };
    int GUILD_BATTLE::CNormalGuildBattleFieldList::IsRegistedMapInx(char byRace, char** szParseBuff)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char**);
        return (org_ptr(0x1403ef0c0L))(this, byRace, szParseBuff);
    };
    GUILD_BATTLE::CNormalGuildBattleFieldList::~CNormalGuildBattleFieldList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
        (org_ptr(0x1403ee2c0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleFieldList::dtor_CNormalGuildBattleFieldList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
        (org_ptr(0x1403ee2c0L))(this);
    };
END_ATF_NAMESPACE
