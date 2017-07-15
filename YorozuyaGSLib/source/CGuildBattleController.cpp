#include <CGuildBattleController.hpp>


START_ATF_NAMESPACE
    char CGuildBattleController::Add(struct CGuild* pSrcGuild, struct CGuild* pDestGuild, unsigned int dwStartTime, char byNumber, unsigned int dwMapInx)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildBattleController*, struct CGuild*, struct CGuild*, unsigned int, char, unsigned int);
        return (org_ptr(0x14025d2a0L))(this, pSrcGuild, pDestGuild, dwStartTime, byNumber, dwMapInx);
    };
    char CGuildBattleController::Add(struct CGuild* pSrcGuild, struct CGuild* pDestGuild, unsigned int dwStartTime, unsigned int dwElapseTimeCnt, char byNumber, unsigned int dwMapInx)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildBattleController*, struct CGuild*, struct CGuild*, unsigned int, unsigned int, char, unsigned int);
        return (org_ptr(0x1403d5db0L))(this, pSrcGuild, pDestGuild, dwStartTime, dwElapseTimeCnt, byNumber, dwMapInx);
    };
    void CGuildBattleController::AddComplete(char byResult, unsigned int uiMapID, unsigned int dwID, unsigned int dwSLID)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, char, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x1403d6e20L))(this, byResult, uiMapID, dwID, dwSLID);
    };
    char CGuildBattleController::AddSchedule(char* szData)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildBattleController*, char*);
        return (org_ptr(0x1403d6ad0L))(this, szData);
    };
    CGuildBattleController::CGuildBattleController()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d5680L))(this);
    };
    void CGuildBattleController::ctor_CGuildBattleController()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d5680L))(this);
    };
    bool CGuildBattleController::CheatCreateFieldObject(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d72d0L))(this, pkPlayer);
    };
    bool CGuildBattleController::CheatDestroyFieldObject(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d7380L))(this, pkPlayer);
    };
    bool CGuildBattleController::CheatDestroyStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d7220L))(this, pkPlayer);
    };
    bool CGuildBattleController::CheatDropStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d7780L))(this, pkPlayer);
    };
    bool CGuildBattleController::CheatForceTakeStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d7850L))(this, pkPlayer);
    };
    bool CGuildBattleController::CheatGetStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d75e0L))(this, pkPlayer);
    };
    int CGuildBattleController::CheatRegenStone(struct CPlayer* pkPlayer, int iRengenPos)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*, int);
        return (org_ptr(0x1403d70c0L))(this, pkPlayer, iRengenPos);
    };
    bool CGuildBattleController::CheatTakeStone(int iPortalInx, struct CPlayer* pkPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, int, struct CPlayer*);
        return (org_ptr(0x1403d7430L))(this, iPortalInx, pkPlayer);
    };
    void CGuildBattleController::CheckGetGravityStone(uint16_t wIndex, unsigned int dwObjSerial, struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, uint16_t, unsigned int, struct CPlayer*);
        (org_ptr(0x1403d60f0L))(this, wIndex, dwObjSerial, pkPlayer);
    };
    void CGuildBattleController::CheckGoal(struct CPlayer* pkPlayer, int iPortalInx)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*, int);
        (org_ptr(0x1403d61b0L))(this, pkPlayer, iPortalInx);
    };
    void CGuildBattleController::CheckTakeGravityStone(int iPortalInx, struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, struct CPlayer*);
        (org_ptr(0x1403d6020L))(this, iPortalInx, pkPlayer);
    };
    void CGuildBattleController::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d7900L))(this);
    };
    void CGuildBattleController::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d62f0L))(this);
    };
    void CGuildBattleController::CompleteClearGuildBattleRank(char byResult)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, char);
        (org_ptr(0x1403d7030L))(this, byResult);
    };
    void CGuildBattleController::CompleteCreateGuildBattleRankTable(char byResult)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, char);
        (org_ptr(0x1403d6fb0L))(this, byResult);
    };
    void CGuildBattleController::CompleteUpdateRank(char byResult, char byRace, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, char, char, char*);
        (org_ptr(0x1403d6ec0L))(this, byResult, byRace, pLoadData);
    };
    void CGuildBattleController::CompleteUpdateReservedSchedule(unsigned int dwMapID, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, unsigned int, char*);
        (org_ptr(0x1403d6f60L))(this, dwMapID, pLoadData);
    };
    void CGuildBattleController::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403d57a0L))();
    };
    void CGuildBattleController::DropGravityStone(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        (org_ptr(0x1403d63b0L))(this, pkPlayer);
    };
    void CGuildBattleController::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d6260L))(this);
    };
    struct CGameObject* CGuildBattleController::GetCircleZone(int iInx)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CGuildBattleController*, int);
        return (org_ptr(0x1403d6860L))(this, iInx);
    };
    struct CGameObject* CGuildBattleController::GetRegener(int iInx)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CGuildBattleController*, int);
        return (org_ptr(0x1403d6810L))(this, iInx);
    };
    struct CGameObject* CGuildBattleController::GetStone(int iInx)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CGuildBattleController*, int);
        return (org_ptr(0x1403d67c0L))(this, iInx);
    };
    bool CGuildBattleController::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*);
        return (org_ptr(0x1403d5820L))(this);
    };
    struct CGuildBattleController* CGuildBattleController::Instance()
    {
        using org_ptr = struct CGuildBattleController* (WINAPIV*)();
        return (org_ptr(0x1403d56e0L))();
    };
    char CGuildBattleController::IsAvailableSuggest(struct CGuild* pSrcGuild, unsigned int dwDestGuild, unsigned int dwStartTime, unsigned int dwNumber, unsigned int dwMapCode)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildBattleController*, struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1403d5bd0L))(this, pSrcGuild, dwDestGuild, dwStartTime, dwNumber, dwMapCode);
    };
    void CGuildBattleController::Join(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        (org_ptr(0x1403d5ed0L))(this, pkPlayer);
    };
    void CGuildBattleController::JoinGuild(int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, unsigned int, unsigned int);
        (org_ptr(0x1400ad450L))(this, n, dwGuildSerial, dwCharacSerial);
    };
    void CGuildBattleController::Kill(struct CPlayer* pkSrcPlayer, struct CPlayer* pkDestPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*, struct CPlayer*);
        (org_ptr(0x1403d6600L))(this, pkSrcPlayer, pkDestPlayer);
    };
    void CGuildBattleController::LeaveGuild(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        (org_ptr(0x1403d66d0L))(this, pkPlayer);
    };
    bool CGuildBattleController::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*);
        return (org_ptr(0x1403d5950L))(this);
    };
    bool CGuildBattleController::LoadINI(unsigned int* uiMapCnt, int* iToday, int* iTodayDayID, int* iTomorrow, int* iTomorrowDayID)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, unsigned int*, int*, int*, int*, int*);
        return (org_ptr(0x1403d7bb0L))(this, uiMapCnt, iToday, iTodayDayID, iTomorrow, iTomorrowDayID);
    };
    void CGuildBattleController::LogIn(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        (org_ptr(0x1403d5e40L))(this, pkPlayer);
    };
    void CGuildBattleController::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d6760L))(this);
    };
    void CGuildBattleController::NetClose(struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        (org_ptr(0x1403d64d0L))(this, pkPlayer);
    };
    void CGuildBattleController::PushClearGuildBattleRank()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1402cfca0L))(this);
    };
    void CGuildBattleController::PushCreateGuildBattleRankTable()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1402cfc50L))(this);
    };
    bool CGuildBattleController::SaveINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*);
        return (org_ptr(0x1403d7960L))(this);
    };
    void CGuildBattleController::SendCurrentBattleInfoRequest(int n, unsigned int uiMapID)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, unsigned int);
        (org_ptr(0x1403d6a80L))(this, n, uiMapID);
    };
    void CGuildBattleController::SendPossibleBattleGuildList(int n, char byRace, char byPage, unsigned int dwVer)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, char, char, unsigned int);
        (org_ptr(0x1403d6910L))(this, n, byRace, byPage, dwVer);
    };
    void CGuildBattleController::SendPossibleBattleGuildListFirst(int n, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, char);
        (org_ptr(0x1403d68b0L))(this, n, byRace);
    };
    void CGuildBattleController::SendRankList(int n, char bySelfRace, unsigned int dwCurVer, unsigned int uiMapID, char byPage, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, char, unsigned int, unsigned int, char, unsigned int);
        (org_ptr(0x1403d6980L))(this, n, bySelfRace, dwCurVer, uiMapID, byPage, dwGuildSerial);
    };
    void CGuildBattleController::SendReservedScheduleList(int n, unsigned int uiMapID, unsigned int dwVer, char byDay, char byPage, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*, int, unsigned int, unsigned int, char, char, unsigned int);
        (org_ptr(0x1403d6a00L))(this, n, uiMapID, dwVer, byDay, byPage, dwGuildSerial);
    };
    char CGuildBattleController::Start(struct CPlayer* pkPlayer)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildBattleController*, struct CPlayer*);
        return (org_ptr(0x1403d5f80L))(this, pkPlayer);
    };
    bool CGuildBattleController::UpdateClearRerservedDayInfo(unsigned int dwStartSLID, unsigned int dwEndSLID, unsigned int dwStartSID, unsigned int dwEndSID)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, unsigned int, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1403d6cf0L))(this, dwStartSLID, dwEndSLID, dwStartSID, dwEndSID);
    };
    bool CGuildBattleController::UpdateDraw(char by1PRace, unsigned int dw1PGuildSerial, char by2PRace, unsigned int dw2PGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, char, unsigned int, char, unsigned int);
        return (org_ptr(0x1403d6c80L))(this, by1PRace, dw1PGuildSerial, by2PRace, dw2PGuildSerial);
    };
    void CGuildBattleController::UpdatePossibleBattleGuildList()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d6370L))(this);
    };
    bool CGuildBattleController::UpdateRank(char byRace, char* byOutData)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, char, char*);
        return (org_ptr(0x1403d6d80L))(this, byRace, byOutData);
    };
    bool CGuildBattleController::UpdateReservedGuildBattleSchedule(unsigned int dwSLID, char* byOutData)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, unsigned int, char*);
        return (org_ptr(0x1403d6dd0L))(this, dwSLID, byOutData);
    };
    bool CGuildBattleController::UpdateWinLose(char byWinRace, unsigned int dwWinGuildSerial, char byLoseRace, unsigned int dwLoseGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildBattleController*, char, unsigned int, char, unsigned int);
        return (org_ptr(0x1403d6c10L))(this, byWinRace, dwWinGuildSerial, byLoseRace, dwLoseGuildSerial);
    };
    CGuildBattleController::~CGuildBattleController()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d56a0L))(this);
    };
    void CGuildBattleController::dtor_CGuildBattleController()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildBattleController*);
        (org_ptr(0x1403d56a0L))(this);
    };
END_ATF_NAMESPACE
