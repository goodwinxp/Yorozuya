#include <CGuildDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGuildActVote2_ptr CGuildActVote2_next(nullptr);
        Info::CGuildActVote2_clbk CGuildActVote2_user(nullptr);
        
        Info::CGuildAddScheduleComplete4_ptr CGuildAddScheduleComplete4_next(nullptr);
        Info::CGuildAddScheduleComplete4_clbk CGuildAddScheduleComplete4_user(nullptr);
        
        
        Info::CGuildctor_CGuild6_ptr CGuildctor_CGuild6_next(nullptr);
        Info::CGuildctor_CGuild6_clbk CGuildctor_CGuild6_user(nullptr);
        
        Info::CGuildCancelSuggestedMatter8_ptr CGuildCancelSuggestedMatter8_next(nullptr);
        Info::CGuildCancelSuggestedMatter8_clbk CGuildCancelSuggestedMatter8_user(nullptr);
        
        Info::CGuildCheckGuildBattleSuggestRequestToDestGuild10_ptr CGuildCheckGuildBattleSuggestRequestToDestGuild10_next(nullptr);
        Info::CGuildCheckGuildBattleSuggestRequestToDestGuild10_clbk CGuildCheckGuildBattleSuggestRequestToDestGuild10_user(nullptr);
        
        Info::CGuildClearGuildBattle12_ptr CGuildClearGuildBattle12_next(nullptr);
        Info::CGuildClearGuildBattle12_clbk CGuildClearGuildBattle12_user(nullptr);
        
        Info::CGuildClearVote14_ptr CGuildClearVote14_next(nullptr);
        Info::CGuildClearVote14_clbk CGuildClearVote14_user(nullptr);
        
        Info::CGuildCompleteOutGuildbattleCost16_ptr CGuildCompleteOutGuildbattleCost16_next(nullptr);
        Info::CGuildCompleteOutGuildbattleCost16_clbk CGuildCompleteOutGuildbattleCost16_user(nullptr);
        
        Info::CGuildCompleteSelectMasterLastConn18_ptr CGuildCompleteSelectMasterLastConn18_next(nullptr);
        Info::CGuildCompleteSelectMasterLastConn18_clbk CGuildCompleteSelectMasterLastConn18_user(nullptr);
        
        Info::CGuildComplete_DB_Update_Committee20_ptr CGuildComplete_DB_Update_Committee20_next(nullptr);
        Info::CGuildComplete_DB_Update_Committee20_clbk CGuildComplete_DB_Update_Committee20_user(nullptr);
        
        Info::CGuildDB_Update_GuildMaster22_ptr CGuildDB_Update_GuildMaster22_next(nullptr);
        Info::CGuildDB_Update_GuildMaster22_clbk CGuildDB_Update_GuildMaster22_user(nullptr);
        
        Info::CGuildDB_Update_GuildMaster_Complete24_ptr CGuildDB_Update_GuildMaster_Complete24_next(nullptr);
        Info::CGuildDB_Update_GuildMaster_Complete24_clbk CGuildDB_Update_GuildMaster_Complete24_user(nullptr);
        
        Info::CGuildDestGuildIsAvailableBattleRequestState26_ptr CGuildDestGuildIsAvailableBattleRequestState26_next(nullptr);
        Info::CGuildDestGuildIsAvailableBattleRequestState26_clbk CGuildDestGuildIsAvailableBattleRequestState26_user(nullptr);
        
        Info::CGuildEndRankJob28_ptr CGuildEndRankJob28_next(nullptr);
        Info::CGuildEndRankJob28_clbk CGuildEndRankJob28_user(nullptr);
        
        Info::CGuildEstGuild30_ptr CGuildEstGuild30_next(nullptr);
        Info::CGuildEstGuild30_clbk CGuildEstGuild30_user(nullptr);
        
        Info::CGuildForceLeave32_ptr CGuildForceLeave32_next(nullptr);
        Info::CGuildForceLeave32_clbk CGuildForceLeave32_user(nullptr);
        
        Info::CGuildGetApplierFromSerial34_ptr CGuildGetApplierFromSerial34_next(nullptr);
        Info::CGuildGetApplierFromSerial34_clbk CGuildGetApplierFromSerial34_user(nullptr);
        
        Info::CGuildGetGrade36_ptr CGuildGetGrade36_next(nullptr);
        Info::CGuildGetGrade36_clbk CGuildGetGrade36_user(nullptr);
        
        Info::CGuildGetGuildMasterName38_ptr CGuildGetGuildMasterName38_next(nullptr);
        Info::CGuildGetGuildMasterName38_clbk CGuildGetGuildMasterName38_user(nullptr);
        
        Info::CGuildGetGuildMasterSerial40_ptr CGuildGetGuildMasterSerial40_next(nullptr);
        Info::CGuildGetGuildMasterSerial40_clbk CGuildGetGuildMasterSerial40_user(nullptr);
        
        Info::CGuildGetMemberFromSerial42_ptr CGuildGetMemberFromSerial42_next(nullptr);
        Info::CGuildGetMemberFromSerial42_clbk CGuildGetMemberFromSerial42_user(nullptr);
        
        Info::CGuildGetMemberNum44_ptr CGuildGetMemberNum44_next(nullptr);
        Info::CGuildGetMemberNum44_clbk CGuildGetMemberNum44_user(nullptr);
        
        Info::CGuildGetMemberNumForJoin46_ptr CGuildGetMemberNumForJoin46_next(nullptr);
        Info::CGuildGetMemberNumForJoin46_clbk CGuildGetMemberNumForJoin46_user(nullptr);
        
        Info::CGuildGetRace48_ptr CGuildGetRace48_next(nullptr);
        Info::CGuildGetRace48_clbk CGuildGetRace48_user(nullptr);
        
        Info::CGuildGetTotalDalant50_ptr CGuildGetTotalDalant50_next(nullptr);
        Info::CGuildGetTotalDalant50_clbk CGuildGetTotalDalant50_user(nullptr);
        
        Info::CGuildGetTotalGold52_ptr CGuildGetTotalGold52_next(nullptr);
        Info::CGuildGetTotalGold52_clbk CGuildGetTotalGold52_user(nullptr);
        
        Info::CGuildGuildBattleSuggestRequestToDestGuild54_ptr CGuildGuildBattleSuggestRequestToDestGuild54_next(nullptr);
        Info::CGuildGuildBattleSuggestRequestToDestGuild54_clbk CGuildGuildBattleSuggestRequestToDestGuild54_user(nullptr);
        
        Info::CGuildIOMoney56_ptr CGuildIOMoney56_next(nullptr);
        Info::CGuildIOMoney56_clbk CGuildIOMoney56_user(nullptr);
        
        Info::CGuildInit58_ptr CGuildInit58_next(nullptr);
        Info::CGuildInit58_clbk CGuildInit58_user(nullptr);
        
        Info::CGuildInitVote60_ptr CGuildInitVote60_next(nullptr);
        Info::CGuildInitVote60_clbk CGuildInitVote60_user(nullptr);
        
        Info::CGuildIsFill62_ptr CGuildIsFill62_next(nullptr);
        Info::CGuildIsFill62_clbk CGuildIsFill62_user(nullptr);
        
        Info::CGuildLoginMember64_ptr CGuildLoginMember64_next(nullptr);
        Info::CGuildLoginMember64_clbk CGuildLoginMember64_user(nullptr);
        
        Info::CGuildLogoffMember66_ptr CGuildLogoffMember66_next(nullptr);
        Info::CGuildLogoffMember66_clbk CGuildLogoffMember66_user(nullptr);
        
        Info::CGuildLoop68_ptr CGuildLoop68_next(nullptr);
        Info::CGuildLoop68_clbk CGuildLoop68_user(nullptr);
        
        Info::CGuildMakeBuddyPacket70_ptr CGuildMakeBuddyPacket70_next(nullptr);
        Info::CGuildMakeBuddyPacket70_clbk CGuildMakeBuddyPacket70_user(nullptr);
        
        Info::CGuildMakeDownApplierPacket72_ptr CGuildMakeDownApplierPacket72_next(nullptr);
        Info::CGuildMakeDownApplierPacket72_clbk CGuildMakeDownApplierPacket72_user(nullptr);
        
        Info::CGuildMakeDownMemberPacket74_ptr CGuildMakeDownMemberPacket74_next(nullptr);
        Info::CGuildMakeDownMemberPacket74_clbk CGuildMakeDownMemberPacket74_user(nullptr);
        
        Info::CGuildMakeMoneyIOPacket76_ptr CGuildMakeMoneyIOPacket76_next(nullptr);
        Info::CGuildMakeMoneyIOPacket76_clbk CGuildMakeMoneyIOPacket76_user(nullptr);
        
        Info::CGuildMakeQueryInfoPacket78_ptr CGuildMakeQueryInfoPacket78_next(nullptr);
        Info::CGuildMakeQueryInfoPacket78_clbk CGuildMakeQueryInfoPacket78_user(nullptr);
        
        Info::CGuildManageAcceptORRefuseGuildBattle80_ptr CGuildManageAcceptORRefuseGuildBattle80_next(nullptr);
        Info::CGuildManageAcceptORRefuseGuildBattle80_clbk CGuildManageAcceptORRefuseGuildBattle80_user(nullptr);
        
        Info::CGuildManageBuyGuildEmblem82_ptr CGuildManageBuyGuildEmblem82_next(nullptr);
        Info::CGuildManageBuyGuildEmblem82_clbk CGuildManageBuyGuildEmblem82_user(nullptr);
        
        Info::CGuildManageExpulseMember84_ptr CGuildManageExpulseMember84_next(nullptr);
        Info::CGuildManageExpulseMember84_clbk CGuildManageExpulseMember84_user(nullptr);
        
        Info::CGuildManageGuildCommittee86_ptr CGuildManageGuildCommittee86_next(nullptr);
        Info::CGuildManageGuildCommittee86_clbk CGuildManageGuildCommittee86_user(nullptr);
        
        Info::CGuildManagePopGuildMoney88_ptr CGuildManagePopGuildMoney88_next(nullptr);
        Info::CGuildManagePopGuildMoney88_clbk CGuildManagePopGuildMoney88_user(nullptr);
        
        Info::CGuildManageProposeGuildBattle90_ptr CGuildManageProposeGuildBattle90_next(nullptr);
        Info::CGuildManageProposeGuildBattle90_clbk CGuildManageProposeGuildBattle90_user(nullptr);
        
        Info::CGuildPopApplier92_ptr CGuildPopApplier92_next(nullptr);
        Info::CGuildPopApplier92_clbk CGuildPopApplier92_user(nullptr);
        
        Info::CGuildPopMember94_ptr CGuildPopMember94_next(nullptr);
        Info::CGuildPopMember94_clbk CGuildPopMember94_user(nullptr);
        
        Info::CGuildPushApplier96_ptr CGuildPushApplier96_next(nullptr);
        Info::CGuildPushApplier96_clbk CGuildPushApplier96_user(nullptr);
        
        Info::CGuildPushDQSDestGuildOutputGuildBattleCost98_ptr CGuildPushDQSDestGuildOutputGuildBattleCost98_next(nullptr);
        Info::CGuildPushDQSDestGuildOutputGuildBattleCost98_clbk CGuildPushDQSDestGuildOutputGuildBattleCost98_user(nullptr);
        
        Info::CGuildPushDQSGuildMasterLastConnn100_ptr CGuildPushDQSGuildMasterLastConnn100_next(nullptr);
        Info::CGuildPushDQSGuildMasterLastConnn100_clbk CGuildPushDQSGuildMasterLastConnn100_user(nullptr);
        
        Info::CGuildPushDQSInGuildBattleCost102_ptr CGuildPushDQSInGuildBattleCost102_next(nullptr);
        Info::CGuildPushDQSInGuildBattleCost102_clbk CGuildPushDQSInGuildBattleCost102_user(nullptr);
        
        Info::CGuildPushDQSInGuildBattleRewardMoney104_ptr CGuildPushDQSInGuildBattleRewardMoney104_next(nullptr);
        Info::CGuildPushDQSInGuildBattleRewardMoney104_clbk CGuildPushDQSInGuildBattleRewardMoney104_user(nullptr);
        
        Info::CGuildPushDQSSourceGuildOutputGuildBattleCost106_ptr CGuildPushDQSSourceGuildOutputGuildBattleCost106_next(nullptr);
        Info::CGuildPushDQSSourceGuildOutputGuildBattleCost106_clbk CGuildPushDQSSourceGuildOutputGuildBattleCost106_user(nullptr);
        
        Info::CGuildPushHistory_IOMoney108_ptr CGuildPushHistory_IOMoney108_next(nullptr);
        Info::CGuildPushHistory_IOMoney108_clbk CGuildPushHistory_IOMoney108_user(nullptr);
        
        Info::CGuildPushMember110_ptr CGuildPushMember110_next(nullptr);
        Info::CGuildPushMember110_clbk CGuildPushMember110_user(nullptr);
        
        Info::CGuildRefreshGuildMemberData112_ptr CGuildRefreshGuildMemberData112_next(nullptr);
        Info::CGuildRefreshGuildMemberData112_clbk CGuildRefreshGuildMemberData112_user(nullptr);
        
        Info::CGuildRegSuggestedMatter114_ptr CGuildRegSuggestedMatter114_next(nullptr);
        Info::CGuildRegSuggestedMatter114_clbk CGuildRegSuggestedMatter114_user(nullptr);
        
        Info::CGuildRelease116_ptr CGuildRelease116_next(nullptr);
        Info::CGuildRelease116_clbk CGuildRelease116_user(nullptr);
        
        Info::CGuildReleaseTemp118_ptr CGuildReleaseTemp118_next(nullptr);
        Info::CGuildReleaseTemp118_clbk CGuildReleaseTemp118_user(nullptr);
        
        Info::CGuildSendMsg_AddJoinApplier120_ptr CGuildSendMsg_AddJoinApplier120_next(nullptr);
        Info::CGuildSendMsg_AddJoinApplier120_clbk CGuildSendMsg_AddJoinApplier120_user(nullptr);
        
        Info::CGuildSendMsg_AlterMemberGrade122_ptr CGuildSendMsg_AlterMemberGrade122_next(nullptr);
        Info::CGuildSendMsg_AlterMemberGrade122_clbk CGuildSendMsg_AlterMemberGrade122_user(nullptr);
        
        Info::CGuildSendMsg_AlterMemberState124_ptr CGuildSendMsg_AlterMemberState124_next(nullptr);
        Info::CGuildSendMsg_AlterMemberState124_clbk CGuildSendMsg_AlterMemberState124_user(nullptr);
        
        Info::CGuildSendMsg_ApplyGuildBattleResultInform126_ptr CGuildSendMsg_ApplyGuildBattleResultInform126_next(nullptr);
        Info::CGuildSendMsg_ApplyGuildBattleResultInform126_clbk CGuildSendMsg_ApplyGuildBattleResultInform126_user(nullptr);
        
        Info::CGuildSendMsg_ChangeTaxRate128_ptr CGuildSendMsg_ChangeTaxRate128_next(nullptr);
        Info::CGuildSendMsg_ChangeTaxRate128_clbk CGuildSendMsg_ChangeTaxRate128_user(nullptr);
        
        Info::CGuildSendMsg_DelJoinApplier130_ptr CGuildSendMsg_DelJoinApplier130_next(nullptr);
        Info::CGuildSendMsg_DelJoinApplier130_clbk CGuildSendMsg_DelJoinApplier130_user(nullptr);
        
        Info::CGuildSendMsg_DownPacket132_ptr CGuildSendMsg_DownPacket132_next(nullptr);
        Info::CGuildSendMsg_DownPacket132_clbk CGuildSendMsg_DownPacket132_user(nullptr);
        
        Info::CGuildSendMsg_GuildBattleProposed134_ptr CGuildSendMsg_GuildBattleProposed134_next(nullptr);
        Info::CGuildSendMsg_GuildBattleProposed134_clbk CGuildSendMsg_GuildBattleProposed134_user(nullptr);
        
        Info::CGuildSendMsg_GuildBattleRefused136_ptr CGuildSendMsg_GuildBattleRefused136_next(nullptr);
        Info::CGuildSendMsg_GuildBattleRefused136_clbk CGuildSendMsg_GuildBattleRefused136_user(nullptr);
        
        Info::CGuildSendMsg_GuildBattleSuggestResult138_ptr CGuildSendMsg_GuildBattleSuggestResult138_next(nullptr);
        Info::CGuildSendMsg_GuildBattleSuggestResult138_clbk CGuildSendMsg_GuildBattleSuggestResult138_user(nullptr);
        
        Info::CGuildSendMsg_GuildDisjointInform140_ptr CGuildSendMsg_GuildDisjointInform140_next(nullptr);
        Info::CGuildSendMsg_GuildDisjointInform140_clbk CGuildSendMsg_GuildDisjointInform140_user(nullptr);
        
        Info::CGuildSendMsg_GuildInfoUpdateInform142_ptr CGuildSendMsg_GuildInfoUpdateInform142_next(nullptr);
        Info::CGuildSendMsg_GuildInfoUpdateInform142_clbk CGuildSendMsg_GuildInfoUpdateInform142_user(nullptr);
        
        Info::CGuildSendMsg_GuildJoinAcceptInform144_ptr CGuildSendMsg_GuildJoinAcceptInform144_next(nullptr);
        Info::CGuildSendMsg_GuildJoinAcceptInform144_clbk CGuildSendMsg_GuildJoinAcceptInform144_user(nullptr);
        
        Info::CGuildSendMsg_GuildMemberLogin146_ptr CGuildSendMsg_GuildMemberLogin146_next(nullptr);
        Info::CGuildSendMsg_GuildMemberLogin146_clbk CGuildSendMsg_GuildMemberLogin146_user(nullptr);
        
        Info::CGuildSendMsg_GuildMemberLogoff148_ptr CGuildSendMsg_GuildMemberLogoff148_next(nullptr);
        Info::CGuildSendMsg_GuildMemberLogoff148_clbk CGuildSendMsg_GuildMemberLogoff148_user(nullptr);
        
        Info::CGuildSendMsg_GuildMemberPosInform150_ptr CGuildSendMsg_GuildMemberPosInform150_next(nullptr);
        Info::CGuildSendMsg_GuildMemberPosInform150_clbk CGuildSendMsg_GuildMemberPosInform150_user(nullptr);
        
        Info::CGuildSendMsg_GuildOutputMoneyFail152_ptr CGuildSendMsg_GuildOutputMoneyFail152_next(nullptr);
        Info::CGuildSendMsg_GuildOutputMoneyFail152_clbk CGuildSendMsg_GuildOutputMoneyFail152_user(nullptr);
        
        Info::CGuildSendMsg_GuildRoomRented154_ptr CGuildSendMsg_GuildRoomRented154_next(nullptr);
        Info::CGuildSendMsg_GuildRoomRented154_clbk CGuildSendMsg_GuildRoomRented154_user(nullptr);
        
        Info::CGuildSendMsg_IOMoney156_ptr CGuildSendMsg_IOMoney156_next(nullptr);
        Info::CGuildSendMsg_IOMoney156_clbk CGuildSendMsg_IOMoney156_user(nullptr);
        
        Info::CGuildSendMsg_LeaveMember158_ptr CGuildSendMsg_LeaveMember158_next(nullptr);
        Info::CGuildSendMsg_LeaveMember158_clbk CGuildSendMsg_LeaveMember158_user(nullptr);
        
        Info::CGuildSendMsg_ManageGuildCommitteeResult160_ptr CGuildSendMsg_ManageGuildCommitteeResult160_next(nullptr);
        Info::CGuildSendMsg_ManageGuildCommitteeResult160_clbk CGuildSendMsg_ManageGuildCommitteeResult160_user(nullptr);
        
        Info::CGuildSendMsg_MasterElectPossible162_ptr CGuildSendMsg_MasterElectPossible162_next(nullptr);
        Info::CGuildSendMsg_MasterElectPossible162_clbk CGuildSendMsg_MasterElectPossible162_user(nullptr);
        
        Info::CGuildSendMsg_QueryPacket_Info164_ptr CGuildSendMsg_QueryPacket_Info164_next(nullptr);
        Info::CGuildSendMsg_QueryPacket_Info164_clbk CGuildSendMsg_QueryPacket_Info164_user(nullptr);
        
        Info::CGuildSendMsg_VoteCancelInform166_ptr CGuildSendMsg_VoteCancelInform166_next(nullptr);
        Info::CGuildSendMsg_VoteCancelInform166_clbk CGuildSendMsg_VoteCancelInform166_user(nullptr);
        
        Info::CGuildSendMsg_VoteComplete168_ptr CGuildSendMsg_VoteComplete168_next(nullptr);
        Info::CGuildSendMsg_VoteComplete168_clbk CGuildSendMsg_VoteComplete168_user(nullptr);
        
        Info::CGuildSendMsg_VoteProcessInform_Continue170_ptr CGuildSendMsg_VoteProcessInform_Continue170_next(nullptr);
        Info::CGuildSendMsg_VoteProcessInform_Continue170_clbk CGuildSendMsg_VoteProcessInform_Continue170_user(nullptr);
        
        Info::CGuildSendMsg_VoteProcessInform_Start172_ptr CGuildSendMsg_VoteProcessInform_Start172_next(nullptr);
        Info::CGuildSendMsg_VoteProcessInform_Start172_clbk CGuildSendMsg_VoteProcessInform_Start172_user(nullptr);
        
        Info::CGuildSendMsg_VoteState174_ptr CGuildSendMsg_VoteState174_next(nullptr);
        Info::CGuildSendMsg_VoteState174_clbk CGuildSendMsg_VoteState174_user(nullptr);
        
        Info::CGuildSendMsg_VoteStop176_ptr CGuildSendMsg_VoteStop176_next(nullptr);
        Info::CGuildSendMsg_VoteStop176_clbk CGuildSendMsg_VoteStop176_user(nullptr);
        
        Info::CGuildSetCopmlteGuildBattleSuggest178_ptr CGuildSetCopmlteGuildBattleSuggest178_next(nullptr);
        Info::CGuildSetCopmlteGuildBattleSuggest178_clbk CGuildSetCopmlteGuildBattleSuggest178_user(nullptr);
        
        Info::CGuildSetGreetingmsg_GUILD180_ptr CGuildSetGreetingmsg_GUILD180_next(nullptr);
        Info::CGuildSetGreetingmsg_GUILD180_clbk CGuildSetGreetingmsg_GUILD180_user(nullptr);
        
        Info::CGuildSetGuild182_ptr CGuildSetGuild182_next(nullptr);
        Info::CGuildSetGuild182_clbk CGuildSetGuild182_user(nullptr);
        
        Info::CGuildSetGuildBattleMatter184_ptr CGuildSetGuildBattleMatter184_next(nullptr);
        Info::CGuildSetGuildBattleMatter184_clbk CGuildSetGuildBattleMatter184_user(nullptr);
        
        Info::CGuildSetTemp186_ptr CGuildSetTemp186_next(nullptr);
        Info::CGuildSetTemp186_clbk CGuildSetTemp186_user(nullptr);
        
        Info::CGuildSortRankInGuild188_ptr CGuildSortRankInGuild188_next(nullptr);
        Info::CGuildSortRankInGuild188_clbk CGuildSortRankInGuild188_user(nullptr);
        
        Info::CGuildSrcGuildIsAvailableBattleRequestState190_ptr CGuildSrcGuildIsAvailableBattleRequestState190_next(nullptr);
        Info::CGuildSrcGuildIsAvailableBattleRequestState190_clbk CGuildSrcGuildIsAvailableBattleRequestState190_user(nullptr);
        
        Info::CGuildStartRankJob192_ptr CGuildStartRankJob192_next(nullptr);
        Info::CGuildStartRankJob192_clbk CGuildStartRankJob192_user(nullptr);
        
        Info::CGuildUpdateEmblem194_ptr CGuildUpdateEmblem194_next(nullptr);
        Info::CGuildUpdateEmblem194_clbk CGuildUpdateEmblem194_user(nullptr);
        
        Info::CGuildUpdateGrade196_ptr CGuildUpdateGrade196_next(nullptr);
        Info::CGuildUpdateGrade196_clbk CGuildUpdateGrade196_user(nullptr);
        
        Info::CGuildUpdateGuildBattleWinCnt198_ptr CGuildUpdateGuildBattleWinCnt198_next(nullptr);
        Info::CGuildUpdateGuildBattleWinCnt198_clbk CGuildUpdateGuildBattleWinCnt198_user(nullptr);
        
        Info::CGuildUpdateUTATax200_ptr CGuildUpdateUTATax200_next(nullptr);
        Info::CGuildUpdateUTATax200_clbk CGuildUpdateUTATax200_user(nullptr);
        
        
        Info::CGuilddtor_CGuild206_ptr CGuilddtor_CGuild206_next(nullptr);
        Info::CGuilddtor_CGuild206_clbk CGuilddtor_CGuild206_user(nullptr);
        
        bool CGuildActVote2_wrapper(struct CGuild* _this, struct _guild_member_info* pMemPtr, char byCode)
        {
           return CGuildActVote2_user(_this, pMemPtr, byCode, CGuildActVote2_next);
        };
        void CGuildAddScheduleComplete4_wrapper(struct CGuild* _this, char byRet, struct CGuild* pSrcGuild)
        {
           CGuildAddScheduleComplete4_user(_this, byRet, pSrcGuild, CGuildAddScheduleComplete4_next);
        };
        
        void CGuildctor_CGuild6_wrapper(struct CGuild* _this)
        {
           CGuildctor_CGuild6_user(_this, CGuildctor_CGuild6_next);
        };
        void CGuildCancelSuggestedMatter8_wrapper(struct CGuild* _this)
        {
           CGuildCancelSuggestedMatter8_user(_this, CGuildCancelSuggestedMatter8_next);
        };
        char CGuildCheckGuildBattleSuggestRequestToDestGuild10_wrapper(struct CGuild* _this, unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
        {
           return CGuildCheckGuildBattleSuggestRequestToDestGuild10_user(_this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx, CGuildCheckGuildBattleSuggestRequestToDestGuild10_next);
        };
        void CGuildClearGuildBattle12_wrapper(struct CGuild* _this)
        {
           CGuildClearGuildBattle12_user(_this, CGuildClearGuildBattle12_next);
        };
        void CGuildClearVote14_wrapper(struct CGuild* _this)
        {
           CGuildClearVote14_user(_this, CGuildClearVote14_next);
        };
        void CGuildCompleteOutGuildbattleCost16_wrapper(struct CGuild* _this, unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
        {
           CGuildCompleteOutGuildbattleCost16_user(_this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx, CGuildCompleteOutGuildbattleCost16_next);
        };
        void CGuildCompleteSelectMasterLastConn18_wrapper(struct CGuild* _this, unsigned int dwLastConnTime)
        {
           CGuildCompleteSelectMasterLastConn18_user(_this, dwLastConnTime, CGuildCompleteSelectMasterLastConn18_next);
        };
        void CGuildComplete_DB_Update_Committee20_wrapper(struct CGuild* _this, char* pData)
        {
           CGuildComplete_DB_Update_Committee20_user(_this, pData, CGuildComplete_DB_Update_Committee20_next);
        };
        bool CGuildDB_Update_GuildMaster22_wrapper(struct CGuild* _this, struct _guild_member_info* pNewguildMaster)
        {
           return CGuildDB_Update_GuildMaster22_user(_this, pNewguildMaster, CGuildDB_Update_GuildMaster22_next);
        };
        void CGuildDB_Update_GuildMaster_Complete24_wrapper(struct CGuild* _this, unsigned int in_guild_prev_masterSerial, char in_guild_prev_masterPrevGrade, unsigned int in_guild_new_masterSerial, char in_guild_new_masterPrevGrade)
        {
           CGuildDB_Update_GuildMaster_Complete24_user(_this, in_guild_prev_masterSerial, in_guild_prev_masterPrevGrade, in_guild_new_masterSerial, in_guild_new_masterPrevGrade, CGuildDB_Update_GuildMaster_Complete24_next);
        };
        char CGuildDestGuildIsAvailableBattleRequestState26_wrapper(struct CGuild* _this)
        {
           return CGuildDestGuildIsAvailableBattleRequestState26_user(_this, CGuildDestGuildIsAvailableBattleRequestState26_next);
        };
        void CGuildEndRankJob28_wrapper(struct CGuild* _this)
        {
           CGuildEndRankJob28_user(_this, CGuildEndRankJob28_next);
        };
        void CGuildEstGuild30_wrapper(struct CGuild* _this, unsigned int dwSerial, char* pwszName, char byRace, int nMemberNum, struct _guild_member_info* pEstMember)
        {
           CGuildEstGuild30_user(_this, dwSerial, pwszName, byRace, nMemberNum, pEstMember, CGuildEstGuild30_next);
        };
        void CGuildForceLeave32_wrapper(struct CGuild* _this, unsigned int dwMemberSerial)
        {
           CGuildForceLeave32_user(_this, dwMemberSerial, CGuildForceLeave32_next);
        };
        struct _guild_applier_info* CGuildGetApplierFromSerial34_wrapper(struct CGuild* _this, unsigned int dwApplierSerial)
        {
           return CGuildGetApplierFromSerial34_user(_this, dwApplierSerial, CGuildGetApplierFromSerial34_next);
        };
        char CGuildGetGrade36_wrapper(struct CGuild* _this)
        {
           return CGuildGetGrade36_user(_this, CGuildGetGrade36_next);
        };
        char* CGuildGetGuildMasterName38_wrapper(struct CGuild* _this)
        {
           return CGuildGetGuildMasterName38_user(_this, CGuildGetGuildMasterName38_next);
        };
        unsigned int CGuildGetGuildMasterSerial40_wrapper(struct CGuild* _this)
        {
           return CGuildGetGuildMasterSerial40_user(_this, CGuildGetGuildMasterSerial40_next);
        };
        struct _guild_member_info* CGuildGetMemberFromSerial42_wrapper(struct CGuild* _this, unsigned int dwMemberSerial)
        {
           return CGuildGetMemberFromSerial42_user(_this, dwMemberSerial, CGuildGetMemberFromSerial42_next);
        };
        int CGuildGetMemberNum44_wrapper(struct CGuild* _this)
        {
           return CGuildGetMemberNum44_user(_this, CGuildGetMemberNum44_next);
        };
        int CGuildGetMemberNumForJoin46_wrapper(struct CGuild* _this)
        {
           return CGuildGetMemberNumForJoin46_user(_this, CGuildGetMemberNumForJoin46_next);
        };
        char CGuildGetRace48_wrapper(struct CGuild* _this)
        {
           return CGuildGetRace48_user(_this, CGuildGetRace48_next);
        };
        long double CGuildGetTotalDalant50_wrapper(struct CGuild* _this)
        {
           return CGuildGetTotalDalant50_user(_this, CGuildGetTotalDalant50_next);
        };
        long double CGuildGetTotalGold52_wrapper(struct CGuild* _this)
        {
           return CGuildGetTotalGold52_user(_this, CGuildGetTotalGold52_next);
        };
        char CGuildGuildBattleSuggestRequestToDestGuild54_wrapper(struct CGuild* _this, unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
        {
           return CGuildGuildBattleSuggestRequestToDestGuild54_user(_this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx, CGuildGuildBattleSuggestRequestToDestGuild54_next);
        };
        void CGuildIOMoney56_wrapper(struct CGuild* _this, char* pwszIOerName, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, long double dTotalDalant, long double dTotalGold, char* pbyDate, bool bInPut)
        {
           CGuildIOMoney56_user(_this, pwszIOerName, dwIOerSerial, dIODalant, dIOGold, dTotalDalant, dTotalGold, pbyDate, bInPut, CGuildIOMoney56_next);
        };
        void CGuildInit58_wrapper(struct CGuild* _this, int nIndex)
        {
           CGuildInit58_user(_this, nIndex, CGuildInit58_next);
        };
        void CGuildInitVote60_wrapper(struct CGuild* _this)
        {
           CGuildInitVote60_user(_this, CGuildInitVote60_next);
        };
        bool CGuildIsFill62_wrapper(struct CGuild* _this)
        {
           return CGuildIsFill62_user(_this, CGuildIsFill62_next);
        };
        struct _guild_member_info* CGuildLoginMember64_wrapper(struct CGuild* _this, unsigned int dwMemberSerial, struct CPlayer* pPtr)
        {
           return CGuildLoginMember64_user(_this, dwMemberSerial, pPtr, CGuildLoginMember64_next);
        };
        bool CGuildLogoffMember66_wrapper(struct CGuild* _this, unsigned int dwMemberSerial)
        {
           return CGuildLogoffMember66_user(_this, dwMemberSerial, CGuildLogoffMember66_next);
        };
        void CGuildLoop68_wrapper(struct CGuild* _this, bool bChangeDay)
        {
           CGuildLoop68_user(_this, bChangeDay, CGuildLoop68_next);
        };
        void CGuildMakeBuddyPacket70_wrapper(struct CGuild* _this)
        {
           CGuildMakeBuddyPacket70_user(_this, CGuildMakeBuddyPacket70_next);
        };
        void CGuildMakeDownApplierPacket72_wrapper(struct CGuild* _this)
        {
           CGuildMakeDownApplierPacket72_user(_this, CGuildMakeDownApplierPacket72_next);
        };
        void CGuildMakeDownMemberPacket74_wrapper(struct CGuild* _this)
        {
           CGuildMakeDownMemberPacket74_user(_this, CGuildMakeDownMemberPacket74_next);
        };
        void CGuildMakeMoneyIOPacket76_wrapper(struct CGuild* _this)
        {
           CGuildMakeMoneyIOPacket76_user(_this, CGuildMakeMoneyIOPacket76_next);
        };
        void CGuildMakeQueryInfoPacket78_wrapper(struct CGuild* _this)
        {
           CGuildMakeQueryInfoPacket78_user(_this, CGuildMakeQueryInfoPacket78_next);
        };
        char CGuildManageAcceptORRefuseGuildBattle80_wrapper(struct CGuild* _this, bool bAccept)
        {
           return CGuildManageAcceptORRefuseGuildBattle80_user(_this, bAccept, CGuildManageAcceptORRefuseGuildBattle80_next);
        };
        char CGuildManageBuyGuildEmblem82_wrapper(struct CGuild* _this, unsigned int dwBuyer, unsigned int dwBack, unsigned int dwMark)
        {
           return CGuildManageBuyGuildEmblem82_user(_this, dwBuyer, dwBack, dwMark, CGuildManageBuyGuildEmblem82_next);
        };
        char CGuildManageExpulseMember84_wrapper(struct CGuild* _this, unsigned int dwMemberSerial)
        {
           return CGuildManageExpulseMember84_user(_this, dwMemberSerial, CGuildManageExpulseMember84_next);
        };
        char CGuildManageGuildCommittee86_wrapper(struct CGuild* _this, unsigned int dwDestSerial, bool bAppoint)
        {
           return CGuildManageGuildCommittee86_user(_this, dwDestSerial, bAppoint, CGuildManageGuildCommittee86_next);
        };
        char CGuildManagePopGuildMoney88_wrapper(struct CGuild* _this, unsigned int dwDest, unsigned int dwDalant, unsigned int dwGold)
        {
           return CGuildManagePopGuildMoney88_user(_this, dwDest, dwDalant, dwGold, CGuildManagePopGuildMoney88_next);
        };
        char CGuildManageProposeGuildBattle90_wrapper(struct CGuild* _this, unsigned int dwDestGuild, unsigned int dwStartTimeIdx, unsigned int dwMemberCountIdx, unsigned int dwMapIdx)
        {
           return CGuildManageProposeGuildBattle90_user(_this, dwDestGuild, dwStartTimeIdx, dwMemberCountIdx, dwMapIdx, CGuildManageProposeGuildBattle90_next);
        };
        bool CGuildPopApplier92_wrapper(struct CGuild* _this, unsigned int dwApplierSerial, char byDelCode)
        {
           return CGuildPopApplier92_user(_this, dwApplierSerial, byDelCode, CGuildPopApplier92_next);
        };
        bool CGuildPopMember94_wrapper(struct CGuild* _this, unsigned int dwMemberSerial)
        {
           return CGuildPopMember94_user(_this, dwMemberSerial, CGuildPopMember94_next);
        };
        bool CGuildPushApplier96_wrapper(struct CGuild* _this, struct CPlayer* pApplier)
        {
           return CGuildPushApplier96_user(_this, pApplier, CGuildPushApplier96_next);
        };
        void CGuildPushDQSDestGuildOutputGuildBattleCost98_wrapper(struct CGuild* _this)
        {
           CGuildPushDQSDestGuildOutputGuildBattleCost98_user(_this, CGuildPushDQSDestGuildOutputGuildBattleCost98_next);
        };
        void CGuildPushDQSGuildMasterLastConnn100_wrapper(struct CGuild* _this)
        {
           CGuildPushDQSGuildMasterLastConnn100_user(_this, CGuildPushDQSGuildMasterLastConnn100_next);
        };
        void CGuildPushDQSInGuildBattleCost102_wrapper(struct CGuild* _this)
        {
           CGuildPushDQSInGuildBattleCost102_user(_this, CGuildPushDQSInGuildBattleCost102_next);
        };
        void CGuildPushDQSInGuildBattleRewardMoney104_wrapper(struct CGuild* _this)
        {
           CGuildPushDQSInGuildBattleRewardMoney104_user(_this, CGuildPushDQSInGuildBattleRewardMoney104_next);
        };
        void CGuildPushDQSSourceGuildOutputGuildBattleCost106_wrapper(struct CGuild* _this)
        {
           CGuildPushDQSSourceGuildOutputGuildBattleCost106_user(_this, CGuildPushDQSSourceGuildOutputGuildBattleCost106_next);
        };
        void CGuildPushHistory_IOMoney108_wrapper(struct CGuild* _this, bool bInput, char* pwszIOerName, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, long double dLeftDalant, long double dLeftGold, char* pbyDate)
        {
           CGuildPushHistory_IOMoney108_user(_this, bInput, pwszIOerName, dwIOerSerial, dIODalant, dIOGold, dLeftDalant, dLeftGold, pbyDate, CGuildPushHistory_IOMoney108_next);
        };
        struct _guild_member_info* CGuildPushMember110_wrapper(struct CGuild* _this, struct _guild_member_info* pSheet)
        {
           return CGuildPushMember110_user(_this, pSheet, CGuildPushMember110_next);
        };
        void CGuildRefreshGuildMemberData112_wrapper(struct CGuild* _this, struct _guild_member_refresh_data* pRefreshMember)
        {
           CGuildRefreshGuildMemberData112_user(_this, pRefreshMember, CGuildRefreshGuildMemberData112_next);
        };
        bool CGuildRegSuggestedMatter114_wrapper(struct CGuild* _this, unsigned int dwSuggesterSerial, char byMatterType, unsigned int dwMatterDst, char* pwszComment, unsigned int dwMatterObj1, unsigned int dwMatterObj2, unsigned int dwMatterObj3)
        {
           return CGuildRegSuggestedMatter114_user(_this, dwSuggesterSerial, byMatterType, dwMatterDst, pwszComment, dwMatterObj1, dwMatterObj2, dwMatterObj3, CGuildRegSuggestedMatter114_next);
        };
        void CGuildRelease116_wrapper(struct CGuild* _this)
        {
           CGuildRelease116_user(_this, CGuildRelease116_next);
        };
        void CGuildReleaseTemp118_wrapper(struct CGuild* _this)
        {
           CGuildReleaseTemp118_user(_this, CGuildReleaseTemp118_next);
        };
        void CGuildSendMsg_AddJoinApplier120_wrapper(struct CGuild* _this, struct _guild_applier_info* p)
        {
           CGuildSendMsg_AddJoinApplier120_user(_this, p, CGuildSendMsg_AddJoinApplier120_next);
        };
        void CGuildSendMsg_AlterMemberGrade122_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_AlterMemberGrade122_user(_this, CGuildSendMsg_AlterMemberGrade122_next);
        };
        void CGuildSendMsg_AlterMemberState124_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_AlterMemberState124_user(_this, CGuildSendMsg_AlterMemberState124_next);
        };
        void CGuildSendMsg_ApplyGuildBattleResultInform126_wrapper(struct CGuild* _this, char byRet, char* wszDestGuildName)
        {
           CGuildSendMsg_ApplyGuildBattleResultInform126_user(_this, byRet, wszDestGuildName, CGuildSendMsg_ApplyGuildBattleResultInform126_next);
        };
        void CGuildSendMsg_ChangeTaxRate128_wrapper(struct CGuild* _this, char byTax)
        {
           CGuildSendMsg_ChangeTaxRate128_user(_this, byTax, CGuildSendMsg_ChangeTaxRate128_next);
        };
        void CGuildSendMsg_DelJoinApplier130_wrapper(struct CGuild* _this, struct _guild_applier_info* p, char byDelCode)
        {
           CGuildSendMsg_DelJoinApplier130_user(_this, p, byDelCode, CGuildSendMsg_DelJoinApplier130_next);
        };
        void CGuildSendMsg_DownPacket132_wrapper(struct CGuild* _this, char bDowntype, struct _guild_member_info* pMem)
        {
           CGuildSendMsg_DownPacket132_user(_this, bDowntype, pMem, CGuildSendMsg_DownPacket132_next);
        };
        int CGuildSendMsg_GuildBattleProposed134_wrapper(struct CGuild* _this, char* pwszName)
        {
           return CGuildSendMsg_GuildBattleProposed134_user(_this, pwszName, CGuildSendMsg_GuildBattleProposed134_next);
        };
        void CGuildSendMsg_GuildBattleRefused136_wrapper(struct CGuild* _this, char* pwszName)
        {
           CGuildSendMsg_GuildBattleRefused136_user(_this, pwszName, CGuildSendMsg_GuildBattleRefused136_next);
        };
        void CGuildSendMsg_GuildBattleSuggestResult138_wrapper(struct CGuild* _this, char byRet, char* wszDestGuildName)
        {
           CGuildSendMsg_GuildBattleSuggestResult138_user(_this, byRet, wszDestGuildName, CGuildSendMsg_GuildBattleSuggestResult138_next);
        };
        void CGuildSendMsg_GuildDisjointInform140_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_GuildDisjointInform140_user(_this, CGuildSendMsg_GuildDisjointInform140_next);
        };
        void CGuildSendMsg_GuildInfoUpdateInform142_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_GuildInfoUpdateInform142_user(_this, CGuildSendMsg_GuildInfoUpdateInform142_next);
        };
        void CGuildSendMsg_GuildJoinAcceptInform144_wrapper(struct CGuild* _this, struct _guild_member_info* p, unsigned int dwAcceptSerial)
        {
           CGuildSendMsg_GuildJoinAcceptInform144_user(_this, p, dwAcceptSerial, CGuildSendMsg_GuildJoinAcceptInform144_next);
        };
        void CGuildSendMsg_GuildMemberLogin146_wrapper(struct CGuild* _this, unsigned int dwSerial, uint16_t wMapCode, uint16_t wRegionIndex)
        {
           CGuildSendMsg_GuildMemberLogin146_user(_this, dwSerial, wMapCode, wRegionIndex, CGuildSendMsg_GuildMemberLogin146_next);
        };
        void CGuildSendMsg_GuildMemberLogoff148_wrapper(struct CGuild* _this, unsigned int dwSerial)
        {
           CGuildSendMsg_GuildMemberLogoff148_user(_this, dwSerial, CGuildSendMsg_GuildMemberLogoff148_next);
        };
        void CGuildSendMsg_GuildMemberPosInform150_wrapper(struct CGuild* _this, unsigned int dwSerial, uint16_t wMapCode, uint16_t wRegionIndex)
        {
           CGuildSendMsg_GuildMemberPosInform150_user(_this, dwSerial, wMapCode, wRegionIndex, CGuildSendMsg_GuildMemberPosInform150_next);
        };
        void CGuildSendMsg_GuildOutputMoneyFail152_wrapper(struct CGuild* _this, unsigned int dwIOerSerial)
        {
           CGuildSendMsg_GuildOutputMoneyFail152_user(_this, dwIOerSerial, CGuildSendMsg_GuildOutputMoneyFail152_next);
        };
        void CGuildSendMsg_GuildRoomRented154_wrapper(struct CGuild* _this, char byRoomType)
        {
           CGuildSendMsg_GuildRoomRented154_user(_this, byRoomType, CGuildSendMsg_GuildRoomRented154_next);
        };
        void CGuildSendMsg_IOMoney156_wrapper(struct CGuild* _this, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, bool bInPut, char* pbyDate)
        {
           CGuildSendMsg_IOMoney156_user(_this, dwIOerSerial, dIODalant, dIOGold, bInPut, pbyDate, CGuildSendMsg_IOMoney156_next);
        };
        void CGuildSendMsg_LeaveMember158_wrapper(struct CGuild* _this, unsigned int dwMemberSerial, bool bSelf, bool bPunish)
        {
           CGuildSendMsg_LeaveMember158_user(_this, dwMemberSerial, bSelf, bPunish, CGuildSendMsg_LeaveMember158_next);
        };
        void CGuildSendMsg_ManageGuildCommitteeResult160_wrapper(struct CGuild* _this, bool bAppoint, char* pwszCommitteeName)
        {
           CGuildSendMsg_ManageGuildCommitteeResult160_user(_this, bAppoint, pwszCommitteeName, CGuildSendMsg_ManageGuildCommitteeResult160_next);
        };
        void CGuildSendMsg_MasterElectPossible162_wrapper(struct CGuild* _this, bool bPossible)
        {
           CGuildSendMsg_MasterElectPossible162_user(_this, bPossible, CGuildSendMsg_MasterElectPossible162_next);
        };
        void CGuildSendMsg_QueryPacket_Info164_wrapper(struct CGuild* _this, int n)
        {
           CGuildSendMsg_QueryPacket_Info164_user(_this, n, CGuildSendMsg_QueryPacket_Info164_next);
        };
        void CGuildSendMsg_VoteCancelInform166_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_VoteCancelInform166_user(_this, CGuildSendMsg_VoteCancelInform166_next);
        };
        void CGuildSendMsg_VoteComplete168_wrapper(struct CGuild* _this, bool bPass)
        {
           CGuildSendMsg_VoteComplete168_user(_this, bPass, CGuildSendMsg_VoteComplete168_next);
        };
        void CGuildSendMsg_VoteProcessInform_Continue170_wrapper(struct CGuild* _this, struct _guild_member_info* pMem)
        {
           CGuildSendMsg_VoteProcessInform_Continue170_user(_this, pMem, CGuildSendMsg_VoteProcessInform_Continue170_next);
        };
        void CGuildSendMsg_VoteProcessInform_Start172_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_VoteProcessInform_Start172_user(_this, CGuildSendMsg_VoteProcessInform_Start172_next);
        };
        void CGuildSendMsg_VoteState174_wrapper(struct CGuild* _this)
        {
           CGuildSendMsg_VoteState174_user(_this, CGuildSendMsg_VoteState174_next);
        };
        void CGuildSendMsg_VoteStop176_wrapper(struct CGuild* _this, unsigned int dwMatterVoteSynKey)
        {
           CGuildSendMsg_VoteStop176_user(_this, dwMatterVoteSynKey, CGuildSendMsg_VoteStop176_next);
        };
        void CGuildSetCopmlteGuildBattleSuggest178_wrapper(struct CGuild* _this)
        {
           CGuildSetCopmlteGuildBattleSuggest178_user(_this, CGuildSetCopmlteGuildBattleSuggest178_next);
        };
        void CGuildSetGreetingmsg_GUILD180_wrapper(struct CGuild* _this, char* wszgreetmsg)
        {
           CGuildSetGreetingmsg_GUILD180_user(_this, wszgreetmsg, CGuildSetGreetingmsg_GUILD180_next);
        };
        void CGuildSetGuild182_wrapper(struct CGuild* _this, unsigned int dwSerial, char byGrade, char byRace, char* pwszName, char* pwszGreetingMsg, unsigned int dwEmblemBack, unsigned int dwEmblemMark, int nNum, struct _guild_member_info* pEstMember, long double dTotalDalant, long double dTotalGold, unsigned int dwMasterSerial, char byMasterPrevGrade, int nIOMoneyHisNum, struct _io_money_data* pIOMonHisList, unsigned int dwGuildBattleTotalWinCnt, unsigned int dwGuildBattleTotalDrawCnt, unsigned int dwGuildBattleTotalLoseCnt)
        {
           CGuildSetGuild182_user(_this, dwSerial, byGrade, byRace, pwszName, pwszGreetingMsg, dwEmblemBack, dwEmblemMark, nNum, pEstMember, dTotalDalant, dTotalGold, dwMasterSerial, byMasterPrevGrade, nIOMoneyHisNum, pIOMonHisList, dwGuildBattleTotalWinCnt, dwGuildBattleTotalDrawCnt, dwGuildBattleTotalLoseCnt, CGuildSetGuild182_next);
        };
        void CGuildSetGuildBattleMatter184_wrapper(struct CGuild* _this, unsigned int dwSrcGuildSerial, unsigned int dwStartTime, unsigned int dwNumber, unsigned int dwMapIdx)
        {
           CGuildSetGuildBattleMatter184_user(_this, dwSrcGuildSerial, dwStartTime, dwNumber, dwMapIdx, CGuildSetGuildBattleMatter184_next);
        };
        void CGuildSetTemp186_wrapper(struct CGuild* _this, char* pwszName)
        {
           CGuildSetTemp186_user(_this, pwszName, CGuildSetTemp186_next);
        };
        void CGuildSortRankInGuild188_wrapper(struct CGuild* _this)
        {
           CGuildSortRankInGuild188_user(_this, CGuildSortRankInGuild188_next);
        };
        char CGuildSrcGuildIsAvailableBattleRequestState190_wrapper(struct CGuild* _this)
        {
           return CGuildSrcGuildIsAvailableBattleRequestState190_user(_this, CGuildSrcGuildIsAvailableBattleRequestState190_next);
        };
        void CGuildStartRankJob192_wrapper(struct CGuild* _this)
        {
           CGuildStartRankJob192_user(_this, CGuildStartRankJob192_next);
        };
        void CGuildUpdateEmblem194_wrapper(struct CGuild* _this, unsigned int dwEmblemBack, unsigned int dwEmblemMark)
        {
           CGuildUpdateEmblem194_user(_this, dwEmblemBack, dwEmblemMark, CGuildUpdateEmblem194_next);
        };
        void CGuildUpdateGrade196_wrapper(struct CGuild* _this, char byGrade)
        {
           CGuildUpdateGrade196_user(_this, byGrade, CGuildUpdateGrade196_next);
        };
        void CGuildUpdateGuildBattleWinCnt198_wrapper(struct CGuild* _this, unsigned int dwTotWin, unsigned int dwTotDraw, unsigned int dwTotLose)
        {
           CGuildUpdateGuildBattleWinCnt198_user(_this, dwTotWin, dwTotDraw, dwTotLose, CGuildUpdateGuildBattleWinCnt198_next);
        };
        void CGuildUpdateUTATax200_wrapper(struct CGuild* _this, char byTaxRate)
        {
           CGuildUpdateUTATax200_user(_this, byTaxRate, CGuildUpdateUTATax200_next);
        };
        
        void CGuilddtor_CGuild206_wrapper(struct CGuild* _this)
        {
           CGuilddtor_CGuild206_user(_this, CGuilddtor_CGuild206_next);
        };
        
        ::std::array<hook_record, 101> CGuild_functions = 
        {
            _hook_record {
                (LPVOID)0x140254180L,
                (LPVOID *)&CGuildActVote2_user,
                (LPVOID *)&CGuildActVote2_next,
                (LPVOID)cast_pointer_function(CGuildActVote2_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(struct _guild_member_info*, char))&CGuild::ActVote)
            },
            _hook_record {
                (LPVOID)0x140258300L,
                (LPVOID *)&CGuildAddScheduleComplete4_user,
                (LPVOID *)&CGuildAddScheduleComplete4_next,
                (LPVOID)cast_pointer_function(CGuildAddScheduleComplete4_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char, struct CGuild*))&CGuild::AddScheduleComplete)
            },
            _hook_record {
                (LPVOID)0x1402515a0L,
                (LPVOID *)&CGuildctor_CGuild6_user,
                (LPVOID *)&CGuildctor_CGuild6_next,
                (LPVOID)cast_pointer_function(CGuildctor_CGuild6_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::ctor_CGuild)
            },
            _hook_record {
                (LPVOID)0x140254120L,
                (LPVOID *)&CGuildCancelSuggestedMatter8_user,
                (LPVOID *)&CGuildCancelSuggestedMatter8_next,
                (LPVOID)cast_pointer_function(CGuildCancelSuggestedMatter8_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::CancelSuggestedMatter)
            },
            _hook_record {
                (LPVOID)0x1402579f0L,
                (LPVOID *)&CGuildCheckGuildBattleSuggestRequestToDestGuild10_user,
                (LPVOID *)&CGuildCheckGuildBattleSuggestRequestToDestGuild10_next,
                (LPVOID)cast_pointer_function(CGuildCheckGuildBattleSuggestRequestToDestGuild10_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CGuild::CheckGuildBattleSuggestRequestToDestGuild)
            },
            _hook_record {
                (LPVOID)0x140258290L,
                (LPVOID *)&CGuildClearGuildBattle12_user,
                (LPVOID *)&CGuildClearGuildBattle12_next,
                (LPVOID)cast_pointer_function(CGuildClearGuildBattle12_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::ClearGuildBattle)
            },
            _hook_record {
                (LPVOID)0x140254220L,
                (LPVOID *)&CGuildClearVote14_user,
                (LPVOID *)&CGuildClearVote14_next,
                (LPVOID)cast_pointer_function(CGuildClearVote14_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::ClearVote)
            },
            _hook_record {
                (LPVOID)0x140257b00L,
                (LPVOID *)&CGuildCompleteOutGuildbattleCost16_user,
                (LPVOID *)&CGuildCompleteOutGuildbattleCost16_next,
                (LPVOID)cast_pointer_function(CGuildCompleteOutGuildbattleCost16_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CGuild::CompleteOutGuildbattleCost)
            },
            _hook_record {
                (LPVOID)0x140259ce0L,
                (LPVOID *)&CGuildCompleteSelectMasterLastConn18_user,
                (LPVOID *)&CGuildCompleteSelectMasterLastConn18_next,
                (LPVOID)cast_pointer_function(CGuildCompleteSelectMasterLastConn18_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int))&CGuild::CompleteSelectMasterLastConn)
            },
            _hook_record {
                (LPVOID)0x1402597b0L,
                (LPVOID *)&CGuildComplete_DB_Update_Committee20_user,
                (LPVOID *)&CGuildComplete_DB_Update_Committee20_next,
                (LPVOID)cast_pointer_function(CGuildComplete_DB_Update_Committee20_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char*))&CGuild::Complete_DB_Update_Committee)
            },
            _hook_record {
                (LPVOID)0x140252bd0L,
                (LPVOID *)&CGuildDB_Update_GuildMaster22_user,
                (LPVOID *)&CGuildDB_Update_GuildMaster22_next,
                (LPVOID)cast_pointer_function(CGuildDB_Update_GuildMaster22_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(struct _guild_member_info*))&CGuild::DB_Update_GuildMaster)
            },
            _hook_record {
                (LPVOID)0x140252d10L,
                (LPVOID *)&CGuildDB_Update_GuildMaster_Complete24_user,
                (LPVOID *)&CGuildDB_Update_GuildMaster_Complete24_next,
                (LPVOID)cast_pointer_function(CGuildDB_Update_GuildMaster_Complete24_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, char, unsigned int, char))&CGuild::DB_Update_GuildMaster_Complete)
            },
            _hook_record {
                (LPVOID)0x140257960L,
                (LPVOID *)&CGuildDestGuildIsAvailableBattleRequestState26_user,
                (LPVOID *)&CGuildDestGuildIsAvailableBattleRequestState26_next,
                (LPVOID)cast_pointer_function(CGuildDestGuildIsAvailableBattleRequestState26_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)())&CGuild::DestGuildIsAvailableBattleRequestState)
            },
            _hook_record {
                (LPVOID)0x140344990L,
                (LPVOID *)&CGuildEndRankJob28_user,
                (LPVOID *)&CGuildEndRankJob28_next,
                (LPVOID)cast_pointer_function(CGuildEndRankJob28_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::EndRankJob)
            },
            _hook_record {
                (LPVOID)0x1402523e0L,
                (LPVOID *)&CGuildEstGuild30_user,
                (LPVOID *)&CGuildEstGuild30_next,
                (LPVOID)cast_pointer_function(CGuildEstGuild30_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, char*, char, int, struct _guild_member_info*))&CGuild::EstGuild)
            },
            _hook_record {
                (LPVOID)0x140258c80L,
                (LPVOID *)&CGuildForceLeave32_user,
                (LPVOID *)&CGuildForceLeave32_next,
                (LPVOID)cast_pointer_function(CGuildForceLeave32_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int))&CGuild::ForceLeave)
            },
            _hook_record {
                (LPVOID)0x140254560L,
                (LPVOID *)&CGuildGetApplierFromSerial34_user,
                (LPVOID *)&CGuildGetApplierFromSerial34_next,
                (LPVOID)cast_pointer_function(CGuildGetApplierFromSerial34_wrapper),
                (LPVOID)cast_pointer_function((struct _guild_applier_info*(CGuild::*)(unsigned int))&CGuild::GetApplierFromSerial)
            },
            _hook_record {
                (LPVOID)0x140078f50L,
                (LPVOID *)&CGuildGetGrade36_user,
                (LPVOID *)&CGuildGetGrade36_next,
                (LPVOID)cast_pointer_function(CGuildGetGrade36_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)())&CGuild::GetGrade)
            },
            _hook_record {
                (LPVOID)0x140252300L,
                (LPVOID *)&CGuildGetGuildMasterName38_user,
                (LPVOID *)&CGuildGetGuildMasterName38_next,
                (LPVOID)cast_pointer_function(CGuildGetGuildMasterName38_wrapper),
                (LPVOID)cast_pointer_function((char*(CGuild::*)())&CGuild::GetGuildMasterName)
            },
            _hook_record {
                (LPVOID)0x14007c540L,
                (LPVOID *)&CGuildGetGuildMasterSerial40_user,
                (LPVOID *)&CGuildGetGuildMasterSerial40_next,
                (LPVOID)cast_pointer_function(CGuildGetGuildMasterSerial40_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CGuild::*)())&CGuild::GetGuildMasterSerial)
            },
            _hook_record {
                (LPVOID)0x1402544b0L,
                (LPVOID *)&CGuildGetMemberFromSerial42_user,
                (LPVOID *)&CGuildGetMemberFromSerial42_next,
                (LPVOID)cast_pointer_function(CGuildGetMemberFromSerial42_wrapper),
                (LPVOID)cast_pointer_function((struct _guild_member_info*(CGuild::*)(unsigned int))&CGuild::GetMemberFromSerial)
            },
            _hook_record {
                (LPVOID)0x1400ad180L,
                (LPVOID *)&CGuildGetMemberNum44_user,
                (LPVOID *)&CGuildGetMemberNum44_next,
                (LPVOID)cast_pointer_function(CGuildGetMemberNum44_wrapper),
                (LPVOID)cast_pointer_function((int(CGuild::*)())&CGuild::GetMemberNum)
            },
            _hook_record {
                (LPVOID)0x1400ad1a0L,
                (LPVOID *)&CGuildGetMemberNumForJoin46_user,
                (LPVOID *)&CGuildGetMemberNumForJoin46_next,
                (LPVOID)cast_pointer_function(CGuildGetMemberNumForJoin46_wrapper),
                (LPVOID)cast_pointer_function((int(CGuild::*)())&CGuild::GetMemberNumForJoin)
            },
            _hook_record {
                (LPVOID)0x1400ad150L,
                (LPVOID *)&CGuildGetRace48_user,
                (LPVOID *)&CGuildGetRace48_next,
                (LPVOID)cast_pointer_function(CGuildGetRace48_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)())&CGuild::GetRace)
            },
            _hook_record {
                (LPVOID)0x1400ad2a0L,
                (LPVOID *)&CGuildGetTotalDalant50_user,
                (LPVOID *)&CGuildGetTotalDalant50_next,
                (LPVOID)cast_pointer_function(CGuildGetTotalDalant50_wrapper),
                (LPVOID)cast_pointer_function((long double(CGuild::*)())&CGuild::GetTotalDalant)
            },
            _hook_record {
                (LPVOID)0x1400ad2e0L,
                (LPVOID *)&CGuildGetTotalGold52_user,
                (LPVOID *)&CGuildGetTotalGold52_next,
                (LPVOID)cast_pointer_function(CGuildGetTotalGold52_wrapper),
                (LPVOID)cast_pointer_function((long double(CGuild::*)())&CGuild::GetTotalGold)
            },
            _hook_record {
                (LPVOID)0x140257c30L,
                (LPVOID *)&CGuildGuildBattleSuggestRequestToDestGuild54_user,
                (LPVOID *)&CGuildGuildBattleSuggestRequestToDestGuild54_next,
                (LPVOID)cast_pointer_function(CGuildGuildBattleSuggestRequestToDestGuild54_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CGuild::GuildBattleSuggestRequestToDestGuild)
            },
            _hook_record {
                (LPVOID)0x140253230L,
                (LPVOID *)&CGuildIOMoney56_user,
                (LPVOID *)&CGuildIOMoney56_next,
                (LPVOID)cast_pointer_function(CGuildIOMoney56_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char*, unsigned int, long double, long double, long double, long double, char*, bool))&CGuild::IOMoney)
            },
            _hook_record {
                (LPVOID)0x140204e40L,
                (LPVOID *)&CGuildInit58_user,
                (LPVOID *)&CGuildInit58_next,
                (LPVOID)cast_pointer_function(CGuildInit58_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(int))&CGuild::Init)
            },
            _hook_record {
                (LPVOID)0x140254200L,
                (LPVOID *)&CGuildInitVote60_user,
                (LPVOID *)&CGuildInitVote60_next,
                (LPVOID)cast_pointer_function(CGuildInitVote60_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::InitVote)
            },
            _hook_record {
                (LPVOID)0x140254310L,
                (LPVOID *)&CGuildIsFill62_user,
                (LPVOID *)&CGuildIsFill62_next,
                (LPVOID)cast_pointer_function(CGuildIsFill62_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)())&CGuild::IsFill)
            },
            _hook_record {
                (LPVOID)0x140253750L,
                (LPVOID *)&CGuildLoginMember64_user,
                (LPVOID *)&CGuildLoginMember64_next,
                (LPVOID)cast_pointer_function(CGuildLoginMember64_wrapper),
                (LPVOID)cast_pointer_function((struct _guild_member_info*(CGuild::*)(unsigned int, struct CPlayer*))&CGuild::LoginMember)
            },
            _hook_record {
                (LPVOID)0x140253800L,
                (LPVOID *)&CGuildLogoffMember66_user,
                (LPVOID *)&CGuildLogoffMember66_next,
                (LPVOID)cast_pointer_function(CGuildLogoffMember66_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(unsigned int))&CGuild::LogoffMember)
            },
            _hook_record {
                (LPVOID)0x140253310L,
                (LPVOID *)&CGuildLoop68_user,
                (LPVOID *)&CGuildLoop68_next,
                (LPVOID)cast_pointer_function(CGuildLoop68_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(bool))&CGuild::Loop)
            },
            _hook_record {
                (LPVOID)0x1402551e0L,
                (LPVOID *)&CGuildMakeBuddyPacket70_user,
                (LPVOID *)&CGuildMakeBuddyPacket70_next,
                (LPVOID)cast_pointer_function(CGuildMakeBuddyPacket70_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::MakeBuddyPacket)
            },
            _hook_record {
                (LPVOID)0x140254ac0L,
                (LPVOID *)&CGuildMakeDownApplierPacket72_user,
                (LPVOID *)&CGuildMakeDownApplierPacket72_next,
                (LPVOID)cast_pointer_function(CGuildMakeDownApplierPacket72_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::MakeDownApplierPacket)
            },
            _hook_record {
                (LPVOID)0x140254620L,
                (LPVOID *)&CGuildMakeDownMemberPacket74_user,
                (LPVOID *)&CGuildMakeDownMemberPacket74_next,
                (LPVOID)cast_pointer_function(CGuildMakeDownMemberPacket74_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::MakeDownMemberPacket)
            },
            _hook_record {
                (LPVOID)0x140254f20L,
                (LPVOID *)&CGuildMakeMoneyIOPacket76_user,
                (LPVOID *)&CGuildMakeMoneyIOPacket76_next,
                (LPVOID)cast_pointer_function(CGuildMakeMoneyIOPacket76_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::MakeMoneyIOPacket)
            },
            _hook_record {
                (LPVOID)0x140254db0L,
                (LPVOID *)&CGuildMakeQueryInfoPacket78_user,
                (LPVOID *)&CGuildMakeQueryInfoPacket78_next,
                (LPVOID)cast_pointer_function(CGuildMakeQueryInfoPacket78_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::MakeQueryInfoPacket)
            },
            _hook_record {
                (LPVOID)0x140259ef0L,
                (LPVOID *)&CGuildManageAcceptORRefuseGuildBattle80_user,
                (LPVOID *)&CGuildManageAcceptORRefuseGuildBattle80_next,
                (LPVOID)cast_pointer_function(CGuildManageAcceptORRefuseGuildBattle80_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(bool))&CGuild::ManageAcceptORRefuseGuildBattle)
            },
            _hook_record {
                (LPVOID)0x140259160L,
                (LPVOID *)&CGuildManageBuyGuildEmblem82_user,
                (LPVOID *)&CGuildManageBuyGuildEmblem82_next,
                (LPVOID)cast_pointer_function(CGuildManageBuyGuildEmblem82_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int, unsigned int, unsigned int))&CGuild::ManageBuyGuildEmblem)
            },
            _hook_record {
                (LPVOID)0x140258db0L,
                (LPVOID *)&CGuildManageExpulseMember84_user,
                (LPVOID *)&CGuildManageExpulseMember84_next,
                (LPVOID)cast_pointer_function(CGuildManageExpulseMember84_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int))&CGuild::ManageExpulseMember)
            },
            _hook_record {
                (LPVOID)0x140259530L,
                (LPVOID *)&CGuildManageGuildCommittee86_user,
                (LPVOID *)&CGuildManageGuildCommittee86_next,
                (LPVOID)cast_pointer_function(CGuildManageGuildCommittee86_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int, bool))&CGuild::ManageGuildCommittee)
            },
            _hook_record {
                (LPVOID)0x140258ee0L,
                (LPVOID *)&CGuildManagePopGuildMoney88_user,
                (LPVOID *)&CGuildManagePopGuildMoney88_next,
                (LPVOID)cast_pointer_function(CGuildManagePopGuildMoney88_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int, unsigned int, unsigned int))&CGuild::ManagePopGuildMoney)
            },
            _hook_record {
                (LPVOID)0x1402593d0L,
                (LPVOID *)&CGuildManageProposeGuildBattle90_user,
                (LPVOID *)&CGuildManageProposeGuildBattle90_next,
                (LPVOID)cast_pointer_function(CGuildManageProposeGuildBattle90_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CGuild::ManageProposeGuildBattle)
            },
            _hook_record {
                (LPVOID)0x140253ce0L,
                (LPVOID *)&CGuildPopApplier92_user,
                (LPVOID *)&CGuildPopApplier92_next,
                (LPVOID)cast_pointer_function(CGuildPopApplier92_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(unsigned int, char))&CGuild::PopApplier)
            },
            _hook_record {
                (LPVOID)0x1402539f0L,
                (LPVOID *)&CGuildPopMember94_user,
                (LPVOID *)&CGuildPopMember94_next,
                (LPVOID)cast_pointer_function(CGuildPopMember94_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(unsigned int))&CGuild::PopMember)
            },
            _hook_record {
                (LPVOID)0x140253bf0L,
                (LPVOID *)&CGuildPushApplier96_user,
                (LPVOID *)&CGuildPushApplier96_next,
                (LPVOID)cast_pointer_function(CGuildPushApplier96_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(struct CPlayer*))&CGuild::PushApplier)
            },
            _hook_record {
                (LPVOID)0x140258020L,
                (LPVOID *)&CGuildPushDQSDestGuildOutputGuildBattleCost98_user,
                (LPVOID *)&CGuildPushDQSDestGuildOutputGuildBattleCost98_next,
                (LPVOID)cast_pointer_function(CGuildPushDQSDestGuildOutputGuildBattleCost98_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::PushDQSDestGuildOutputGuildBattleCost)
            },
            _hook_record {
                (LPVOID)0x140259c30L,
                (LPVOID *)&CGuildPushDQSGuildMasterLastConnn100_user,
                (LPVOID *)&CGuildPushDQSGuildMasterLastConnn100_next,
                (LPVOID)cast_pointer_function(CGuildPushDQSGuildMasterLastConnn100_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::PushDQSGuildMasterLastConnn)
            },
            _hook_record {
                (LPVOID)0x140257db0L,
                (LPVOID *)&CGuildPushDQSInGuildBattleCost102_user,
                (LPVOID *)&CGuildPushDQSInGuildBattleCost102_next,
                (LPVOID)cast_pointer_function(CGuildPushDQSInGuildBattleCost102_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::PushDQSInGuildBattleCost)
            },
            _hook_record {
                (LPVOID)0x140258180L,
                (LPVOID *)&CGuildPushDQSInGuildBattleRewardMoney104_user,
                (LPVOID *)&CGuildPushDQSInGuildBattleRewardMoney104_next,
                (LPVOID)cast_pointer_function(CGuildPushDQSInGuildBattleRewardMoney104_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::PushDQSInGuildBattleRewardMoney)
            },
            _hook_record {
                (LPVOID)0x140257ec0L,
                (LPVOID *)&CGuildPushDQSSourceGuildOutputGuildBattleCost106_user,
                (LPVOID *)&CGuildPushDQSSourceGuildOutputGuildBattleCost106_next,
                (LPVOID)cast_pointer_function(CGuildPushDQSSourceGuildOutputGuildBattleCost106_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::PushDQSSourceGuildOutputGuildBattleCost)
            },
            _hook_record {
                (LPVOID)0x140254330L,
                (LPVOID *)&CGuildPushHistory_IOMoney108_user,
                (LPVOID *)&CGuildPushHistory_IOMoney108_next,
                (LPVOID)cast_pointer_function(CGuildPushHistory_IOMoney108_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(bool, char*, unsigned int, long double, long double, long double, long double, char*))&CGuild::PushHistory_IOMoney)
            },
            _hook_record {
                (LPVOID)0x1402538d0L,
                (LPVOID *)&CGuildPushMember110_user,
                (LPVOID *)&CGuildPushMember110_next,
                (LPVOID)cast_pointer_function(CGuildPushMember110_wrapper),
                (LPVOID)cast_pointer_function((struct _guild_member_info*(CGuild::*)(struct _guild_member_info*))&CGuild::PushMember)
            },
            _hook_record {
                (LPVOID)0x140252640L,
                (LPVOID *)&CGuildRefreshGuildMemberData112_user,
                (LPVOID *)&CGuildRefreshGuildMemberData112_next,
                (LPVOID)cast_pointer_function(CGuildRefreshGuildMemberData112_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(struct _guild_member_refresh_data*))&CGuild::RefreshGuildMemberData)
            },
            _hook_record {
                (LPVOID)0x140253dd0L,
                (LPVOID *)&CGuildRegSuggestedMatter114_user,
                (LPVOID *)&CGuildRegSuggestedMatter114_next,
                (LPVOID)cast_pointer_function(CGuildRegSuggestedMatter114_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuild::*)(unsigned int, char, unsigned int, char*, unsigned int, unsigned int, unsigned int))&CGuild::RegSuggestedMatter)
            },
            _hook_record {
                (LPVOID)0x140251b50L,
                (LPVOID *)&CGuildRelease116_user,
                (LPVOID *)&CGuildRelease116_next,
                (LPVOID)cast_pointer_function(CGuildRelease116_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::Release)
            },
            _hook_record {
                (LPVOID)0x140251e20L,
                (LPVOID *)&CGuildReleaseTemp118_user,
                (LPVOID *)&CGuildReleaseTemp118_next,
                (LPVOID)cast_pointer_function(CGuildReleaseTemp118_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::ReleaseTemp)
            },
            _hook_record {
                (LPVOID)0x140256750L,
                (LPVOID *)&CGuildSendMsg_AddJoinApplier120_user,
                (LPVOID *)&CGuildSendMsg_AddJoinApplier120_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_AddJoinApplier120_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(struct _guild_applier_info*))&CGuild::SendMsg_AddJoinApplier)
            },
            _hook_record {
                (LPVOID)0x1402576b0L,
                (LPVOID *)&CGuildSendMsg_AlterMemberGrade122_user,
                (LPVOID *)&CGuildSendMsg_AlterMemberGrade122_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_AlterMemberGrade122_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_AlterMemberGrade)
            },
            _hook_record {
                (LPVOID)0x140257490L,
                (LPVOID *)&CGuildSendMsg_AlterMemberState124_user,
                (LPVOID *)&CGuildSendMsg_AlterMemberState124_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_AlterMemberState124_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_AlterMemberState)
            },
            _hook_record {
                (LPVOID)0x140258550L,
                (LPVOID *)&CGuildSendMsg_ApplyGuildBattleResultInform126_user,
                (LPVOID *)&CGuildSendMsg_ApplyGuildBattleResultInform126_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_ApplyGuildBattleResultInform126_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char, char*))&CGuild::SendMsg_ApplyGuildBattleResultInform)
            },
            _hook_record {
                (LPVOID)0x140255730L,
                (LPVOID *)&CGuildSendMsg_ChangeTaxRate128_user,
                (LPVOID *)&CGuildSendMsg_ChangeTaxRate128_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_ChangeTaxRate128_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char))&CGuild::SendMsg_ChangeTaxRate)
            },
            _hook_record {
                (LPVOID)0x140256970L,
                (LPVOID *)&CGuildSendMsg_DelJoinApplier130_user,
                (LPVOID *)&CGuildSendMsg_DelJoinApplier130_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_DelJoinApplier130_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(struct _guild_applier_info*, char))&CGuild::SendMsg_DelJoinApplier)
            },
            _hook_record {
                (LPVOID)0x140255470L,
                (LPVOID *)&CGuildSendMsg_DownPacket132_user,
                (LPVOID *)&CGuildSendMsg_DownPacket132_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_DownPacket132_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char, struct _guild_member_info*))&CGuild::SendMsg_DownPacket)
            },
            _hook_record {
                (LPVOID)0x14025a120L,
                (LPVOID *)&CGuildSendMsg_GuildBattleProposed134_user,
                (LPVOID *)&CGuildSendMsg_GuildBattleProposed134_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildBattleProposed134_wrapper),
                (LPVOID)cast_pointer_function((int(CGuild::*)(char*))&CGuild::SendMsg_GuildBattleProposed)
            },
            _hook_record {
                (LPVOID)0x14025a220L,
                (LPVOID *)&CGuildSendMsg_GuildBattleRefused136_user,
                (LPVOID *)&CGuildSendMsg_GuildBattleRefused136_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildBattleRefused136_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char*))&CGuild::SendMsg_GuildBattleRefused)
            },
            _hook_record {
                (LPVOID)0x1402583f0L,
                (LPVOID *)&CGuildSendMsg_GuildBattleSuggestResult138_user,
                (LPVOID *)&CGuildSendMsg_GuildBattleSuggestResult138_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildBattleSuggestResult138_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char, char*))&CGuild::SendMsg_GuildBattleSuggestResult)
            },
            _hook_record {
                (LPVOID)0x140256fe0L,
                (LPVOID *)&CGuildSendMsg_GuildDisjointInform140_user,
                (LPVOID *)&CGuildSendMsg_GuildDisjointInform140_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildDisjointInform140_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_GuildDisjointInform)
            },
            _hook_record {
                (LPVOID)0x140255850L,
                (LPVOID *)&CGuildSendMsg_GuildInfoUpdateInform142_user,
                (LPVOID *)&CGuildSendMsg_GuildInfoUpdateInform142_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildInfoUpdateInform142_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_GuildInfoUpdateInform)
            },
            _hook_record {
                (LPVOID)0x140256ae0L,
                (LPVOID *)&CGuildSendMsg_GuildJoinAcceptInform144_user,
                (LPVOID *)&CGuildSendMsg_GuildJoinAcceptInform144_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildJoinAcceptInform144_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(struct _guild_member_info*, unsigned int))&CGuild::SendMsg_GuildJoinAcceptInform)
            },
            _hook_record {
                (LPVOID)0x1402570f0L,
                (LPVOID *)&CGuildSendMsg_GuildMemberLogin146_user,
                (LPVOID *)&CGuildSendMsg_GuildMemberLogin146_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildMemberLogin146_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, uint16_t, uint16_t))&CGuild::SendMsg_GuildMemberLogin)
            },
            _hook_record {
                (LPVOID)0x140257250L,
                (LPVOID *)&CGuildSendMsg_GuildMemberLogoff148_user,
                (LPVOID *)&CGuildSendMsg_GuildMemberLogoff148_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildMemberLogoff148_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int))&CGuild::SendMsg_GuildMemberLogoff)
            },
            _hook_record {
                (LPVOID)0x140257360L,
                (LPVOID *)&CGuildSendMsg_GuildMemberPosInform150_user,
                (LPVOID *)&CGuildSendMsg_GuildMemberPosInform150_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildMemberPosInform150_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, uint16_t, uint16_t))&CGuild::SendMsg_GuildMemberPosInform)
            },
            _hook_record {
                (LPVOID)0x140256ed0L,
                (LPVOID *)&CGuildSendMsg_GuildOutputMoneyFail152_user,
                (LPVOID *)&CGuildSendMsg_GuildOutputMoneyFail152_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildOutputMoneyFail152_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int))&CGuild::SendMsg_GuildOutputMoneyFail)
            },
            _hook_record {
                (LPVOID)0x1402586a0L,
                (LPVOID *)&CGuildSendMsg_GuildRoomRented154_user,
                (LPVOID *)&CGuildSendMsg_GuildRoomRented154_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_GuildRoomRented154_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char))&CGuild::SendMsg_GuildRoomRented)
            },
            _hook_record {
                (LPVOID)0x140256cf0L,
                (LPVOID *)&CGuildSendMsg_IOMoney156_user,
                (LPVOID *)&CGuildSendMsg_IOMoney156_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_IOMoney156_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, long double, long double, bool, char*))&CGuild::SendMsg_IOMoney)
            },
            _hook_record {
                (LPVOID)0x140255a30L,
                (LPVOID *)&CGuildSendMsg_LeaveMember158_user,
                (LPVOID *)&CGuildSendMsg_LeaveMember158_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_LeaveMember158_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, bool, bool))&CGuild::SendMsg_LeaveMember)
            },
            _hook_record {
                (LPVOID)0x140259b00L,
                (LPVOID *)&CGuildSendMsg_ManageGuildCommitteeResult160_user,
                (LPVOID *)&CGuildSendMsg_ManageGuildCommitteeResult160_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_ManageGuildCommitteeResult160_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(bool, char*))&CGuild::SendMsg_ManageGuildCommitteeResult)
            },
            _hook_record {
                (LPVOID)0x140259d50L,
                (LPVOID *)&CGuildSendMsg_MasterElectPossible162_user,
                (LPVOID *)&CGuildSendMsg_MasterElectPossible162_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_MasterElectPossible162_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(bool))&CGuild::SendMsg_MasterElectPossible)
            },
            _hook_record {
                (LPVOID)0x1402559b0L,
                (LPVOID *)&CGuildSendMsg_QueryPacket_Info164_user,
                (LPVOID *)&CGuildSendMsg_QueryPacket_Info164_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_QueryPacket_Info164_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(int))&CGuild::SendMsg_QueryPacket_Info)
            },
            _hook_record {
                (LPVOID)0x140256410L,
                (LPVOID *)&CGuildSendMsg_VoteCancelInform166_user,
                (LPVOID *)&CGuildSendMsg_VoteCancelInform166_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_VoteCancelInform166_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_VoteCancelInform)
            },
            _hook_record {
                (LPVOID)0x140256630L,
                (LPVOID *)&CGuildSendMsg_VoteComplete168_user,
                (LPVOID *)&CGuildSendMsg_VoteComplete168_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_VoteComplete168_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(bool))&CGuild::SendMsg_VoteComplete)
            },
            _hook_record {
                (LPVOID)0x140255f20L,
                (LPVOID *)&CGuildSendMsg_VoteProcessInform_Continue170_user,
                (LPVOID *)&CGuildSendMsg_VoteProcessInform_Continue170_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_VoteProcessInform_Continue170_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(struct _guild_member_info*))&CGuild::SendMsg_VoteProcessInform_Continue)
            },
            _hook_record {
                (LPVOID)0x140255b90L,
                (LPVOID *)&CGuildSendMsg_VoteProcessInform_Start172_user,
                (LPVOID *)&CGuildSendMsg_VoteProcessInform_Start172_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_VoteProcessInform_Start172_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_VoteProcessInform_Start)
            },
            _hook_record {
                (LPVOID)0x140256270L,
                (LPVOID *)&CGuildSendMsg_VoteState174_user,
                (LPVOID *)&CGuildSendMsg_VoteState174_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_VoteState174_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SendMsg_VoteState)
            },
            _hook_record {
                (LPVOID)0x140256540L,
                (LPVOID *)&CGuildSendMsg_VoteStop176_user,
                (LPVOID *)&CGuildSendMsg_VoteStop176_next,
                (LPVOID)cast_pointer_function(CGuildSendMsg_VoteStop176_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int))&CGuild::SendMsg_VoteStop)
            },
            _hook_record {
                (LPVOID)0x1402582e0L,
                (LPVOID *)&CGuildSetCopmlteGuildBattleSuggest178_user,
                (LPVOID *)&CGuildSetCopmlteGuildBattleSuggest178_next,
                (LPVOID)cast_pointer_function(CGuildSetCopmlteGuildBattleSuggest178_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SetCopmlteGuildBattleSuggest)
            },
            _hook_record {
                (LPVOID)0x140258b60L,
                (LPVOID *)&CGuildSetGreetingmsg_GUILD180_user,
                (LPVOID *)&CGuildSetGreetingmsg_GUILD180_next,
                (LPVOID)cast_pointer_function(CGuildSetGreetingmsg_GUILD180_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char*))&CGuild::SetGreetingmsg_GUILD)
            },
            _hook_record {
                (LPVOID)0x140251e40L,
                (LPVOID *)&CGuildSetGuild182_user,
                (LPVOID *)&CGuildSetGuild182_next,
                (LPVOID)cast_pointer_function(CGuildSetGuild182_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, char, char, char*, char*, unsigned int, unsigned int, int, struct _guild_member_info*, long double, long double, unsigned int, char, int, struct _io_money_data*, unsigned int, unsigned int, unsigned int))&CGuild::SetGuild)
            },
            _hook_record {
                (LPVOID)0x140259e40L,
                (LPVOID *)&CGuildSetGuildBattleMatter184_user,
                (LPVOID *)&CGuildSetGuildBattleMatter184_next,
                (LPVOID)cast_pointer_function(CGuildSetGuildBattleMatter184_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CGuild::SetGuildBattleMatter)
            },
            _hook_record {
                (LPVOID)0x140251da0L,
                (LPVOID *)&CGuildSetTemp186_user,
                (LPVOID *)&CGuildSetTemp186_next,
                (LPVOID)cast_pointer_function(CGuildSetTemp186_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char*))&CGuild::SetTemp)
            },
            _hook_record {
                (LPVOID)0x140252780L,
                (LPVOID *)&CGuildSortRankInGuild188_user,
                (LPVOID *)&CGuildSortRankInGuild188_next,
                (LPVOID)cast_pointer_function(CGuildSortRankInGuild188_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::SortRankInGuild)
            },
            _hook_record {
                (LPVOID)0x1402578d0L,
                (LPVOID *)&CGuildSrcGuildIsAvailableBattleRequestState190_user,
                (LPVOID *)&CGuildSrcGuildIsAvailableBattleRequestState190_next,
                (LPVOID)cast_pointer_function(CGuildSrcGuildIsAvailableBattleRequestState190_wrapper),
                (LPVOID)cast_pointer_function((char(CGuild::*)())&CGuild::SrcGuildIsAvailableBattleRequestState)
            },
            _hook_record {
                (LPVOID)0x1403447f0L,
                (LPVOID *)&CGuildStartRankJob192_user,
                (LPVOID *)&CGuildStartRankJob192_next,
                (LPVOID)cast_pointer_function(CGuildStartRankJob192_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::StartRankJob)
            },
            _hook_record {
                (LPVOID)0x140252920L,
                (LPVOID *)&CGuildUpdateEmblem194_user,
                (LPVOID *)&CGuildUpdateEmblem194_next,
                (LPVOID)cast_pointer_function(CGuildUpdateEmblem194_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, unsigned int))&CGuild::UpdateEmblem)
            },
            _hook_record {
                (LPVOID)0x1402529a0L,
                (LPVOID *)&CGuildUpdateGrade196_user,
                (LPVOID *)&CGuildUpdateGrade196_next,
                (LPVOID)cast_pointer_function(CGuildUpdateGrade196_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char))&CGuild::UpdateGrade)
            },
            _hook_record {
                (LPVOID)0x140253190L,
                (LPVOID *)&CGuildUpdateGuildBattleWinCnt198_user,
                (LPVOID *)&CGuildUpdateGuildBattleWinCnt198_next,
                (LPVOID)cast_pointer_function(CGuildUpdateGuildBattleWinCnt198_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(unsigned int, unsigned int, unsigned int))&CGuild::UpdateGuildBattleWinCnt)
            },
            _hook_record {
                (LPVOID)0x140252bb0L,
                (LPVOID *)&CGuildUpdateUTATax200_user,
                (LPVOID *)&CGuildUpdateUTATax200_next,
                (LPVOID)cast_pointer_function(CGuildUpdateUTATax200_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)(char))&CGuild::UpdateUTATax)
            },
            _hook_record {
                (LPVOID)0x1402519e0L,
                (LPVOID *)&CGuilddtor_CGuild206_user,
                (LPVOID *)&CGuilddtor_CGuild206_next,
                (LPVOID)cast_pointer_function(CGuilddtor_CGuild206_wrapper),
                (LPVOID)cast_pointer_function((void(CGuild::*)())&CGuild::dtor_CGuild)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
