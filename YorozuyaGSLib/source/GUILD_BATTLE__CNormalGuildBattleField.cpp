#include <GUILD_BATTLE__CNormalGuildBattleField.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleField::CNormalGuildBattleField()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403eb7b0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleField::ctor_CNormalGuildBattleField()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403eb7b0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleField::CheatDestroyStone()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403ed6c0L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::CheatDropStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct CPlayer*);
        return (org_ptr(0x1403ed7c0L))(this, pkPlayer);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::CheatForceTakeStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct CPlayer*);
        return (org_ptr(0x1403ed8c0L))(this, pkPlayer);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::CheatGetStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct CPlayer*);
        return (org_ptr(0x1403ed760L))(this, pkPlayer);
    };
    int GUILD_BATTLE::CNormalGuildBattleField::CheatRegenStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct CPlayer*);
        return (org_ptr(0x1403ed550L))(this, pkPlayer);
    };
    int GUILD_BATTLE::CNormalGuildBattleField::CheatRegenStone(unsigned int uiPos)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, unsigned int);
        return (org_ptr(0x1403ed490L))(this, uiPos);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::CheatTakeStone(int iPortalInx, struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, int, struct CPlayer*);
        return (org_ptr(0x1403ed710L))(this, iPortalInx, pkPlayer);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::CheckBallTakeLimitTime()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ed0f0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::CheckIsInTown()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ed070L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::ClearBall()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ed140L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::ClearRegen()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ed190L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::CreateFieldObject()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ec630L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleField::Destroy()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403eded0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleField::DestroyFieldObject()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403ec810L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::DropBall(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct CPlayer*);
        return (org_ptr(0x1403ece10L))(this, pkPlayer);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::GetBall(uint16_t wIndex, unsigned int dwObjSerial, struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, uint16_t, unsigned int, struct CPlayer*);
        return (org_ptr(0x1403ecd90L))(this, wIndex, dwObjSerial, pkPlayer);
    };
    struct CPlayer* GUILD_BATTLE::CNormalGuildBattleField::GetBallOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ed210L))(this);
    };
    struct CCircleZone* GUILD_BATTLE::CNormalGuildBattleField::GetCircleZone(int iInx)
    {
        using org_ptr = struct CCircleZone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, int);
        return (org_ptr(0x1403eca10L))(this, iInx);
    };
    struct CMapData* GUILD_BATTLE::CNormalGuildBattleField::GetMap()
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1400a6a60L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleField::GetMapCode()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ec950L))(this);
    };
    unsigned int GUILD_BATTLE::CNormalGuildBattleField::GetMapID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403eb0f0L))(this);
    };
    char* GUILD_BATTLE::CNormalGuildBattleField::GetMapStrCode()
    {
        using org_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ec910L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleField::GetPortalIndexInfo(int* iRedPortalInx, int* iBluePortalInx, int* piRegenPortalInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, int*, int*, int*);
        (org_ptr(0x1403ecaf0L))(this, iRedPortalInx, iBluePortalInx, piRegenPortalInx);
    };
    struct CGravityStoneRegener* GUILD_BATTLE::CNormalGuildBattleField::GetRegener(int iInx)
    {
        using org_ptr = struct CGravityStoneRegener* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, int);
        return (org_ptr(0x1403ec980L))(this, iInx);
    };
    struct CGravityStone* GUILD_BATTLE::CNormalGuildBattleField::GetStone()
    {
        using org_ptr = struct CGravityStone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403f0360L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::Init(unsigned int uiMapInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, unsigned int);
        return (org_ptr(0x1403eb870L))(this, uiMapInx);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::IsGoal(struct CPlayer* pkPlayer, int iPortalInx)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct CPlayer*, int);
        return (org_ptr(0x1403ece70L))(this, pkPlayer, iPortalInx);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::LoadDummys(char* szSectionName, char* szKeyName, char* szItemName, unsigned int* uiCnt, struct _dummy_position*** ppDummy)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, char*, char*, char*, unsigned int*, struct _dummy_position***);
        return (org_ptr(0x1403ed930L))(this, szSectionName, szKeyName, szItemName, uiCnt, ppDummy);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::MoveStartPos(char byStartPos, char byMapOutType, struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, char, char, struct CPlayer*);
        return (org_ptr(0x1403ed280L))(this, byStartPos, byMapOutType, pkPlayer);
    };
    int GUILD_BATTLE::CNormalGuildBattleField::RegenBall()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        return (org_ptr(0x1403ecbe0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::SetPortalInx(struct _dummy_position** ppkDummy, int** iPortalInx, unsigned int uiCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, struct _dummy_position**, int**, unsigned int);
        return (org_ptr(0x1403edd60L))(this, ppkDummy, iPortalInx, uiCnt);
    };
    bool GUILD_BATTLE::CNormalGuildBattleField::Start(char byStartPos, struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, char, struct CPlayer*);
        return (org_ptr(0x1403ed410L))(this, byStartPos, pkPlayer);
    };
    char GUILD_BATTLE::CNormalGuildBattleField::TakeBall(int iPortalInx, struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*, int, struct CPlayer*);
        return (org_ptr(0x1403ecc60L))(this, iPortalInx, pkPlayer);
    };
    GUILD_BATTLE::CNormalGuildBattleField::~CNormalGuildBattleField()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403eb830L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleField::dtor_CNormalGuildBattleField()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleField*);
        (org_ptr(0x1403eb830L))(this);
    };
END_ATF_NAMESPACE
