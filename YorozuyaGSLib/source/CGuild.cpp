#include <CGuild.hpp>


START_ATF_NAMESPACE
    bool CGuild::ActVote(struct _guild_member_info* pMemPtr, char byCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, struct _guild_member_info*, char);
        return (org_ptr(0x140254180L))(this, pMemPtr, byCode);
    };
    void CGuild::AddScheduleComplete(char byRet, struct CGuild* pSrcGuild)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char, struct CGuild*);
        (org_ptr(0x140258300L))(this, byRet, pSrcGuild);
    };
    CGuild::CGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402515a0L))(this);
    };
    void CGuild::ctor_CGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402515a0L))(this);
    };
    void CGuild::CancelSuggestedMatter()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254120L))(this);
    };
    char CGuild::CheckGuildBattleSuggestRequestToDestGuild(unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1402579f0L))(this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx);
    };
    void CGuild::ClearGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140258290L))(this);
    };
    void CGuild::ClearVote()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254220L))(this);
    };
    void CGuild::CompleteOutGuildbattleCost(unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140257b00L))(this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx);
    };
    void CGuild::CompleteSelectMasterLastConn(unsigned int dwLastConnTime)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
        (org_ptr(0x140259ce0L))(this, dwLastConnTime);
    };
    void CGuild::Complete_DB_Update_Committee(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
        (org_ptr(0x1402597b0L))(this, pData);
    };
    bool CGuild::DB_Update_GuildMaster(struct _guild_member_info* pNewguildMaster)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, struct _guild_member_info*);
        return (org_ptr(0x140252bd0L))(this, pNewguildMaster);
    };
    void CGuild::DB_Update_GuildMaster_Complete(unsigned int in_guild_prev_masterSerial, char in_guild_prev_masterPrevGrade, unsigned int in_guild_new_masterSerial, char in_guild_new_masterPrevGrade)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, char, unsigned int, char);
        (org_ptr(0x140252d10L))(this, in_guild_prev_masterSerial, in_guild_prev_masterPrevGrade, in_guild_new_masterSerial, in_guild_new_masterPrevGrade);
    };
    char CGuild::DestGuildIsAvailableBattleRequestState()
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x140257960L))(this);
    };
    void CGuild::EndRankJob()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140344990L))(this);
    };
    void CGuild::EstGuild(unsigned int dwSerial, char* pwszName, char byRace, int nMemberNum, struct _guild_member_info* pEstMember)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, char*, char, int, struct _guild_member_info*);
        (org_ptr(0x1402523e0L))(this, dwSerial, pwszName, byRace, nMemberNum, pEstMember);
    };
    void CGuild::ForceLeave(unsigned int dwMemberSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
        (org_ptr(0x140258c80L))(this, dwMemberSerial);
    };
    struct _guild_applier_info* CGuild::GetApplierFromSerial(unsigned int dwApplierSerial)
    {
        using org_ptr = struct _guild_applier_info* (WINAPIV*)(struct CGuild*, unsigned int);
        return (org_ptr(0x140254560L))(this, dwApplierSerial);
    };
    char CGuild::GetGrade()
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x140078f50L))(this);
    };
    char* CGuild::GetGuildMasterName()
    {
        using org_ptr = char* (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x140252300L))(this);
    };
    unsigned int CGuild::GetGuildMasterSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x14007c540L))(this);
    };
    struct _guild_member_info* CGuild::GetMemberFromSerial(unsigned int dwMemberSerial)
    {
        using org_ptr = struct _guild_member_info* (WINAPIV*)(struct CGuild*, unsigned int);
        return (org_ptr(0x1402544b0L))(this, dwMemberSerial);
    };
    int CGuild::GetMemberNum()
    {
        using org_ptr = int (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x1400ad180L))(this);
    };
    int CGuild::GetMemberNumForJoin()
    {
        using org_ptr = int (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x1400ad1a0L))(this);
    };
    char CGuild::GetRace()
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x1400ad150L))(this);
    };
    long double CGuild::GetTotalDalant()
    {
        using org_ptr = long double (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x1400ad2a0L))(this);
    };
    long double CGuild::GetTotalGold()
    {
        using org_ptr = long double (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x1400ad2e0L))(this);
    };
    char CGuild::GuildBattleSuggestRequestToDestGuild(unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x140257c30L))(this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx);
    };
    void CGuild::IOMoney(char* pwszIOerName, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, long double dTotalDalant, long double dTotalGold, char* pbyDate, bool bInPut)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char*, unsigned int, long double, long double, long double, long double, char*, bool);
        (org_ptr(0x140253230L))(this, pwszIOerName, dwIOerSerial, dIODalant, dIOGold, dTotalDalant, dTotalGold, pbyDate, bInPut);
    };
    void CGuild::Init(int nIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, int);
        (org_ptr(0x140204e40L))(this, nIndex);
    };
    void CGuild::InitVote()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254200L))(this);
    };
    bool CGuild::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x140254310L))(this);
    };
    struct _guild_member_info* CGuild::LoginMember(unsigned int dwMemberSerial, struct CPlayer* pPtr)
    {
        using org_ptr = struct _guild_member_info* (WINAPIV*)(struct CGuild*, unsigned int, struct CPlayer*);
        return (org_ptr(0x140253750L))(this, dwMemberSerial, pPtr);
    };
    bool CGuild::LogoffMember(unsigned int dwMemberSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int);
        return (org_ptr(0x140253800L))(this, dwMemberSerial);
    };
    void CGuild::Loop(bool bChangeDay)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, bool);
        (org_ptr(0x140253310L))(this, bChangeDay);
    };
    void CGuild::MakeBuddyPacket()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402551e0L))(this);
    };
    void CGuild::MakeDownApplierPacket()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254ac0L))(this);
    };
    void CGuild::MakeDownMemberPacket()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254620L))(this);
    };
    void CGuild::MakeMoneyIOPacket()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254f20L))(this);
    };
    void CGuild::MakeQueryInfoPacket()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140254db0L))(this);
    };
    char CGuild::ManageAcceptORRefuseGuildBattle(bool bAccept)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, bool);
        return (org_ptr(0x140259ef0L))(this, bAccept);
    };
    char CGuild::ManageBuyGuildEmblem(unsigned int dwBuyer, unsigned int dwBack, unsigned int dwMark)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x140259160L))(this, dwBuyer, dwBack, dwMark);
    };
    char CGuild::ManageExpulseMember(unsigned int dwMemberSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int);
        return (org_ptr(0x140258db0L))(this, dwMemberSerial);
    };
    char CGuild::ManageGuildCommittee(unsigned int dwDestSerial, bool bAppoint)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, bool);
        return (org_ptr(0x140259530L))(this, dwDestSerial, bAppoint);
    };
    char CGuild::ManagePopGuildMoney(unsigned int dwDest, unsigned int dwDalant, unsigned int dwGold)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x140258ee0L))(this, dwDest, dwDalant, dwGold);
    };
    char CGuild::ManageProposeGuildBattle(unsigned int dwDestGuild, unsigned int dwStartTimeIdx, unsigned int dwMemberCountIdx, unsigned int dwMapIdx)
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1402593d0L))(this, dwDestGuild, dwStartTimeIdx, dwMemberCountIdx, dwMapIdx);
    };
    bool CGuild::PopApplier(unsigned int dwApplierSerial, char byDelCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int, char);
        return (org_ptr(0x140253ce0L))(this, dwApplierSerial, byDelCode);
    };
    bool CGuild::PopMember(unsigned int dwMemberSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int);
        return (org_ptr(0x1402539f0L))(this, dwMemberSerial);
    };
    bool CGuild::PushApplier(struct CPlayer* pApplier)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, struct CPlayer*);
        return (org_ptr(0x140253bf0L))(this, pApplier);
    };
    void CGuild::PushDQSDestGuildOutputGuildBattleCost()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140258020L))(this);
    };
    void CGuild::PushDQSGuildMasterLastConnn()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140259c30L))(this);
    };
    void CGuild::PushDQSInGuildBattleCost()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140257db0L))(this);
    };
    void CGuild::PushDQSInGuildBattleRewardMoney()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140258180L))(this);
    };
    void CGuild::PushDQSSourceGuildOutputGuildBattleCost()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140257ec0L))(this);
    };
    void CGuild::PushHistory_IOMoney(bool bInput, char* pwszIOerName, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, long double dLeftDalant, long double dLeftGold, char* pbyDate)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, bool, char*, unsigned int, long double, long double, long double, long double, char*);
        (org_ptr(0x140254330L))(this, bInput, pwszIOerName, dwIOerSerial, dIODalant, dIOGold, dLeftDalant, dLeftGold, pbyDate);
    };
    struct _guild_member_info* CGuild::PushMember(struct _guild_member_info* pSheet)
    {
        using org_ptr = struct _guild_member_info* (WINAPIV*)(struct CGuild*, struct _guild_member_info*);
        return (org_ptr(0x1402538d0L))(this, pSheet);
    };
    void CGuild::RefreshGuildMemberData(struct _guild_member_refresh_data* pRefreshMember)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_member_refresh_data*);
        (org_ptr(0x140252640L))(this, pRefreshMember);
    };
    bool CGuild::RegSuggestedMatter(unsigned int dwSuggesterSerial, char byMatterType, unsigned int dwMatterDst, char* pwszComment, unsigned int dwMatterObj1, unsigned int dwMatterObj2, unsigned int dwMatterObj3)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int, char, unsigned int, char*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x140253dd0L))(this, dwSuggesterSerial, byMatterType, dwMatterDst, pwszComment, dwMatterObj1, dwMatterObj2, dwMatterObj3);
    };
    void CGuild::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140251b50L))(this);
    };
    void CGuild::ReleaseTemp()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140251e20L))(this);
    };
    void CGuild::SendMsg_AddJoinApplier(struct _guild_applier_info* p)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_applier_info*);
        (org_ptr(0x140256750L))(this, p);
    };
    void CGuild::SendMsg_AlterMemberGrade()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402576b0L))(this);
    };
    void CGuild::SendMsg_AlterMemberState()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140257490L))(this);
    };
    void CGuild::SendMsg_ApplyGuildBattleResultInform(char byRet, char* wszDestGuildName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char, char*);
        (org_ptr(0x140258550L))(this, byRet, wszDestGuildName);
    };
    void CGuild::SendMsg_ChangeTaxRate(char byTax)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char);
        (org_ptr(0x140255730L))(this, byTax);
    };
    void CGuild::SendMsg_DelJoinApplier(struct _guild_applier_info* p, char byDelCode)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_applier_info*, char);
        (org_ptr(0x140256970L))(this, p, byDelCode);
    };
    void CGuild::SendMsg_DownPacket(char bDowntype, struct _guild_member_info* pMem)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char, struct _guild_member_info*);
        (org_ptr(0x140255470L))(this, bDowntype, pMem);
    };
    int CGuild::SendMsg_GuildBattleProposed(char* pwszName)
    {
        using org_ptr = int (WINAPIV*)(struct CGuild*, char*);
        return (org_ptr(0x14025a120L))(this, pwszName);
    };
    void CGuild::SendMsg_GuildBattleRefused(char* pwszName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
        (org_ptr(0x14025a220L))(this, pwszName);
    };
    void CGuild::SendMsg_GuildBattleSuggestResult(char byRet, char* wszDestGuildName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char, char*);
        (org_ptr(0x1402583f0L))(this, byRet, wszDestGuildName);
    };
    void CGuild::SendMsg_GuildDisjointInform()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140256fe0L))(this);
    };
    void CGuild::SendMsg_GuildInfoUpdateInform()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140255850L))(this);
    };
    void CGuild::SendMsg_GuildJoinAcceptInform(struct _guild_member_info* p, unsigned int dwAcceptSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_member_info*, unsigned int);
        (org_ptr(0x140256ae0L))(this, p, dwAcceptSerial);
    };
    void CGuild::SendMsg_GuildMemberLogin(unsigned int dwSerial, uint16_t wMapCode, uint16_t wRegionIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, uint16_t, uint16_t);
        (org_ptr(0x1402570f0L))(this, dwSerial, wMapCode, wRegionIndex);
    };
    void CGuild::SendMsg_GuildMemberLogoff(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
        (org_ptr(0x140257250L))(this, dwSerial);
    };
    void CGuild::SendMsg_GuildMemberPosInform(unsigned int dwSerial, uint16_t wMapCode, uint16_t wRegionIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, uint16_t, uint16_t);
        (org_ptr(0x140257360L))(this, dwSerial, wMapCode, wRegionIndex);
    };
    void CGuild::SendMsg_GuildOutputMoneyFail(unsigned int dwIOerSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
        (org_ptr(0x140256ed0L))(this, dwIOerSerial);
    };
    void CGuild::SendMsg_GuildRoomRented(char byRoomType)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char);
        (org_ptr(0x1402586a0L))(this, byRoomType);
    };
    void CGuild::SendMsg_IOMoney(unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, bool bInPut, char* pbyDate)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, long double, long double, bool, char*);
        (org_ptr(0x140256cf0L))(this, dwIOerSerial, dIODalant, dIOGold, bInPut, pbyDate);
    };
    void CGuild::SendMsg_LeaveMember(unsigned int dwMemberSerial, bool bSelf, bool bPunish)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, bool, bool);
        (org_ptr(0x140255a30L))(this, dwMemberSerial, bSelf, bPunish);
    };
    void CGuild::SendMsg_ManageGuildCommitteeResult(bool bAppoint, char* pwszCommitteeName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, bool, char*);
        (org_ptr(0x140259b00L))(this, bAppoint, pwszCommitteeName);
    };
    void CGuild::SendMsg_MasterElectPossible(bool bPossible)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, bool);
        (org_ptr(0x140259d50L))(this, bPossible);
    };
    void CGuild::SendMsg_QueryPacket_Info(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, int);
        (org_ptr(0x1402559b0L))(this, n);
    };
    void CGuild::SendMsg_VoteCancelInform()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140256410L))(this);
    };
    void CGuild::SendMsg_VoteComplete(bool bPass)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, bool);
        (org_ptr(0x140256630L))(this, bPass);
    };
    void CGuild::SendMsg_VoteProcessInform_Continue(struct _guild_member_info* pMem)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_member_info*);
        (org_ptr(0x140255f20L))(this, pMem);
    };
    void CGuild::SendMsg_VoteProcessInform_Start()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140255b90L))(this);
    };
    void CGuild::SendMsg_VoteState()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140256270L))(this);
    };
    void CGuild::SendMsg_VoteStop(unsigned int dwMatterVoteSynKey)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
        (org_ptr(0x140256540L))(this, dwMatterVoteSynKey);
    };
    void CGuild::SetCopmlteGuildBattleSuggest()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402582e0L))(this);
    };
    void CGuild::SetGreetingmsg_GUILD(char* wszgreetmsg)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
        (org_ptr(0x140258b60L))(this, wszgreetmsg);
    };
    void CGuild::SetGuild(unsigned int dwSerial, char byGrade, char byRace, char* pwszName, char* pwszGreetingMsg, unsigned int dwEmblemBack, unsigned int dwEmblemMark, int nNum, struct _guild_member_info* pEstMember, long double dTotalDalant, long double dTotalGold, unsigned int dwMasterSerial, char byMasterPrevGrade, int nIOMoneyHisNum, struct _io_money_data* pIOMonHisList, unsigned int dwGuildBattleTotalWinCnt, unsigned int dwGuildBattleTotalDrawCnt, unsigned int dwGuildBattleTotalLoseCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, char, char, char*, char*, unsigned int, unsigned int, int, struct _guild_member_info*, long double, long double, unsigned int, char, int, struct _io_money_data*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140251e40L))(this, dwSerial, byGrade, byRace, pwszName, pwszGreetingMsg, dwEmblemBack, dwEmblemMark, nNum, pEstMember, dTotalDalant, dTotalGold, dwMasterSerial, byMasterPrevGrade, nIOMoneyHisNum, pIOMonHisList, dwGuildBattleTotalWinCnt, dwGuildBattleTotalDrawCnt, dwGuildBattleTotalLoseCnt);
    };
    void CGuild::SetGuildBattleMatter(unsigned int dwSrcGuildSerial, unsigned int dwStartTime, unsigned int dwNumber, unsigned int dwMapIdx)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140259e40L))(this, dwSrcGuildSerial, dwStartTime, dwNumber, dwMapIdx);
    };
    void CGuild::SetTemp(char* pwszName)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
        (org_ptr(0x140251da0L))(this, pwszName);
    };
    void CGuild::SortRankInGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x140252780L))(this);
    };
    char CGuild::SrcGuildIsAvailableBattleRequestState()
    {
        using org_ptr = char (WINAPIV*)(struct CGuild*);
        return (org_ptr(0x1402578d0L))(this);
    };
    void CGuild::StartRankJob()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1403447f0L))(this);
    };
    void CGuild::UpdateEmblem(unsigned int dwEmblemBack, unsigned int dwEmblemMark)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int);
        (org_ptr(0x140252920L))(this, dwEmblemBack, dwEmblemMark);
    };
    void CGuild::UpdateGrade(char byGrade)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char);
        (org_ptr(0x1402529a0L))(this, byGrade);
    };
    void CGuild::UpdateGuildBattleWinCnt(unsigned int dwTotWin, unsigned int dwTotDraw, unsigned int dwTotLose)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140253190L))(this, dwTotWin, dwTotDraw, dwTotLose);
    };
    void CGuild::UpdateUTATax(char byTaxRate)
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*, char);
        (org_ptr(0x140252bb0L))(this, byTaxRate);
    };
    CGuild::~CGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402519e0L))(this);
    };
    void CGuild::dtor_CGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CGuild*);
        (org_ptr(0x1402519e0L))(this);
    };
    
END_ATF_NAMESPACE
