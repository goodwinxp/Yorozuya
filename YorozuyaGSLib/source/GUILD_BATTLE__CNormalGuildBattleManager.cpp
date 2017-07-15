#include <GUILD_BATTLE__CNormalGuildBattleManager.hpp>


START_ATF_NAMESPACE
    char GUILD_BATTLE::CNormalGuildBattleManager::Add(struct CGuild* pSrcGuild, struct CGuild* pDestGuild, unsigned int dwStartTime, unsigned int dwElapseTimeCnt, char byNumber, unsigned int dwMapCode)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CGuild*, struct CGuild*, unsigned int, unsigned int, char, unsigned int);
        return (org_ptr(0x1403d3dc0L))(this, pSrcGuild, pDestGuild, dwStartTime, dwElapseTimeCnt, byNumber, dwMapCode);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::AddComplete(char byRet, unsigned int dwBattleID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, char, unsigned int);
        (org_ptr(0x1403d4060L))(this, byRet, dwBattleID);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::AddDefaultDBRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        return (org_ptr(0x1403d4fd0L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleManager::CNormalGuildBattleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d33c0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::ctor_CNormalGuildBattleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d33c0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::CheckGetGravityStone(uint16_t wIndex, unsigned int dwObjSerial, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, uint16_t, unsigned int, int, unsigned int, unsigned int);
        (org_ptr(0x1403d4800L))(this, wIndex, dwObjSerial, n, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::CheckGoal(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial, int iPortalInx)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, int);
        (org_ptr(0x1403d4910L))(this, n, dwGuildSerial, dwCharacSerial, iPortalInx);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::CheckTakeGravityStone(int iPortalInx, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, int, unsigned int, unsigned int);
        (org_ptr(0x1403d4700L))(this, iPortalInx, n, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::Clear(struct GUILD_BATTLE::CNormalGuildBattle** ppkStart)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct GUILD_BATTLE::CNormalGuildBattle**);
        (org_ptr(0x1403d5400L))(this, ppkStart);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d4280L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403d35f0L))();
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::DoDayChangedWork()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d4220L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::DropGravityStone(unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
        return (org_ptr(0x1403d4a10L))(this, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d41c0L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattle* GUILD_BATTLE::CNormalGuildBattleManager::GetBattle(unsigned int dwID)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattle* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int);
        return (org_ptr(0x1403d5520L))(this, dwID);
    };
    struct GUILD_BATTLE::CNormalGuildBattle* GUILD_BATTLE::CNormalGuildBattleManager::GetBattleByGuildSerial(unsigned int dwGuildSerial)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattle* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int);
        return (org_ptr(0x1403d5580L))(this, dwGuildSerial);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        return (org_ptr(0x1403d3670L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleManager* GUILD_BATTLE::CNormalGuildBattleManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleManager* (WINAPIV*)();
        return (org_ptr(0x1403d3530L))();
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::Join(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
        (org_ptr(0x1403d4420L))(this, n, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::JoinGuild(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
        (org_ptr(0x1403d4bb0L))(this, n, dwGuildSerial, dwCharacSerial);
    };
    int GUILD_BATTLE::CNormalGuildBattleManager::Kill(unsigned int dwGuildSerial, unsigned int dwSrcCharacSerial, unsigned int dwDestCharacSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1403d4b20L))(this, dwGuildSerial, dwSrcCharacSerial, dwDestCharacSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::LeaveGuild(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CPlayer*);
        return (org_ptr(0x1403d4c60L))(this, pkPlayer);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::Load(bool bToday, unsigned int uiDayID, struct GUILD_BATTLE::CNormalGuildBattle** ppkStart)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle**);
        return (org_ptr(0x1403d4d90L))(this, bToday, uiDayID, ppkStart);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::Load(int iCurDay, unsigned int uiOldMapCnt, int iToday, int iTodayDayID, int iTomorrow, int iTomorrowDayID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, int, int, int, int);
        return (org_ptr(0x1403d38f0L))(this, iCurDay, uiOldMapCnt, iToday, iTodayDayID, iTomorrow, iTomorrowDayID);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::LoadDBGuildBattleInfo(unsigned int dwStartID, struct _worlddb_guild_battle_info* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, struct _worlddb_guild_battle_info*);
        return (org_ptr(0x1403d4f40L))(this, dwStartID, kInfo);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::LogIn(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
        (org_ptr(0x1403d4360L))(this, n, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d4110L))(this);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::NetClose(unsigned int dwGuildSerial, unsigned int dwCharacSerial, struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, struct CPlayer*);
        return (org_ptr(0x1403d4a90L))(this, dwGuildSerial, dwCharacSerial, pkPlayer);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::ProcCheckGetGravityStone(uint16_t wIndex, unsigned int dwObjSerial, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, uint16_t, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1403d52c0L))(this, wIndex, dwObjSerial, dwGuildSerial, dwCharacSerial);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::ProcCheckGoal(unsigned int dwGuildSerial, unsigned int dwCharacSerial, int iPortalInx)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, int);
        return (org_ptr(0x1403d5360L))(this, dwGuildSerial, dwCharacSerial, iPortalInx);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::ProcCheckTakeGravityStone(int iPortalInx, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
        return (org_ptr(0x1403d5220L))(this, iPortalInx, dwGuildSerial, dwCharacSerial);
    };
    int GUILD_BATTLE::CNormalGuildBattleManager::ProcJoin(unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
        return (org_ptr(0x1403d5190L))(this, dwGuildSerial, dwCharacSerial);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::PushDQSData(unsigned int uiFieldInx, unsigned int uiSLID, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle, struct GUILD_BATTLE::CGuildBattleSchedule* pkSchedule)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle*, struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d5050L))(this, uiFieldInx, uiSLID, pkBattle, pkSchedule);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::Save(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int);
        return (org_ptr(0x1403d3d10L))(this, dwID);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::SendMemberPosition(unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
        (org_ptr(0x1403d4cd0L))(this, dwGuildSerial, dwCharacSerial);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::SetNextEvent()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403ded80L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::SetReadyState(struct GUILD_BATTLE::CNormalGuildBattle** ppkStart)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct GUILD_BATTLE::CNormalGuildBattle**);
        (org_ptr(0x1403d5480L))(this, ppkStart);
    };
    char GUILD_BATTLE::CNormalGuildBattleManager::Start(struct CPlayer* pkPlayer, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CPlayer*, unsigned int, unsigned int);
        return (org_ptr(0x1403d44e0L))(this, pkPlayer, dwGuildSerial, dwCharacSerial);
    };
    bool GUILD_BATTLE::CNormalGuildBattleManager::UpdateClearGuildBattleDayInfo(unsigned int dwStartSID, unsigned int dwEndSID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
        return (org_ptr(0x1403d42e0L))(this, dwStartSID, dwEndSID);
    };
    GUILD_BATTLE::CNormalGuildBattleManager::~CNormalGuildBattleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d3430L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleManager::dtor_CNormalGuildBattleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
        (org_ptr(0x1403d3430L))(this);
    };
END_ATF_NAMESPACE
