#include <CRFWorldDatabaseDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CRFWorldDatabaseAdd_PvpPoint2_ptr CRFWorldDatabaseAdd_PvpPoint2_next(nullptr);
        Info::CRFWorldDatabaseAdd_PvpPoint2_clbk CRFWorldDatabaseAdd_PvpPoint2_user(nullptr);
        
        
        Info::CRFWorldDatabasector_CRFWorldDatabase4_ptr CRFWorldDatabasector_CRFWorldDatabase4_next(nullptr);
        Info::CRFWorldDatabasector_CRFWorldDatabase4_clbk CRFWorldDatabasector_CRFWorldDatabase4_user(nullptr);
        
        Info::CRFWorldDatabaseCheck_GuildMemberCount6_ptr CRFWorldDatabaseCheck_GuildMemberCount6_next(nullptr);
        Info::CRFWorldDatabaseCheck_GuildMemberCount6_clbk CRFWorldDatabaseCheck_GuildMemberCount6_user(nullptr);
        
        Info::CRFWorldDatabaseCreateCharacterSelectLogTable8_ptr CRFWorldDatabaseCreateCharacterSelectLogTable8_next(nullptr);
        Info::CRFWorldDatabaseCreateCharacterSelectLogTable8_clbk CRFWorldDatabaseCreateCharacterSelectLogTable8_user(nullptr);
        
        Info::CRFWorldDatabaseCreateGuildBattleRankTable10_ptr CRFWorldDatabaseCreateGuildBattleRankTable10_next(nullptr);
        Info::CRFWorldDatabaseCreateGuildBattleRankTable10_clbk CRFWorldDatabaseCreateGuildBattleRankTable10_user(nullptr);
        
        Info::CRFWorldDatabaseCreate_PvpPointGuildRankTable12_ptr CRFWorldDatabaseCreate_PvpPointGuildRankTable12_next(nullptr);
        Info::CRFWorldDatabaseCreate_PvpPointGuildRankTable12_clbk CRFWorldDatabaseCreate_PvpPointGuildRankTable12_user(nullptr);
        
        Info::CRFWorldDatabaseDeleteGuildBattleInfo14_ptr CRFWorldDatabaseDeleteGuildBattleInfo14_next(nullptr);
        Info::CRFWorldDatabaseDeleteGuildBattleInfo14_clbk CRFWorldDatabaseDeleteGuildBattleInfo14_user(nullptr);
        
        Info::CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_ptr CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_next(nullptr);
        Info::CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_clbk CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_user(nullptr);
        
        Info::CRFWorldDatabaseDelete_CharacterData18_ptr CRFWorldDatabaseDelete_CharacterData18_next(nullptr);
        Info::CRFWorldDatabaseDelete_CharacterData18_clbk CRFWorldDatabaseDelete_CharacterData18_user(nullptr);
        
        Info::CRFWorldDatabaseDelete_Guild20_ptr CRFWorldDatabaseDelete_Guild20_next(nullptr);
        Info::CRFWorldDatabaseDelete_Guild20_clbk CRFWorldDatabaseDelete_Guild20_user(nullptr);
        
        Info::CRFWorldDatabaseDelete_ItemCharge22_ptr CRFWorldDatabaseDelete_ItemCharge22_next(nullptr);
        Info::CRFWorldDatabaseDelete_ItemCharge22_clbk CRFWorldDatabaseDelete_ItemCharge22_user(nullptr);
        
        Info::CRFWorldDatabaseDelete_PatriarchComm24_ptr CRFWorldDatabaseDelete_PatriarchComm24_next(nullptr);
        Info::CRFWorldDatabaseDelete_PatriarchComm24_clbk CRFWorldDatabaseDelete_PatriarchComm24_user(nullptr);
        
        Info::CRFWorldDatabaseDelete_TrunkItemCharge26_ptr CRFWorldDatabaseDelete_TrunkItemCharge26_next(nullptr);
        Info::CRFWorldDatabaseDelete_TrunkItemCharge26_clbk CRFWorldDatabaseDelete_TrunkItemCharge26_user(nullptr);
        
        Info::CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_ptr CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_next(nullptr);
        Info::CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_clbk CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_user(nullptr);
        
        Info::CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_ptr CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_next(nullptr);
        Info::CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_clbk CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_user(nullptr);
        
        Info::CRFWorldDatabaseInsertCharacterSelectLog32_ptr CRFWorldDatabaseInsertCharacterSelectLog32_next(nullptr);
        Info::CRFWorldDatabaseInsertCharacterSelectLog32_clbk CRFWorldDatabaseInsertCharacterSelectLog32_user(nullptr);
        
        Info::CRFWorldDatabaseInsertGuildBattleDefaultRecord34_ptr CRFWorldDatabaseInsertGuildBattleDefaultRecord34_next(nullptr);
        Info::CRFWorldDatabaseInsertGuildBattleDefaultRecord34_clbk CRFWorldDatabaseInsertGuildBattleDefaultRecord34_user(nullptr);
        
        Info::CRFWorldDatabaseInsertGuildBattleRankRecord36_ptr CRFWorldDatabaseInsertGuildBattleRankRecord36_next(nullptr);
        Info::CRFWorldDatabaseInsertGuildBattleRankRecord36_clbk CRFWorldDatabaseInsertGuildBattleRankRecord36_user(nullptr);
        
        Info::CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_ptr CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_next(nullptr);
        Info::CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_clbk CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_AccountTrunk40_ptr CRFWorldDatabaseInsert_AccountTrunk40_next(nullptr);
        Info::CRFWorldDatabaseInsert_AccountTrunk40_clbk CRFWorldDatabaseInsert_AccountTrunk40_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_AccountTrunkExtend42_ptr CRFWorldDatabaseInsert_AccountTrunkExtend42_next(nullptr);
        Info::CRFWorldDatabaseInsert_AccountTrunkExtend42_clbk CRFWorldDatabaseInsert_AccountTrunkExtend42_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_AnimusData44_ptr CRFWorldDatabaseInsert_AnimusData44_next(nullptr);
        Info::CRFWorldDatabaseInsert_AnimusData44_clbk CRFWorldDatabaseInsert_AnimusData44_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_AnimusLog46_ptr CRFWorldDatabaseInsert_AnimusLog46_next(nullptr);
        Info::CRFWorldDatabaseInsert_AnimusLog46_clbk CRFWorldDatabaseInsert_AnimusLog46_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_BossCryRecord48_ptr CRFWorldDatabaseInsert_BossCryRecord48_next(nullptr);
        Info::CRFWorldDatabaseInsert_BossCryRecord48_clbk CRFWorldDatabaseInsert_BossCryRecord48_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Buddy50_ptr CRFWorldDatabaseInsert_Buddy50_next(nullptr);
        Info::CRFWorldDatabaseInsert_Buddy50_clbk CRFWorldDatabaseInsert_Buddy50_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_CashLimSale52_ptr CRFWorldDatabaseInsert_CashLimSale52_next(nullptr);
        Info::CRFWorldDatabaseInsert_CashLimSale52_clbk CRFWorldDatabaseInsert_CashLimSale52_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_CharacterData54_ptr CRFWorldDatabaseInsert_CharacterData54_next(nullptr);
        Info::CRFWorldDatabaseInsert_CharacterData54_clbk CRFWorldDatabaseInsert_CharacterData54_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_ptr CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_next(nullptr);
        Info::CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_clbk CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Economy_History58_ptr CRFWorldDatabaseInsert_Economy_History58_next(nullptr);
        Info::CRFWorldDatabaseInsert_Economy_History58_clbk CRFWorldDatabaseInsert_Economy_History58_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_GoldenBoxItem60_ptr CRFWorldDatabaseInsert_GoldenBoxItem60_next(nullptr);
        Info::CRFWorldDatabaseInsert_GoldenBoxItem60_clbk CRFWorldDatabaseInsert_GoldenBoxItem60_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_GreetingRecord62_ptr CRFWorldDatabaseInsert_GreetingRecord62_next(nullptr);
        Info::CRFWorldDatabaseInsert_GreetingRecord62_clbk CRFWorldDatabaseInsert_GreetingRecord62_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_GuidRoom64_ptr CRFWorldDatabaseInsert_GuidRoom64_next(nullptr);
        Info::CRFWorldDatabaseInsert_GuidRoom64_clbk CRFWorldDatabaseInsert_GuidRoom64_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Guild66_ptr CRFWorldDatabaseInsert_Guild66_next(nullptr);
        Info::CRFWorldDatabaseInsert_Guild66_clbk CRFWorldDatabaseInsert_Guild66_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_GuildBatlleResultLog68_ptr CRFWorldDatabaseInsert_GuildBatlleResultLog68_next(nullptr);
        Info::CRFWorldDatabaseInsert_GuildBatlleResultLog68_clbk CRFWorldDatabaseInsert_GuildBatlleResultLog68_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_ptr CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_next(nullptr);
        Info::CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_clbk CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_GuildMoneyHistory72_ptr CRFWorldDatabaseInsert_GuildMoneyHistory72_next(nullptr);
        Info::CRFWorldDatabaseInsert_GuildMoneyHistory72_clbk CRFWorldDatabaseInsert_GuildMoneyHistory72_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_ItemChargeInGame74_ptr CRFWorldDatabaseInsert_ItemChargeInGame74_next(nullptr);
        Info::CRFWorldDatabaseInsert_ItemChargeInGame74_clbk CRFWorldDatabaseInsert_ItemChargeInGame74_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_ItemCombineEx76_ptr CRFWorldDatabaseInsert_ItemCombineEx76_next(nullptr);
        Info::CRFWorldDatabaseInsert_ItemCombineEx76_clbk CRFWorldDatabaseInsert_ItemCombineEx76_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Level_Log78_ptr CRFWorldDatabaseInsert_Level_Log78_next(nullptr);
        Info::CRFWorldDatabaseInsert_Level_Log78_clbk CRFWorldDatabaseInsert_Level_Log78_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_LimitItemRecord80_ptr CRFWorldDatabaseInsert_LimitItemRecord80_next(nullptr);
        Info::CRFWorldDatabaseInsert_LimitItemRecord80_clbk CRFWorldDatabaseInsert_LimitItemRecord80_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_MacroData82_ptr CRFWorldDatabaseInsert_MacroData82_next(nullptr);
        Info::CRFWorldDatabaseInsert_MacroData82_clbk CRFWorldDatabaseInsert_MacroData82_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_NpcData84_ptr CRFWorldDatabaseInsert_NpcData84_next(nullptr);
        Info::CRFWorldDatabaseInsert_NpcData84_clbk CRFWorldDatabaseInsert_NpcData84_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_NpcData86_ptr CRFWorldDatabaseInsert_NpcData86_next(nullptr);
        Info::CRFWorldDatabaseInsert_NpcData86_clbk CRFWorldDatabaseInsert_NpcData86_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_NpcLog88_ptr CRFWorldDatabaseInsert_NpcLog88_next(nullptr);
        Info::CRFWorldDatabaseInsert_NpcLog88_clbk CRFWorldDatabaseInsert_NpcLog88_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_NpcQuest_History90_ptr CRFWorldDatabaseInsert_NpcQuest_History90_next(nullptr);
        Info::CRFWorldDatabaseInsert_NpcQuest_History90_clbk CRFWorldDatabaseInsert_NpcQuest_History90_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_OreCutting92_ptr CRFWorldDatabaseInsert_OreCutting92_next(nullptr);
        Info::CRFWorldDatabaseInsert_OreCutting92_clbk CRFWorldDatabaseInsert_OreCutting92_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_OreReset_Log94_ptr CRFWorldDatabaseInsert_OreReset_Log94_next(nullptr);
        Info::CRFWorldDatabaseInsert_OreReset_Log94_clbk CRFWorldDatabaseInsert_OreReset_Log94_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PSDefaultRecord96_ptr CRFWorldDatabaseInsert_PSDefaultRecord96_next(nullptr);
        Info::CRFWorldDatabaseInsert_PSDefaultRecord96_clbk CRFWorldDatabaseInsert_PSDefaultRecord96_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PatriarchComm98_ptr CRFWorldDatabaseInsert_PatriarchComm98_next(nullptr);
        Info::CRFWorldDatabaseInsert_PatriarchComm98_clbk CRFWorldDatabaseInsert_PatriarchComm98_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_ptr CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_next(nullptr);
        Info::CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_clbk CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PcBangFavorItem102_ptr CRFWorldDatabaseInsert_PcBangFavorItem102_next(nullptr);
        Info::CRFWorldDatabaseInsert_PcBangFavorItem102_clbk CRFWorldDatabaseInsert_PcBangFavorItem102_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_ptr CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_next(nullptr);
        Info::CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_clbk CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PostStorageRecord106_ptr CRFWorldDatabaseInsert_PostStorageRecord106_next(nullptr);
        Info::CRFWorldDatabaseInsert_PostStorageRecord106_clbk CRFWorldDatabaseInsert_PostStorageRecord106_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PotionDelay108_ptr CRFWorldDatabaseInsert_PotionDelay108_next(nullptr);
        Info::CRFWorldDatabaseInsert_PotionDelay108_clbk CRFWorldDatabaseInsert_PotionDelay108_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PrimiumPlayTime110_ptr CRFWorldDatabaseInsert_PrimiumPlayTime110_next(nullptr);
        Info::CRFWorldDatabaseInsert_PrimiumPlayTime110_clbk CRFWorldDatabaseInsert_PrimiumPlayTime110_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PvpOrderViewInfo112_ptr CRFWorldDatabaseInsert_PvpOrderViewInfo112_next(nullptr);
        Info::CRFWorldDatabaseInsert_PvpOrderViewInfo112_clbk CRFWorldDatabaseInsert_PvpOrderViewInfo112_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PvpPointGuildRankData114_ptr CRFWorldDatabaseInsert_PvpPointGuildRankData114_next(nullptr);
        Info::CRFWorldDatabaseInsert_PvpPointGuildRankData114_clbk CRFWorldDatabaseInsert_PvpPointGuildRankData114_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_ptr CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_next(nullptr);
        Info::CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_clbk CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Quest118_ptr CRFWorldDatabaseInsert_Quest118_next(nullptr);
        Info::CRFWorldDatabaseInsert_Quest118_clbk CRFWorldDatabaseInsert_Quest118_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_RFEvent_ClassRefine120_ptr CRFWorldDatabaseInsert_RFEvent_ClassRefine120_next(nullptr);
        Info::CRFWorldDatabaseInsert_RFEvent_ClassRefine120_clbk CRFWorldDatabaseInsert_RFEvent_ClassRefine120_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_RaceBattleLog122_ptr CRFWorldDatabaseInsert_RaceBattleLog122_next(nullptr);
        Info::CRFWorldDatabaseInsert_RaceBattleLog122_clbk CRFWorldDatabaseInsert_RaceBattleLog122_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_RenamePotionLog124_ptr CRFWorldDatabaseInsert_RenamePotionLog124_next(nullptr);
        Info::CRFWorldDatabaseInsert_RenamePotionLog124_clbk CRFWorldDatabaseInsert_RenamePotionLog124_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_SFDelayInfo126_ptr CRFWorldDatabaseInsert_SFDelayInfo126_next(nullptr);
        Info::CRFWorldDatabaseInsert_SFDelayInfo126_clbk CRFWorldDatabaseInsert_SFDelayInfo126_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Set_Limit_Run128_ptr CRFWorldDatabaseInsert_Set_Limit_Run128_next(nullptr);
        Info::CRFWorldDatabaseInsert_Set_Limit_Run128_clbk CRFWorldDatabaseInsert_Set_Limit_Run128_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_SettlementOwnerLog130_ptr CRFWorldDatabaseInsert_SettlementOwnerLog130_next(nullptr);
        Info::CRFWorldDatabaseInsert_SettlementOwnerLog130_clbk CRFWorldDatabaseInsert_SettlementOwnerLog130_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Start_NpcQuest_History132_ptr CRFWorldDatabaseInsert_Start_NpcQuest_History132_next(nullptr);
        Info::CRFWorldDatabaseInsert_Start_NpcQuest_History132_clbk CRFWorldDatabaseInsert_Start_NpcQuest_History132_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Supplement134_ptr CRFWorldDatabaseInsert_Supplement134_next(nullptr);
        Info::CRFWorldDatabaseInsert_Supplement134_clbk CRFWorldDatabaseInsert_Supplement134_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_Unit136_ptr CRFWorldDatabaseInsert_Unit136_next(nullptr);
        Info::CRFWorldDatabaseInsert_Unit136_clbk CRFWorldDatabaseInsert_Unit136_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_UnitData138_ptr CRFWorldDatabaseInsert_UnitData138_next(nullptr);
        Info::CRFWorldDatabaseInsert_UnitData138_clbk CRFWorldDatabaseInsert_UnitData138_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_UnitLog140_ptr CRFWorldDatabaseInsert_UnitLog140_next(nullptr);
        Info::CRFWorldDatabaseInsert_UnitLog140_clbk CRFWorldDatabaseInsert_UnitLog140_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_ptr CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_next(nullptr);
        Info::CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_clbk CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_ptr CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_next(nullptr);
        Info::CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_clbk CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_UserInterface146_ptr CRFWorldDatabaseInsert_UserInterface146_next(nullptr);
        Info::CRFWorldDatabaseInsert_UserInterface146_clbk CRFWorldDatabaseInsert_UserInterface146_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_UserNum_Log148_ptr CRFWorldDatabaseInsert_UserNum_Log148_next(nullptr);
        Info::CRFWorldDatabaseInsert_UserNum_Log148_clbk CRFWorldDatabaseInsert_UserNum_Log148_user(nullptr);
        
        Info::CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_ptr CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_next(nullptr);
        Info::CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_clbk CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_user(nullptr);
        
        Info::CRFWorldDatabaseLoadGreetingMsg152_ptr CRFWorldDatabaseLoadGreetingMsg152_next(nullptr);
        Info::CRFWorldDatabaseLoadGreetingMsg152_clbk CRFWorldDatabaseLoadGreetingMsg152_user(nullptr);
        
        Info::CRFWorldDatabaseLoadGuildBattleInfo154_ptr CRFWorldDatabaseLoadGuildBattleInfo154_next(nullptr);
        Info::CRFWorldDatabaseLoadGuildBattleInfo154_clbk CRFWorldDatabaseLoadGuildBattleInfo154_user(nullptr);
        
        Info::CRFWorldDatabaseLoadGuildBattleScheduleInfo156_ptr CRFWorldDatabaseLoadGuildBattleScheduleInfo156_next(nullptr);
        Info::CRFWorldDatabaseLoadGuildBattleScheduleInfo156_clbk CRFWorldDatabaseLoadGuildBattleScheduleInfo156_user(nullptr);
        
        Info::CRFWorldDatabaseRebirth_Base158_ptr CRFWorldDatabaseRebirth_Base158_next(nullptr);
        Info::CRFWorldDatabaseRebirth_Base158_clbk CRFWorldDatabaseRebirth_Base158_user(nullptr);
        
        Info::CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_ptr CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_next(nullptr);
        Info::CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_clbk CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_user(nullptr);
        
        Info::CRFWorldDatabaseSelectAllGuildSerial162_ptr CRFWorldDatabaseSelectAllGuildSerial162_next(nullptr);
        Info::CRFWorldDatabaseSelectAllGuildSerial162_clbk CRFWorldDatabaseSelectAllGuildSerial162_user(nullptr);
        
        Info::CRFWorldDatabaseSelectAllGuildSerialGrade164_ptr CRFWorldDatabaseSelectAllGuildSerialGrade164_next(nullptr);
        Info::CRFWorldDatabaseSelectAllGuildSerialGrade164_clbk CRFWorldDatabaseSelectAllGuildSerialGrade164_user(nullptr);
        
        Info::CRFWorldDatabaseSelectGuildBattleRankList166_ptr CRFWorldDatabaseSelectGuildBattleRankList166_next(nullptr);
        Info::CRFWorldDatabaseSelectGuildBattleRankList166_clbk CRFWorldDatabaseSelectGuildBattleRankList166_user(nullptr);
        
        Info::CRFWorldDatabaseSelectGuildBattleRankRecord168_ptr CRFWorldDatabaseSelectGuildBattleRankRecord168_next(nullptr);
        Info::CRFWorldDatabaseSelectGuildBattleRankRecord168_clbk CRFWorldDatabaseSelectGuildBattleRankRecord168_user(nullptr);
        
        Info::CRFWorldDatabaseSelectGuildBattleRerservedList170_ptr CRFWorldDatabaseSelectGuildBattleRerservedList170_next(nullptr);
        Info::CRFWorldDatabaseSelectGuildBattleRerservedList170_clbk CRFWorldDatabaseSelectGuildBattleRerservedList170_user(nullptr);
        
        Info::CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_ptr CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_next(nullptr);
        Info::CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_clbk CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_user(nullptr);
        
        Info::CRFWorldDatabaseSelectRowCountGuildBattleInfo174_ptr CRFWorldDatabaseSelectRowCountGuildBattleInfo174_next(nullptr);
        Info::CRFWorldDatabaseSelectRowCountGuildBattleInfo174_clbk CRFWorldDatabaseSelectRowCountGuildBattleInfo174_user(nullptr);
        
        Info::CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_ptr CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_next(nullptr);
        Info::CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_clbk CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AccountByAvatorName178_ptr CRFWorldDatabaseSelect_AccountByAvatorName178_next(nullptr);
        Info::CRFWorldDatabaseSelect_AccountByAvatorName178_clbk CRFWorldDatabaseSelect_AccountByAvatorName178_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AccountItemCharge180_ptr CRFWorldDatabaseSelect_AccountItemCharge180_next(nullptr);
        Info::CRFWorldDatabaseSelect_AccountItemCharge180_clbk CRFWorldDatabaseSelect_AccountItemCharge180_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AccountItemCharge_Extend182_ptr CRFWorldDatabaseSelect_AccountItemCharge_Extend182_next(nullptr);
        Info::CRFWorldDatabaseSelect_AccountItemCharge_Extend182_clbk CRFWorldDatabaseSelect_AccountItemCharge_Extend182_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AccountSerial184_ptr CRFWorldDatabaseSelect_AccountSerial184_next(nullptr);
        Info::CRFWorldDatabaseSelect_AccountSerial184_clbk CRFWorldDatabaseSelect_AccountSerial184_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AccountTrunk186_ptr CRFWorldDatabaseSelect_AccountTrunk186_next(nullptr);
        Info::CRFWorldDatabaseSelect_AccountTrunk186_clbk CRFWorldDatabaseSelect_AccountTrunk186_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AccountTrunkExtend188_ptr CRFWorldDatabaseSelect_AccountTrunkExtend188_next(nullptr);
        Info::CRFWorldDatabaseSelect_AccountTrunkExtend188_clbk CRFWorldDatabaseSelect_AccountTrunkExtend188_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AllGuildData190_ptr CRFWorldDatabaseSelect_AllGuildData190_next(nullptr);
        Info::CRFWorldDatabaseSelect_AllGuildData190_clbk CRFWorldDatabaseSelect_AllGuildData190_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AllGuildNum192_ptr CRFWorldDatabaseSelect_AllGuildNum192_next(nullptr);
        Info::CRFWorldDatabaseSelect_AllGuildNum192_clbk CRFWorldDatabaseSelect_AllGuildNum192_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_AnimusData194_ptr CRFWorldDatabaseSelect_AnimusData194_next(nullptr);
        Info::CRFWorldDatabaseSelect_AnimusData194_clbk CRFWorldDatabaseSelect_AnimusData194_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_ArrangeInfo196_ptr CRFWorldDatabaseSelect_ArrangeInfo196_next(nullptr);
        Info::CRFWorldDatabaseSelect_ArrangeInfo196_clbk CRFWorldDatabaseSelect_ArrangeInfo196_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_BattleResultLogLatest198_ptr CRFWorldDatabaseSelect_BattleResultLogLatest198_next(nullptr);
        Info::CRFWorldDatabaseSelect_BattleResultLogLatest198_clbk CRFWorldDatabaseSelect_BattleResultLogLatest198_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_BattleTournamentInfo200_ptr CRFWorldDatabaseSelect_BattleTournamentInfo200_next(nullptr);
        Info::CRFWorldDatabaseSelect_BattleTournamentInfo200_clbk CRFWorldDatabaseSelect_BattleTournamentInfo200_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_BossCryMsg202_ptr CRFWorldDatabaseSelect_BossCryMsg202_next(nullptr);
        Info::CRFWorldDatabaseSelect_BossCryMsg202_clbk CRFWorldDatabaseSelect_BossCryMsg202_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Buddy204_ptr CRFWorldDatabaseSelect_Buddy204_next(nullptr);
        Info::CRFWorldDatabaseSelect_Buddy204_clbk CRFWorldDatabaseSelect_Buddy204_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CashLimSale206_ptr CRFWorldDatabaseSelect_CashLimSale206_next(nullptr);
        Info::CRFWorldDatabaseSelect_CashLimSale206_clbk CRFWorldDatabaseSelect_CashLimSale206_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharNumInWorld208_ptr CRFWorldDatabaseSelect_CharNumInWorld208_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharNumInWorld208_clbk CRFWorldDatabaseSelect_CharNumInWorld208_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterBaseInfo210_ptr CRFWorldDatabaseSelect_CharacterBaseInfo210_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterBaseInfo210_clbk CRFWorldDatabaseSelect_CharacterBaseInfo210_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterBaseInfoByName212_ptr CRFWorldDatabaseSelect_CharacterBaseInfoByName212_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterBaseInfoByName212_clbk CRFWorldDatabaseSelect_CharacterBaseInfoByName212_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_ptr CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_clbk CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterGeneralInfo216_ptr CRFWorldDatabaseSelect_CharacterGeneralInfo216_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterGeneralInfo216_clbk CRFWorldDatabaseSelect_CharacterGeneralInfo216_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterName218_ptr CRFWorldDatabaseSelect_CharacterName218_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterName218_clbk CRFWorldDatabaseSelect_CharacterName218_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterReName220_ptr CRFWorldDatabaseSelect_CharacterReName220_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterReName220_clbk CRFWorldDatabaseSelect_CharacterReName220_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharacterSerial222_ptr CRFWorldDatabaseSelect_CharacterSerial222_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharacterSerial222_clbk CRFWorldDatabaseSelect_CharacterSerial222_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CharactersInfo224_ptr CRFWorldDatabaseSelect_CharactersInfo224_next(nullptr);
        Info::CRFWorldDatabaseSelect_CharactersInfo224_clbk CRFWorldDatabaseSelect_CharactersInfo224_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CheckGreetRecord226_ptr CRFWorldDatabaseSelect_CheckGreetRecord226_next(nullptr);
        Info::CRFWorldDatabaseSelect_CheckGreetRecord226_clbk CRFWorldDatabaseSelect_CheckGreetRecord226_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_CheckSumValue228_ptr CRFWorldDatabaseSelect_CheckSumValue228_next(nullptr);
        Info::CRFWorldDatabaseSelect_CheckSumValue228_clbk CRFWorldDatabaseSelect_CheckSumValue228_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_ChracterSerialRace230_ptr CRFWorldDatabaseSelect_ChracterSerialRace230_next(nullptr);
        Info::CRFWorldDatabaseSelect_ChracterSerialRace230_clbk CRFWorldDatabaseSelect_ChracterSerialRace230_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_ClearHonorGuild232_ptr CRFWorldDatabaseSelect_ClearHonorGuild232_next(nullptr);
        Info::CRFWorldDatabaseSelect_ClearHonorGuild232_clbk CRFWorldDatabaseSelect_ClearHonorGuild232_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Economy_History234_ptr CRFWorldDatabaseSelect_Economy_History234_next(nullptr);
        Info::CRFWorldDatabaseSelect_Economy_History234_clbk CRFWorldDatabaseSelect_Economy_History234_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_ptr CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_next(nullptr);
        Info::CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_clbk CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Equal_Name238_ptr CRFWorldDatabaseSelect_Equal_Name238_next(nullptr);
        Info::CRFWorldDatabaseSelect_Equal_Name238_clbk CRFWorldDatabaseSelect_Equal_Name238_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Exist_Economy240_ptr CRFWorldDatabaseSelect_Exist_Economy240_next(nullptr);
        Info::CRFWorldDatabaseSelect_Exist_Economy240_clbk CRFWorldDatabaseSelect_Exist_Economy240_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_FailBattleCount242_ptr CRFWorldDatabaseSelect_FailBattleCount242_next(nullptr);
        Info::CRFWorldDatabaseSelect_FailBattleCount242_clbk CRFWorldDatabaseSelect_FailBattleCount242_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GetCharSerialByNameRace244_ptr CRFWorldDatabaseSelect_GetCharSerialByNameRace244_next(nullptr);
        Info::CRFWorldDatabaseSelect_GetCharSerialByNameRace244_clbk CRFWorldDatabaseSelect_GetCharSerialByNameRace244_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GodenBoxItem246_ptr CRFWorldDatabaseSelect_GodenBoxItem246_next(nullptr);
        Info::CRFWorldDatabaseSelect_GodenBoxItem246_clbk CRFWorldDatabaseSelect_GodenBoxItem246_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildBattleRecord248_ptr CRFWorldDatabaseSelect_GuildBattleRecord248_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildBattleRecord248_clbk CRFWorldDatabaseSelect_GuildBattleRecord248_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildData250_ptr CRFWorldDatabaseSelect_GuildData250_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildData250_clbk CRFWorldDatabaseSelect_GuildData250_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildMasterLastConn252_ptr CRFWorldDatabaseSelect_GuildMasterLastConn252_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildMasterLastConn252_clbk CRFWorldDatabaseSelect_GuildMasterLastConn252_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildMemberData254_ptr CRFWorldDatabaseSelect_GuildMemberData254_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildMemberData254_clbk CRFWorldDatabaseSelect_GuildMemberData254_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildMoneyIOData256_ptr CRFWorldDatabaseSelect_GuildMoneyIOData256_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildMoneyIOData256_clbk CRFWorldDatabaseSelect_GuildMoneyIOData256_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildRoomInfo258_ptr CRFWorldDatabaseSelect_GuildRoomInfo258_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildRoomInfo258_clbk CRFWorldDatabaseSelect_GuildRoomInfo258_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_GuildSerial260_ptr CRFWorldDatabaseSelect_GuildSerial260_next(nullptr);
        Info::CRFWorldDatabaseSelect_GuildSerial260_clbk CRFWorldDatabaseSelect_GuildSerial260_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_HonorGuild262_ptr CRFWorldDatabaseSelect_HonorGuild262_next(nullptr);
        Info::CRFWorldDatabaseSelect_HonorGuild262_clbk CRFWorldDatabaseSelect_HonorGuild262_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Inven264_ptr CRFWorldDatabaseSelect_Inven264_next(nullptr);
        Info::CRFWorldDatabaseSelect_Inven264_clbk CRFWorldDatabaseSelect_Inven264_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_IsValidChar266_ptr CRFWorldDatabaseSelect_IsValidChar266_next(nullptr);
        Info::CRFWorldDatabaseSelect_IsValidChar266_clbk CRFWorldDatabaseSelect_IsValidChar266_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_ItemCharge268_ptr CRFWorldDatabaseSelect_ItemCharge268_next(nullptr);
        Info::CRFWorldDatabaseSelect_ItemCharge268_clbk CRFWorldDatabaseSelect_ItemCharge268_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_ItemCombineEx270_ptr CRFWorldDatabaseSelect_ItemCombineEx270_next(nullptr);
        Info::CRFWorldDatabaseSelect_ItemCombineEx270_clbk CRFWorldDatabaseSelect_ItemCombineEx270_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_LimitInfo272_ptr CRFWorldDatabaseSelect_LimitInfo272_next(nullptr);
        Info::CRFWorldDatabaseSelect_LimitInfo272_clbk CRFWorldDatabaseSelect_LimitInfo272_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_LimitItemEmptyRecord274_ptr CRFWorldDatabaseSelect_LimitItemEmptyRecord274_next(nullptr);
        Info::CRFWorldDatabaseSelect_LimitItemEmptyRecord274_clbk CRFWorldDatabaseSelect_LimitItemEmptyRecord274_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_LimitItemUsedRecord276_ptr CRFWorldDatabaseSelect_LimitItemUsedRecord276_next(nullptr);
        Info::CRFWorldDatabaseSelect_LimitItemUsedRecord276_clbk CRFWorldDatabaseSelect_LimitItemUsedRecord276_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Limit_Run_Record278_ptr CRFWorldDatabaseSelect_Limit_Run_Record278_next(nullptr);
        Info::CRFWorldDatabaseSelect_Limit_Run_Record278_clbk CRFWorldDatabaseSelect_Limit_Run_Record278_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_LoseBattleCount280_ptr CRFWorldDatabaseSelect_LoseBattleCount280_next(nullptr);
        Info::CRFWorldDatabaseSelect_LoseBattleCount280_clbk CRFWorldDatabaseSelect_LoseBattleCount280_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_MacroData282_ptr CRFWorldDatabaseSelect_MacroData282_next(nullptr);
        Info::CRFWorldDatabaseSelect_MacroData282_clbk CRFWorldDatabaseSelect_MacroData282_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_NotArrangeCharacter284_ptr CRFWorldDatabaseSelect_NotArrangeCharacter284_next(nullptr);
        Info::CRFWorldDatabaseSelect_NotArrangeCharacter284_clbk CRFWorldDatabaseSelect_NotArrangeCharacter284_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_NpcData286_ptr CRFWorldDatabaseSelect_NpcData286_next(nullptr);
        Info::CRFWorldDatabaseSelect_NpcData286_clbk CRFWorldDatabaseSelect_NpcData286_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_NpcQuest_History288_ptr CRFWorldDatabaseSelect_NpcQuest_History288_next(nullptr);
        Info::CRFWorldDatabaseSelect_NpcQuest_History288_clbk CRFWorldDatabaseSelect_NpcQuest_History288_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_OldVerPatriarchGroup290_ptr CRFWorldDatabaseSelect_OldVerPatriarchGroup290_next(nullptr);
        Info::CRFWorldDatabaseSelect_OldVerPatriarchGroup290_clbk CRFWorldDatabaseSelect_OldVerPatriarchGroup290_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_OreCutting292_ptr CRFWorldDatabaseSelect_OreCutting292_next(nullptr);
        Info::CRFWorldDatabaseSelect_OreCutting292_clbk CRFWorldDatabaseSelect_OreCutting292_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchCandidate294_ptr CRFWorldDatabaseSelect_PatriarchCandidate294_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchCandidate294_clbk CRFWorldDatabaseSelect_PatriarchCandidate294_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchComm296_ptr CRFWorldDatabaseSelect_PatriarchComm296_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchComm296_clbk CRFWorldDatabaseSelect_PatriarchComm296_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchCommCount298_ptr CRFWorldDatabaseSelect_PatriarchCommCount298_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchCommCount298_clbk CRFWorldDatabaseSelect_PatriarchCommCount298_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchElectState300_ptr CRFWorldDatabaseSelect_PatriarchElectState300_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchElectState300_clbk CRFWorldDatabaseSelect_PatriarchElectState300_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchGroup302_ptr CRFWorldDatabaseSelect_PatriarchGroup302_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchGroup302_clbk CRFWorldDatabaseSelect_PatriarchGroup302_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchRefundCount304_ptr CRFWorldDatabaseSelect_PatriarchRefundCount304_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchRefundCount304_clbk CRFWorldDatabaseSelect_PatriarchRefundCount304_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchVoted306_ptr CRFWorldDatabaseSelect_PatriarchVoted306_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchVoted306_clbk CRFWorldDatabaseSelect_PatriarchVoted306_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PatriarchWinCnt308_ptr CRFWorldDatabaseSelect_PatriarchWinCnt308_next(nullptr);
        Info::CRFWorldDatabaseSelect_PatriarchWinCnt308_clbk CRFWorldDatabaseSelect_PatriarchWinCnt308_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PcBangFavorItem310_ptr CRFWorldDatabaseSelect_PcBangFavorItem310_next(nullptr);
        Info::CRFWorldDatabaseSelect_PcBangFavorItem310_clbk CRFWorldDatabaseSelect_PcBangFavorItem310_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_ptr CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_next(nullptr);
        Info::CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_clbk CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_ptr CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_next(nullptr);
        Info::CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_clbk CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Player_Last_LogoutTime316_ptr CRFWorldDatabaseSelect_Player_Last_LogoutTime316_next(nullptr);
        Info::CRFWorldDatabaseSelect_Player_Last_LogoutTime316_clbk CRFWorldDatabaseSelect_Player_Last_LogoutTime316_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostContent318_ptr CRFWorldDatabaseSelect_PostContent318_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostContent318_clbk CRFWorldDatabaseSelect_PostContent318_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostRecvSerialFromName320_ptr CRFWorldDatabaseSelect_PostRecvSerialFromName320_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostRecvSerialFromName320_clbk CRFWorldDatabaseSelect_PostRecvSerialFromName320_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostRecvStorageCheck322_ptr CRFWorldDatabaseSelect_PostRecvStorageCheck322_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostRecvStorageCheck322_clbk CRFWorldDatabaseSelect_PostRecvStorageCheck322_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostRegistryData324_ptr CRFWorldDatabaseSelect_PostRegistryData324_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostRegistryData324_clbk CRFWorldDatabaseSelect_PostRegistryData324_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostStorageEmptyRecord326_ptr CRFWorldDatabaseSelect_PostStorageEmptyRecord326_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostStorageEmptyRecord326_clbk CRFWorldDatabaseSelect_PostStorageEmptyRecord326_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_ptr CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_clbk CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostStorageList330_ptr CRFWorldDatabaseSelect_PostStorageList330_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostStorageList330_clbk CRFWorldDatabaseSelect_PostStorageList330_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PostStorageRecordCheck332_ptr CRFWorldDatabaseSelect_PostStorageRecordCheck332_next(nullptr);
        Info::CRFWorldDatabaseSelect_PostStorageRecordCheck332_clbk CRFWorldDatabaseSelect_PostStorageRecordCheck332_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PotionDelay334_ptr CRFWorldDatabaseSelect_PotionDelay334_next(nullptr);
        Info::CRFWorldDatabaseSelect_PotionDelay334_clbk CRFWorldDatabaseSelect_PotionDelay334_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PrimiumPlayTime336_ptr CRFWorldDatabaseSelect_PrimiumPlayTime336_next(nullptr);
        Info::CRFWorldDatabaseSelect_PrimiumPlayTime336_clbk CRFWorldDatabaseSelect_PrimiumPlayTime336_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Punishment338_ptr CRFWorldDatabaseSelect_Punishment338_next(nullptr);
        Info::CRFWorldDatabaseSelect_Punishment338_clbk CRFWorldDatabaseSelect_Punishment338_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PunishmentCount340_ptr CRFWorldDatabaseSelect_PunishmentCount340_next(nullptr);
        Info::CRFWorldDatabaseSelect_PunishmentCount340_clbk CRFWorldDatabaseSelect_PunishmentCount340_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PvpOrderViewInfo342_ptr CRFWorldDatabaseSelect_PvpOrderViewInfo342_next(nullptr);
        Info::CRFWorldDatabaseSelect_PvpOrderViewInfo342_clbk CRFWorldDatabaseSelect_PvpOrderViewInfo342_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PvpPointGuildRank344_ptr CRFWorldDatabaseSelect_PvpPointGuildRank344_next(nullptr);
        Info::CRFWorldDatabaseSelect_PvpPointGuildRank344_clbk CRFWorldDatabaseSelect_PvpPointGuildRank344_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PvpPointLimitInfo346_ptr CRFWorldDatabaseSelect_PvpPointLimitInfo346_next(nullptr);
        Info::CRFWorldDatabaseSelect_PvpPointLimitInfo346_clbk CRFWorldDatabaseSelect_PvpPointLimitInfo346_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PvpRankInfo348_ptr CRFWorldDatabaseSelect_PvpRankInfo348_next(nullptr);
        Info::CRFWorldDatabaseSelect_PvpRankInfo348_clbk CRFWorldDatabaseSelect_PvpRankInfo348_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_PvpRate350_ptr CRFWorldDatabaseSelect_PvpRate350_next(nullptr);
        Info::CRFWorldDatabaseSelect_PvpRate350_clbk CRFWorldDatabaseSelect_PvpRate350_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Quest352_ptr CRFWorldDatabaseSelect_Quest352_next(nullptr);
        Info::CRFWorldDatabaseSelect_Quest352_clbk CRFWorldDatabaseSelect_Quest352_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_RFEvent_ClassRefine354_ptr CRFWorldDatabaseSelect_RFEvent_ClassRefine354_next(nullptr);
        Info::CRFWorldDatabaseSelect_RFEvent_ClassRefine354_clbk CRFWorldDatabaseSelect_RFEvent_ClassRefine354_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_ptr CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_next(nullptr);
        Info::CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_clbk CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_ptr CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_next(nullptr);
        Info::CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_clbk CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_ptr CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_next(nullptr);
        Info::CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_clbk CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_ReturnPost362_ptr CRFWorldDatabaseSelect_ReturnPost362_next(nullptr);
        Info::CRFWorldDatabaseSelect_ReturnPost362_clbk CRFWorldDatabaseSelect_ReturnPost362_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_SFDelayInfo364_ptr CRFWorldDatabaseSelect_SFDelayInfo364_next(nullptr);
        Info::CRFWorldDatabaseSelect_SFDelayInfo364_clbk CRFWorldDatabaseSelect_SFDelayInfo364_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Start_NpcQuest_History366_ptr CRFWorldDatabaseSelect_Start_NpcQuest_History366_next(nullptr);
        Info::CRFWorldDatabaseSelect_Start_NpcQuest_History366_clbk CRFWorldDatabaseSelect_Start_NpcQuest_History366_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_ptr CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_next(nullptr);
        Info::CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_clbk CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_StoreLimitItem370_ptr CRFWorldDatabaseSelect_StoreLimitItem370_next(nullptr);
        Info::CRFWorldDatabaseSelect_StoreLimitItem370_clbk CRFWorldDatabaseSelect_StoreLimitItem370_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Supplement372_ptr CRFWorldDatabaseSelect_Supplement372_next(nullptr);
        Info::CRFWorldDatabaseSelect_Supplement372_clbk CRFWorldDatabaseSelect_Supplement372_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Supplement_ActPoint374_ptr CRFWorldDatabaseSelect_Supplement_ActPoint374_next(nullptr);
        Info::CRFWorldDatabaseSelect_Supplement_ActPoint374_clbk CRFWorldDatabaseSelect_Supplement_ActPoint374_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Supplement_Ex376_ptr CRFWorldDatabaseSelect_Supplement_Ex376_next(nullptr);
        Info::CRFWorldDatabaseSelect_Supplement_Ex376_clbk CRFWorldDatabaseSelect_Supplement_Ex376_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_TakeItem378_ptr CRFWorldDatabaseSelect_TakeItem378_next(nullptr);
        Info::CRFWorldDatabaseSelect_TakeItem378_clbk CRFWorldDatabaseSelect_TakeItem378_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_TotalGuildRank380_ptr CRFWorldDatabaseSelect_TotalGuildRank380_next(nullptr);
        Info::CRFWorldDatabaseSelect_TotalGuildRank380_clbk CRFWorldDatabaseSelect_TotalGuildRank380_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_TotalRecordNum382_ptr CRFWorldDatabaseSelect_TotalRecordNum382_next(nullptr);
        Info::CRFWorldDatabaseSelect_TotalRecordNum382_clbk CRFWorldDatabaseSelect_TotalRecordNum382_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Trade384_ptr CRFWorldDatabaseSelect_Trade384_next(nullptr);
        Info::CRFWorldDatabaseSelect_Trade384_clbk CRFWorldDatabaseSelect_Trade384_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_TrunkMoney386_ptr CRFWorldDatabaseSelect_TrunkMoney386_next(nullptr);
        Info::CRFWorldDatabaseSelect_TrunkMoney386_clbk CRFWorldDatabaseSelect_TrunkMoney386_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_Unit388_ptr CRFWorldDatabaseSelect_Unit388_next(nullptr);
        Info::CRFWorldDatabaseSelect_Unit388_clbk CRFWorldDatabaseSelect_Unit388_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnitData390_ptr CRFWorldDatabaseSelect_UnitData390_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnitData390_clbk CRFWorldDatabaseSelect_UnitData390_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_ptr CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_clbk CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_ptr CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_clbk CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemState396_ptr CRFWorldDatabaseSelect_UnmannedTraderItemState396_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemState396_clbk CRFWorldDatabaseSelect_UnmannedTraderItemState396_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_ptr CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_clbk CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_ptr CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_clbk CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderRegister402_ptr CRFWorldDatabaseSelect_UnmannedTraderRegister402_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderRegister402_clbk CRFWorldDatabaseSelect_UnmannedTraderRegister402_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_ptr CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_clbk CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_ptr CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_clbk CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_ptr CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_clbk CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_ptr CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_clbk CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_ptr CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_clbk CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_ptr CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_clbk CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_ptr CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_next(nullptr);
        Info::CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_clbk CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_ptr CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_next(nullptr);
        Info::CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_clbk CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UserCountInfo420_ptr CRFWorldDatabaseSelect_UserCountInfo420_next(nullptr);
        Info::CRFWorldDatabaseSelect_UserCountInfo420_clbk CRFWorldDatabaseSelect_UserCountInfo420_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_UserInterface422_ptr CRFWorldDatabaseSelect_UserInterface422_next(nullptr);
        Info::CRFWorldDatabaseSelect_UserInterface422_clbk CRFWorldDatabaseSelect_UserInterface422_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_WaitItem424_ptr CRFWorldDatabaseSelect_WaitItem424_next(nullptr);
        Info::CRFWorldDatabaseSelect_WaitItem424_clbk CRFWorldDatabaseSelect_WaitItem424_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_ptr CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_next(nullptr);
        Info::CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_clbk CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_WinBattleCount428_ptr CRFWorldDatabaseSelect_WinBattleCount428_next(nullptr);
        Info::CRFWorldDatabaseSelect_WinBattleCount428_clbk CRFWorldDatabaseSelect_WinBattleCount428_user(nullptr);
        
        Info::CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_ptr CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_next(nullptr);
        Info::CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_clbk CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_user(nullptr);
        
        Info::CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_ptr CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_next(nullptr);
        Info::CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_clbk CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateClearGuildBattleInfo434_ptr CRFWorldDatabaseUpdateClearGuildBattleInfo434_next(nullptr);
        Info::CRFWorldDatabaseUpdateClearGuildBattleInfo434_clbk CRFWorldDatabaseUpdateClearGuildBattleInfo434_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateClearGuildBattleRank436_ptr CRFWorldDatabaseUpdateClearGuildBattleRank436_next(nullptr);
        Info::CRFWorldDatabaseUpdateClearGuildBattleRank436_clbk CRFWorldDatabaseUpdateClearGuildBattleRank436_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_ptr CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_next(nullptr);
        Info::CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_clbk CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_ptr CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_next(nullptr);
        Info::CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_clbk CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateDrawGuildBattleResult442_ptr CRFWorldDatabaseUpdateDrawGuildBattleResult442_next(nullptr);
        Info::CRFWorldDatabaseUpdateDrawGuildBattleResult442_clbk CRFWorldDatabaseUpdateDrawGuildBattleResult442_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateGuildBattleInfo444_ptr CRFWorldDatabaseUpdateGuildBattleInfo444_next(nullptr);
        Info::CRFWorldDatabaseUpdateGuildBattleInfo444_clbk CRFWorldDatabaseUpdateGuildBattleInfo444_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_ptr CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_next(nullptr);
        Info::CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_clbk CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateGuildMoney448_ptr CRFWorldDatabaseUpdateGuildMoney448_next(nullptr);
        Info::CRFWorldDatabaseUpdateGuildMoney448_clbk CRFWorldDatabaseUpdateGuildMoney448_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateLoseGuildBattleResult450_ptr CRFWorldDatabaseUpdateLoseGuildBattleResult450_next(nullptr);
        Info::CRFWorldDatabaseUpdateLoseGuildBattleResult450_clbk CRFWorldDatabaseUpdateLoseGuildBattleResult450_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateServerResetToken452_ptr CRFWorldDatabaseUpdateServerResetToken452_next(nullptr);
        Info::CRFWorldDatabaseUpdateServerResetToken452_clbk CRFWorldDatabaseUpdateServerResetToken452_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateVotedReset_Cheat454_ptr CRFWorldDatabaseUpdateVotedReset_Cheat454_next(nullptr);
        Info::CRFWorldDatabaseUpdateVotedReset_Cheat454_clbk CRFWorldDatabaseUpdateVotedReset_Cheat454_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateVotedReset_General456_ptr CRFWorldDatabaseUpdateVotedReset_General456_next(nullptr);
        Info::CRFWorldDatabaseUpdateVotedReset_General456_clbk CRFWorldDatabaseUpdateVotedReset_General456_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateVotedReset_Supplement458_ptr CRFWorldDatabaseUpdateVotedReset_Supplement458_next(nullptr);
        Info::CRFWorldDatabaseUpdateVotedReset_Supplement458_clbk CRFWorldDatabaseUpdateVotedReset_Supplement458_user(nullptr);
        
        Info::CRFWorldDatabaseUpdateWinGuildBattleResult460_ptr CRFWorldDatabaseUpdateWinGuildBattleResult460_next(nullptr);
        Info::CRFWorldDatabaseUpdateWinGuildBattleResult460_clbk CRFWorldDatabaseUpdateWinGuildBattleResult460_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_AnimusData462_ptr CRFWorldDatabaseUpdate_AnimusData462_next(nullptr);
        Info::CRFWorldDatabaseUpdate_AnimusData462_clbk CRFWorldDatabaseUpdate_AnimusData462_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_ptr CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_next(nullptr);
        Info::CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_clbk CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_CharSlot466_ptr CRFWorldDatabaseUpdate_CharSlot466_next(nullptr);
        Info::CRFWorldDatabaseUpdate_CharSlot466_clbk CRFWorldDatabaseUpdate_CharSlot466_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_CharacterData468_ptr CRFWorldDatabaseUpdate_CharacterData468_next(nullptr);
        Info::CRFWorldDatabaseUpdate_CharacterData468_clbk CRFWorldDatabaseUpdate_CharacterData468_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_CharacterReName470_ptr CRFWorldDatabaseUpdate_CharacterReName470_next(nullptr);
        Info::CRFWorldDatabaseUpdate_CharacterReName470_clbk CRFWorldDatabaseUpdate_CharacterReName470_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_ptr CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_next(nullptr);
        Info::CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_clbk CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_CristalBattleCharInfo474_ptr CRFWorldDatabaseUpdate_CristalBattleCharInfo474_next(nullptr);
        Info::CRFWorldDatabaseUpdate_CristalBattleCharInfo474_clbk CRFWorldDatabaseUpdate_CristalBattleCharInfo474_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Dalant476_ptr CRFWorldDatabaseUpdate_Dalant476_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Dalant476_clbk CRFWorldDatabaseUpdate_Dalant476_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_DisableInstanceStore478_ptr CRFWorldDatabaseUpdate_DisableInstanceStore478_next(nullptr);
        Info::CRFWorldDatabaseUpdate_DisableInstanceStore478_clbk CRFWorldDatabaseUpdate_DisableInstanceStore478_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_DisappearOwnerRecord480_ptr CRFWorldDatabaseUpdate_DisappearOwnerRecord480_next(nullptr);
        Info::CRFWorldDatabaseUpdate_DisappearOwnerRecord480_clbk CRFWorldDatabaseUpdate_DisappearOwnerRecord480_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GmGreet482_ptr CRFWorldDatabaseUpdate_GmGreet482_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GmGreet482_clbk CRFWorldDatabaseUpdate_GmGreet482_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Gold484_ptr CRFWorldDatabaseUpdate_Gold484_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Gold484_clbk CRFWorldDatabaseUpdate_Gold484_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildEmblem486_ptr CRFWorldDatabaseUpdate_GuildEmblem486_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildEmblem486_clbk CRFWorldDatabaseUpdate_GuildEmblem486_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildGrade488_ptr CRFWorldDatabaseUpdate_GuildGrade488_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildGrade488_clbk CRFWorldDatabaseUpdate_GuildGrade488_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildGreet490_ptr CRFWorldDatabaseUpdate_GuildGreet490_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildGreet490_clbk CRFWorldDatabaseUpdate_GuildGreet490_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildMaster492_ptr CRFWorldDatabaseUpdate_GuildMaster492_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildMaster492_clbk CRFWorldDatabaseUpdate_GuildMaster492_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildMemberCount494_ptr CRFWorldDatabaseUpdate_GuildMemberCount494_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildMemberCount494_clbk CRFWorldDatabaseUpdate_GuildMemberCount494_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildRank496_ptr CRFWorldDatabaseUpdate_GuildRank496_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildRank496_clbk CRFWorldDatabaseUpdate_GuildRank496_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildRank_Step1498_ptr CRFWorldDatabaseUpdate_GuildRank_Step1498_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildRank_Step1498_clbk CRFWorldDatabaseUpdate_GuildRank_Step1498_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildRank_Step2500_ptr CRFWorldDatabaseUpdate_GuildRank_Step2500_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildRank_Step2500_clbk CRFWorldDatabaseUpdate_GuildRank_Step2500_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildRank_Step3502_ptr CRFWorldDatabaseUpdate_GuildRank_Step3502_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildRank_Step3502_clbk CRFWorldDatabaseUpdate_GuildRank_Step3502_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_GuildRoom504_ptr CRFWorldDatabaseUpdate_GuildRoom504_next(nullptr);
        Info::CRFWorldDatabaseUpdate_GuildRoom504_clbk CRFWorldDatabaseUpdate_GuildRoom504_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_ptr CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_next(nullptr);
        Info::CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_clbk CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_ptr CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_next(nullptr);
        Info::CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_clbk CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_InputGuildMoney510_ptr CRFWorldDatabaseUpdate_InputGuildMoney510_next(nullptr);
        Info::CRFWorldDatabaseUpdate_InputGuildMoney510_clbk CRFWorldDatabaseUpdate_InputGuildMoney510_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Level512_ptr CRFWorldDatabaseUpdate_Level512_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Level512_clbk CRFWorldDatabaseUpdate_Level512_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_LimitItemNum514_ptr CRFWorldDatabaseUpdate_LimitItemNum514_next(nullptr);
        Info::CRFWorldDatabaseUpdate_LimitItemNum514_clbk CRFWorldDatabaseUpdate_LimitItemNum514_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_MacroData516_ptr CRFWorldDatabaseUpdate_MacroData516_next(nullptr);
        Info::CRFWorldDatabaseUpdate_MacroData516_clbk CRFWorldDatabaseUpdate_MacroData516_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_NpcData518_ptr CRFWorldDatabaseUpdate_NpcData518_next(nullptr);
        Info::CRFWorldDatabaseUpdate_NpcData518_clbk CRFWorldDatabaseUpdate_NpcData518_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_OutputGuildMoney520_ptr CRFWorldDatabaseUpdate_OutputGuildMoney520_next(nullptr);
        Info::CRFWorldDatabaseUpdate_OutputGuildMoney520_clbk CRFWorldDatabaseUpdate_OutputGuildMoney520_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PatriarchComm522_ptr CRFWorldDatabaseUpdate_PatriarchComm522_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PatriarchComm522_clbk CRFWorldDatabaseUpdate_PatriarchComm522_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_ptr CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_clbk CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Player_Vote_Info526_ptr CRFWorldDatabaseUpdate_Player_Vote_Info526_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Player_Vote_Info526_clbk CRFWorldDatabaseUpdate_Player_Vote_Info526_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Post528_ptr CRFWorldDatabaseUpdate_Post528_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Post528_clbk CRFWorldDatabaseUpdate_Post528_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PostRegistry530_ptr CRFWorldDatabaseUpdate_PostRegistry530_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PostRegistry530_clbk CRFWorldDatabaseUpdate_PostRegistry530_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PostRegistryDisable532_ptr CRFWorldDatabaseUpdate_PostRegistryDisable532_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PostRegistryDisable532_clbk CRFWorldDatabaseUpdate_PostRegistryDisable532_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PostStorageSendToRecver534_ptr CRFWorldDatabaseUpdate_PostStorageSendToRecver534_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PostStorageSendToRecver534_clbk CRFWorldDatabaseUpdate_PostStorageSendToRecver534_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Punishment536_ptr CRFWorldDatabaseUpdate_Punishment536_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Punishment536_clbk CRFWorldDatabaseUpdate_Punishment536_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_ptr CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_clbk CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_ptr CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_clbk CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_PvpPointInfo542_ptr CRFWorldDatabaseUpdate_PvpPointInfo542_next(nullptr);
        Info::CRFWorldDatabaseUpdate_PvpPointInfo542_clbk CRFWorldDatabaseUpdate_PvpPointInfo542_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_ptr CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_clbk CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceGreet546_ptr CRFWorldDatabaseUpdate_RaceGreet546_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceGreet546_clbk CRFWorldDatabaseUpdate_RaceGreet546_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank548_ptr CRFWorldDatabaseUpdate_RaceRank548_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank548_clbk CRFWorldDatabaseUpdate_RaceRank548_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step1550_ptr CRFWorldDatabaseUpdate_RaceRank_Step1550_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step1550_clbk CRFWorldDatabaseUpdate_RaceRank_Step1550_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step2552_ptr CRFWorldDatabaseUpdate_RaceRank_Step2552_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step2552_clbk CRFWorldDatabaseUpdate_RaceRank_Step2552_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step3554_ptr CRFWorldDatabaseUpdate_RaceRank_Step3554_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step3554_clbk CRFWorldDatabaseUpdate_RaceRank_Step3554_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step4556_ptr CRFWorldDatabaseUpdate_RaceRank_Step4556_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step4556_clbk CRFWorldDatabaseUpdate_RaceRank_Step4556_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step5558_ptr CRFWorldDatabaseUpdate_RaceRank_Step5558_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step5558_clbk CRFWorldDatabaseUpdate_RaceRank_Step5558_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step6560_ptr CRFWorldDatabaseUpdate_RaceRank_Step6560_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step6560_clbk CRFWorldDatabaseUpdate_RaceRank_Step6560_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step7562_ptr CRFWorldDatabaseUpdate_RaceRank_Step7562_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step7562_clbk CRFWorldDatabaseUpdate_RaceRank_Step7562_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step8564_ptr CRFWorldDatabaseUpdate_RaceRank_Step8564_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step8564_clbk CRFWorldDatabaseUpdate_RaceRank_Step8564_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step9566_ptr CRFWorldDatabaseUpdate_RaceRank_Step9566_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step9566_clbk CRFWorldDatabaseUpdate_RaceRank_Step9566_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_ptr CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_clbk CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_ptr CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_clbk CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_ptr CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_clbk CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild574_ptr CRFWorldDatabaseUpdate_RankInGuild574_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild574_clbk CRFWorldDatabaseUpdate_RankInGuild574_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step1576_ptr CRFWorldDatabaseUpdate_RankInGuild_Step1576_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step1576_clbk CRFWorldDatabaseUpdate_RankInGuild_Step1576_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step2578_ptr CRFWorldDatabaseUpdate_RankInGuild_Step2578_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step2578_clbk CRFWorldDatabaseUpdate_RankInGuild_Step2578_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step3580_ptr CRFWorldDatabaseUpdate_RankInGuild_Step3580_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step3580_clbk CRFWorldDatabaseUpdate_RankInGuild_Step3580_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step4582_ptr CRFWorldDatabaseUpdate_RankInGuild_Step4582_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step4582_clbk CRFWorldDatabaseUpdate_RankInGuild_Step4582_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step5584_ptr CRFWorldDatabaseUpdate_RankInGuild_Step5584_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step5584_clbk CRFWorldDatabaseUpdate_RankInGuild_Step5584_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step6586_ptr CRFWorldDatabaseUpdate_RankInGuild_Step6586_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step6586_clbk CRFWorldDatabaseUpdate_RankInGuild_Step6586_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step7588_ptr CRFWorldDatabaseUpdate_RankInGuild_Step7588_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step7588_clbk CRFWorldDatabaseUpdate_RankInGuild_Step7588_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step8590_ptr CRFWorldDatabaseUpdate_RankInGuild_Step8590_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step8590_clbk CRFWorldDatabaseUpdate_RankInGuild_Step8590_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step9592_ptr CRFWorldDatabaseUpdate_RankInGuild_Step9592_next(nullptr);
        Info::CRFWorldDatabaseUpdate_RankInGuild_Step9592_clbk CRFWorldDatabaseUpdate_RankInGuild_Step9592_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_SFDelayInfo594_ptr CRFWorldDatabaseUpdate_SFDelayInfo594_next(nullptr);
        Info::CRFWorldDatabaseUpdate_SFDelayInfo594_clbk CRFWorldDatabaseUpdate_SFDelayInfo594_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_SetActive596_ptr CRFWorldDatabaseUpdate_SetActive596_next(nullptr);
        Info::CRFWorldDatabaseUpdate_SetActive596_clbk CRFWorldDatabaseUpdate_SetActive596_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_SetGuildMoney598_ptr CRFWorldDatabaseUpdate_SetGuildMoney598_next(nullptr);
        Info::CRFWorldDatabaseUpdate_SetGuildMoney598_clbk CRFWorldDatabaseUpdate_SetGuildMoney598_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Set_Limit_Run600_ptr CRFWorldDatabaseUpdate_Set_Limit_Run600_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Set_Limit_Run600_clbk CRFWorldDatabaseUpdate_Set_Limit_Run600_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_Start_NpcQuest_History602_ptr CRFWorldDatabaseUpdate_Start_NpcQuest_History602_next(nullptr);
        Info::CRFWorldDatabaseUpdate_Start_NpcQuest_History602_clbk CRFWorldDatabaseUpdate_Start_NpcQuest_History602_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnitData604_ptr CRFWorldDatabaseUpdate_UnitData604_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnitData604_clbk CRFWorldDatabaseUpdate_UnitData604_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_ptr CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_clbk CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_ptr CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_clbk CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderItemState610_ptr CRFWorldDatabaseUpdate_UnmannedTraderItemState610_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderItemState610_clbk CRFWorldDatabaseUpdate_UnmannedTraderItemState610_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_ptr CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_clbk CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_ptr CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_clbk CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_ptr CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_clbk CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_ptr CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_clbk CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_ptr CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_clbk CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_ptr CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_clbk CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_user(nullptr);
        
        Info::CRFWorldDatabaseUpdate_UserGuildData624_ptr CRFWorldDatabaseUpdate_UserGuildData624_next(nullptr);
        Info::CRFWorldDatabaseUpdate_UserGuildData624_clbk CRFWorldDatabaseUpdate_UserGuildData624_user(nullptr);
        
        Info::CRFWorldDatabaseUpdatet_Account_Vote_Available626_ptr CRFWorldDatabaseUpdatet_Account_Vote_Available626_next(nullptr);
        Info::CRFWorldDatabaseUpdatet_Account_Vote_Available626_clbk CRFWorldDatabaseUpdatet_Account_Vote_Available626_user(nullptr);
        
        Info::CRFWorldDatabasecreate_amine_personal631_ptr CRFWorldDatabasecreate_amine_personal631_next(nullptr);
        Info::CRFWorldDatabasecreate_amine_personal631_clbk CRFWorldDatabasecreate_amine_personal631_user(nullptr);
        
        Info::CRFWorldDatabasecreate_automine_table633_ptr CRFWorldDatabasecreate_automine_table633_next(nullptr);
        Info::CRFWorldDatabasecreate_automine_table633_clbk CRFWorldDatabasecreate_automine_table633_user(nullptr);
        
        Info::CRFWorldDatabasecreate_sumtotal_dungeon635_ptr CRFWorldDatabasecreate_sumtotal_dungeon635_next(nullptr);
        Info::CRFWorldDatabasecreate_sumtotal_dungeon635_clbk CRFWorldDatabasecreate_sumtotal_dungeon635_user(nullptr);
        
        Info::CRFWorldDatabasecreate_table_atrade_taxrate637_ptr CRFWorldDatabasecreate_table_atrade_taxrate637_next(nullptr);
        Info::CRFWorldDatabasecreate_table_atrade_taxrate637_clbk CRFWorldDatabasecreate_table_atrade_taxrate637_user(nullptr);
        
        Info::CRFWorldDatabaseexist_aminpersonal_inven639_ptr CRFWorldDatabaseexist_aminpersonal_inven639_next(nullptr);
        Info::CRFWorldDatabaseexist_aminpersonal_inven639_clbk CRFWorldDatabaseexist_aminpersonal_inven639_user(nullptr);
        
        Info::CRFWorldDatabaseexist_automine641_ptr CRFWorldDatabaseexist_automine641_next(nullptr);
        Info::CRFWorldDatabaseexist_automine641_clbk CRFWorldDatabaseexist_automine641_user(nullptr);
        
        Info::CRFWorldDatabaseinsert_amine_newowner643_ptr CRFWorldDatabaseinsert_amine_newowner643_next(nullptr);
        Info::CRFWorldDatabaseinsert_amine_newowner643_clbk CRFWorldDatabaseinsert_amine_newowner643_user(nullptr);
        
        Info::CRFWorldDatabaseinsert_amine_personal645_ptr CRFWorldDatabaseinsert_amine_personal645_next(nullptr);
        Info::CRFWorldDatabaseinsert_amine_personal645_clbk CRFWorldDatabaseinsert_amine_personal645_user(nullptr);
        
        Info::CRFWorldDatabaseinsert_atrade_taxrate647_ptr CRFWorldDatabaseinsert_atrade_taxrate647_next(nullptr);
        Info::CRFWorldDatabaseinsert_atrade_taxrate647_clbk CRFWorldDatabaseinsert_atrade_taxrate647_user(nullptr);
        
        Info::CRFWorldDatabaseselect_amine_personal649_ptr CRFWorldDatabaseselect_amine_personal649_next(nullptr);
        Info::CRFWorldDatabaseselect_amine_personal649_clbk CRFWorldDatabaseselect_amine_personal649_user(nullptr);
        
        Info::CRFWorldDatabaseselect_amine_personal651_ptr CRFWorldDatabaseselect_amine_personal651_next(nullptr);
        Info::CRFWorldDatabaseselect_amine_personal651_clbk CRFWorldDatabaseselect_amine_personal651_user(nullptr);
        
        Info::CRFWorldDatabaseselect_atrade_taxrate653_ptr CRFWorldDatabaseselect_atrade_taxrate653_next(nullptr);
        Info::CRFWorldDatabaseselect_atrade_taxrate653_clbk CRFWorldDatabaseselect_atrade_taxrate653_user(nullptr);
        
        Info::CRFWorldDatabaseselect_automine655_ptr CRFWorldDatabaseselect_automine655_next(nullptr);
        Info::CRFWorldDatabaseselect_automine655_clbk CRFWorldDatabaseselect_automine655_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_battery657_ptr CRFWorldDatabaseupdate_amine_battery657_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_battery657_clbk CRFWorldDatabaseupdate_amine_battery657_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_dck659_ptr CRFWorldDatabaseupdate_amine_dck659_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_dck659_clbk CRFWorldDatabaseupdate_amine_dck659_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_mineore661_ptr CRFWorldDatabaseupdate_amine_mineore661_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_mineore661_clbk CRFWorldDatabaseupdate_amine_mineore661_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_moveore663_ptr CRFWorldDatabaseupdate_amine_moveore663_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_moveore663_clbk CRFWorldDatabaseupdate_amine_moveore663_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_personal665_ptr CRFWorldDatabaseupdate_amine_personal665_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_personal665_clbk CRFWorldDatabaseupdate_amine_personal665_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_selore667_ptr CRFWorldDatabaseupdate_amine_selore667_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_selore667_clbk CRFWorldDatabaseupdate_amine_selore667_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_amine_workstate669_ptr CRFWorldDatabaseupdate_amine_workstate669_next(nullptr);
        Info::CRFWorldDatabaseupdate_amine_workstate669_clbk CRFWorldDatabaseupdate_amine_workstate669_user(nullptr);
        
        Info::CRFWorldDatabaseupdate_cristalbattle_date671_ptr CRFWorldDatabaseupdate_cristalbattle_date671_next(nullptr);
        Info::CRFWorldDatabaseupdate_cristalbattle_date671_clbk CRFWorldDatabaseupdate_cristalbattle_date671_user(nullptr);
        
        
        Info::CRFWorldDatabasedtor_CRFWorldDatabase673_ptr CRFWorldDatabasedtor_CRFWorldDatabase673_next(nullptr);
        Info::CRFWorldDatabasedtor_CRFWorldDatabase673_clbk CRFWorldDatabasedtor_CRFWorldDatabase673_user(nullptr);
        
        bool CRFWorldDatabaseAdd_PvpPoint2_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwPoint, unsigned int dwCashBag)
        {
           return CRFWorldDatabaseAdd_PvpPoint2_user(_this, dwSerial, dwPoint, dwCashBag, CRFWorldDatabaseAdd_PvpPoint2_next);
        };
        
        void CRFWorldDatabasector_CRFWorldDatabase4_wrapper(struct CRFWorldDatabase* _this)
        {
           CRFWorldDatabasector_CRFWorldDatabase4_user(_this, CRFWorldDatabasector_CRFWorldDatabase4_next);
        };
        bool CRFWorldDatabaseCheck_GuildMemberCount6_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseCheck_GuildMemberCount6_user(_this, dwGuildSerial, CRFWorldDatabaseCheck_GuildMemberCount6_next);
        };
        bool CRFWorldDatabaseCreateCharacterSelectLogTable8_wrapper(struct CRFWorldDatabase* _this, char* szTableName)
        {
           return CRFWorldDatabaseCreateCharacterSelectLogTable8_user(_this, szTableName, CRFWorldDatabaseCreateCharacterSelectLogTable8_next);
        };
        bool CRFWorldDatabaseCreateGuildBattleRankTable10_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseCreateGuildBattleRankTable10_user(_this, szDate, CRFWorldDatabaseCreateGuildBattleRankTable10_next);
        };
        bool CRFWorldDatabaseCreate_PvpPointGuildRankTable12_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseCreate_PvpPointGuildRankTable12_user(_this, szDate, CRFWorldDatabaseCreate_PvpPointGuildRankTable12_next);
        };
        bool CRFWorldDatabaseDeleteGuildBattleInfo14_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseDeleteGuildBattleInfo14_user(_this, CRFWorldDatabaseDeleteGuildBattleInfo14_next);
        };
        bool CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_user(_this, CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_next);
        };
        bool CRFWorldDatabaseDelete_CharacterData18_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial)
        {
           return CRFWorldDatabaseDelete_CharacterData18_user(_this, dwCharacterSerial, CRFWorldDatabaseDelete_CharacterData18_next);
        };
        bool CRFWorldDatabaseDelete_Guild20_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseDelete_Guild20_user(_this, dwGuildSerial, CRFWorldDatabaseDelete_Guild20_next);
        };
        bool CRFWorldDatabaseDelete_ItemCharge22_wrapper(struct CRFWorldDatabase* _this, unsigned int dwItemChargeIndex)
        {
           return CRFWorldDatabaseDelete_ItemCharge22_user(_this, dwItemChargeIndex, CRFWorldDatabaseDelete_ItemCharge22_next);
        };
        char CRFWorldDatabaseDelete_PatriarchComm24_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* pszDepDate)
        {
           return CRFWorldDatabaseDelete_PatriarchComm24_user(_this, dwSerial, pszDepDate, CRFWorldDatabaseDelete_PatriarchComm24_next);
        };
        bool CRFWorldDatabaseDelete_TrunkItemCharge26_wrapper(struct CRFWorldDatabase* _this, unsigned int dwDBID)
        {
           return CRFWorldDatabaseDelete_TrunkItemCharge26_user(_this, dwDBID, CRFWorldDatabaseDelete_TrunkItemCharge26_next);
        };
        bool CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_wrapper(struct CRFWorldDatabase* _this, unsigned int dwDBID)
        {
           return CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_user(_this, dwDBID, CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_next);
        };
        bool CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacSerial, char byType, char* szPrevClass, char* szNextClass, int nClassInitCnt, char byLastClassGrade, uint16_t dwYear, char byMonth, char byDay, char byHour, char byMin, char bySec)
        {
           return CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_user(_this, dwCharacSerial, byType, szPrevClass, szNextClass, nClassInitCnt, byLastClassGrade, dwYear, byMonth, byDay, byHour, byMin, bySec, CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_next);
        };
        bool CRFWorldDatabaseInsertCharacterSelectLog32_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, char* wszAccount, unsigned int dwCharacSerial, char* pwszCharacName, uint16_t dwYear, char byMonth, char byDay, char byHour, char byMin, char bySec)
        {
           return CRFWorldDatabaseInsertCharacterSelectLog32_user(_this, dwAccountSerial, wszAccount, dwCharacSerial, pwszCharacName, dwYear, byMonth, byDay, byHour, byMin, bySec, CRFWorldDatabaseInsertCharacterSelectLog32_next);
        };
        bool CRFWorldDatabaseInsertGuildBattleDefaultRecord34_wrapper(struct CRFWorldDatabase* _this, unsigned int dwRowCnt)
        {
           return CRFWorldDatabaseInsertGuildBattleDefaultRecord34_user(_this, dwRowCnt, CRFWorldDatabaseInsertGuildBattleDefaultRecord34_next);
        };
        bool CRFWorldDatabaseInsertGuildBattleRankRecord36_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseInsertGuildBattleRankRecord36_user(_this, dwGuildSerial, CRFWorldDatabaseInsertGuildBattleRankRecord36_next);
        };
        bool CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_wrapper(struct CRFWorldDatabase* _this, unsigned int uiDayCnt, unsigned int uiMapCnt, char byMaxHour, char byUnitTimeCntPerTime)
        {
           return CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_user(_this, uiDayCnt, uiMapCnt, byMaxHour, byUnitTimeCntPerTime, CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_next);
        };
        bool CRFWorldDatabaseInsert_AccountTrunk40_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial)
        {
           return CRFWorldDatabaseInsert_AccountTrunk40_user(_this, dwAccountSerial, CRFWorldDatabaseInsert_AccountTrunk40_next);
        };
        bool CRFWorldDatabaseInsert_AccountTrunkExtend42_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial)
        {
           return CRFWorldDatabaseInsert_AccountTrunkExtend42_user(_this, dwAccountSerial, CRFWorldDatabaseInsert_AccountTrunkExtend42_next);
        };
        bool CRFWorldDatabaseInsert_AnimusData44_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double* pVal)
        {
           return CRFWorldDatabaseInsert_AnimusData44_user(_this, dwSerial, pVal, CRFWorldDatabaseInsert_AnimusData44_next);
        };
        bool CRFWorldDatabaseInsert_AnimusLog46_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* wszName, char byDID, long double dOrgVal, long double dChgVal)
        {
           return CRFWorldDatabaseInsert_AnimusLog46_user(_this, dwSerial, wszName, byDID, dOrgVal, dChgVal, CRFWorldDatabaseInsert_AnimusLog46_next);
        };
        bool CRFWorldDatabaseInsert_BossCryRecord48_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_BossCryRecord48_user(_this, dwSerial, CRFWorldDatabaseInsert_BossCryRecord48_next);
        };
        bool CRFWorldDatabaseInsert_Buddy50_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_Buddy50_user(_this, dwSerial, CRFWorldDatabaseInsert_Buddy50_next);
        };
        bool CRFWorldDatabaseInsert_CashLimSale52_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseInsert_CashLimSale52_user(_this, CRFWorldDatabaseInsert_CashLimSale52_next);
        };
        bool CRFWorldDatabaseInsert_CharacterData54_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName, char* wszClassCode, unsigned int dwAccountSerial, char* wszAccount, char bySlotIndex, char byRaceSexCode, unsigned int dwBaseShape, int nMapIndex, unsigned int* pDwSerial)
        {
           return CRFWorldDatabaseInsert_CharacterData54_user(_this, pwszCharacterName, wszClassCode, dwAccountSerial, wszAccount, bySlotIndex, byRaceSexCode, dwBaseShape, nMapIndex, pDwSerial, CRFWorldDatabaseInsert_CharacterData54_next);
        };
        bool CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_user(_this, CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_next);
        };
        bool CRFWorldDatabaseInsert_Economy_History58_wrapper(struct CRFWorldDatabase* _this, unsigned int dwDate, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info* pEconomyData)
        {
           return CRFWorldDatabaseInsert_Economy_History58_user(_this, dwDate, pEconomyData, CRFWorldDatabaseInsert_Economy_History58_next);
        };
        bool CRFWorldDatabaseInsert_GoldenBoxItem60_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseInsert_GoldenBoxItem60_user(_this, CRFWorldDatabaseInsert_GoldenBoxItem60_next);
        };
        bool CRFWorldDatabaseInsert_GreetingRecord62_wrapper(struct CRFWorldDatabase* _this, int nUseType, char* wszName, char* wszMessage)
        {
           return CRFWorldDatabaseInsert_GreetingRecord62_user(_this, nUseType, wszName, wszMessage, CRFWorldDatabaseInsert_GreetingRecord62_next);
        };
        bool CRFWorldDatabaseInsert_GuidRoom64_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, char byRoomType, char byRace)
        {
           return CRFWorldDatabaseInsert_GuidRoom64_user(_this, dwGuildSerial, byRoomType, byRace, CRFWorldDatabaseInsert_GuidRoom64_next);
        };
        bool CRFWorldDatabaseInsert_Guild66_wrapper(struct CRFWorldDatabase* _this, char* pwszGuildName, char byRace)
        {
           return CRFWorldDatabaseInsert_Guild66_user(_this, pwszGuildName, byRace, CRFWorldDatabaseInsert_Guild66_next);
        };
        bool CRFWorldDatabaseInsert_GuildBatlleResultLog68_wrapper(struct CRFWorldDatabase* _this, char* szStartTime, char* szEndTime, unsigned int dwRedSerial, char* wszRedName, unsigned int dwBlueSerial, char* wszBlueName, unsigned int dwRedScore, unsigned int dwBlueScore, unsigned int dwRedMaxJoinCnt, unsigned int dwBlueMaxJoinCnt, unsigned int dwRedGoalCntSum, unsigned int dwBlueGoalCntSum, unsigned int dwRedKillCntSum, unsigned int dwBlueKillCntSum, char byBattleResult, unsigned int dwMaxGoalCharacSerial, char* wszMaxGoalCharacName, unsigned int dwMaxKillCharacSerial, char* wszMaxKillCharacName, char byJoinLimit, unsigned int dwGuildBattleCostGold, char* szBattleMapCode)
        {
           return CRFWorldDatabaseInsert_GuildBatlleResultLog68_user(_this, szStartTime, szEndTime, dwRedSerial, wszRedName, dwBlueSerial, wszBlueName, dwRedScore, dwBlueScore, dwRedMaxJoinCnt, dwBlueMaxJoinCnt, dwRedGoalCntSum, dwBlueGoalCntSum, dwRedKillCntSum, dwBlueKillCntSum, byBattleResult, dwMaxGoalCharacSerial, wszMaxGoalCharacName, dwMaxKillCharacSerial, wszMaxKillCharacName, byJoinLimit, dwGuildBattleCostGold, szBattleMapCode, CRFWorldDatabaseInsert_GuildBatlleResultLog68_next);
        };
        bool CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_wrapper(struct CRFWorldDatabase* _this, char* szStartTime, char* szEndTime, unsigned int dwRedSerial, char* wszRedName, unsigned int dwBlueSerial, char* wszBlueName, unsigned int dwRedScore, unsigned int dwBlueScore, unsigned int dwRedMaxJoinCnt, unsigned int dwBlueMaxJoinCnt, unsigned int dwRedGoalCntSum, unsigned int dwBlueGoalCntSum, unsigned int dwRedKillCntSum, unsigned int dwBlueKillCntSum, char byBattleResult, unsigned int dwMaxGoalCharacSerial, char* wszMaxGoalCharacName, unsigned int dwMaxKillCharacSerial, char* wszMaxKillCharacName, char byJoinLimit, unsigned int dwGuildBattleCostGold, char* szBattleMapCode)
        {
           return CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_user(_this, szStartTime, szEndTime, dwRedSerial, wszRedName, dwBlueSerial, wszBlueName, dwRedScore, dwBlueScore, dwRedMaxJoinCnt, dwBlueMaxJoinCnt, dwRedGoalCntSum, dwBlueGoalCntSum, dwRedKillCntSum, dwBlueKillCntSum, byBattleResult, dwMaxGoalCharacSerial, wszMaxGoalCharacName, dwMaxKillCharacSerial, wszMaxKillCharacName, byJoinLimit, dwGuildBattleCostGold, szBattleMapCode, CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_next);
        };
        bool CRFWorldDatabaseInsert_GuildMoneyHistory72_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, long double dInoutDalant, long double dInoutGold, long double dResultDalant, long double dResultGold, char* wszDate, unsigned int dwAvatorSerial, char* pwszName)
        {
           return CRFWorldDatabaseInsert_GuildMoneyHistory72_user(_this, dwGuildSerial, dInoutDalant, dInoutGold, dResultDalant, dResultGold, wszDate, dwAvatorSerial, pwszName, CRFWorldDatabaseInsert_GuildMoneyHistory72_next);
        };
        bool CRFWorldDatabaseInsert_ItemChargeInGame74_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, unsigned int dwItemCode_K, uint64_t dwItemCode_D, unsigned int dwItemCode_U, char byType)
        {
           return CRFWorldDatabaseInsert_ItemChargeInGame74_user(_this, dwAvatorSerial, dwItemCode_K, dwItemCode_D, dwItemCode_U, byType, CRFWorldDatabaseInsert_ItemChargeInGame74_next);
        };
        bool CRFWorldDatabaseInsert_ItemCombineEx76_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial)
        {
           return CRFWorldDatabaseInsert_ItemCombineEx76_user(_this, dwCharacterSerial, CRFWorldDatabaseInsert_ItemCombineEx76_next);
        };
        bool CRFWorldDatabaseInsert_Level_Log78_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial, char byLevel, unsigned int dwTotalPlayMin)
        {
           return CRFWorldDatabaseInsert_Level_Log78_user(_this, dwCharacterSerial, byLevel, dwTotalPlayMin, CRFWorldDatabaseInsert_Level_Log78_next);
        };
        bool CRFWorldDatabaseInsert_LimitItemRecord80_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwSerial)
        {
           return CRFWorldDatabaseInsert_LimitItemRecord80_user(_this, pdwSerial, CRFWorldDatabaseInsert_LimitItemRecord80_next);
        };
        bool CRFWorldDatabaseInsert_MacroData82_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_MacroData82_user(_this, dwSerial, CRFWorldDatabaseInsert_MacroData82_next);
        };
        bool CRFWorldDatabaseInsert_NpcData84_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_NpcData84_user(_this, dwSerial, CRFWorldDatabaseInsert_NpcData84_next);
        };
        bool CRFWorldDatabaseInsert_NpcData86_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* pNpcData)
        {
           return CRFWorldDatabaseInsert_NpcData86_user(_this, dwSerial, pNpcData, CRFWorldDatabaseInsert_NpcData86_next);
        };
        bool CRFWorldDatabaseInsert_NpcLog88_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* pwszName, char byIndex, unsigned int dwOrgValue, unsigned int dwChgValue)
        {
           return CRFWorldDatabaseInsert_NpcLog88_user(_this, dwSerial, pwszName, byIndex, dwOrgValue, dwChgValue, CRFWorldDatabaseInsert_NpcLog88_next);
        };
        bool CRFWorldDatabaseInsert_NpcQuest_History90_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_NpcQuest_History90_user(_this, dwSerial, CRFWorldDatabaseInsert_NpcQuest_History90_next);
        };
        bool CRFWorldDatabaseInsert_OreCutting92_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_OreCutting92_user(_this, dwSerial, CRFWorldDatabaseInsert_OreCutting92_next);
        };
        bool CRFWorldDatabaseInsert_OreReset_Log94_wrapper(struct CRFWorldDatabase* _this, char byType, int nLiveUsercnt, unsigned int dwOreRemain, unsigned int dwTAmount)
        {
           return CRFWorldDatabaseInsert_OreReset_Log94_user(_this, byType, nLiveUsercnt, dwOreRemain, dwTAmount, CRFWorldDatabaseInsert_OreReset_Log94_next);
        };
        bool CRFWorldDatabaseInsert_PSDefaultRecord96_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCum)
        {
           return CRFWorldDatabaseInsert_PSDefaultRecord96_user(_this, dwCum, CRFWorldDatabaseInsert_PSDefaultRecord96_next);
        };
        char CRFWorldDatabaseInsert_PatriarchComm98_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwDalant, char* pszDepDate)
        {
           return CRFWorldDatabaseInsert_PatriarchComm98_user(_this, dwSerial, dwDalant, pszDepDate, CRFWorldDatabaseInsert_PatriarchComm98_next);
        };
        bool CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_wrapper(struct CRFWorldDatabase* _this, char* szData)
        {
           return CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_user(_this, szData, CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_next);
        };
        bool CRFWorldDatabaseInsert_PcBangFavorItem102_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_PcBangFavorItem102_user(_this, dwSerial, CRFWorldDatabaseInsert_PcBangFavorItem102_next);
        };
        bool CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial)
        {
           return CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_user(_this, dwAccountSerial, CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_next);
        };
        bool CRFWorldDatabaseInsert_PostStorageRecord106_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseInsert_PostStorageRecord106_user(_this, CRFWorldDatabaseInsert_PostStorageRecord106_next);
        };
        bool CRFWorldDatabaseInsert_PotionDelay108_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_PotionDelay108_user(_this, dwSerial, CRFWorldDatabaseInsert_PotionDelay108_next);
        };
        bool CRFWorldDatabaseInsert_PrimiumPlayTime110_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccSerial)
        {
           return CRFWorldDatabaseInsert_PrimiumPlayTime110_user(_this, dwAccSerial, CRFWorldDatabaseInsert_PrimiumPlayTime110_next);
        };
        bool CRFWorldDatabaseInsert_PvpOrderViewInfo112_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_PvpOrderViewInfo112_user(_this, dwSerial, CRFWorldDatabaseInsert_PvpOrderViewInfo112_next);
        };
        bool CRFWorldDatabaseInsert_PvpPointGuildRankData114_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseInsert_PvpPointGuildRankData114_user(_this, szDate, CRFWorldDatabaseInsert_PvpPointGuildRankData114_next);
        };
        bool CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_user(_this, dwSerial, CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_next);
        };
        bool CRFWorldDatabaseInsert_Quest118_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_Quest118_user(_this, dwSerial, CRFWorldDatabaseInsert_Quest118_next);
        };
        bool CRFWorldDatabaseInsert_RFEvent_ClassRefine120_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial)
        {
           return CRFWorldDatabaseInsert_RFEvent_ClassRefine120_user(_this, dwAvatorSerial, CRFWorldDatabaseInsert_RFEvent_ClassRefine120_next);
        };
        bool CRFWorldDatabaseInsert_RaceBattleLog122_wrapper(struct CRFWorldDatabase* _this, struct _race_battle_log_info* pInfo)
        {
           return CRFWorldDatabaseInsert_RaceBattleLog122_user(_this, pInfo, CRFWorldDatabaseInsert_RaceBattleLog122_next);
        };
        bool CRFWorldDatabaseInsert_RenamePotionLog124_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* wszOldName, char* wszNewName)
        {
           return CRFWorldDatabaseInsert_RenamePotionLog124_user(_this, dwSerial, wszOldName, wszNewName, CRFWorldDatabaseInsert_RenamePotionLog124_next);
        };
        bool CRFWorldDatabaseInsert_SFDelayInfo126_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_sf_delay_info* pSFDelay)
        {
           return CRFWorldDatabaseInsert_SFDelayInfo126_user(_this, dwSerial, pSFDelay, CRFWorldDatabaseInsert_SFDelayInfo126_next);
        };
        bool CRFWorldDatabaseInsert_Set_Limit_Run128_wrapper(struct CRFWorldDatabase* _this, char* pData, int iSize)
        {
           return CRFWorldDatabaseInsert_Set_Limit_Run128_user(_this, pData, iSize, CRFWorldDatabaseInsert_Set_Limit_Run128_next);
        };
        bool CRFWorldDatabaseInsert_SettlementOwnerLog130_wrapper(struct CRFWorldDatabase* _this, char byNth, char byRace, unsigned int dwGuildSerial, char* wszGuildName, uint16_t wRank, char byGrade, long double dKillPvpPoint, long double dGuildBattlePvpPoint, unsigned int dwSumLv)
        {
           return CRFWorldDatabaseInsert_SettlementOwnerLog130_user(_this, byNth, byRace, dwGuildSerial, wszGuildName, wRank, byGrade, dKillPvpPoint, dGuildBattlePvpPoint, dwSumLv, CRFWorldDatabaseInsert_SettlementOwnerLog130_next);
        };
        bool CRFWorldDatabaseInsert_Start_NpcQuest_History132_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* szQuestCode, char byLevel, char* szTime, int64_t nEndTime)
        {
           return CRFWorldDatabaseInsert_Start_NpcQuest_History132_user(_this, dwSerial, szQuestCode, byLevel, szTime, nEndTime, CRFWorldDatabaseInsert_Start_NpcQuest_History132_next);
        };
        bool CRFWorldDatabaseInsert_Supplement134_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_Supplement134_user(_this, dwSerial, CRFWorldDatabaseInsert_Supplement134_next);
        };
        bool CRFWorldDatabaseInsert_Unit136_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial)
        {
           return CRFWorldDatabaseInsert_Unit136_user(_this, dwCharacterSerial, CRFWorldDatabaseInsert_Unit136_next);
        };
        bool CRFWorldDatabaseInsert_UnitData138_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double* pUnitData)
        {
           return CRFWorldDatabaseInsert_UnitData138_user(_this, dwSerial, pUnitData, CRFWorldDatabaseInsert_UnitData138_next);
        };
        bool CRFWorldDatabaseInsert_UnitLog140_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* wszName, char byDID, long double dOrgVal, long double dChgVal)
        {
           return CRFWorldDatabaseInsert_UnitLog140_user(_this, dwSerial, wszName, byDID, dOrgVal, dChgVal, CRFWorldDatabaseInsert_UnitLog140_next);
        };
        bool CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_wrapper(struct CRFWorldDatabase* _this, unsigned int dwRowCnt, wchar_t** ppwszStr)
        {
           return CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_user(_this, dwRowCnt, ppwszStr, CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_next);
        };
        bool CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_wrapper(struct CRFWorldDatabase* _this, unsigned int dwRowCnt)
        {
           return CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_user(_this, dwRowCnt, CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_next);
        };
        bool CRFWorldDatabaseInsert_UserInterface146_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_UserInterface146_user(_this, dwSerial, CRFWorldDatabaseInsert_UserInterface146_next);
        };
        bool CRFWorldDatabaseInsert_UserNum_Log148_wrapper(struct CRFWorldDatabase* _this, int nAvgUserNum, int nMaxUserNum)
        {
           return CRFWorldDatabaseInsert_UserNum_Log148_user(_this, nAvgUserNum, nMaxUserNum, CRFWorldDatabaseInsert_UserNum_Log148_next);
        };
        bool CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_user(_this, dwSerial, CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_next);
        };
        bool CRFWorldDatabaseLoadGreetingMsg152_wrapper(struct CRFWorldDatabase* _this, char* pwszGMGreetingmsg, char* pwszRaceGreetingmsgA, char* pwszRaceGreetingmsgB, char* pwszRaceGreetingmsgC, char* pwszGMName, char* pwszNameA, char* pwszNameB, char* pwszNameC)
        {
           return CRFWorldDatabaseLoadGreetingMsg152_user(_this, pwszGMGreetingmsg, pwszRaceGreetingmsgA, pwszRaceGreetingmsgB, pwszRaceGreetingmsgC, pwszGMName, pwszNameA, pwszNameB, pwszNameC, CRFWorldDatabaseLoadGreetingMsg152_next);
        };
        bool CRFWorldDatabaseLoadGuildBattleInfo154_wrapper(struct CRFWorldDatabase* _this, unsigned int dwStartID, unsigned int dwRowCnt, struct _worlddb_guild_battle_info* pkInfo)
        {
           return CRFWorldDatabaseLoadGuildBattleInfo154_user(_this, dwStartID, dwRowCnt, pkInfo, CRFWorldDatabaseLoadGuildBattleInfo154_next);
        };
        char CRFWorldDatabaseLoadGuildBattleScheduleInfo156_wrapper(struct CRFWorldDatabase* _this, unsigned int uiStartListID, unsigned int uiScheduleUnitCnt, struct _worlddb_guild_battle_schedule_list* pkInfo)
        {
           return CRFWorldDatabaseLoadGuildBattleScheduleInfo156_user(_this, uiStartListID, uiScheduleUnitCnt, pkInfo, CRFWorldDatabaseLoadGuildBattleScheduleInfo156_next);
        };
        bool CRFWorldDatabaseRebirth_Base158_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial, char* pwszName)
        {
           return CRFWorldDatabaseRebirth_Base158_user(_this, dwCharacterSerial, pwszName, CRFWorldDatabaseRebirth_Base158_next);
        };
        bool CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_wrapper(struct CRFWorldDatabase* _this, unsigned int dwRegSerial, struct _unmannedtrader_registsingleitem* kInfo, bool bInsertRecord)
        {
           return CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_user(_this, dwRegSerial, kInfo, bInsertRecord, CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_next);
        };
        bool CRFWorldDatabaseSelectAllGuildSerial162_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwCount, unsigned int* pdwSerial)
        {
           return CRFWorldDatabaseSelectAllGuildSerial162_user(_this, pdwCount, pdwSerial, CRFWorldDatabaseSelectAllGuildSerial162_next);
        };
        bool CRFWorldDatabaseSelectAllGuildSerialGrade164_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwCount, unsigned int* pdwSerial, char* pbyGrade)
        {
           return CRFWorldDatabaseSelectAllGuildSerialGrade164_user(_this, pdwCount, pdwSerial, pbyGrade, CRFWorldDatabaseSelectAllGuildSerialGrade164_next);
        };
        bool CRFWorldDatabaseSelectGuildBattleRankList166_wrapper(struct CRFWorldDatabase* _this, char byRace, struct _worlddb_guild_battle_rank_list* pkInfo)
        {
           return CRFWorldDatabaseSelectGuildBattleRankList166_user(_this, byRace, pkInfo, CRFWorldDatabaseSelectGuildBattleRankList166_next);
        };
        bool CRFWorldDatabaseSelectGuildBattleRankRecord168_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseSelectGuildBattleRankRecord168_user(_this, dwGuildSerial, CRFWorldDatabaseSelectGuildBattleRankRecord168_next);
        };
        bool CRFWorldDatabaseSelectGuildBattleRerservedList170_wrapper(struct CRFWorldDatabase* _this, unsigned int uiStartSLID, unsigned int uiEndSLID, struct _worlddb_guild_battle_reserved_schedule_info* pkInfo)
        {
           return CRFWorldDatabaseSelectGuildBattleRerservedList170_user(_this, uiStartSLID, uiEndSLID, pkInfo, CRFWorldDatabaseSelectGuildBattleRerservedList170_next);
        };
        char CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_wrapper(struct CRFWorldDatabase* _this, unsigned int dwID)
        {
           return CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_user(_this, dwID, CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_next);
        };
        int CRFWorldDatabaseSelectRowCountGuildBattleInfo174_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelectRowCountGuildBattleInfo174_user(_this, CRFWorldDatabaseSelectRowCountGuildBattleInfo174_next);
        };
        int CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_user(_this, CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_next);
        };
        bool CRFWorldDatabaseSelect_AccountByAvatorName178_wrapper(struct CRFWorldDatabase* _this, char* pwszAvatorName, char* szAccount)
        {
           return CRFWorldDatabaseSelect_AccountByAvatorName178_user(_this, pwszAvatorName, szAccount, CRFWorldDatabaseSelect_AccountByAvatorName178_next);
        };
        bool CRFWorldDatabaseSelect_AccountItemCharge180_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, char* pbyType, long double* pdMoney, unsigned int* pdwItemCode_K, uint64_t* pdwItemCode_D, unsigned int* pdwItemCode_U, char* pbyRace, unsigned int* pdwDBID, int* piTime)
        {
           return CRFWorldDatabaseSelect_AccountItemCharge180_user(_this, dwAccountSerial, pbyType, pdMoney, pdwItemCode_K, pdwItemCode_D, pdwItemCode_U, pbyRace, pdwDBID, piTime, CRFWorldDatabaseSelect_AccountItemCharge180_next);
        };
        bool CRFWorldDatabaseSelect_AccountItemCharge_Extend182_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, char* pbyType, unsigned int* pdwItemCode_K, uint64_t* pdwItemCode_D, unsigned int* pdwItemCode_U, char* pbyRace, unsigned int* pdwDBID, int* piTime)
        {
           return CRFWorldDatabaseSelect_AccountItemCharge_Extend182_user(_this, dwAccountSerial, pbyType, pdwItemCode_K, pdwItemCode_D, pdwItemCode_U, pbyRace, pdwDBID, piTime, CRFWorldDatabaseSelect_AccountItemCharge_Extend182_next);
        };
        bool CRFWorldDatabaseSelect_AccountSerial184_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName, char* szAccount, unsigned int* pSerial)
        {
           return CRFWorldDatabaseSelect_AccountSerial184_user(_this, pwszCharacterName, szAccount, pSerial, CRFWorldDatabaseSelect_AccountSerial184_next);
        };
        char CRFWorldDatabaseSelect_AccountTrunk186_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, char byRace, struct _worlddb_trunk_info* pTrunkData)
        {
           return CRFWorldDatabaseSelect_AccountTrunk186_user(_this, dwAccountSerial, byRace, pTrunkData, CRFWorldDatabaseSelect_AccountTrunk186_next);
        };
        char CRFWorldDatabaseSelect_AccountTrunkExtend188_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, struct _worlddb_trunk_info* pTrunkData)
        {
           return CRFWorldDatabaseSelect_AccountTrunkExtend188_user(_this, dwAccountSerial, pTrunkData, CRFWorldDatabaseSelect_AccountTrunkExtend188_next);
        };
        bool CRFWorldDatabaseSelect_AllGuildData190_wrapper(struct CRFWorldDatabase* _this, struct _worlddb_guild_info* pGuildInfo)
        {
           return CRFWorldDatabaseSelect_AllGuildData190_user(_this, pGuildInfo, CRFWorldDatabaseSelect_AllGuildData190_next);
        };
        uint16_t CRFWorldDatabaseSelect_AllGuildNum192_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelect_AllGuildNum192_user(_this, CRFWorldDatabaseSelect_AllGuildNum192_next);
        };
        char CRFWorldDatabaseSelect_AnimusData194_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char byRace, long double* pAnimusData)
        {
           return CRFWorldDatabaseSelect_AnimusData194_user(_this, dwSerial, byRace, pAnimusData, CRFWorldDatabaseSelect_AnimusData194_next);
        };
        bool CRFWorldDatabaseSelect_ArrangeInfo196_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseSelect_ArrangeInfo196_user(_this, dwSerial, CRFWorldDatabaseSelect_ArrangeInfo196_next);
        };
        char CRFWorldDatabaseSelect_BattleResultLogLatest198_wrapper(struct CRFWorldDatabase* _this, unsigned int* pkLogSerial)
        {
           return CRFWorldDatabaseSelect_BattleResultLogLatest198_user(_this, pkLogSerial, CRFWorldDatabaseSelect_BattleResultLogLatest198_next);
        };
        bool CRFWorldDatabaseSelect_BattleTournamentInfo200_wrapper(struct CRFWorldDatabase* _this, struct TournamentWinner* pWinnerInfo, int nMax)
        {
           return CRFWorldDatabaseSelect_BattleTournamentInfo200_user(_this, pWinnerInfo, nMax, CRFWorldDatabaseSelect_BattleTournamentInfo200_next);
        };
        char CRFWorldDatabaseSelect_BossCryMsg202_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_crymsg_info* pCryMsg)
        {
           return CRFWorldDatabaseSelect_BossCryMsg202_user(_this, dwSerial, pCryMsg, CRFWorldDatabaseSelect_BossCryMsg202_next);
        };
        char CRFWorldDatabaseSelect_Buddy204_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_buddy_info* pBuddyData)
        {
           return CRFWorldDatabaseSelect_Buddy204_user(_this, dwSerial, pBuddyData, CRFWorldDatabaseSelect_Buddy204_next);
        };
        int CRFWorldDatabaseSelect_CashLimSale206_wrapper(struct CRFWorldDatabase* _this, struct _worlddb_cash_limited_sale* pcashlimitedsale)
        {
           return CRFWorldDatabaseSelect_CashLimSale206_user(_this, pcashlimitedsale, CRFWorldDatabaseSelect_CashLimSale206_next);
        };
        char CRFWorldDatabaseSelect_CharNumInWorld208_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, char* byCharNum)
        {
           return CRFWorldDatabaseSelect_CharNumInWorld208_user(_this, dwAccountSerial, byCharNum, CRFWorldDatabaseSelect_CharNumInWorld208_next);
        };
        char CRFWorldDatabaseSelect_CharacterBaseInfo210_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial, struct _worlddb_character_base_info* pCharacterData)
        {
           return CRFWorldDatabaseSelect_CharacterBaseInfo210_user(_this, dwCharacterSerial, pCharacterData, CRFWorldDatabaseSelect_CharacterBaseInfo210_next);
        };
        char CRFWorldDatabaseSelect_CharacterBaseInfoByName212_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName, struct _worlddb_character_base_info* pCharacterData)
        {
           return CRFWorldDatabaseSelect_CharacterBaseInfoByName212_user(_this, pwszCharacterName, pCharacterData, CRFWorldDatabaseSelect_CharacterBaseInfoByName212_next);
        };
        char CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, struct _worlddb_character_base_info_array* pCharacterDataArray)
        {
           return CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_user(_this, dwAccountSerial, pCharacterDataArray, CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_next);
        };
        char CRFWorldDatabaseSelect_CharacterGeneralInfo216_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial, struct _worlddb_character_general_info* pCharacterData)
        {
           return CRFWorldDatabaseSelect_CharacterGeneralInfo216_user(_this, dwCharacterSerial, pCharacterData, CRFWorldDatabaseSelect_CharacterGeneralInfo216_next);
        };
        bool CRFWorldDatabaseSelect_CharacterName218_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* pwszCharacterName, char* szAccount)
        {
           return CRFWorldDatabaseSelect_CharacterName218_user(_this, dwSerial, pwszCharacterName, szAccount, CRFWorldDatabaseSelect_CharacterName218_next);
        };
        bool CRFWorldDatabaseSelect_CharacterReName220_wrapper(struct CRFWorldDatabase* _this, char* pwszName, unsigned int* pSerial)
        {
           return CRFWorldDatabaseSelect_CharacterReName220_user(_this, pwszName, pSerial, CRFWorldDatabaseSelect_CharacterReName220_next);
        };
        bool CRFWorldDatabaseSelect_CharacterSerial222_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName, unsigned int* pSerial)
        {
           return CRFWorldDatabaseSelect_CharacterSerial222_user(_this, pwszCharacterName, pSerial, CRFWorldDatabaseSelect_CharacterSerial222_next);
        };
        bool CRFWorldDatabaseSelect_CharactersInfo224_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, struct _worlddb_character_array_info* pCharacterData)
        {
           return CRFWorldDatabaseSelect_CharactersInfo224_user(_this, dwAccountSerial, pCharacterData, CRFWorldDatabaseSelect_CharactersInfo224_next);
        };
        char CRFWorldDatabaseSelect_CheckGreetRecord226_wrapper(struct CRFWorldDatabase* _this, int nUseType)
        {
           return CRFWorldDatabaseSelect_CheckGreetRecord226_user(_this, nUseType, CRFWorldDatabaseSelect_CheckGreetRecord226_next);
        };
        bool CRFWorldDatabaseSelect_CheckSumValue228_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* pdwCheckSum)
        {
           return CRFWorldDatabaseSelect_CheckSumValue228_user(_this, dwSerial, pdwCheckSum, CRFWorldDatabaseSelect_CheckSumValue228_next);
        };
        bool CRFWorldDatabaseSelect_ChracterSerialRace230_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName, unsigned int* pSerial, char* pbyRace)
        {
           return CRFWorldDatabaseSelect_ChracterSerialRace230_user(_this, pwszCharacterName, pSerial, pbyRace, CRFWorldDatabaseSelect_ChracterSerialRace230_next);
        };
        int CRFWorldDatabaseSelect_ClearHonorGuild232_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int* dwSerial)
        {
           return CRFWorldDatabaseSelect_ClearHonorGuild232_user(_this, byRace, dwSerial, CRFWorldDatabaseSelect_ClearHonorGuild232_next);
        };
        char CRFWorldDatabaseSelect_Economy_History234_wrapper(struct CRFWorldDatabase* _this, struct _worlddb_economy_history_info_array* pEconomyData, unsigned int dwDate)
        {
           return CRFWorldDatabaseSelect_Economy_History234_user(_this, pEconomyData, dwDate, CRFWorldDatabaseSelect_Economy_History234_next);
        };
        bool CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName)
        {
           return CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_user(_this, pwszCharacterName, CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_next);
        };
        bool CRFWorldDatabaseSelect_Equal_Name238_wrapper(struct CRFWorldDatabase* _this, char* pwszCharacterName)
        {
           return CRFWorldDatabaseSelect_Equal_Name238_user(_this, pwszCharacterName, CRFWorldDatabaseSelect_Equal_Name238_next);
        };
        char CRFWorldDatabaseSelect_Exist_Economy240_wrapper(struct CRFWorldDatabase* _this, unsigned int dwDate, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info* pEconomyData)
        {
           return CRFWorldDatabaseSelect_Exist_Economy240_user(_this, dwDate, pEconomyData, CRFWorldDatabaseSelect_Exist_Economy240_next);
        };
        int CRFWorldDatabaseSelect_FailBattleCount242_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwSerial, unsigned int* dwCount)
        {
           return CRFWorldDatabaseSelect_FailBattleCount242_user(_this, byRace, dwSerial, dwCount, CRFWorldDatabaseSelect_FailBattleCount242_next);
        };
        int CRFWorldDatabaseSelect_GetCharSerialByNameRace244_wrapper(struct CRFWorldDatabase* _this, char* pwszName, char byRace, unsigned int* pSerial)
        {
           return CRFWorldDatabaseSelect_GetCharSerialByNameRace244_user(_this, pwszName, byRace, pSerial, CRFWorldDatabaseSelect_GetCharSerialByNameRace244_next);
        };
        int CRFWorldDatabaseSelect_GodenBoxItem246_wrapper(struct CRFWorldDatabase* _this, struct _worlddb_golden_box_item* goldenboxitem, int* pnSerial)
        {
           return CRFWorldDatabaseSelect_GodenBoxItem246_user(_this, goldenboxitem, pnSerial, CRFWorldDatabaseSelect_GodenBoxItem246_next);
        };
        bool CRFWorldDatabaseSelect_GuildBattleRecord248_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _guildbattle_totalrecord* pkInfo)
        {
           return CRFWorldDatabaseSelect_GuildBattleRecord248_user(_this, dwSerial, pkInfo, CRFWorldDatabaseSelect_GuildBattleRecord248_next);
        };
        bool CRFWorldDatabaseSelect_GuildData250_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, struct _worlddb_guild_info::__guild_info* pGuildData)
        {
           return CRFWorldDatabaseSelect_GuildData250_user(_this, dwGuildSerial, pGuildData, CRFWorldDatabaseSelect_GuildData250_next);
        };
        char CRFWorldDatabaseSelect_GuildMasterLastConn252_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwLimitConnTime, unsigned int* pdwLastConnTime)
        {
           return CRFWorldDatabaseSelect_GuildMasterLastConn252_user(_this, dwSerial, dwLimitConnTime, pdwLastConnTime, CRFWorldDatabaseSelect_GuildMasterLastConn252_next);
        };
        bool CRFWorldDatabaseSelect_GuildMemberData254_wrapper(struct CRFWorldDatabase* _this, uint16_t wMaxMember, unsigned int dwGuildSerial, struct _worlddb_guild_member_info* pGuildMemberInfo)
        {
           return CRFWorldDatabaseSelect_GuildMemberData254_user(_this, wMaxMember, dwGuildSerial, pGuildMemberInfo, CRFWorldDatabaseSelect_GuildMemberData254_next);
        };
        bool CRFWorldDatabaseSelect_GuildMoneyIOData256_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, struct _worlddb_guild_money_io_info* pGuildIOData)
        {
           return CRFWorldDatabaseSelect_GuildMoneyIOData256_user(_this, dwGuildSerial, pGuildIOData, CRFWorldDatabaseSelect_GuildMoneyIOData256_next);
        };
        bool CRFWorldDatabaseSelect_GuildRoomInfo258_wrapper(struct CRFWorldDatabase* _this, struct _guildroom_info* pInfo)
        {
           return CRFWorldDatabaseSelect_GuildRoomInfo258_user(_this, pInfo, CRFWorldDatabaseSelect_GuildRoomInfo258_next);
        };
        bool CRFWorldDatabaseSelect_GuildSerial260_wrapper(struct CRFWorldDatabase* _this, char* pwszGuildName, unsigned int* pdwGuildSerial)
        {
           return CRFWorldDatabaseSelect_GuildSerial260_user(_this, pwszGuildName, pdwGuildSerial, CRFWorldDatabaseSelect_GuildSerial260_next);
        };
        int CRFWorldDatabaseSelect_HonorGuild262_wrapper(struct CRFWorldDatabase* _this, char byRace, struct _guild_honor_list_result_zocl* pOutList, bool bNext)
        {
           return CRFWorldDatabaseSelect_HonorGuild262_user(_this, byRace, pOutList, bNext, CRFWorldDatabaseSelect_HonorGuild262_next);
        };
        char CRFWorldDatabaseSelect_Inven264_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial, uint16_t wBagCount, struct _worlddb_inven_info* pInvenData)
        {
           return CRFWorldDatabaseSelect_Inven264_user(_this, dwCharacterSerial, wBagCount, pInvenData, CRFWorldDatabaseSelect_Inven264_next);
        };
        int CRFWorldDatabaseSelect_IsValidChar266_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* dwDbSerial)
        {
           return CRFWorldDatabaseSelect_IsValidChar266_user(_this, dwSerial, dwDbSerial, CRFWorldDatabaseSelect_IsValidChar266_next);
        };
        bool CRFWorldDatabaseSelect_ItemCharge268_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, char* pbyType, unsigned int* pDwItemCode_K, uint64_t* pDwItemCode_D, unsigned int* pDwItemCode_U, unsigned int* pDwItemChargeIndex, int* piTime)
        {
           return CRFWorldDatabaseSelect_ItemCharge268_user(_this, dwAvatorSerial, pbyType, pDwItemCode_K, pDwItemCode_D, pDwItemCode_U, pDwItemChargeIndex, piTime, CRFWorldDatabaseSelect_ItemCharge268_next);
        };
        char CRFWorldDatabaseSelect_ItemCombineEx270_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_itemcombineex_info* pdbItemCombineExInfo)
        {
           return CRFWorldDatabaseSelect_ItemCombineEx270_user(_this, dwSerial, pdbItemCombineExInfo, CRFWorldDatabaseSelect_ItemCombineEx270_next);
        };
        char CRFWorldDatabaseSelect_LimitInfo272_wrapper(struct CRFWorldDatabase* _this, char* pData, uint64_t tDataSize)
        {
           return CRFWorldDatabaseSelect_LimitInfo272_user(_this, pData, tDataSize, CRFWorldDatabaseSelect_LimitInfo272_next);
        };
        char CRFWorldDatabaseSelect_LimitItemEmptyRecord274_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwSerial)
        {
           return CRFWorldDatabaseSelect_LimitItemEmptyRecord274_user(_this, pdwSerial, CRFWorldDatabaseSelect_LimitItemEmptyRecord274_next);
        };
        char CRFWorldDatabaseSelect_LimitItemUsedRecord276_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwTypeSerial, unsigned int dwStoreInx, unsigned int* pdwSerial)
        {
           return CRFWorldDatabaseSelect_LimitItemUsedRecord276_user(_this, byType, dwTypeSerial, dwStoreInx, pdwSerial, CRFWorldDatabaseSelect_LimitItemUsedRecord276_next);
        };
        char CRFWorldDatabaseSelect_Limit_Run_Record278_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelect_Limit_Run_Record278_user(_this, CRFWorldDatabaseSelect_Limit_Run_Record278_next);
        };
        int CRFWorldDatabaseSelect_LoseBattleCount280_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwSerial, unsigned int* dwCount)
        {
           return CRFWorldDatabaseSelect_LoseBattleCount280_user(_this, byRace, dwSerial, dwCount, CRFWorldDatabaseSelect_LoseBattleCount280_next);
        };
        char CRFWorldDatabaseSelect_MacroData282_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _AIOC_A_MACRODATA* pMacro)
        {
           return CRFWorldDatabaseSelect_MacroData282_user(_this, dwSerial, pMacro, CRFWorldDatabaseSelect_MacroData282_next);
        };
        char CRFWorldDatabaseSelect_NotArrangeCharacter284_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, struct _worlddb_arrange_char_info* pCharData)
        {
           return CRFWorldDatabaseSelect_NotArrangeCharacter284_user(_this, dwAccountSerial, pCharData, CRFWorldDatabaseSelect_NotArrangeCharacter284_next);
        };
        char CRFWorldDatabaseSelect_NpcData286_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* pNpcData)
        {
           return CRFWorldDatabaseSelect_NpcData286_user(_this, dwSerial, pNpcData, CRFWorldDatabaseSelect_NpcData286_next);
        };
        char CRFWorldDatabaseSelect_NpcQuest_History288_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_npc_quest_complete_history* pNpcQHis)
        {
           return CRFWorldDatabaseSelect_NpcQuest_History288_user(_this, dwSerial, pNpcQHis, CRFWorldDatabaseSelect_NpcQuest_History288_next);
        };
        int CRFWorldDatabaseSelect_OldVerPatriarchGroup290_wrapper(struct CRFWorldDatabase* _this, char byRace, struct _candidate_info* p)
        {
           return CRFWorldDatabaseSelect_OldVerPatriarchGroup290_user(_this, byRace, p, CRFWorldDatabaseSelect_OldVerPatriarchGroup290_next);
        };
        int CRFWorldDatabaseSelect_OreCutting292_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_ore_cutting* pOreCutting)
        {
           return CRFWorldDatabaseSelect_OreCutting292_user(_this, dwSerial, pOreCutting, CRFWorldDatabaseSelect_OreCutting292_next);
        };
        char CRFWorldDatabaseSelect_PatriarchCandidate294_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char byRace, struct _candidate_info* p)
        {
           return CRFWorldDatabaseSelect_PatriarchCandidate294_user(_this, dwSerial, byRace, p, CRFWorldDatabaseSelect_PatriarchCandidate294_next);
        };
        int CRFWorldDatabaseSelect_PatriarchComm296_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _patriarch_comm_list* pOutList)
        {
           return CRFWorldDatabaseSelect_PatriarchComm296_user(_this, dwSerial, pOutList, CRFWorldDatabaseSelect_PatriarchComm296_next);
        };
        int CRFWorldDatabaseSelect_PatriarchCommCount298_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* pszDate, unsigned int* dwCnt)
        {
           return CRFWorldDatabaseSelect_PatriarchCommCount298_user(_this, dwSerial, pszDate, dwCnt, CRFWorldDatabaseSelect_PatriarchCommCount298_next);
        };
        int CRFWorldDatabaseSelect_PatriarchElectState300_wrapper(struct CRFWorldDatabase* _this, struct _sel_patriarch_elect_state* pSheet)
        {
           return CRFWorldDatabaseSelect_PatriarchElectState300_user(_this, pSheet, CRFWorldDatabaseSelect_PatriarchElectState300_next);
        };
        char CRFWorldDatabaseSelect_PatriarchGroup302_wrapper(struct CRFWorldDatabase* _this, char byRace, struct _candidate_info* p)
        {
           return CRFWorldDatabaseSelect_PatriarchGroup302_user(_this, byRace, p, CRFWorldDatabaseSelect_PatriarchGroup302_next);
        };
        int CRFWorldDatabaseSelect_PatriarchRefundCount304_wrapper(struct CRFWorldDatabase* _this, char byRaceCode, unsigned int dwAvatorSerial, unsigned int* dwCnt)
        {
           return CRFWorldDatabaseSelect_PatriarchRefundCount304_user(_this, byRaceCode, dwAvatorSerial, dwCnt, CRFWorldDatabaseSelect_PatriarchRefundCount304_next);
        };
        int CRFWorldDatabaseSelect_PatriarchVoted306_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwSerial, bool* bOverlapVote)
        {
           return CRFWorldDatabaseSelect_PatriarchVoted306_user(_this, byRace, dwSerial, bOverlapVote, CRFWorldDatabaseSelect_PatriarchVoted306_next);
        };
        int CRFWorldDatabaseSelect_PatriarchWinCnt308_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwAvatorSerial, unsigned int* dwWinCnt)
        {
           return CRFWorldDatabaseSelect_PatriarchWinCnt308_user(_this, byRace, dwAvatorSerial, dwWinCnt, CRFWorldDatabaseSelect_PatriarchWinCnt308_next);
        };
        int CRFWorldDatabaseSelect_PcBangFavorItem310_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_pcbang_favor_item* pPcBangFavorItem)
        {
           return CRFWorldDatabaseSelect_PcBangFavorItem310_user(_this, dwSerial, pPcBangFavorItem, CRFWorldDatabaseSelect_PcBangFavorItem310_next);
        };
        int CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, struct _worlddb_time_limit_info* pTimeLimiInfo)
        {
           return CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_user(_this, dwAccountSerial, pTimeLimiInfo, CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_next);
        };
        int CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, unsigned int* pdwFatigue, char* pbyStatus)
        {
           return CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_user(_this, dwAccountSerial, pdwFatigue, pbyStatus, CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_next);
        };
        int CRFWorldDatabaseSelect_Player_Last_LogoutTime316_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccSerial, unsigned int* pdwLastLogoutTime)
        {
           return CRFWorldDatabaseSelect_Player_Last_LogoutTime316_user(_this, dwAccSerial, pdwLastLogoutTime, CRFWorldDatabaseSelect_Player_Last_LogoutTime316_next);
        };
        char CRFWorldDatabaseSelect_PostContent318_wrapper(struct CRFWorldDatabase* _this, unsigned int dwPostSerial, char* wszContent, int nSize)
        {
           return CRFWorldDatabaseSelect_PostContent318_user(_this, dwPostSerial, wszContent, nSize, CRFWorldDatabaseSelect_PostContent318_next);
        };
        char CRFWorldDatabaseSelect_PostRecvSerialFromName320_wrapper(struct CRFWorldDatabase* _this, char* wszRecvName, unsigned int* pdwOutSerial, unsigned int* pdwAccSerial, unsigned int* pdwRace)
        {
           return CRFWorldDatabaseSelect_PostRecvSerialFromName320_user(_this, wszRecvName, pdwOutSerial, pdwAccSerial, pdwRace, CRFWorldDatabaseSelect_PostRecvSerialFromName320_next);
        };
        int CRFWorldDatabaseSelect_PostRecvStorageCheck322_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseSelect_PostRecvStorageCheck322_user(_this, dwSerial, CRFWorldDatabaseSelect_PostRecvStorageCheck322_next);
        };
        char CRFWorldDatabaseSelect_PostRegistryData324_wrapper(struct CRFWorldDatabase* _this, unsigned int dwMax, struct CPostData* pPostData)
        {
           return CRFWorldDatabaseSelect_PostRegistryData324_user(_this, dwMax, pPostData, CRFWorldDatabaseSelect_PostRegistryData324_next);
        };
        int CRFWorldDatabaseSelect_PostStorageEmptyRecord326_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelect_PostStorageEmptyRecord326_user(_this, CRFWorldDatabaseSelect_PostStorageEmptyRecord326_next);
        };
        bool CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwStorageSerial)
        {
           return CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_user(_this, pdwStorageSerial, CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_next);
        };
        char CRFWorldDatabaseSelect_PostStorageList330_wrapper(struct CRFWorldDatabase* _this, unsigned int dwOwner, struct _post_storage_list* pListData)
        {
           return CRFWorldDatabaseSelect_PostStorageList330_user(_this, dwOwner, pListData, CRFWorldDatabaseSelect_PostStorageList330_next);
        };
        bool CRFWorldDatabaseSelect_PostStorageRecordCheck332_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelect_PostStorageRecordCheck332_user(_this, CRFWorldDatabaseSelect_PostStorageRecordCheck332_next);
        };
        int CRFWorldDatabaseSelect_PotionDelay334_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_potion_delay_info* pPotionDelayInfo)
        {
           return CRFWorldDatabaseSelect_PotionDelay334_user(_this, dwSerial, pPotionDelayInfo, CRFWorldDatabaseSelect_PotionDelay334_next);
        };
        int CRFWorldDatabaseSelect_PrimiumPlayTime336_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccSerial, struct _PCBANG_PLAY_TIME* kInfo)
        {
           return CRFWorldDatabaseSelect_PrimiumPlayTime336_user(_this, dwAccSerial, kInfo, CRFWorldDatabaseSelect_PrimiumPlayTime336_next);
        };
        int CRFWorldDatabaseSelect_Punishment338_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* dwESerial, unsigned int* dwValue)
        {
           return CRFWorldDatabaseSelect_Punishment338_user(_this, dwSerial, dwESerial, dwValue, CRFWorldDatabaseSelect_Punishment338_next);
        };
        int CRFWorldDatabaseSelect_PunishmentCount340_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwAvatorSerial, unsigned int* pdwCnt)
        {
           return CRFWorldDatabaseSelect_PunishmentCount340_user(_this, byType, dwAvatorSerial, pdwCnt, CRFWorldDatabaseSelect_PunishmentCount340_next);
        };
        int CRFWorldDatabaseSelect_PvpOrderViewInfo342_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _pvporderview_info* kInfo)
        {
           return CRFWorldDatabaseSelect_PvpOrderViewInfo342_user(_this, dwSerial, kInfo, CRFWorldDatabaseSelect_PvpOrderViewInfo342_next);
        };
        char CRFWorldDatabaseSelect_PvpPointGuildRank344_wrapper(struct CRFWorldDatabase* _this, char* szDate, struct _pvppoint_guild_rank_info* pkInfo)
        {
           return CRFWorldDatabaseSelect_PvpPointGuildRank344_user(_this, szDate, pkInfo, CRFWorldDatabaseSelect_PvpPointGuildRank344_next);
        };
        char CRFWorldDatabaseSelect_PvpPointLimitInfo346_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _pvppointlimit_info* kInfo)
        {
           return CRFWorldDatabaseSelect_PvpPointLimitInfo346_user(_this, dwSerial, kInfo, CRFWorldDatabaseSelect_PvpPointLimitInfo346_next);
        };
        char CRFWorldDatabaseSelect_PvpRankInfo348_wrapper(struct CRFWorldDatabase* _this, char byRace, char* szDate, struct _PVP_RANK_DATA* rankData)
        {
           return CRFWorldDatabaseSelect_PvpRankInfo348_user(_this, byRace, szDate, rankData, CRFWorldDatabaseSelect_PvpRankInfo348_next);
        };
        char CRFWorldDatabaseSelect_PvpRate350_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* szDate, unsigned int* pdwRank, uint16_t* pwRankRate)
        {
           return CRFWorldDatabaseSelect_PvpRate350_user(_this, dwSerial, szDate, pdwRank, pwRankRate, CRFWorldDatabaseSelect_PvpRate350_next);
        };
        char CRFWorldDatabaseSelect_Quest352_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_quest_array* questData)
        {
           return CRFWorldDatabaseSelect_Quest352_user(_this, dwSerial, questData, CRFWorldDatabaseSelect_Quest352_next);
        };
        int CRFWorldDatabaseSelect_RFEvent_ClassRefine354_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, char* byRefinedCnt, unsigned int* dwRefineDate)
        {
           return CRFWorldDatabaseSelect_RFEvent_ClassRefine354_user(_this, dwAvatorSerial, byRefinedCnt, dwRefineDate, CRFWorldDatabaseSelect_RFEvent_ClassRefine354_next);
        };
        char CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwBossSerial, struct _raceboss_acc_winrate* windata)
        {
           return CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_user(_this, byRace, dwBossSerial, windata, CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_next);
        };
        char CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_wrapper(struct CRFWorldDatabase* _this, char byRace, char* szDate, unsigned int* dwTotalCnt, unsigned int* dwWinCnt)
        {
           return CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_user(_this, byRace, szDate, dwTotalCnt, dwWinCnt, CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_next);
        };
        char CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccountSerial, struct _rege_char_data* pRegeCharData)
        {
           return CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_user(_this, dwAccountSerial, pRegeCharData, CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_next);
        };
        char CRFWorldDatabaseSelect_ReturnPost362_wrapper(struct CRFWorldDatabase* _this, unsigned int dwOwner, unsigned int dwMax, struct _return_post_list* pRetData)
        {
           return CRFWorldDatabaseSelect_ReturnPost362_user(_this, dwOwner, dwMax, pRetData, CRFWorldDatabaseSelect_ReturnPost362_next);
        };
        char CRFWorldDatabaseSelect_SFDelayInfo364_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_sf_delay_info* pSFDelay)
        {
           return CRFWorldDatabaseSelect_SFDelayInfo364_user(_this, dwSerial, pSFDelay, CRFWorldDatabaseSelect_SFDelayInfo364_next);
        };
        char CRFWorldDatabaseSelect_Start_NpcQuest_History366_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_start_npc_quest_complete_history* pNpcQHis, unsigned int dwCount)
        {
           return CRFWorldDatabaseSelect_Start_NpcQuest_History366_user(_this, dwSerial, pNpcQHis, dwCount, CRFWorldDatabaseSelect_Start_NpcQuest_History366_next);
        };
        char CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* pdwCount)
        {
           return CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_user(_this, dwSerial, pdwCount, CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_next);
        };
        char CRFWorldDatabaseSelect_StoreLimitItem370_wrapper(struct CRFWorldDatabase* _this, struct _qry_case_all_store_limit_item* pData)
        {
           return CRFWorldDatabaseSelect_StoreLimitItem370_user(_this, pData, CRFWorldDatabaseSelect_StoreLimitItem370_next);
        };
        int CRFWorldDatabaseSelect_Supplement372_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_character_supplement_info* pSupplement)
        {
           return CRFWorldDatabaseSelect_Supplement372_user(_this, dwSerial, pSupplement, CRFWorldDatabaseSelect_Supplement372_next);
        };
        int CRFWorldDatabaseSelect_Supplement_ActPoint374_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_character_supplement_info* pSupplement)
        {
           return CRFWorldDatabaseSelect_Supplement_ActPoint374_user(_this, dwSerial, pSupplement, CRFWorldDatabaseSelect_Supplement_ActPoint374_next);
        };
        int CRFWorldDatabaseSelect_Supplement_Ex376_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_character_supplement_info* pSupplement)
        {
           return CRFWorldDatabaseSelect_Supplement_Ex376_user(_this, dwSerial, pSupplement, CRFWorldDatabaseSelect_Supplement_Ex376_next);
        };
        char CRFWorldDatabaseSelect_TakeItem378_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, struct _worlddb_item_list* itemList)
        {
           return CRFWorldDatabaseSelect_TakeItem378_user(_this, dwAvatorSerial, itemList, CRFWorldDatabaseSelect_TakeItem378_next);
        };
        char CRFWorldDatabaseSelect_TotalGuildRank380_wrapper(struct CRFWorldDatabase* _this, char* szDate, struct _total_guild_rank_info* pkInfo)
        {
           return CRFWorldDatabaseSelect_TotalGuildRank380_user(_this, szDate, pkInfo, CRFWorldDatabaseSelect_TotalGuildRank380_next);
        };
        char CRFWorldDatabaseSelect_TotalRecordNum382_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwTotalNum)
        {
           return CRFWorldDatabaseSelect_TotalRecordNum382_user(_this, pdwTotalNum, CRFWorldDatabaseSelect_TotalRecordNum382_next);
        };
        char CRFWorldDatabaseSelect_Trade384_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwSerial, char byRace, struct _worlddb_trade_info* pTradeData)
        {
           return CRFWorldDatabaseSelect_Trade384_user(_this, byType, dwSerial, byRace, pTradeData, CRFWorldDatabaseSelect_Trade384_next);
        };
        bool CRFWorldDatabaseSelect_TrunkMoney386_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double* pVal)
        {
           return CRFWorldDatabaseSelect_TrunkMoney386_user(_this, dwSerial, pVal, CRFWorldDatabaseSelect_TrunkMoney386_next);
        };
        char CRFWorldDatabaseSelect_Unit388_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharacterSerial, struct _worlddb_unit_info_array* pUnitInfo)
        {
           return CRFWorldDatabaseSelect_Unit388_user(_this, dwCharacterSerial, pUnitInfo, CRFWorldDatabaseSelect_Unit388_next);
        };
        char CRFWorldDatabaseSelect_UnitData390_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double* pUnitData)
        {
           return CRFWorldDatabaseSelect_UnitData390_user(_this, dwSerial, pUnitData, CRFWorldDatabaseSelect_UnitData390_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, struct _unmannedtrader_buy_item_info* kData)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_user(_this, byType, dwRegistSerial, kData, CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_wrapper(struct CRFWorldDatabase* _this, char byType, char byState, unsigned int* pdwSerial, uint16_t wMaxCnt, uint16_t* pwRecordCnt)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_user(_this, byType, byState, pdwSerial, wMaxCnt, pwRecordCnt, CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderItemState396_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, char* byState)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderItemState396_user(_this, byType, dwRegistSerial, byState, CRFWorldDatabaseSelect_UnmannedTraderItemState396_next);
        };
        int CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_wrapper(struct CRFWorldDatabase* _this, struct _unmannedtrader_stade_id_info* pkInfo, unsigned int dwMaxCnt)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_user(_this, pkInfo, dwMaxCnt, CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_next);
        };
        int CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwCnt)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_user(_this, pdwCnt, CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderRegister402_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, unsigned int* pdwRegister)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderRegister402_user(_this, byType, dwRegistSerial, pdwRegister, CRFWorldDatabaseSelect_UnmannedTraderRegister402_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_wrapper(struct CRFWorldDatabase* _this, unsigned int dwMaxCnt, struct _unmannedtrader_reserved_schedule_info* pkInfo)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_user(_this, dwMaxCnt, pkInfo, CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, char byClass1, char byClass2, char byClass3, unsigned int* dwCount)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_user(_this, byType, byRace, byClass1, byClass2, byClass3, dwCount, CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, char byClass1, char byClass2, char byClass3, unsigned int dwMaxRowCount, unsigned int dwExcludeRowCount, char* szSortQuery, struct _unmannedtrader_page_info* pkInfo)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_user(_this, byType, byRace, byClass1, byClass2, byClass3, dwMaxRowCount, dwExcludeRowCount, szSortQuery, pkInfo, CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_next);
        };
        char CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, char byRace, struct _unmannedtrader_seller_info* kData)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_user(_this, byType, dwRegistSerial, byRace, kData, CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_next);
        };
        bool CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_wrapper(struct CRFWorldDatabase* _this, unsigned int* dwSerial)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_user(_this, dwSerial, CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_next);
        };
        int CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_user(_this, CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_next);
        };
        int CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_wrapper(struct CRFWorldDatabase* _this, unsigned int* dwSerial)
        {
           return CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_user(_this, dwSerial, CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_next);
        };
        char CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_wrapper(struct CRFWorldDatabase* _this, unsigned int* pdwUsedNum)
        {
           return CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_user(_this, pdwUsedNum, CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_next);
        };
        bool CRFWorldDatabaseSelect_UserCountInfo420_wrapper(struct CRFWorldDatabase* _this, char* szStartDate, char* szEndDate, struct _worlddb_user_count_info* pUserCountData)
        {
           return CRFWorldDatabaseSelect_UserCountInfo420_user(_this, szStartDate, szEndDate, pUserCountData, CRFWorldDatabaseSelect_UserCountInfo420_next);
        };
        char CRFWorldDatabaseSelect_UserInterface422_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_userinterface_info* pUserinterfaceInfo)
        {
           return CRFWorldDatabaseSelect_UserInterface422_user(_this, dwSerial, pUserinterfaceInfo, CRFWorldDatabaseSelect_UserInterface422_next);
        };
        char CRFWorldDatabaseSelect_WaitItem424_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, struct _worlddb_item_list* itemList)
        {
           return CRFWorldDatabaseSelect_WaitItem424_user(_this, dwAvatorSerial, itemList, CRFWorldDatabaseSelect_WaitItem424_next);
        };
        char CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_wrapper(struct CRFWorldDatabase* _this, char* szDate, char byRace, char byLimitCnt, struct _weeklyguildrank_owner_info* pkInfo)
        {
           return CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_user(_this, szDate, byRace, byLimitCnt, pkInfo, CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_next);
        };
        int CRFWorldDatabaseSelect_WinBattleCount428_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwSerial, unsigned int* dwCount)
        {
           return CRFWorldDatabaseSelect_WinBattleCount428_user(_this, byRace, dwSerial, dwCount, CRFWorldDatabaseSelect_WinBattleCount428_next);
        };
        char CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwOwnor, unsigned int* pSalesTotals)
        {
           return CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_user(_this, byType, dwOwnor, pSalesTotals, CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_next);
        };
        bool CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_user(_this, CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_next);
        };
        bool CRFWorldDatabaseUpdateClearGuildBattleInfo434_wrapper(struct CRFWorldDatabase* _this, unsigned int dwStartID, unsigned int dwEndID)
        {
           return CRFWorldDatabaseUpdateClearGuildBattleInfo434_user(_this, dwStartID, dwEndID, CRFWorldDatabaseUpdateClearGuildBattleInfo434_next);
        };
        bool CRFWorldDatabaseUpdateClearGuildBattleRank436_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdateClearGuildBattleRank436_user(_this, CRFWorldDatabaseUpdateClearGuildBattleRank436_next);
        };
        bool CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_wrapper(struct CRFWorldDatabase* _this, unsigned int uiStartListID, unsigned int uiEndListID)
        {
           return CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_user(_this, uiStartListID, uiEndListID, CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_next);
        };
        bool CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_wrapper(struct CRFWorldDatabase* _this, unsigned int dwID)
        {
           return CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_user(_this, dwID, CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_next);
        };
        bool CRFWorldDatabaseUpdateDrawGuildBattleResult442_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, unsigned int dwScore)
        {
           return CRFWorldDatabaseUpdateDrawGuildBattleResult442_user(_this, dwGuildSerial, dwScore, CRFWorldDatabaseUpdateDrawGuildBattleResult442_next);
        };
        bool CRFWorldDatabaseUpdateGuildBattleInfo444_wrapper(struct CRFWorldDatabase* _this, unsigned int dwID, unsigned int dwP1GuildSerial, unsigned int dwP2GuildSerial, unsigned int dwMapID, char byNumber)
        {
           return CRFWorldDatabaseUpdateGuildBattleInfo444_user(_this, dwID, dwP1GuildSerial, dwP2GuildSerial, dwMapID, byNumber, CRFWorldDatabaseUpdateGuildBattleInfo444_next);
        };
        bool CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_wrapper(struct CRFWorldDatabase* _this, unsigned int dwID, unsigned int dwSLID, char byState, int64_t tStartTime, uint16_t wTurmMin)
        {
           return CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_user(_this, dwID, dwSLID, byState, tStartTime, wTurmMin, CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_next);
        };
        bool CRFWorldDatabaseUpdateGuildMoney448_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double dDalant, long double dGold)
        {
           return CRFWorldDatabaseUpdateGuildMoney448_user(_this, dwSerial, dDalant, dGold, CRFWorldDatabaseUpdateGuildMoney448_next);
        };
        bool CRFWorldDatabaseUpdateLoseGuildBattleResult450_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, unsigned int dwScore)
        {
           return CRFWorldDatabaseUpdateLoseGuildBattleResult450_user(_this, dwGuildSerial, dwScore, CRFWorldDatabaseUpdateLoseGuildBattleResult450_next);
        };
        bool CRFWorldDatabaseUpdateServerResetToken452_wrapper(struct CRFWorldDatabase* _this, unsigned int dwToken, uint16_t wProcType, unsigned int dwESerial)
        {
           return CRFWorldDatabaseUpdateServerResetToken452_user(_this, dwToken, wProcType, dwESerial, CRFWorldDatabaseUpdateServerResetToken452_next);
        };
        bool CRFWorldDatabaseUpdateVotedReset_Cheat454_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseUpdateVotedReset_Cheat454_user(_this, dwSerial, CRFWorldDatabaseUpdateVotedReset_Cheat454_next);
        };
        bool CRFWorldDatabaseUpdateVotedReset_General456_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseUpdateVotedReset_General456_user(_this, dwSerial, CRFWorldDatabaseUpdateVotedReset_General456_next);
        };
        bool CRFWorldDatabaseUpdateVotedReset_Supplement458_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseUpdateVotedReset_Supplement458_user(_this, dwSerial, CRFWorldDatabaseUpdateVotedReset_Supplement458_next);
        };
        bool CRFWorldDatabaseUpdateWinGuildBattleResult460_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, unsigned int dwScore)
        {
           return CRFWorldDatabaseUpdateWinGuildBattleResult460_user(_this, dwGuildSerial, dwScore, CRFWorldDatabaseUpdateWinGuildBattleResult460_next);
        };
        bool CRFWorldDatabaseUpdate_AnimusData462_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char byRace, long double* pAnimusData)
        {
           return CRFWorldDatabaseUpdate_AnimusData462_user(_this, dwSerial, byRace, pAnimusData, CRFWorldDatabaseUpdate_AnimusData462_next);
        };
        bool CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_wrapper(struct CRFWorldDatabase* _this, unsigned int kLogSerial, unsigned int dwRedSerial, unsigned int dwBlueSerial)
        {
           return CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_user(_this, kLogSerial, dwRedSerial, dwBlueSerial, CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_next);
        };
        bool CRFWorldDatabaseUpdate_CharSlot466_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial)
        {
           return CRFWorldDatabaseUpdate_CharSlot466_user(_this, dwAvatorSerial, CRFWorldDatabaseUpdate_CharSlot466_next);
        };
        bool CRFWorldDatabaseUpdate_CharacterData468_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_update_char_query* pUpdateQuery)
        {
           return CRFWorldDatabaseUpdate_CharacterData468_user(_this, dwSerial, pUpdateQuery, CRFWorldDatabaseUpdate_CharacterData468_next);
        };
        bool CRFWorldDatabaseUpdate_CharacterReName470_wrapper(struct CRFWorldDatabase* _this, char* pwszName, unsigned int dwSerial)
        {
           return CRFWorldDatabaseUpdate_CharacterReName470_user(_this, pwszName, dwSerial, CRFWorldDatabaseUpdate_CharacterReName470_next);
        };
        bool CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_user(_this, CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_next);
        };
        bool CRFWorldDatabaseUpdate_CristalBattleCharInfo474_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char byHSKTime, char byPvpGrade, int iPvpPoint, uint16_t wKillPoint, uint16_t wDiePoint)
        {
           return CRFWorldDatabaseUpdate_CristalBattleCharInfo474_user(_this, dwSerial, byHSKTime, byPvpGrade, iPvpPoint, wKillPoint, wDiePoint, CRFWorldDatabaseUpdate_CristalBattleCharInfo474_next);
        };
        bool CRFWorldDatabaseUpdate_Dalant476_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwDalant)
        {
           return CRFWorldDatabaseUpdate_Dalant476_user(_this, dwSerial, dwDalant, CRFWorldDatabaseUpdate_Dalant476_next);
        };
        bool CRFWorldDatabaseUpdate_DisableInstanceStore478_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseUpdate_DisableInstanceStore478_user(_this, dwSerial, CRFWorldDatabaseUpdate_DisableInstanceStore478_next);
        };
        bool CRFWorldDatabaseUpdate_DisappearOwnerRecord480_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_DisappearOwnerRecord480_user(_this, CRFWorldDatabaseUpdate_DisappearOwnerRecord480_next);
        };
        bool CRFWorldDatabaseUpdate_GmGreet482_wrapper(struct CRFWorldDatabase* _this, struct _qry_case_gm_greetingmsg* pSheet)
        {
           return CRFWorldDatabaseUpdate_GmGreet482_user(_this, pSheet, CRFWorldDatabaseUpdate_GmGreet482_next);
        };
        bool CRFWorldDatabaseUpdate_Gold484_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwGold)
        {
           return CRFWorldDatabaseUpdate_Gold484_user(_this, dwSerial, dwGold, CRFWorldDatabaseUpdate_Gold484_next);
        };
        bool CRFWorldDatabaseUpdate_GuildEmblem486_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, long double dCurDalant, unsigned int dwEmblemBack, unsigned int dwEmblemMark)
        {
           return CRFWorldDatabaseUpdate_GuildEmblem486_user(_this, dwGuildSerial, dCurDalant, dwEmblemBack, dwEmblemMark, CRFWorldDatabaseUpdate_GuildEmblem486_next);
        };
        bool CRFWorldDatabaseUpdate_GuildGrade488_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_GuildGrade488_user(_this, CRFWorldDatabaseUpdate_GuildGrade488_next);
        };
        bool CRFWorldDatabaseUpdate_GuildGreet490_wrapper(struct CRFWorldDatabase* _this, struct _qry_case_guild_greetingmsg* pSheet)
        {
           return CRFWorldDatabaseUpdate_GuildGreet490_user(_this, pSheet, CRFWorldDatabaseUpdate_GuildGreet490_next);
        };
        bool CRFWorldDatabaseUpdate_GuildMaster492_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuild_Serial, unsigned int dwGuildMaster_Serial, char byGuildMaster_PrevGrade)
        {
           return CRFWorldDatabaseUpdate_GuildMaster492_user(_this, dwGuild_Serial, dwGuildMaster_Serial, byGuildMaster_PrevGrade, CRFWorldDatabaseUpdate_GuildMaster492_next);
        };
        bool CRFWorldDatabaseUpdate_GuildMemberCount494_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, uint16_t wMemberNum)
        {
           return CRFWorldDatabaseUpdate_GuildMemberCount494_user(_this, dwGuildSerial, wMemberNum, CRFWorldDatabaseUpdate_GuildMemberCount494_next);
        };
        bool CRFWorldDatabaseUpdate_GuildRank496_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_GuildRank496_user(_this, szDate, CRFWorldDatabaseUpdate_GuildRank496_next);
        };
        bool CRFWorldDatabaseUpdate_GuildRank_Step1498_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_GuildRank_Step1498_user(_this, szDate, CRFWorldDatabaseUpdate_GuildRank_Step1498_next);
        };
        bool CRFWorldDatabaseUpdate_GuildRank_Step2500_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_GuildRank_Step2500_user(_this, szDate, CRFWorldDatabaseUpdate_GuildRank_Step2500_next);
        };
        bool CRFWorldDatabaseUpdate_GuildRank_Step3502_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_GuildRank_Step3502_user(_this, szDate, CRFWorldDatabaseUpdate_GuildRank_Step3502_next);
        };
        bool CRFWorldDatabaseUpdate_GuildRoom504_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseUpdate_GuildRoom504_user(_this, dwGuildSerial, CRFWorldDatabaseUpdate_GuildRoom504_next);
        };
        bool CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double dPvpPoint)
        {
           return CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_user(_this, dwSerial, dPvpPoint, CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_next);
        };
        bool CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double dPvpPoint)
        {
           return CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_user(_this, dwSerial, dPvpPoint, CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_next);
        };
        bool CRFWorldDatabaseUpdate_InputGuildMoney510_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, unsigned int dwDalant, unsigned int dwGold)
        {
           return CRFWorldDatabaseUpdate_InputGuildMoney510_user(_this, dwGuildSerial, dwDalant, dwGold, CRFWorldDatabaseUpdate_InputGuildMoney510_next);
        };
        bool CRFWorldDatabaseUpdate_Level512_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char byLv)
        {
           return CRFWorldDatabaseUpdate_Level512_user(_this, dwSerial, byLv, CRFWorldDatabaseUpdate_Level512_next);
        };
        bool CRFWorldDatabaseUpdate_LimitItemNum514_wrapper(struct CRFWorldDatabase* _this, char* pszQuery)
        {
           return CRFWorldDatabaseUpdate_LimitItemNum514_user(_this, pszQuery, CRFWorldDatabaseUpdate_LimitItemNum514_next);
        };
        bool CRFWorldDatabaseUpdate_MacroData516_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _AIOC_A_MACRODATA* pMacro)
        {
           return CRFWorldDatabaseUpdate_MacroData516_user(_this, dwSerial, pMacro, CRFWorldDatabaseUpdate_MacroData516_next);
        };
        bool CRFWorldDatabaseUpdate_NpcData518_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int* pNpcData)
        {
           return CRFWorldDatabaseUpdate_NpcData518_user(_this, dwSerial, pNpcData, CRFWorldDatabaseUpdate_NpcData518_next);
        };
        bool CRFWorldDatabaseUpdate_OutputGuildMoney520_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, unsigned int dwDalant, unsigned int dwGold)
        {
           return CRFWorldDatabaseUpdate_OutputGuildMoney520_user(_this, dwGuildSerial, dwDalant, dwGold, CRFWorldDatabaseUpdate_OutputGuildMoney520_next);
        };
        char CRFWorldDatabaseUpdate_PatriarchComm522_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwDalant, char* pszDepDate)
        {
           return CRFWorldDatabaseUpdate_PatriarchComm522_user(_this, dwSerial, dwDalant, pszDepDate, CRFWorldDatabaseUpdate_PatriarchComm522_next);
        };
        bool CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAccSerial, unsigned int dwFatigue, char wStatus)
        {
           return CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_user(_this, dwAccSerial, dwFatigue, wStatus, CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_next);
        };
        bool CRFWorldDatabaseUpdate_Player_Vote_Info526_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, unsigned int dwAccPlayTime, char IsVote, char VoteEnable, unsigned int dwScanerData)
        {
           return CRFWorldDatabaseUpdate_Player_Vote_Info526_user(_this, dwSerial, dwAccPlayTime, IsVote, VoteEnable, dwScanerData, CRFWorldDatabaseUpdate_Player_Vote_Info526_next);
        };
        bool CRFWorldDatabaseUpdate_Post528_wrapper(struct CRFWorldDatabase* _this, char* szPostQuery)
        {
           return CRFWorldDatabaseUpdate_Post528_user(_this, szPostQuery, CRFWorldDatabaseUpdate_Post528_next);
        };
        bool CRFWorldDatabaseUpdate_PostRegistry530_wrapper(struct CRFWorldDatabase* _this, unsigned int dwIndex, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, int nK, uint64_t dwD, unsigned int dwU, unsigned int dwGold, char bySendRace, char bySenderDgr, uint64_t lnUID)
        {
           return CRFWorldDatabaseUpdate_PostRegistry530_user(_this, dwIndex, dwSenderSerial, wszSendName, wszRecvName, wszTitle, wszContent, nK, dwD, dwU, dwGold, bySendRace, bySenderDgr, lnUID, CRFWorldDatabaseUpdate_PostRegistry530_next);
        };
        bool CRFWorldDatabaseUpdate_PostRegistryDisable532_wrapper(struct CRFWorldDatabase* _this, unsigned int dwIndex)
        {
           return CRFWorldDatabaseUpdate_PostRegistryDisable532_user(_this, dwIndex, CRFWorldDatabaseUpdate_PostRegistryDisable532_next);
        };
        bool CRFWorldDatabaseUpdate_PostStorageSendToRecver534_wrapper(struct CRFWorldDatabase* _this, unsigned int dwOwner, unsigned int dwPostSerial, char byPostState, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, int nK, uint64_t dwD, unsigned int dwU, unsigned int dwGold, char byErr, uint16_t wStorageIndex, char* pbyNumber, bool bGetNumber, uint64_t lnUID)
        {
           return CRFWorldDatabaseUpdate_PostStorageSendToRecver534_user(_this, dwOwner, dwPostSerial, byPostState, wszSendName, wszRecvName, wszTitle, wszContent, nK, dwD, dwU, dwGold, byErr, wStorageIndex, pbyNumber, bGetNumber, lnUID, CRFWorldDatabaseUpdate_PostStorageSendToRecver534_next);
        };
        bool CRFWorldDatabaseUpdate_Punishment536_wrapper(struct CRFWorldDatabase* _this, char* szData)
        {
           return CRFWorldDatabaseUpdate_Punishment536_user(_this, szData, CRFWorldDatabaseUpdate_Punishment536_next);
        };
        bool CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_wrapper(struct CRFWorldDatabase* _this, char* szDate, unsigned int dwSerial, uint16_t wRank)
        {
           return CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_user(_this, szDate, dwSerial, wRank, CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_next);
        };
        bool CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_wrapper(struct CRFWorldDatabase* _this, char* szDate, char byRace, char byLimitCnt, char byLimitGrade)
        {
           return CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_user(_this, szDate, byRace, byLimitCnt, byLimitGrade, CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_next);
        };
        bool CRFWorldDatabaseUpdate_PvpPointInfo542_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, int16_t* zClass, long double dPvpPoint)
        {
           return CRFWorldDatabaseUpdate_PvpPointInfo542_user(_this, dwSerial, zClass, dPvpPoint, CRFWorldDatabaseUpdate_PvpPointInfo542_next);
        };
        bool CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, char byRefineCnt, unsigned int dwRefineDate)
        {
           return CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_user(_this, dwAvatorSerial, byRefineCnt, dwRefineDate, CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_next);
        };
        bool CRFWorldDatabaseUpdate_RaceGreet546_wrapper(struct CRFWorldDatabase* _this, struct _qry_case_race_greetingmsg* pSheet)
        {
           return CRFWorldDatabaseUpdate_RaceGreet546_user(_this, pSheet, CRFWorldDatabaseUpdate_RaceGreet546_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank548_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank548_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank548_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step1550_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step1550_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step1550_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step2552_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step2552_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step2552_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step3554_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step3554_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step3554_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step4556_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step4556_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step4556_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step5558_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step5558_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step5558_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step6560_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step6560_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step6560_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step7562_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step7562_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step7562_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step8564_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step8564_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step8564_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step9566_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step9566_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step9566_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_next);
        };
        bool CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_wrapper(struct CRFWorldDatabase* _this, char* szDate)
        {
           return CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_user(_this, szDate, CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild574_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, struct _worlddb_rankinguild_info* pGuildMemberRankData)
        {
           return CRFWorldDatabaseUpdate_RankInGuild574_user(_this, dwGuildSerial, pGuildMemberRankData, CRFWorldDatabaseUpdate_RankInGuild574_next);
        };
        char CRFWorldDatabaseUpdate_RankInGuild_Step1576_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step1576_user(_this, dwGuildSerial, CRFWorldDatabaseUpdate_RankInGuild_Step1576_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step2578_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step2578_user(_this, dwGuildSerial, CRFWorldDatabaseUpdate_RankInGuild_Step2578_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step3580_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step3580_user(_this, dwGuildSerial, CRFWorldDatabaseUpdate_RankInGuild_Step3580_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step4582_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step4582_user(_this, dwGuildSerial, CRFWorldDatabaseUpdate_RankInGuild_Step4582_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step5584_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, struct _worlddb_rankinguild_info* pGuildMemberRankData)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step5584_user(_this, dwGuildSerial, pGuildMemberRankData, CRFWorldDatabaseUpdate_RankInGuild_Step5584_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step6586_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step6586_user(_this, CRFWorldDatabaseUpdate_RankInGuild_Step6586_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step7588_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step7588_user(_this, CRFWorldDatabaseUpdate_RankInGuild_Step7588_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step8590_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step8590_user(_this, CRFWorldDatabaseUpdate_RankInGuild_Step8590_next);
        };
        bool CRFWorldDatabaseUpdate_RankInGuild_Step9592_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_RankInGuild_Step9592_user(_this, CRFWorldDatabaseUpdate_RankInGuild_Step9592_next);
        };
        bool CRFWorldDatabaseUpdate_SFDelayInfo594_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _worlddb_sf_delay_info* pSFDelay)
        {
           return CRFWorldDatabaseUpdate_SFDelayInfo594_user(_this, dwSerial, pSFDelay, CRFWorldDatabaseUpdate_SFDelayInfo594_next);
        };
        bool CRFWorldDatabaseUpdate_SetActive596_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* pwszActiveName, char bySlot)
        {
           return CRFWorldDatabaseUpdate_SetActive596_user(_this, dwSerial, pwszActiveName, bySlot, CRFWorldDatabaseUpdate_SetActive596_next);
        };
        bool CRFWorldDatabaseUpdate_SetGuildMoney598_wrapper(struct CRFWorldDatabase* _this, unsigned int dwGuildSerial, long double dDalant, long double dGold)
        {
           return CRFWorldDatabaseUpdate_SetGuildMoney598_user(_this, dwGuildSerial, dDalant, dGold, CRFWorldDatabaseUpdate_SetGuildMoney598_next);
        };
        bool CRFWorldDatabaseUpdate_Set_Limit_Run600_wrapper(struct CRFWorldDatabase* _this, char* pData, int iSize)
        {
           return CRFWorldDatabaseUpdate_Set_Limit_Run600_user(_this, pData, iSize, CRFWorldDatabaseUpdate_Set_Limit_Run600_next);
        };
        bool CRFWorldDatabaseUpdate_Start_NpcQuest_History602_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* szQuestCode, char byLevel, char* szTime, int64_t nEndTime)
        {
           return CRFWorldDatabaseUpdate_Start_NpcQuest_History602_user(_this, dwSerial, szQuestCode, byLevel, szTime, nEndTime, CRFWorldDatabaseUpdate_Start_NpcQuest_History602_next);
        };
        bool CRFWorldDatabaseUpdate_UnitData604_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, long double* pUnitData)
        {
           return CRFWorldDatabaseUpdate_UnitData604_user(_this, dwSerial, pUnitData, CRFWorldDatabaseUpdate_UnitData604_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_user(_this, byType, dwRegistSerial, CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_user(_this, CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderItemState610_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwItemSerial, char byState, struct _SYSTEMTIME* kCurTime)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderItemState610_user(_this, byType, dwItemSerial, byState, kCurTime, CRFWorldDatabaseUpdate_UnmannedTraderItemState610_next);
        };
        char CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, char byState, unsigned int dwPrice, unsigned int dwTax, struct _SYSTEMTIME* kCurTime)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_user(_this, byType, dwRegistSerial, byState, dwPrice, dwTax, kCurTime, CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, char byState, unsigned int dwBuyer, unsigned int dwTax, struct _SYSTEMTIME* kCurTime)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_user(_this, byType, dwRegistSerial, byState, dwBuyer, dwTax, kCurTime, CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_wrapper(struct CRFWorldDatabase* _this, unsigned int dwRegSerial, struct _unmannedtrader_registsingleitem* kInfo, struct _SYSTEMTIME* kCurTime)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_user(_this, dwRegSerial, kInfo, kCurTime, CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_wrapper(struct CRFWorldDatabase* _this, char byType, unsigned int dwRegistSerial, unsigned int dwOwner, unsigned int dwNewPrice)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_user(_this, byType, dwRegistSerial, dwOwner, dwNewPrice, CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_wrapper(struct CRFWorldDatabase* _this, unsigned int dwRegSerial, struct _unmannedtrader_registsingleitem* kInfo)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_user(_this, dwRegSerial, kInfo, CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_next);
        };
        bool CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _SYSTEMTIME* pkCurTime)
        {
           return CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_user(_this, dwSerial, pkCurTime, CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_next);
        };
        bool CRFWorldDatabaseUpdate_UserGuildData624_wrapper(struct CRFWorldDatabase* _this, unsigned int dwAvatorSerial, unsigned int dwGuildSerial, char byGrade)
        {
           return CRFWorldDatabaseUpdate_UserGuildData624_user(_this, dwAvatorSerial, dwGuildSerial, byGrade, CRFWorldDatabaseUpdate_UserGuildData624_next);
        };
        int CRFWorldDatabaseUpdatet_Account_Vote_Available626_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, char* byVoteEnable)
        {
           return CRFWorldDatabaseUpdatet_Account_Vote_Available626_user(_this, dwSerial, byVoteEnable, CRFWorldDatabaseUpdatet_Account_Vote_Available626_next);
        };
        bool CRFWorldDatabasecreate_amine_personal631_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabasecreate_amine_personal631_user(_this, CRFWorldDatabasecreate_amine_personal631_next);
        };
        bool CRFWorldDatabasecreate_automine_table633_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabasecreate_automine_table633_user(_this, CRFWorldDatabasecreate_automine_table633_next);
        };
        bool CRFWorldDatabasecreate_sumtotal_dungeon635_wrapper(struct CRFWorldDatabase* _this, int nRecodeNum, char** ppKey)
        {
           return CRFWorldDatabasecreate_sumtotal_dungeon635_user(_this, nRecodeNum, ppKey, CRFWorldDatabasecreate_sumtotal_dungeon635_next);
        };
        bool CRFWorldDatabasecreate_table_atrade_taxrate637_wrapper(struct CRFWorldDatabase* _this)
        {
           return CRFWorldDatabasecreate_table_atrade_taxrate637_user(_this, CRFWorldDatabasecreate_table_atrade_taxrate637_next);
        };
        int CRFWorldDatabaseexist_aminpersonal_inven639_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseexist_aminpersonal_inven639_user(_this, dwSerial, CRFWorldDatabaseexist_aminpersonal_inven639_next);
        };
        int CRFWorldDatabaseexist_automine641_wrapper(struct CRFWorldDatabase* _this, char byCollisionType, char byRace)
        {
           return CRFWorldDatabaseexist_automine641_user(_this, byCollisionType, byRace, CRFWorldDatabaseexist_automine641_next);
        };
        bool CRFWorldDatabaseinsert_amine_newowner643_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial)
        {
           return CRFWorldDatabaseinsert_amine_newowner643_user(_this, byType, byRace, dwSerial, CRFWorldDatabaseinsert_amine_newowner643_next);
        };
        bool CRFWorldDatabaseinsert_amine_personal645_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseinsert_amine_personal645_user(_this, dwSerial, CRFWorldDatabaseinsert_amine_personal645_next);
        };
        bool CRFWorldDatabaseinsert_atrade_taxrate647_wrapper(struct CRFWorldDatabase* _this, char byRace, unsigned int dwSerial, char* wszName, unsigned int dwMatterDst, char* wszMatterDst, char byCurrTax, unsigned int dwNext)
        {
           return CRFWorldDatabaseinsert_atrade_taxrate647_user(_this, byRace, dwSerial, wszName, dwMatterDst, wszMatterDst, byCurrTax, dwNext, CRFWorldDatabaseinsert_atrade_taxrate647_next);
        };
        int CRFWorldDatabaseselect_amine_personal649_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial)
        {
           return CRFWorldDatabaseselect_amine_personal649_user(_this, dwSerial, CRFWorldDatabaseselect_amine_personal649_next);
        };
        int CRFWorldDatabaseselect_amine_personal651_wrapper(struct CRFWorldDatabase* _this, unsigned int dwSerial, struct _personal_amine_inven* pInven)
        {
           return CRFWorldDatabaseselect_amine_personal651_user(_this, dwSerial, pInven, CRFWorldDatabaseselect_amine_personal651_next);
        };
        int CRFWorldDatabaseselect_atrade_taxrate653_wrapper(struct CRFWorldDatabase* _this, char byRace, char* pwszName, char* byCurrTax, char* byNextTax)
        {
           return CRFWorldDatabaseselect_atrade_taxrate653_user(_this, byRace, pwszName, byCurrTax, byNextTax, CRFWorldDatabaseselect_atrade_taxrate653_next);
        };
        int CRFWorldDatabaseselect_automine655_wrapper(struct CRFWorldDatabase* _this, struct _DB_LOAD_AUTOMINE_MACHINE* pdata)
        {
           return CRFWorldDatabaseselect_automine655_user(_this, pdata, CRFWorldDatabaseselect_automine655_next);
        };
        bool CRFWorldDatabaseupdate_amine_battery657_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial, unsigned int dwBattery)
        {
           return CRFWorldDatabaseupdate_amine_battery657_user(_this, byType, byRace, dwSerial, dwBattery, CRFWorldDatabaseupdate_amine_battery657_next);
        };
        bool CRFWorldDatabaseupdate_amine_dck659_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial)
        {
           return CRFWorldDatabaseupdate_amine_dck659_user(_this, byType, byRace, dwSerial, CRFWorldDatabaseupdate_amine_dck659_next);
        };
        bool CRFWorldDatabaseupdate_amine_mineore661_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial, char bySlot, unsigned int dwK, char byNum, unsigned int dwGage)
        {
           return CRFWorldDatabaseupdate_amine_mineore661_user(_this, byType, byRace, dwSerial, bySlot, dwK, byNum, dwGage, CRFWorldDatabaseupdate_amine_mineore661_next);
        };
        bool CRFWorldDatabaseupdate_amine_moveore663_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial, char bySSlot, unsigned int dwSK, char bySNum, char byDSlot, unsigned int dwDK, char byDNum)
        {
           return CRFWorldDatabaseupdate_amine_moveore663_user(_this, byType, byRace, dwSerial, bySSlot, dwSK, bySNum, byDSlot, dwDK, byDNum, CRFWorldDatabaseupdate_amine_moveore663_next);
        };
        bool CRFWorldDatabaseupdate_amine_personal665_wrapper(struct CRFWorldDatabase* _this, char* pQry)
        {
           return CRFWorldDatabaseupdate_amine_personal665_user(_this, pQry, CRFWorldDatabaseupdate_amine_personal665_next);
        };
        bool CRFWorldDatabaseupdate_amine_selore667_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial, char byOreIdx)
        {
           return CRFWorldDatabaseupdate_amine_selore667_user(_this, byType, byRace, dwSerial, byOreIdx, CRFWorldDatabaseupdate_amine_selore667_next);
        };
        bool CRFWorldDatabaseupdate_amine_workstate669_wrapper(struct CRFWorldDatabase* _this, char byType, char byRace, unsigned int dwSerial, bool bWorking)
        {
           return CRFWorldDatabaseupdate_amine_workstate669_user(_this, byType, byRace, dwSerial, bWorking, CRFWorldDatabaseupdate_amine_workstate669_next);
        };
        bool CRFWorldDatabaseupdate_cristalbattle_date671_wrapper(struct CRFWorldDatabase* _this, unsigned int dwCharSerial, char bHSKTime)
        {
           return CRFWorldDatabaseupdate_cristalbattle_date671_user(_this, dwCharSerial, bHSKTime, CRFWorldDatabaseupdate_cristalbattle_date671_next);
        };
        
        void CRFWorldDatabasedtor_CRFWorldDatabase673_wrapper(struct CRFWorldDatabase* _this)
        {
           CRFWorldDatabasedtor_CRFWorldDatabase673_user(_this, CRFWorldDatabasedtor_CRFWorldDatabase673_next);
        };
        
        ::std::array<hook_record, 335> CRFWorldDatabase_functions = 
        {
            _hook_record {
                (LPVOID)0x1404987e0L,
                (LPVOID *)&CRFWorldDatabaseAdd_PvpPoint2_user,
                (LPVOID *)&CRFWorldDatabaseAdd_PvpPoint2_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseAdd_PvpPoint2_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, unsigned int))&CRFWorldDatabase::Add_PvpPoint)
            },
            _hook_record {
                (LPVOID)0x140489680L,
                (LPVOID *)&CRFWorldDatabasector_CRFWorldDatabase4_user,
                (LPVOID *)&CRFWorldDatabasector_CRFWorldDatabase4_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabasector_CRFWorldDatabase4_wrapper),
                (LPVOID)cast_pointer_function((void(CRFWorldDatabase::*)())&CRFWorldDatabase::ctor_CRFWorldDatabase)
            },
            _hook_record {
                (LPVOID)0x14049d990L,
                (LPVOID *)&CRFWorldDatabaseCheck_GuildMemberCount6_user,
                (LPVOID *)&CRFWorldDatabaseCheck_GuildMemberCount6_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseCheck_GuildMemberCount6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Check_GuildMemberCount)
            },
            _hook_record {
                (LPVOID)0x1404a0be0L,
                (LPVOID *)&CRFWorldDatabaseCreateCharacterSelectLogTable8_user,
                (LPVOID *)&CRFWorldDatabaseCreateCharacterSelectLogTable8_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseCreateCharacterSelectLogTable8_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::CreateCharacterSelectLogTable)
            },
            _hook_record {
                (LPVOID)0x1404a3810L,
                (LPVOID *)&CRFWorldDatabaseCreateGuildBattleRankTable10_user,
                (LPVOID *)&CRFWorldDatabaseCreateGuildBattleRankTable10_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseCreateGuildBattleRankTable10_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::CreateGuildBattleRankTable)
            },
            _hook_record {
                (LPVOID)0x1404a6d20L,
                (LPVOID *)&CRFWorldDatabaseCreate_PvpPointGuildRankTable12_user,
                (LPVOID *)&CRFWorldDatabaseCreate_PvpPointGuildRankTable12_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseCreate_PvpPointGuildRankTable12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Create_PvpPointGuildRankTable)
            },
            _hook_record {
                (LPVOID)0x1404a2410L,
                (LPVOID *)&CRFWorldDatabaseDeleteGuildBattleInfo14_user,
                (LPVOID *)&CRFWorldDatabaseDeleteGuildBattleInfo14_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDeleteGuildBattleInfo14_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::DeleteGuildBattleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a0fd0L,
                (LPVOID *)&CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_user,
                (LPVOID *)&CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDeleteGuildBattleScheduleInfo16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::DeleteGuildBattleScheduleInfo)
            },
            _hook_record {
                (LPVOID)0x140491330L,
                (LPVOID *)&CRFWorldDatabaseDelete_CharacterData18_user,
                (LPVOID *)&CRFWorldDatabaseDelete_CharacterData18_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDelete_CharacterData18_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Delete_CharacterData)
            },
            _hook_record {
                (LPVOID)0x14049c2d0L,
                (LPVOID *)&CRFWorldDatabaseDelete_Guild20_user,
                (LPVOID *)&CRFWorldDatabaseDelete_Guild20_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDelete_Guild20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Delete_Guild)
            },
            _hook_record {
                (LPVOID)0x1404943f0L,
                (LPVOID *)&CRFWorldDatabaseDelete_ItemCharge22_user,
                (LPVOID *)&CRFWorldDatabaseDelete_ItemCharge22_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDelete_ItemCharge22_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Delete_ItemCharge)
            },
            _hook_record {
                (LPVOID)0x1404c0120L,
                (LPVOID *)&CRFWorldDatabaseDelete_PatriarchComm24_user,
                (LPVOID *)&CRFWorldDatabaseDelete_PatriarchComm24_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDelete_PatriarchComm24_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char*))&CRFWorldDatabase::Delete_PatriarchComm)
            },
            _hook_record {
                (LPVOID)0x1404a4330L,
                (LPVOID *)&CRFWorldDatabaseDelete_TrunkItemCharge26_user,
                (LPVOID *)&CRFWorldDatabaseDelete_TrunkItemCharge26_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDelete_TrunkItemCharge26_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Delete_TrunkItemCharge)
            },
            _hook_record {
                (LPVOID)0x1404a48a0L,
                (LPVOID *)&CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_user,
                (LPVOID *)&CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseDelete_TrunkItemCharge_Extend28_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Delete_TrunkItemCharge_Extend)
            },
            _hook_record {
                (LPVOID)0x1404a0e90L,
                (LPVOID *)&CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_user,
                (LPVOID *)&CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsertChangeClassLogAfterInitClass30_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char, char*, char*, int, char, uint16_t, char, char, char, char, char))&CRFWorldDatabase::InsertChangeClassLogAfterInitClass)
            },
            _hook_record {
                (LPVOID)0x1404a0d30L,
                (LPVOID *)&CRFWorldDatabaseInsertCharacterSelectLog32_user,
                (LPVOID *)&CRFWorldDatabaseInsertCharacterSelectLog32_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsertCharacterSelectLog32_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, unsigned int, char*, uint16_t, char, char, char, char, char))&CRFWorldDatabase::InsertCharacterSelectLog)
            },
            _hook_record {
                (LPVOID)0x1404a24b0L,
                (LPVOID *)&CRFWorldDatabaseInsertGuildBattleDefaultRecord34_user,
                (LPVOID *)&CRFWorldDatabaseInsertGuildBattleDefaultRecord34_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsertGuildBattleDefaultRecord34_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::InsertGuildBattleDefaultRecord)
            },
            _hook_record {
                (LPVOID)0x1404a3760L,
                (LPVOID *)&CRFWorldDatabaseInsertGuildBattleRankRecord36_user,
                (LPVOID *)&CRFWorldDatabaseInsertGuildBattleRankRecord36_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsertGuildBattleRankRecord36_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::InsertGuildBattleRankRecord)
            },
            _hook_record {
                (LPVOID)0x1404a1070L,
                (LPVOID *)&CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_user,
                (LPVOID *)&CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsertGuildBattleScheduleDefaultRecord38_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char, char))&CRFWorldDatabase::InsertGuildBattleScheduleDefaultRecord)
            },
            _hook_record {
                (LPVOID)0x14048e0a0L,
                (LPVOID *)&CRFWorldDatabaseInsert_AccountTrunk40_user,
                (LPVOID *)&CRFWorldDatabaseInsert_AccountTrunk40_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_AccountTrunk40_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_AccountTrunk)
            },
            _hook_record {
                (LPVOID)0x14048e150L,
                (LPVOID *)&CRFWorldDatabaseInsert_AccountTrunkExtend42_user,
                (LPVOID *)&CRFWorldDatabaseInsert_AccountTrunkExtend42_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_AccountTrunkExtend42_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_AccountTrunkExtend)
            },
            _hook_record {
                (LPVOID)0x1404a0130L,
                (LPVOID *)&CRFWorldDatabaseInsert_AnimusData44_user,
                (LPVOID *)&CRFWorldDatabaseInsert_AnimusData44_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_AnimusData44_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double*))&CRFWorldDatabase::Insert_AnimusData)
            },
            _hook_record {
                (LPVOID)0x1404a0370L,
                (LPVOID *)&CRFWorldDatabaseInsert_AnimusLog46_user,
                (LPVOID *)&CRFWorldDatabaseInsert_AnimusLog46_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_AnimusLog46_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char, long double, long double))&CRFWorldDatabase::Insert_AnimusLog)
            },
            _hook_record {
                (LPVOID)0x1404bb810L,
                (LPVOID *)&CRFWorldDatabaseInsert_BossCryRecord48_user,
                (LPVOID *)&CRFWorldDatabaseInsert_BossCryRecord48_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_BossCryRecord48_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_BossCryRecord)
            },
            _hook_record {
                (LPVOID)0x14049e100L,
                (LPVOID *)&CRFWorldDatabaseInsert_Buddy50_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Buddy50_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Buddy50_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_Buddy)
            },
            _hook_record {
                (LPVOID)0x1404c6bf0L,
                (LPVOID *)&CRFWorldDatabaseInsert_CashLimSale52_user,
                (LPVOID *)&CRFWorldDatabaseInsert_CashLimSale52_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_CashLimSale52_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Insert_CashLimSale)
            },
            _hook_record {
                (LPVOID)0x1404907c0L,
                (LPVOID *)&CRFWorldDatabaseInsert_CharacterData54_user,
                (LPVOID *)&CRFWorldDatabaseInsert_CharacterData54_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_CharacterData54_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*, unsigned int, char*, char, char, unsigned int, int, unsigned int*))&CRFWorldDatabase::Insert_CharacterData)
            },
            _hook_record {
                (LPVOID)0x1404a6eb0L,
                (LPVOID *)&CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_user,
                (LPVOID *)&CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_DefaultWeeklyGuildPvpPointSumRecord56_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Insert_DefaultWeeklyGuildPvpPointSumRecord)
            },
            _hook_record {
                (LPVOID)0x140493810L,
                (LPVOID *)&CRFWorldDatabaseInsert_Economy_History58_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Economy_History58_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Economy_History58_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info*))&CRFWorldDatabase::Insert_Economy_History)
            },
            _hook_record {
                (LPVOID)0x1404c9840L,
                (LPVOID *)&CRFWorldDatabaseInsert_GoldenBoxItem60_user,
                (LPVOID *)&CRFWorldDatabaseInsert_GoldenBoxItem60_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_GoldenBoxItem60_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Insert_GoldenBoxItem)
            },
            _hook_record {
                (LPVOID)0x14049bf70L,
                (LPVOID *)&CRFWorldDatabaseInsert_GreetingRecord62_user,
                (LPVOID *)&CRFWorldDatabaseInsert_GreetingRecord62_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_GreetingRecord62_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(int, char*, char*))&CRFWorldDatabase::Insert_GreetingRecord)
            },
            _hook_record {
                (LPVOID)0x1404b07c0L,
                (LPVOID *)&CRFWorldDatabaseInsert_GuidRoom64_user,
                (LPVOID *)&CRFWorldDatabaseInsert_GuidRoom64_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_GuidRoom64_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char, char))&CRFWorldDatabase::Insert_GuidRoom)
            },
            _hook_record {
                (LPVOID)0x1404989a0L,
                (LPVOID *)&CRFWorldDatabaseInsert_Guild66_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Guild66_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Guild66_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char))&CRFWorldDatabase::Insert_Guild)
            },
            _hook_record {
                (LPVOID)0x1404b0a20L,
                (LPVOID *)&CRFWorldDatabaseInsert_GuildBatlleResultLog68_user,
                (LPVOID *)&CRFWorldDatabaseInsert_GuildBatlleResultLog68_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_GuildBatlleResultLog68_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*, unsigned int, char*, unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char, unsigned int, char*, unsigned int, char*, char, unsigned int, char*))&CRFWorldDatabase::Insert_GuildBatlleResultLog)
            },
            _hook_record {
                (LPVOID)0x1404b0c10L,
                (LPVOID *)&CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_user,
                (LPVOID *)&CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_GuildBatlleResultLogBattelInfo70_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*, unsigned int, char*, unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char, unsigned int, char*, unsigned int, char*, char, unsigned int, char*))&CRFWorldDatabase::Insert_GuildBatlleResultLogBattelInfo)
            },
            _hook_record {
                (LPVOID)0x14049aef0L,
                (LPVOID *)&CRFWorldDatabaseInsert_GuildMoneyHistory72_user,
                (LPVOID *)&CRFWorldDatabaseInsert_GuildMoneyHistory72_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_GuildMoneyHistory72_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double, long double, long double, long double, char*, unsigned int, char*))&CRFWorldDatabase::Insert_GuildMoneyHistory)
            },
            _hook_record {
                (LPVOID)0x1404988c0L,
                (LPVOID *)&CRFWorldDatabaseInsert_ItemChargeInGame74_user,
                (LPVOID *)&CRFWorldDatabaseInsert_ItemChargeInGame74_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_ItemChargeInGame74_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, uint64_t, unsigned int, char))&CRFWorldDatabase::Insert_ItemChargeInGame)
            },
            _hook_record {
                (LPVOID)0x1404a4950L,
                (LPVOID *)&CRFWorldDatabaseInsert_ItemCombineEx76_user,
                (LPVOID *)&CRFWorldDatabaseInsert_ItemCombineEx76_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_ItemCombineEx76_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_ItemCombineEx)
            },
            _hook_record {
                (LPVOID)0x140493d90L,
                (LPVOID *)&CRFWorldDatabaseInsert_Level_Log78_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Level_Log78_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Level_Log78_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char, unsigned int))&CRFWorldDatabase::Insert_Level_Log)
            },
            _hook_record {
                (LPVOID)0x1404baf90L,
                (LPVOID *)&CRFWorldDatabaseInsert_LimitItemRecord80_user,
                (LPVOID *)&CRFWorldDatabaseInsert_LimitItemRecord80_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_LimitItemRecord80_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Insert_LimitItemRecord)
            },
            _hook_record {
                (LPVOID)0x1404a5140L,
                (LPVOID *)&CRFWorldDatabaseInsert_MacroData82_user,
                (LPVOID *)&CRFWorldDatabaseInsert_MacroData82_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_MacroData82_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_MacroData)
            },
            _hook_record {
                (LPVOID)0x14049eea0L,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcData84_user,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcData84_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_NpcData84_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_NpcData)
            },
            _hook_record {
                (LPVOID)0x14049ef50L,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcData86_user,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcData86_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_NpcData86_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Insert_NpcData)
            },
            _hook_record {
                (LPVOID)0x14049f4c0L,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcLog88_user,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcLog88_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_NpcLog88_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char, unsigned int, unsigned int))&CRFWorldDatabase::Insert_NpcLog)
            },
            _hook_record {
                (LPVOID)0x1404c3270L,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcQuest_History90_user,
                (LPVOID *)&CRFWorldDatabaseInsert_NpcQuest_History90_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_NpcQuest_History90_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_NpcQuest_History)
            },
            _hook_record {
                (LPVOID)0x1404c5d10L,
                (LPVOID *)&CRFWorldDatabaseInsert_OreCutting92_user,
                (LPVOID *)&CRFWorldDatabaseInsert_OreCutting92_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_OreCutting92_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_OreCutting)
            },
            _hook_record {
                (LPVOID)0x1404c9900L,
                (LPVOID *)&CRFWorldDatabaseInsert_OreReset_Log94_user,
                (LPVOID *)&CRFWorldDatabaseInsert_OreReset_Log94_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_OreReset_Log94_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, int, unsigned int, unsigned int))&CRFWorldDatabase::Insert_OreReset_Log)
            },
            _hook_record {
                (LPVOID)0x1404b1bf0L,
                (LPVOID *)&CRFWorldDatabaseInsert_PSDefaultRecord96_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PSDefaultRecord96_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PSDefaultRecord96_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PSDefaultRecord)
            },
            _hook_record {
                (LPVOID)0x1404bff10L,
                (LPVOID *)&CRFWorldDatabaseInsert_PatriarchComm98_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PatriarchComm98_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PatriarchComm98_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int, char*))&CRFWorldDatabase::Insert_PatriarchComm)
            },
            _hook_record {
                (LPVOID)0x1404be8b0L,
                (LPVOID *)&CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PatrirchItemChargeRefund100_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Insert_PatrirchItemChargeRefund)
            },
            _hook_record {
                (LPVOID)0x1404c66c0L,
                (LPVOID *)&CRFWorldDatabaseInsert_PcBangFavorItem102_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PcBangFavorItem102_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PcBangFavorItem102_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PcBangFavorItem)
            },
            _hook_record {
                (LPVOID)0x1404c7a00L,
                (LPVOID *)&CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PlayerTimeLimitInfo104_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PlayerTimeLimitInfo)
            },
            _hook_record {
                (LPVOID)0x1404b2b10L,
                (LPVOID *)&CRFWorldDatabaseInsert_PostStorageRecord106_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PostStorageRecord106_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PostStorageRecord106_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Insert_PostStorageRecord)
            },
            _hook_record {
                (LPVOID)0x1404c5730L,
                (LPVOID *)&CRFWorldDatabaseInsert_PotionDelay108_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PotionDelay108_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PotionDelay108_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PotionDelay)
            },
            _hook_record {
                (LPVOID)0x1404c50b0L,
                (LPVOID *)&CRFWorldDatabaseInsert_PrimiumPlayTime110_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PrimiumPlayTime110_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PrimiumPlayTime110_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PrimiumPlayTime)
            },
            _hook_record {
                (LPVOID)0x1404c2260L,
                (LPVOID *)&CRFWorldDatabaseInsert_PvpOrderViewInfo112_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PvpOrderViewInfo112_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PvpOrderViewInfo112_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PvpOrderViewInfo)
            },
            _hook_record {
                (LPVOID)0x1404a6df0L,
                (LPVOID *)&CRFWorldDatabaseInsert_PvpPointGuildRankData114_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PvpPointGuildRankData114_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PvpPointGuildRankData114_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Insert_PvpPointGuildRankData)
            },
            _hook_record {
                (LPVOID)0x1404b01a0L,
                (LPVOID *)&CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_user,
                (LPVOID *)&CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_PvpPointLimitInfoRecord116_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_PvpPointLimitInfoRecord)
            },
            _hook_record {
                (LPVOID)0x1404950d0L,
                (LPVOID *)&CRFWorldDatabaseInsert_Quest118_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Quest118_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Quest118_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_Quest)
            },
            _hook_record {
                (LPVOID)0x1404b4ca0L,
                (LPVOID *)&CRFWorldDatabaseInsert_RFEvent_ClassRefine120_user,
                (LPVOID *)&CRFWorldDatabaseInsert_RFEvent_ClassRefine120_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_RFEvent_ClassRefine120_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_RFEvent_ClassRefine)
            },
            _hook_record {
                (LPVOID)0x1404c1670L,
                (LPVOID *)&CRFWorldDatabaseInsert_RaceBattleLog122_user,
                (LPVOID *)&CRFWorldDatabaseInsert_RaceBattleLog122_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_RaceBattleLog122_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct _race_battle_log_info*))&CRFWorldDatabase::Insert_RaceBattleLog)
            },
            _hook_record {
                (LPVOID)0x1404c5dd0L,
                (LPVOID *)&CRFWorldDatabaseInsert_RenamePotionLog124_user,
                (LPVOID *)&CRFWorldDatabaseInsert_RenamePotionLog124_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_RenamePotionLog124_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char*))&CRFWorldDatabase::Insert_RenamePotionLog)
            },
            _hook_record {
                (LPVOID)0x1404c2310L,
                (LPVOID *)&CRFWorldDatabaseInsert_SFDelayInfo126_user,
                (LPVOID *)&CRFWorldDatabaseInsert_SFDelayInfo126_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_SFDelayInfo126_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_sf_delay_info*))&CRFWorldDatabase::Insert_SFDelayInfo)
            },
            _hook_record {
                (LPVOID)0x1404c8a10L,
                (LPVOID *)&CRFWorldDatabaseInsert_Set_Limit_Run128_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Set_Limit_Run128_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Set_Limit_Run128_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, int))&CRFWorldDatabase::Insert_Set_Limit_Run)
            },
            _hook_record {
                (LPVOID)0x1404b0250L,
                (LPVOID *)&CRFWorldDatabaseInsert_SettlementOwnerLog130_user,
                (LPVOID *)&CRFWorldDatabaseInsert_SettlementOwnerLog130_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_SettlementOwnerLog130_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int, char*, uint16_t, char, long double, long double, unsigned int))&CRFWorldDatabase::Insert_SettlementOwnerLog)
            },
            _hook_record {
                (LPVOID)0x1404c3760L,
                (LPVOID *)&CRFWorldDatabaseInsert_Start_NpcQuest_History132_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Start_NpcQuest_History132_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Start_NpcQuest_History132_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char, char*, int64_t))&CRFWorldDatabase::Insert_Start_NpcQuest_History)
            },
            _hook_record {
                (LPVOID)0x1404c4ba0L,
                (LPVOID *)&CRFWorldDatabaseInsert_Supplement134_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Supplement134_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Supplement134_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_Supplement)
            },
            _hook_record {
                (LPVOID)0x1404901b0L,
                (LPVOID *)&CRFWorldDatabaseInsert_Unit136_user,
                (LPVOID *)&CRFWorldDatabaseInsert_Unit136_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_Unit136_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_Unit)
            },
            _hook_record {
                (LPVOID)0x1404a0890L,
                (LPVOID *)&CRFWorldDatabaseInsert_UnitData138_user,
                (LPVOID *)&CRFWorldDatabaseInsert_UnitData138_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_UnitData138_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double*))&CRFWorldDatabase::Insert_UnitData)
            },
            _hook_record {
                (LPVOID)0x1404a0a30L,
                (LPVOID *)&CRFWorldDatabaseInsert_UnitLog140_user,
                (LPVOID *)&CRFWorldDatabaseInsert_UnitLog140_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_UnitLog140_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char, long double, long double))&CRFWorldDatabase::Insert_UnitLog)
            },
            _hook_record {
                (LPVOID)0x1404ab4a0L,
                (LPVOID *)&CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_user,
                (LPVOID *)&CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_UnmannedTraderItemStateRecord142_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, wchar_t**))&CRFWorldDatabase::Insert_UnmannedTraderItemStateRecord)
            },
            _hook_record {
                (LPVOID)0x1404ab9e0L,
                (LPVOID *)&CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_user,
                (LPVOID *)&CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_UnmannedTraderSingleDefaultRecord144_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_UnmannedTraderSingleDefaultRecord)
            },
            _hook_record {
                (LPVOID)0x1404982e0L,
                (LPVOID *)&CRFWorldDatabaseInsert_UserInterface146_user,
                (LPVOID *)&CRFWorldDatabaseInsert_UserInterface146_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_UserInterface146_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_UserInterface)
            },
            _hook_record {
                (LPVOID)0x140493e60L,
                (LPVOID *)&CRFWorldDatabaseInsert_UserNum_Log148_user,
                (LPVOID *)&CRFWorldDatabaseInsert_UserNum_Log148_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_UserNum_Log148_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(int, int))&CRFWorldDatabase::Insert_UserNum_Log)
            },
            _hook_record {
                (LPVOID)0x1404a6f60L,
                (LPVOID *)&CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_user,
                (LPVOID *)&CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseInsert_WeeklyGuildPvpPointSum150_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Insert_WeeklyGuildPvpPointSum)
            },
            _hook_record {
                (LPVOID)0x14049b110L,
                (LPVOID *)&CRFWorldDatabaseLoadGreetingMsg152_user,
                (LPVOID *)&CRFWorldDatabaseLoadGreetingMsg152_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseLoadGreetingMsg152_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*, char*, char*, char*, char*, char*, char*))&CRFWorldDatabase::LoadGreetingMsg)
            },
            _hook_record {
                (LPVOID)0x1404a25d0L,
                (LPVOID *)&CRFWorldDatabaseLoadGuildBattleInfo154_user,
                (LPVOID *)&CRFWorldDatabaseLoadGuildBattleInfo154_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseLoadGuildBattleInfo154_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, struct _worlddb_guild_battle_info*))&CRFWorldDatabase::LoadGuildBattleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a15e0L,
                (LPVOID *)&CRFWorldDatabaseLoadGuildBattleScheduleInfo156_user,
                (LPVOID *)&CRFWorldDatabaseLoadGuildBattleScheduleInfo156_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseLoadGuildBattleScheduleInfo156_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int, struct _worlddb_guild_battle_schedule_list*))&CRFWorldDatabase::LoadGuildBattleScheduleInfo)
            },
            _hook_record {
                (LPVOID)0x140493f10L,
                (LPVOID *)&CRFWorldDatabaseRebirth_Base158_user,
                (LPVOID *)&CRFWorldDatabaseRebirth_Base158_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseRebirth_Base158_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*))&CRFWorldDatabase::Rebirth_Base)
            },
            _hook_record {
                (LPVOID)0x1404acc00L,
                (LPVOID *)&CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_user,
                (LPVOID *)&CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseRegist_UnmannedTraderSingleItem160_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _unmannedtrader_registsingleitem*, bool))&CRFWorldDatabase::Regist_UnmannedTraderSingleItem)
            },
            _hook_record {
                (LPVOID)0x1404b73e0L,
                (LPVOID *)&CRFWorldDatabaseSelectAllGuildSerial162_user,
                (LPVOID *)&CRFWorldDatabaseSelectAllGuildSerial162_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectAllGuildSerial162_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int*, unsigned int*))&CRFWorldDatabase::SelectAllGuildSerial)
            },
            _hook_record {
                (LPVOID)0x1404b9780L,
                (LPVOID *)&CRFWorldDatabaseSelectAllGuildSerialGrade164_user,
                (LPVOID *)&CRFWorldDatabaseSelectAllGuildSerialGrade164_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectAllGuildSerialGrade164_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int*, unsigned int*, char*))&CRFWorldDatabase::SelectAllGuildSerialGrade)
            },
            _hook_record {
                (LPVOID)0x1404a2b70L,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleRankList166_user,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleRankList166_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectGuildBattleRankList166_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, struct _worlddb_guild_battle_rank_list*))&CRFWorldDatabase::SelectGuildBattleRankList)
            },
            _hook_record {
                (LPVOID)0x1404a3460L,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleRankRecord168_user,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleRankRecord168_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectGuildBattleRankRecord168_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::SelectGuildBattleRankRecord)
            },
            _hook_record {
                (LPVOID)0x1404a38c0L,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleRerservedList170_user,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleRerservedList170_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectGuildBattleRerservedList170_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, struct _worlddb_guild_battle_reserved_schedule_info*))&CRFWorldDatabase::SelectGuildBattleRerservedList)
            },
            _hook_record {
                (LPVOID)0x1404a1cf0L,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_user,
                (LPVOID *)&CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectGuildBattleScheduleInfoID172_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::SelectGuildBattleScheduleInfoID)
            },
            _hook_record {
                (LPVOID)0x1404a20d0L,
                (LPVOID *)&CRFWorldDatabaseSelectRowCountGuildBattleInfo174_user,
                (LPVOID *)&CRFWorldDatabaseSelectRowCountGuildBattleInfo174_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectRowCountGuildBattleInfo174_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)())&CRFWorldDatabase::SelectRowCountGuildBattleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a12b0L,
                (LPVOID *)&CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_user,
                (LPVOID *)&CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelectRowCountGuildBattleScheduleInfo176_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)())&CRFWorldDatabase::SelectRowCountGuildBattleScheduleInfo)
            },
            _hook_record {
                (LPVOID)0x140494d70L,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountByAvatorName178_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountByAvatorName178_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AccountByAvatorName178_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*))&CRFWorldDatabase::Select_AccountByAvatorName)
            },
            _hook_record {
                (LPVOID)0x1404a3e40L,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountItemCharge180_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountItemCharge180_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AccountItemCharge180_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, long double*, unsigned int*, uint64_t*, unsigned int*, char*, unsigned int*, int*))&CRFWorldDatabase::Select_AccountItemCharge)
            },
            _hook_record {
                (LPVOID)0x1404a43e0L,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountItemCharge_Extend182_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountItemCharge_Extend182_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AccountItemCharge_Extend182_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, unsigned int*, uint64_t*, unsigned int*, char*, unsigned int*, int*))&CRFWorldDatabase::Select_AccountItemCharge_Extend)
            },
            _hook_record {
                (LPVOID)0x14048a380L,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountSerial184_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountSerial184_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AccountSerial184_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*, unsigned int*))&CRFWorldDatabase::Select_AccountSerial)
            },
            _hook_record {
                (LPVOID)0x14048d360L,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountTrunk186_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountTrunk186_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AccountTrunk186_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char, struct _worlddb_trunk_info*))&CRFWorldDatabase::Select_AccountTrunk)
            },
            _hook_record {
                (LPVOID)0x14048dad0L,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountTrunkExtend188_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AccountTrunkExtend188_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AccountTrunkExtend188_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_trunk_info*))&CRFWorldDatabase::Select_AccountTrunkExtend)
            },
            _hook_record {
                (LPVOID)0x140499690L,
                (LPVOID *)&CRFWorldDatabaseSelect_AllGuildData190_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AllGuildData190_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AllGuildData190_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct _worlddb_guild_info*))&CRFWorldDatabase::Select_AllGuildData)
            },
            _hook_record {
                (LPVOID)0x140499340L,
                (LPVOID *)&CRFWorldDatabaseSelect_AllGuildNum192_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AllGuildNum192_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AllGuildNum192_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CRFWorldDatabase::*)())&CRFWorldDatabase::Select_AllGuildNum)
            },
            _hook_record {
                (LPVOID)0x14049f5a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_AnimusData194_user,
                (LPVOID *)&CRFWorldDatabaseSelect_AnimusData194_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_AnimusData194_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char, long double*))&CRFWorldDatabase::Select_AnimusData)
            },
            _hook_record {
                (LPVOID)0x14049eb30L,
                (LPVOID *)&CRFWorldDatabaseSelect_ArrangeInfo196_user,
                (LPVOID *)&CRFWorldDatabaseSelect_ArrangeInfo196_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_ArrangeInfo196_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Select_ArrangeInfo)
            },
            _hook_record {
                (LPVOID)0x1404b0de0L,
                (LPVOID *)&CRFWorldDatabaseSelect_BattleResultLogLatest198_user,
                (LPVOID *)&CRFWorldDatabaseSelect_BattleResultLogLatest198_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_BattleResultLogLatest198_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_BattleResultLogLatest)
            },
            _hook_record {
                (LPVOID)0x1404c5ea0L,
                (LPVOID *)&CRFWorldDatabaseSelect_BattleTournamentInfo200_user,
                (LPVOID *)&CRFWorldDatabaseSelect_BattleTournamentInfo200_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_BattleTournamentInfo200_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct TournamentWinner*, int))&CRFWorldDatabase::Select_BattleTournamentInfo)
            },
            _hook_record {
                (LPVOID)0x1404bb3e0L,
                (LPVOID *)&CRFWorldDatabaseSelect_BossCryMsg202_user,
                (LPVOID *)&CRFWorldDatabaseSelect_BossCryMsg202_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_BossCryMsg202_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_crymsg_info*))&CRFWorldDatabase::Select_BossCryMsg)
            },
            _hook_record {
                (LPVOID)0x14049e1b0L,
                (LPVOID *)&CRFWorldDatabaseSelect_Buddy204_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Buddy204_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Buddy204_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_buddy_info*))&CRFWorldDatabase::Select_Buddy)
            },
            _hook_record {
                (LPVOID)0x1404c6780L,
                (LPVOID *)&CRFWorldDatabaseSelect_CashLimSale206_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CashLimSale206_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CashLimSale206_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(struct _worlddb_cash_limited_sale*))&CRFWorldDatabase::Select_CashLimSale)
            },
            _hook_record {
                (LPVOID)0x14048e200L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharNumInWorld208_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharNumInWorld208_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharNumInWorld208_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char*))&CRFWorldDatabase::Select_CharNumInWorld)
            },
            _hook_record {
                (LPVOID)0x14048ee20L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterBaseInfo210_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterBaseInfo210_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterBaseInfo210_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_base_info*))&CRFWorldDatabase::Select_CharacterBaseInfo)
            },
            _hook_record {
                (LPVOID)0x14048aab0L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterBaseInfoByName212_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterBaseInfoByName212_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterBaseInfoByName212_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char*, struct _worlddb_character_base_info*))&CRFWorldDatabase::Select_CharacterBaseInfoByName)
            },
            _hook_record {
                (LPVOID)0x14048e5b0L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterBaseInfoBySerial214_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_base_info_array*))&CRFWorldDatabase::Select_CharacterBaseInfoBySerial)
            },
            _hook_record {
                (LPVOID)0x14048b290L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterGeneralInfo216_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterGeneralInfo216_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterGeneralInfo216_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_general_info*))&CRFWorldDatabase::Select_CharacterGeneralInfo)
            },
            _hook_record {
                (LPVOID)0x14048a720L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterName218_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterName218_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterName218_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char*))&CRFWorldDatabase::Select_CharacterName)
            },
            _hook_record {
                (LPVOID)0x1404c4340L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterReName220_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterReName220_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterReName220_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, unsigned int*))&CRFWorldDatabase::Select_CharacterReName)
            },
            _hook_record {
                (LPVOID)0x140489c00L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterSerial222_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharacterSerial222_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharacterSerial222_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, unsigned int*))&CRFWorldDatabase::Select_CharacterSerial)
            },
            _hook_record {
                (LPVOID)0x140489720L,
                (LPVOID *)&CRFWorldDatabaseSelect_CharactersInfo224_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CharactersInfo224_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CharactersInfo224_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_array_info*))&CRFWorldDatabase::Select_CharactersInfo)
            },
            _hook_record {
                (LPVOID)0x14049bc10L,
                (LPVOID *)&CRFWorldDatabaseSelect_CheckGreetRecord226_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CheckGreetRecord226_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CheckGreetRecord226_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(int))&CRFWorldDatabase::Select_CheckGreetRecord)
            },
            _hook_record {
                (LPVOID)0x14049dda0L,
                (LPVOID *)&CRFWorldDatabaseSelect_CheckSumValue228_user,
                (LPVOID *)&CRFWorldDatabaseSelect_CheckSumValue228_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_CheckSumValue228_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Select_CheckSumValue)
            },
            _hook_record {
                (LPVOID)0x140489f60L,
                (LPVOID *)&CRFWorldDatabaseSelect_ChracterSerialRace230_user,
                (LPVOID *)&CRFWorldDatabaseSelect_ChracterSerialRace230_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_ChracterSerialRace230_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, unsigned int*, char*))&CRFWorldDatabase::Select_ChracterSerialRace)
            },
            _hook_record {
                (LPVOID)0x1404c0780L,
                (LPVOID *)&CRFWorldDatabaseSelect_ClearHonorGuild232_user,
                (LPVOID *)&CRFWorldDatabaseSelect_ClearHonorGuild232_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_ClearHonorGuild232_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int*))&CRFWorldDatabase::Select_ClearHonorGuild)
            },
            _hook_record {
                (LPVOID)0x140492a90L,
                (LPVOID *)&CRFWorldDatabaseSelect_Economy_History234_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Economy_History234_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Economy_History234_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(struct _worlddb_economy_history_info_array*, unsigned int))&CRFWorldDatabase::Select_Economy_History)
            },
            _hook_record {
                (LPVOID)0x140490510L,
                (LPVOID *)&CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Equal_DeleteName_NoArranged236_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Select_Equal_DeleteName_NoArranged)
            },
            _hook_record {
                (LPVOID)0x140490260L,
                (LPVOID *)&CRFWorldDatabaseSelect_Equal_Name238_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Equal_Name238_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Equal_Name238_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Select_Equal_Name)
            },
            _hook_record {
                (LPVOID)0x140493130L,
                (LPVOID *)&CRFWorldDatabaseSelect_Exist_Economy240_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Exist_Economy240_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Exist_Economy240_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info*))&CRFWorldDatabase::Select_Exist_Economy)
            },
            _hook_record {
                (LPVOID)0x1404c12b0L,
                (LPVOID *)&CRFWorldDatabaseSelect_FailBattleCount242_user,
                (LPVOID *)&CRFWorldDatabaseSelect_FailBattleCount242_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_FailBattleCount242_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_FailBattleCount)
            },
            _hook_record {
                (LPVOID)0x1404bf350L,
                (LPVOID *)&CRFWorldDatabaseSelect_GetCharSerialByNameRace244_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GetCharSerialByNameRace244_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GetCharSerialByNameRace244_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char*, char, unsigned int*))&CRFWorldDatabase::Select_GetCharSerialByNameRace)
            },
            _hook_record {
                (LPVOID)0x1404c9160L,
                (LPVOID *)&CRFWorldDatabaseSelect_GodenBoxItem246_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GodenBoxItem246_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GodenBoxItem246_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(struct _worlddb_golden_box_item*, int*))&CRFWorldDatabase::Select_GodenBoxItem)
            },
            _hook_record {
                (LPVOID)0x1404aa8f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildBattleRecord248_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildBattleRecord248_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildBattleRecord248_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _guildbattle_totalrecord*))&CRFWorldDatabase::Select_GuildBattleRecord)
            },
            _hook_record {
                (LPVOID)0x140499d70L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildData250_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildData250_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildData250_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_guild_info::__guild_info*))&CRFWorldDatabase::Select_GuildData)
            },
            _hook_record {
                (LPVOID)0x1404c3f80L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildMasterLastConn252_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildMasterLastConn252_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildMasterLastConn252_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int, unsigned int*))&CRFWorldDatabase::Select_GuildMasterLastConn)
            },
            _hook_record {
                (LPVOID)0x14049a150L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildMemberData254_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildMemberData254_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildMemberData254_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(uint16_t, unsigned int, struct _worlddb_guild_member_info*))&CRFWorldDatabase::Select_GuildMemberData)
            },
            _hook_record {
                (LPVOID)0x14049a5a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildMoneyIOData256_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildMoneyIOData256_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildMoneyIOData256_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_guild_money_io_info*))&CRFWorldDatabase::Select_GuildMoneyIOData)
            },
            _hook_record {
                (LPVOID)0x1404b03e0L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildRoomInfo258_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildRoomInfo258_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildRoomInfo258_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct _guildroom_info*))&CRFWorldDatabase::Select_GuildRoomInfo)
            },
            _hook_record {
                (LPVOID)0x140498a70L,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildSerial260_user,
                (LPVOID *)&CRFWorldDatabaseSelect_GuildSerial260_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_GuildSerial260_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, unsigned int*))&CRFWorldDatabase::Select_GuildSerial)
            },
            _hook_record {
                (LPVOID)0x1404c01d0L,
                (LPVOID *)&CRFWorldDatabaseSelect_HonorGuild262_user,
                (LPVOID *)&CRFWorldDatabaseSelect_HonorGuild262_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_HonorGuild262_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, struct _guild_honor_list_result_zocl*, bool))&CRFWorldDatabase::Select_HonorGuild)
            },
            _hook_record {
                (LPVOID)0x14048c660L,
                (LPVOID *)&CRFWorldDatabaseSelect_Inven264_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Inven264_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Inven264_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, uint16_t, struct _worlddb_inven_info*))&CRFWorldDatabase::Select_Inven)
            },
            _hook_record {
                (LPVOID)0x1404c17d0L,
                (LPVOID *)&CRFWorldDatabaseSelect_IsValidChar266_user,
                (LPVOID *)&CRFWorldDatabaseSelect_IsValidChar266_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_IsValidChar266_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Select_IsValidChar)
            },
            _hook_record {
                (LPVOID)0x140493fc0L,
                (LPVOID *)&CRFWorldDatabaseSelect_ItemCharge268_user,
                (LPVOID *)&CRFWorldDatabaseSelect_ItemCharge268_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_ItemCharge268_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, unsigned int*, uint64_t*, unsigned int*, unsigned int*, int*))&CRFWorldDatabase::Select_ItemCharge)
            },
            _hook_record {
                (LPVOID)0x1404a4a00L,
                (LPVOID *)&CRFWorldDatabaseSelect_ItemCombineEx270_user,
                (LPVOID *)&CRFWorldDatabaseSelect_ItemCombineEx270_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_ItemCombineEx270_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_itemcombineex_info*))&CRFWorldDatabase::Select_ItemCombineEx)
            },
            _hook_record {
                (LPVOID)0x1404c8ae0L,
                (LPVOID *)&CRFWorldDatabaseSelect_LimitInfo272_user,
                (LPVOID *)&CRFWorldDatabaseSelect_LimitInfo272_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_LimitInfo272_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char*, uint64_t))&CRFWorldDatabase::Select_LimitInfo)
            },
            _hook_record {
                (LPVOID)0x1404ba170L,
                (LPVOID *)&CRFWorldDatabaseSelect_LimitItemEmptyRecord274_user,
                (LPVOID *)&CRFWorldDatabaseSelect_LimitItemEmptyRecord274_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_LimitItemEmptyRecord274_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_LimitItemEmptyRecord)
            },
            _hook_record {
                (LPVOID)0x1404ba4f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_LimitItemUsedRecord276_user,
                (LPVOID *)&CRFWorldDatabaseSelect_LimitItemUsedRecord276_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_LimitItemUsedRecord276_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, unsigned int, unsigned int*))&CRFWorldDatabase::Select_LimitItemUsedRecord)
            },
            _hook_record {
                (LPVOID)0x1404c87d0L,
                (LPVOID *)&CRFWorldDatabaseSelect_Limit_Run_Record278_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Limit_Run_Record278_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Limit_Run_Record278_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)())&CRFWorldDatabase::Select_Limit_Run_Record)
            },
            _hook_record {
                (LPVOID)0x1404c0b30L,
                (LPVOID *)&CRFWorldDatabaseSelect_LoseBattleCount280_user,
                (LPVOID *)&CRFWorldDatabaseSelect_LoseBattleCount280_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_LoseBattleCount280_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_LoseBattleCount)
            },
            _hook_record {
                (LPVOID)0x1404a52f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_MacroData282_user,
                (LPVOID *)&CRFWorldDatabaseSelect_MacroData282_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_MacroData282_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _AIOC_A_MACRODATA*))&CRFWorldDatabase::Select_MacroData)
            },
            _hook_record {
                (LPVOID)0x14049e5a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_NotArrangeCharacter284_user,
                (LPVOID *)&CRFWorldDatabaseSelect_NotArrangeCharacter284_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_NotArrangeCharacter284_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_arrange_char_info*))&CRFWorldDatabase::Select_NotArrangeCharacter)
            },
            _hook_record {
                (LPVOID)0x14049f050L,
                (LPVOID *)&CRFWorldDatabaseSelect_NpcData286_user,
                (LPVOID *)&CRFWorldDatabaseSelect_NpcData286_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_NpcData286_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Select_NpcData)
            },
            _hook_record {
                (LPVOID)0x1404c3320L,
                (LPVOID *)&CRFWorldDatabaseSelect_NpcQuest_History288_user,
                (LPVOID *)&CRFWorldDatabaseSelect_NpcQuest_History288_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_NpcQuest_History288_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_npc_quest_complete_history*))&CRFWorldDatabase::Select_NpcQuest_History)
            },
            _hook_record {
                (LPVOID)0x1404bc610L,
                (LPVOID *)&CRFWorldDatabaseSelect_OldVerPatriarchGroup290_user,
                (LPVOID *)&CRFWorldDatabaseSelect_OldVerPatriarchGroup290_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_OldVerPatriarchGroup290_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, struct _candidate_info*))&CRFWorldDatabase::Select_OldVerPatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1404c57f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_OreCutting292_user,
                (LPVOID *)&CRFWorldDatabaseSelect_OreCutting292_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_OreCutting292_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_ore_cutting*))&CRFWorldDatabase::Select_OreCutting)
            },
            _hook_record {
                (LPVOID)0x1404bcba0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchCandidate294_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchCandidate294_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchCandidate294_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char, struct _candidate_info*))&CRFWorldDatabase::Select_PatriarchCandidate)
            },
            _hook_record {
                (LPVOID)0x1404bf720L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchComm296_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchComm296_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchComm296_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _patriarch_comm_list*))&CRFWorldDatabase::Select_PatriarchComm)
            },
            _hook_record {
                (LPVOID)0x1404bfb50L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchCommCount298_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchCommCount298_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchCommCount298_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, char*, unsigned int*))&CRFWorldDatabase::Select_PatriarchCommCount)
            },
            _hook_record {
                (LPVOID)0x1404bb8d0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchElectState300_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchElectState300_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchElectState300_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(struct _sel_patriarch_elect_state*))&CRFWorldDatabase::Select_PatriarchElectState)
            },
            _hook_record {
                (LPVOID)0x1404bdd10L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchGroup302_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchGroup302_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchGroup302_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, struct _candidate_info*))&CRFWorldDatabase::Select_PatriarchGroup)
            },
            _hook_record {
                (LPVOID)0x1404bbe50L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchRefundCount304_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchRefundCount304_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchRefundCount304_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_PatriarchRefundCount)
            },
            _hook_record {
                (LPVOID)0x1404bc210L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchVoted306_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchVoted306_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchVoted306_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, bool*))&CRFWorldDatabase::Select_PatriarchVoted)
            },
            _hook_record {
                (LPVOID)0x1404be4f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchWinCnt308_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PatriarchWinCnt308_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PatriarchWinCnt308_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_PatriarchWinCnt)
            },
            _hook_record {
                (LPVOID)0x1404c6340L,
                (LPVOID *)&CRFWorldDatabaseSelect_PcBangFavorItem310_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PcBangFavorItem310_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PcBangFavorItem310_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_pcbang_favor_item*))&CRFWorldDatabase::Select_PcBangFavorItem)
            },
            _hook_record {
                (LPVOID)0x1404c7ab0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PlayerTimeLimitInfo312_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_time_limit_info*))&CRFWorldDatabase::Select_PlayerTimeLimitInfo)
            },
            _hook_record {
                (LPVOID)0x1404c7f10L,
                (LPVOID *)&CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PlayerTimeLimitInfo314_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, unsigned int*, char*))&CRFWorldDatabase::Select_PlayerTimeLimitInfo)
            },
            _hook_record {
                (LPVOID)0x1404c8320L,
                (LPVOID *)&CRFWorldDatabaseSelect_Player_Last_LogoutTime316_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Player_Last_LogoutTime316_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Player_Last_LogoutTime316_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Select_Player_Last_LogoutTime)
            },
            _hook_record {
                (LPVOID)0x1404b43f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostContent318_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostContent318_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostContent318_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char*, int))&CRFWorldDatabase::Select_PostContent)
            },
            _hook_record {
                (LPVOID)0x1404b1fe0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostRecvSerialFromName320_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostRecvSerialFromName320_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostRecvSerialFromName320_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char*, unsigned int*, unsigned int*, unsigned int*))&CRFWorldDatabase::Select_PostRecvSerialFromName)
            },
            _hook_record {
                (LPVOID)0x1404b23e0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostRecvStorageCheck322_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostRecvStorageCheck322_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostRecvStorageCheck322_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Select_PostRecvStorageCheck)
            },
            _hook_record {
                (LPVOID)0x1404b11c0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostRegistryData324_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostRegistryData324_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostRegistryData324_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct CPostData*))&CRFWorldDatabase::Select_PostRegistryData)
            },
            _hook_record {
                (LPVOID)0x1404b18a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageEmptyRecord326_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageEmptyRecord326_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostStorageEmptyRecord326_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)())&CRFWorldDatabase::Select_PostStorageEmptyRecord)
            },
            _hook_record {
                (LPVOID)0x1404b2bd0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostStorageEmptyRecordSerial328_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_PostStorageEmptyRecordSerial)
            },
            _hook_record {
                (LPVOID)0x1404b3490L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageList330_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageList330_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostStorageList330_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _post_storage_list*))&CRFWorldDatabase::Select_PostStorageList)
            },
            _hook_record {
                (LPVOID)0x1404b2790L,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageRecordCheck332_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PostStorageRecordCheck332_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PostStorageRecordCheck332_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Select_PostStorageRecordCheck)
            },
            _hook_record {
                (LPVOID)0x1404c5220L,
                (LPVOID *)&CRFWorldDatabaseSelect_PotionDelay334_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PotionDelay334_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PotionDelay334_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_potion_delay_info*))&CRFWorldDatabase::Select_PotionDelay)
            },
            _hook_record {
                (LPVOID)0x1404c4c60L,
                (LPVOID *)&CRFWorldDatabaseSelect_PrimiumPlayTime336_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PrimiumPlayTime336_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PrimiumPlayTime336_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _PCBANG_PLAY_TIME*))&CRFWorldDatabase::Select_PrimiumPlayTime)
            },
            _hook_record {
                (LPVOID)0x1404be980L,
                (LPVOID *)&CRFWorldDatabaseSelect_Punishment338_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Punishment338_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Punishment338_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, unsigned int*, unsigned int*))&CRFWorldDatabase::Select_Punishment)
            },
            _hook_record {
                (LPVOID)0x1404bef90L,
                (LPVOID *)&CRFWorldDatabaseSelect_PunishmentCount340_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PunishmentCount340_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PunishmentCount340_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_PunishmentCount)
            },
            _hook_record {
                (LPVOID)0x1404c1b80L,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpOrderViewInfo342_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpOrderViewInfo342_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PvpOrderViewInfo342_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _pvporderview_info*))&CRFWorldDatabase::Select_PvpOrderViewInfo)
            },
            _hook_record {
                (LPVOID)0x1404a71c0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpPointGuildRank344_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpPointGuildRank344_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PvpPointGuildRank344_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char*, struct _pvppoint_guild_rank_info*))&CRFWorldDatabase::Select_PvpPointGuildRank)
            },
            _hook_record {
                (LPVOID)0x1404afc70L,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpPointLimitInfo346_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpPointLimitInfo346_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PvpPointLimitInfo346_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _pvppointlimit_info*))&CRFWorldDatabase::Select_PvpPointLimitInfo)
            },
            _hook_record {
                (LPVOID)0x140497510L,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpRankInfo348_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpRankInfo348_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PvpRankInfo348_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, char*, struct _PVP_RANK_DATA*))&CRFWorldDatabase::Select_PvpRankInfo)
            },
            _hook_record {
                (LPVOID)0x1404971a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpRate350_user,
                (LPVOID *)&CRFWorldDatabaseSelect_PvpRate350_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_PvpRate350_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, char*, unsigned int*, uint16_t*))&CRFWorldDatabase::Select_PvpRate)
            },
            _hook_record {
                (LPVOID)0x140495180L,
                (LPVOID *)&CRFWorldDatabaseSelect_Quest352_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Quest352_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Quest352_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_quest_array*))&CRFWorldDatabase::Select_Quest)
            },
            _hook_record {
                (LPVOID)0x1404b47e0L,
                (LPVOID *)&CRFWorldDatabaseSelect_RFEvent_ClassRefine354_user,
                (LPVOID *)&CRFWorldDatabaseSelect_RFEvent_ClassRefine354_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_RFEvent_ClassRefine354_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, char*, unsigned int*))&CRFWorldDatabase::Select_RFEvent_ClassRefine)
            },
            _hook_record {
                (LPVOID)0x1404c2da0L,
                (LPVOID *)&CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_user,
                (LPVOID *)&CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_RaceBossAccumulationWinRate356_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, struct _raceboss_acc_winrate*))&CRFWorldDatabase::Select_RaceBossAccumulationWinRate)
            },
            _hook_record {
                (LPVOID)0x1404c28f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_user,
                (LPVOID *)&CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_RaceBossCurrentWinRate358_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, char*, unsigned int*, unsigned int*))&CRFWorldDatabase::Select_RaceBossCurrentWinRate)
            },
            _hook_record {
                (LPVOID)0x1404c99f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_user,
                (LPVOID *)&CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_RegeAvator_For_Lobby_Logout360_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _rege_char_data*))&CRFWorldDatabase::Select_RegeAvator_For_Lobby_Logout)
            },
            _hook_record {
                (LPVOID)0x1404b3a70L,
                (LPVOID *)&CRFWorldDatabaseSelect_ReturnPost362_user,
                (LPVOID *)&CRFWorldDatabaseSelect_ReturnPost362_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_ReturnPost362_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int, struct _return_post_list*))&CRFWorldDatabase::Select_ReturnPost)
            },
            _hook_record {
                (LPVOID)0x1404c2490L,
                (LPVOID *)&CRFWorldDatabaseSelect_SFDelayInfo364_user,
                (LPVOID *)&CRFWorldDatabaseSelect_SFDelayInfo364_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_SFDelayInfo364_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_sf_delay_info*))&CRFWorldDatabase::Select_SFDelayInfo)
            },
            _hook_record {
                (LPVOID)0x1404c3c40L,
                (LPVOID *)&CRFWorldDatabaseSelect_Start_NpcQuest_History366_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Start_NpcQuest_History366_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Start_NpcQuest_History366_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_start_npc_quest_complete_history*, unsigned int))&CRFWorldDatabase::Select_Start_NpcQuest_History)
            },
            _hook_record {
                (LPVOID)0x1404c3940L,
                (LPVOID *)&CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Start_NpcQuest_History_Count368_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Select_Start_NpcQuest_History_Count)
            },
            _hook_record {
                (LPVOID)0x1404ba8a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_StoreLimitItem370_user,
                (LPVOID *)&CRFWorldDatabaseSelect_StoreLimitItem370_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_StoreLimitItem370_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(struct _qry_case_all_store_limit_item*))&CRFWorldDatabase::Select_StoreLimitItem)
            },
            _hook_record {
                (LPVOID)0x1404c47a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_Supplement372_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Supplement372_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Supplement372_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_supplement_info*))&CRFWorldDatabase::Select_Supplement)
            },
            _hook_record {
                (LPVOID)0x1404c8df0L,
                (LPVOID *)&CRFWorldDatabaseSelect_Supplement_ActPoint374_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Supplement_ActPoint374_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Supplement_ActPoint374_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_supplement_info*))&CRFWorldDatabase::Select_Supplement_ActPoint)
            },
            _hook_record {
                (LPVOID)0x1404c6cb0L,
                (LPVOID *)&CRFWorldDatabaseSelect_Supplement_Ex376_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Supplement_Ex376_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Supplement_Ex376_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _worlddb_character_supplement_info*))&CRFWorldDatabase::Select_Supplement_Ex)
            },
            _hook_record {
                (LPVOID)0x140494930L,
                (LPVOID *)&CRFWorldDatabaseSelect_TakeItem378_user,
                (LPVOID *)&CRFWorldDatabaseSelect_TakeItem378_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_TakeItem378_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_item_list*))&CRFWorldDatabase::Select_TakeItem)
            },
            _hook_record {
                (LPVOID)0x1404a66a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_TotalGuildRank380_user,
                (LPVOID *)&CRFWorldDatabaseSelect_TotalGuildRank380_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_TotalGuildRank380_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char*, struct _total_guild_rank_info*))&CRFWorldDatabase::Select_TotalGuildRank)
            },
            _hook_record {
                (LPVOID)0x1404b9df0L,
                (LPVOID *)&CRFWorldDatabaseSelect_TotalRecordNum382_user,
                (LPVOID *)&CRFWorldDatabaseSelect_TotalRecordNum382_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_TotalRecordNum382_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_TotalRecordNum)
            },
            _hook_record {
                (LPVOID)0x14048cb70L,
                (LPVOID *)&CRFWorldDatabaseSelect_Trade384_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Trade384_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Trade384_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, char, struct _worlddb_trade_info*))&CRFWorldDatabase::Select_Trade)
            },
            _hook_record {
                (LPVOID)0x14049f9f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_TrunkMoney386_user,
                (LPVOID *)&CRFWorldDatabaseSelect_TrunkMoney386_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_TrunkMoney386_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double*))&CRFWorldDatabase::Select_TrunkMoney)
            },
            _hook_record {
                (LPVOID)0x14048f6f0L,
                (LPVOID *)&CRFWorldDatabaseSelect_Unit388_user,
                (LPVOID *)&CRFWorldDatabaseSelect_Unit388_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_Unit388_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_unit_info_array*))&CRFWorldDatabase::Select_Unit)
            },
            _hook_record {
                (LPVOID)0x1404a0450L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnitData390_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnitData390_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnitData390_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, long double*))&CRFWorldDatabase::Select_UnitData)
            },
            _hook_record {
                (LPVOID)0x1404adb10L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderBuySingleItemInfo392_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, struct _unmannedtrader_buy_item_info*))&CRFWorldDatabase::Select_UnmannedTraderBuySingleItemInfo)
            },
            _hook_record {
                (LPVOID)0x1404af100L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderItemRecordCntByState394_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, char, unsigned int*, uint16_t, uint16_t*))&CRFWorldDatabase::Select_UnmannedTraderItemRecordCntByState)
            },
            _hook_record {
                (LPVOID)0x1404acdb0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemState396_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemState396_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderItemState396_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, char*))&CRFWorldDatabase::Select_UnmannedTraderItemState)
            },
            _hook_record {
                (LPVOID)0x1404ab110L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderItemStateInfo398_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(struct _unmannedtrader_stade_id_info*, unsigned int))&CRFWorldDatabase::Select_UnmannedTraderItemStateInfo)
            },
            _hook_record {
                (LPVOID)0x1404aadf0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderItemStateInfoCnt400_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_UnmannedTraderItemStateInfoCnt)
            },
            _hook_record {
                (LPVOID)0x1404af6b0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderRegister402_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderRegister402_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderRegister402_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_UnmannedTraderRegister)
            },
            _hook_record {
                (LPVOID)0x1404ac300L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderReservedSchedule404_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _unmannedtrader_reserved_schedule_info*))&CRFWorldDatabase::Select_UnmannedTraderReservedSchedule)
            },
            _hook_record {
                (LPVOID)0x1404ae570L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderSearchGroupTotalRowCount406_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, char, char, char, char, unsigned int*))&CRFWorldDatabase::Select_UnmannedTraderSearchGroupTotalRowCount)
            },
            _hook_record {
                (LPVOID)0x1404ae8b0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderSearchPageInfo408_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, char, char, char, char, unsigned int, unsigned int, char*, struct _unmannedtrader_page_info*))&CRFWorldDatabase::Select_UnmannedTraderSearchPageInfo)
            },
            _hook_record {
                (LPVOID)0x1404ad210L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderSellInfo410_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, char, struct _unmannedtrader_seller_info*))&CRFWorldDatabase::Select_UnmannedTraderSellInfo)
            },
            _hook_record {
                (LPVOID)0x1404abcc0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderSingleItemBottomSerial412_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_UnmannedTraderSingleItemBottomSerial)
            },
            _hook_record {
                (LPVOID)0x1404ab6a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordCnt414_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)())&CRFWorldDatabase::Select_UnmannedTraderSingleItemEmptyRecordCnt)
            },
            _hook_record {
                (LPVOID)0x1404abfc0L,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UnmannedTraderSingleItemEmptyRecordSerial416_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_UnmannedTraderSingleItemEmptyRecordSerial)
            },
            _hook_record {
                (LPVOID)0x1404b9a70L,
                (LPVOID *)&CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UsedLimitItemRecordNum418_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int*))&CRFWorldDatabase::Select_UsedLimitItemRecordNum)
            },
            _hook_record {
                (LPVOID)0x140498390L,
                (LPVOID *)&CRFWorldDatabaseSelect_UserCountInfo420_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UserCountInfo420_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UserCountInfo420_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char*, struct _worlddb_user_count_info*))&CRFWorldDatabase::Select_UserCountInfo)
            },
            _hook_record {
                (LPVOID)0x140497a50L,
                (LPVOID *)&CRFWorldDatabaseSelect_UserInterface422_user,
                (LPVOID *)&CRFWorldDatabaseSelect_UserInterface422_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_UserInterface422_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_userinterface_info*))&CRFWorldDatabase::Select_UserInterface)
            },
            _hook_record {
                (LPVOID)0x1404944a0L,
                (LPVOID *)&CRFWorldDatabaseSelect_WaitItem424_user,
                (LPVOID *)&CRFWorldDatabaseSelect_WaitItem424_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_WaitItem424_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, struct _worlddb_item_list*))&CRFWorldDatabase::Select_WaitItem)
            },
            _hook_record {
                (LPVOID)0x1404a7ac0L,
                (LPVOID *)&CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_user,
                (LPVOID *)&CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_WeeklyGuildRankOwnerGuild426_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char*, char, char, struct _weeklyguildrank_owner_info*))&CRFWorldDatabase::Select_WeeklyGuildRankOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x1404c0ef0L,
                (LPVOID *)&CRFWorldDatabaseSelect_WinBattleCount428_user,
                (LPVOID *)&CRFWorldDatabaseSelect_WinBattleCount428_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_WinBattleCount428_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_WinBattleCount)
            },
            _hook_record {
                (LPVOID)0x1404c8c60L,
                (LPVOID *)&CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_user,
                (LPVOID *)&CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseSelect_utSellWaitItems_SalesTotals430_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, unsigned int*))&CRFWorldDatabase::Select_utSellWaitItems_SalesTotals)
            },
            _hook_record {
                (LPVOID)0x1404ab400L,
                (LPVOID *)&CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_user,
                (LPVOID *)&CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseTruncate_UnmannedTraderItemStateRecord432_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Truncate_UnmannedTraderItemStateRecord)
            },
            _hook_record {
                (LPVOID)0x1404a2ac0L,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleInfo434_user,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleInfo434_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateClearGuildBattleInfo434_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::UpdateClearGuildBattleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a31b0L,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleRank436_user,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleRank436_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateClearGuildBattleRank436_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::UpdateClearGuildBattleRank)
            },
            _hook_record {
                (LPVOID)0x1404a2020L,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_user,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo438_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::UpdateClearGuildBattleScheduleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a1c40L,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_user,
                (LPVOID *)&CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateClearGuildBattleScheduleInfo440_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::UpdateClearGuildBattleScheduleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a33b0L,
                (LPVOID *)&CRFWorldDatabaseUpdateDrawGuildBattleResult442_user,
                (LPVOID *)&CRFWorldDatabaseUpdateDrawGuildBattleResult442_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateDrawGuildBattleResult442_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::UpdateDrawGuildBattleResult)
            },
            _hook_record {
                (LPVOID)0x1404a29e0L,
                (LPVOID *)&CRFWorldDatabaseUpdateGuildBattleInfo444_user,
                (LPVOID *)&CRFWorldDatabaseUpdateGuildBattleInfo444_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateGuildBattleInfo444_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, unsigned int, unsigned int, char))&CRFWorldDatabase::UpdateGuildBattleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a1aa0L,
                (LPVOID *)&CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_user,
                (LPVOID *)&CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateGuildBattleScheduleInfo446_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char, int64_t, uint16_t))&CRFWorldDatabase::UpdateGuildBattleScheduleInfo)
            },
            _hook_record {
                (LPVOID)0x1404a0b10L,
                (LPVOID *)&CRFWorldDatabaseUpdateGuildMoney448_user,
                (LPVOID *)&CRFWorldDatabaseUpdateGuildMoney448_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateGuildMoney448_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double, long double))&CRFWorldDatabase::UpdateGuildMoney)
            },
            _hook_record {
                (LPVOID)0x1404a3300L,
                (LPVOID *)&CRFWorldDatabaseUpdateLoseGuildBattleResult450_user,
                (LPVOID *)&CRFWorldDatabaseUpdateLoseGuildBattleResult450_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateLoseGuildBattleResult450_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::UpdateLoseGuildBattleResult)
            },
            _hook_record {
                (LPVOID)0x1404c7510L,
                (LPVOID *)&CRFWorldDatabaseUpdateServerResetToken452_user,
                (LPVOID *)&CRFWorldDatabaseUpdateServerResetToken452_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateServerResetToken452_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, uint16_t, unsigned int))&CRFWorldDatabase::UpdateServerResetToken)
            },
            _hook_record {
                (LPVOID)0x1404c76f0L,
                (LPVOID *)&CRFWorldDatabaseUpdateVotedReset_Cheat454_user,
                (LPVOID *)&CRFWorldDatabaseUpdateVotedReset_Cheat454_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateVotedReset_Cheat454_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::UpdateVotedReset_Cheat)
            },
            _hook_record {
                (LPVOID)0x1404c7760L,
                (LPVOID *)&CRFWorldDatabaseUpdateVotedReset_General456_user,
                (LPVOID *)&CRFWorldDatabaseUpdateVotedReset_General456_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateVotedReset_General456_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::UpdateVotedReset_General)
            },
            _hook_record {
                (LPVOID)0x1404c7940L,
                (LPVOID *)&CRFWorldDatabaseUpdateVotedReset_Supplement458_user,
                (LPVOID *)&CRFWorldDatabaseUpdateVotedReset_Supplement458_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateVotedReset_Supplement458_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::UpdateVotedReset_Supplement)
            },
            _hook_record {
                (LPVOID)0x1404a3250L,
                (LPVOID *)&CRFWorldDatabaseUpdateWinGuildBattleResult460_user,
                (LPVOID *)&CRFWorldDatabaseUpdateWinGuildBattleResult460_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdateWinGuildBattleResult460_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::UpdateWinGuildBattleResult)
            },
            _hook_record {
                (LPVOID)0x1404a0260L,
                (LPVOID *)&CRFWorldDatabaseUpdate_AnimusData462_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_AnimusData462_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_AnimusData462_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char, long double*))&CRFWorldDatabase::Update_AnimusData)
            },
            _hook_record {
                (LPVOID)0x1404b1100L,
                (LPVOID *)&CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_BattleResultLogBattleResultAndPvpPoint464_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, unsigned int))&CRFWorldDatabase::Update_BattleResultLogBattleResultAndPvpPoint)
            },
            _hook_record {
                (LPVOID)0x140498dd0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_CharSlot466_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_CharSlot466_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_CharSlot466_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_CharSlot)
            },
            _hook_record {
                (LPVOID)0x1404916b0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_CharacterData468_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_CharacterData468_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_CharacterData468_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_update_char_query*))&CRFWorldDatabase::Update_CharacterData)
            },
            _hook_record {
                (LPVOID)0x1404c46c0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_CharacterReName470_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_CharacterReName470_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_CharacterReName470_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, unsigned int))&CRFWorldDatabase::Update_CharacterReName)
            },
            _hook_record {
                (LPVOID)0x1404a7820L,
                (LPVOID *)&CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_ClearWeeklyPvpPointSum472_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_ClearWeeklyPvpPointSum)
            },
            _hook_record {
                (LPVOID)0x1404a9a90L,
                (LPVOID *)&CRFWorldDatabaseUpdate_CristalBattleCharInfo474_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_CristalBattleCharInfo474_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_CristalBattleCharInfo474_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char, char, int, uint16_t, uint16_t))&CRFWorldDatabase::Update_CristalBattleCharInfo)
            },
            _hook_record {
                (LPVOID)0x1404c9f10L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Dalant476_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Dalant476_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Dalant476_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::Update_Dalant)
            },
            _hook_record {
                (LPVOID)0x1404bb320L,
                (LPVOID *)&CRFWorldDatabaseUpdate_DisableInstanceStore478_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_DisableInstanceStore478_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_DisableInstanceStore478_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_DisableInstanceStore)
            },
            _hook_record {
                (LPVOID)0x1404b1cf0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_DisappearOwnerRecord480_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_DisappearOwnerRecord480_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_DisappearOwnerRecord480_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_DisappearOwnerRecord)
            },
            _hook_record {
                (LPVOID)0x14049c050L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GmGreet482_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GmGreet482_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GmGreet482_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct _qry_case_gm_greetingmsg*))&CRFWorldDatabase::Update_GmGreet)
            },
            _hook_record {
                (LPVOID)0x1404c9fe0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Gold484_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Gold484_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Gold484_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int))&CRFWorldDatabase::Update_Gold)
            },
            _hook_record {
                (LPVOID)0x14049b020L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildEmblem486_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildEmblem486_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildEmblem486_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double, unsigned int, unsigned int))&CRFWorldDatabase::Update_GuildEmblem)
            },
            _hook_record {
                (LPVOID)0x14049cbe0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildGrade488_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildGrade488_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildGrade488_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_GuildGrade)
            },
            _hook_record {
                (LPVOID)0x14049c200L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildGreet490_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildGreet490_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildGreet490_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct _qry_case_guild_greetingmsg*))&CRFWorldDatabase::Update_GuildGreet)
            },
            _hook_record {
                (LPVOID)0x1404a65e0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildMaster492_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildMaster492_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildMaster492_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char))&CRFWorldDatabase::Update_GuildMaster)
            },
            _hook_record {
                (LPVOID)0x14049dcd0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildMemberCount494_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildMemberCount494_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildMemberCount494_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, uint16_t))&CRFWorldDatabase::Update_GuildMemberCount)
            },
            _hook_record {
                (LPVOID)0x14049c390L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank496_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank496_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildRank496_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_GuildRank)
            },
            _hook_record {
                (LPVOID)0x1404b7670L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank_Step1498_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank_Step1498_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildRank_Step1498_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_GuildRank_Step1)
            },
            _hook_record {
                (LPVOID)0x1404b7b00L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank_Step2500_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank_Step2500_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildRank_Step2500_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_GuildRank_Step2)
            },
            _hook_record {
                (LPVOID)0x1404b7e80L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank_Step3502_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRank_Step3502_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildRank_Step3502_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_GuildRank_Step3)
            },
            _hook_record {
                (LPVOID)0x1404b0960L,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRoom504_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_GuildRoom504_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_GuildRoom504_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_GuildRoom)
            },
            _hook_record {
                (LPVOID)0x1404a70f0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_IncreaseWeeklyGuildGuildBattlePvpPointSum506_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double))&CRFWorldDatabase::Update_IncreaseWeeklyGuildGuildBattlePvpPointSum)
            },
            _hook_record {
                (LPVOID)0x1404a7020L,
                (LPVOID *)&CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_IncreaseWeeklyGuildKillPvpPointSum508_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double))&CRFWorldDatabase::Update_IncreaseWeeklyGuildKillPvpPointSum)
            },
            _hook_record {
                (LPVOID)0x14049ac40L,
                (LPVOID *)&CRFWorldDatabaseUpdate_InputGuildMoney510_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_InputGuildMoney510_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_InputGuildMoney510_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, unsigned int))&CRFWorldDatabase::Update_InputGuildMoney)
            },
            _hook_record {
                (LPVOID)0x1404970e0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Level512_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Level512_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Level512_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char))&CRFWorldDatabase::Update_Level)
            },
            _hook_record {
                (LPVOID)0x1404baf40L,
                (LPVOID *)&CRFWorldDatabaseUpdate_LimitItemNum514_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_LimitItemNum514_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_LimitItemNum514_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_LimitItemNum)
            },
            _hook_record {
                (LPVOID)0x1404a5ce0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_MacroData516_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_MacroData516_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_MacroData516_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _AIOC_A_MACRODATA*))&CRFWorldDatabase::Update_MacroData)
            },
            _hook_record {
                (LPVOID)0x14049f3c0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_NpcData518_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_NpcData518_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_NpcData518_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int*))&CRFWorldDatabase::Update_NpcData)
            },
            _hook_record {
                (LPVOID)0x14049ad20L,
                (LPVOID *)&CRFWorldDatabaseUpdate_OutputGuildMoney520_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_OutputGuildMoney520_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_OutputGuildMoney520_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, unsigned int))&CRFWorldDatabase::Update_OutputGuildMoney)
            },
            _hook_record {
                (LPVOID)0x1404c0050L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PatriarchComm522_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PatriarchComm522_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PatriarchComm522_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int, unsigned int, char*))&CRFWorldDatabase::Update_PatriarchComm)
            },
            _hook_record {
                (LPVOID)0x1404c86f0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Player_TimeLimit_Info524_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char))&CRFWorldDatabase::Update_Player_TimeLimit_Info)
            },
            _hook_record {
                (LPVOID)0x1404c75f0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Player_Vote_Info526_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Player_Vote_Info526_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Player_Vote_Info526_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char, char, unsigned int))&CRFWorldDatabase::Update_Player_Vote_Info)
            },
            _hook_record {
                (LPVOID)0x1404b4790L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Post528_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Post528_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Post528_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_Post)
            },
            _hook_record {
                (LPVOID)0x1404b1db0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PostRegistry530_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PostRegistry530_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PostRegistry530_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char*, char*, char*, char*, int, uint64_t, unsigned int, unsigned int, char, char, uint64_t))&CRFWorldDatabase::Update_PostRegistry)
            },
            _hook_record {
                (LPVOID)0x1404b1f20L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PostRegistryDisable532_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PostRegistryDisable532_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PostRegistryDisable532_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_PostRegistryDisable)
            },
            _hook_record {
                (LPVOID)0x1404b2f60L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PostStorageSendToRecver534_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PostStorageSendToRecver534_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PostStorageSendToRecver534_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char, char*, char*, char*, char*, int, uint64_t, unsigned int, unsigned int, char, uint16_t, char*, bool, uint64_t))&CRFWorldDatabase::Update_PostStorageSendToRecver)
            },
            _hook_record {
                (LPVOID)0x1404bee00L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Punishment536_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Punishment536_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Punishment536_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_Punishment)
            },
            _hook_record {
                (LPVOID)0x1404a78d0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PvpPointGuildRankRecord538_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, unsigned int, uint16_t))&CRFWorldDatabase::Update_PvpPointGuildRankRecord)
            },
            _hook_record {
                (LPVOID)0x1404a79b0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PvpPointGuildRankSumLv540_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, char, char, char))&CRFWorldDatabase::Update_PvpPointGuildRankSumLv)
            },
            _hook_record {
                (LPVOID)0x140496ff0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_PvpPointInfo542_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_PvpPointInfo542_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_PvpPointInfo542_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, int16_t*, long double))&CRFWorldDatabase::Update_PvpPointInfo)
            },
            _hook_record {
                (LPVOID)0x1404b4d60L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RFEvent_ClassRefine544_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char, unsigned int))&CRFWorldDatabase::Update_RFEvent_ClassRefine)
            },
            _hook_record {
                (LPVOID)0x14049c120L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceGreet546_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceGreet546_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceGreet546_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(struct _qry_case_race_greetingmsg*))&CRFWorldDatabase::Update_RaceGreet)
            },
            _hook_record {
                (LPVOID)0x1404956e0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank548_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank548_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank548_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank)
            },
            _hook_record {
                (LPVOID)0x1404b4e40L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step1550_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step1550_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step1550_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step1)
            },
            _hook_record {
                (LPVOID)0x1404b51b0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step2552_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step2552_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step2552_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step2)
            },
            _hook_record {
                (LPVOID)0x1404b5570L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step3554_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step3554_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step3554_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step3)
            },
            _hook_record {
                (LPVOID)0x1404b5990L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step4556_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step4556_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step4556_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step4)
            },
            _hook_record {
                (LPVOID)0x1404b5d20L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step5558_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step5558_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step5558_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step5)
            },
            _hook_record {
                (LPVOID)0x1404b6d90L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step6560_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step6560_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step6560_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step6)
            },
            _hook_record {
                (LPVOID)0x1404b6e70L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step7562_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step7562_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step7562_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step7)
            },
            _hook_record {
                (LPVOID)0x1404b70a0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step8564_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step8564_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step8564_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step8)
            },
            _hook_record {
                (LPVOID)0x1404b71f0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step9566_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step9566_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step9566_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step9)
            },
            _hook_record {
                (LPVOID)0x1404b6a30L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step_6_1568_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step_6_1)
            },
            _hook_record {
                (LPVOID)0x1404b6b50L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step_6_2570_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step_6_2)
            },
            _hook_record {
                (LPVOID)0x1404b6c70L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RaceRank_Step_6_3572_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::Update_RaceRank_Step_6_3)
            },
            _hook_record {
                (LPVOID)0x14049cc90L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild574_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild574_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild574_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_rankinguild_info*))&CRFWorldDatabase::Update_RankInGuild)
            },
            _hook_record {
                (LPVOID)0x1404b8070L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step1576_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step1576_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step1576_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_RankInGuild_Step1)
            },
            _hook_record {
                (LPVOID)0x1404b8230L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step2578_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step2578_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step2578_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_RankInGuild_Step2)
            },
            _hook_record {
                (LPVOID)0x1404b8b50L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step3580_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step3580_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step3580_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_RankInGuild_Step3)
            },
            _hook_record {
                (LPVOID)0x1404b8cb0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step4582_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step4582_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step4582_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::Update_RankInGuild_Step4)
            },
            _hook_record {
                (LPVOID)0x1404b8d50L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step5584_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step5584_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step5584_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_rankinguild_info*))&CRFWorldDatabase::Update_RankInGuild_Step5)
            },
            _hook_record {
                (LPVOID)0x1404b9520L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step6586_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step6586_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step6586_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_RankInGuild_Step6)
            },
            _hook_record {
                (LPVOID)0x1404b95d0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step7588_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step7588_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step7588_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_RankInGuild_Step7)
            },
            _hook_record {
                (LPVOID)0x1404b9660L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step8590_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step8590_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step8590_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_RankInGuild_Step8)
            },
            _hook_record {
                (LPVOID)0x1404b96f0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step9592_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_RankInGuild_Step9592_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_RankInGuild_Step9592_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_RankInGuild_Step9)
            },
            _hook_record {
                (LPVOID)0x1404c23d0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_SFDelayInfo594_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_SFDelayInfo594_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_SFDelayInfo594_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _worlddb_sf_delay_info*))&CRFWorldDatabase::Update_SFDelayInfo)
            },
            _hook_record {
                (LPVOID)0x14049ea70L,
                (LPVOID *)&CRFWorldDatabaseUpdate_SetActive596_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_SetActive596_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_SetActive596_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char))&CRFWorldDatabase::Update_SetActive)
            },
            _hook_record {
                (LPVOID)0x14049ae00L,
                (LPVOID *)&CRFWorldDatabaseUpdate_SetGuildMoney598_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_SetGuildMoney598_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_SetGuildMoney598_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double, long double))&CRFWorldDatabase::Update_SetGuildMoney)
            },
            _hook_record {
                (LPVOID)0x1404c8940L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Set_Limit_Run600_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Set_Limit_Run600_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Set_Limit_Run600_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*, int))&CRFWorldDatabase::Update_Set_Limit_Run)
            },
            _hook_record {
                (LPVOID)0x1404c3850L,
                (LPVOID *)&CRFWorldDatabaseUpdate_Start_NpcQuest_History602_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_Start_NpcQuest_History602_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_Start_NpcQuest_History602_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char*, char, char*, int64_t))&CRFWorldDatabase::Update_Start_NpcQuest_History)
            },
            _hook_record {
                (LPVOID)0x1404a0960L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnitData604_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnitData604_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnitData604_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, long double*))&CRFWorldDatabase::Update_UnitData)
            },
            _hook_record {
                (LPVOID)0x1404afbb0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderCheatUpdateRegistDate606_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, unsigned int))&CRFWorldDatabase::Update_UnmannedTraderCheatUpdateRegistDate)
            },
            _hook_record {
                (LPVOID)0x1404ab600L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderClearDanglingOwnerRecord608_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::Update_UnmannedTraderClearDanglingOwnerRecord)
            },
            _hook_record {
                (LPVOID)0x1404ac7d0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderItemState610_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderItemState610_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderItemState610_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, unsigned int, char, struct _SYSTEMTIME*))&CRFWorldDatabase::Update_UnmannedTraderItemState)
            },
            _hook_record {
                (LPVOID)0x1404af990L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderReRegist612_wrapper),
                (LPVOID)cast_pointer_function((char(CRFWorldDatabase::*)(char, unsigned int, char, unsigned int, unsigned int, struct _SYSTEMTIME*))&CRFWorldDatabase::Update_UnmannedTraderReRegist)
            },
            _hook_record {
                (LPVOID)0x1404ae410L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderResutlInfo614_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, unsigned int, char, unsigned int, unsigned int, struct _SYSTEMTIME*))&CRFWorldDatabase::Update_UnmannedTraderResutlInfo)
            },
            _hook_record {
                (LPVOID)0x1404aca80L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderSellInfo616_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _unmannedtrader_registsingleitem*, struct _SYSTEMTIME*))&CRFWorldDatabase::Update_UnmannedTraderSellInfo)
            },
            _hook_record {
                (LPVOID)0x1404ad140L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderSellInfoPrice618_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, unsigned int, unsigned int, unsigned int))&CRFWorldDatabase::Update_UnmannedTraderSellInfoPrice)
            },
            _hook_record {
                (LPVOID)0x1404ac910L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderSingleItemInfo620_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _unmannedtrader_registsingleitem*))&CRFWorldDatabase::Update_UnmannedTraderSingleItemInfo)
            },
            _hook_record {
                (LPVOID)0x1404af3e0L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UnmannedTraderSingleTypeClearUseCompleteRecord622_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, struct _SYSTEMTIME*))&CRFWorldDatabase::Update_UnmannedTraderSingleTypeClearUseCompleteRecord)
            },
            _hook_record {
                (LPVOID)0x14049ab60L,
                (LPVOID *)&CRFWorldDatabaseUpdate_UserGuildData624_user,
                (LPVOID *)&CRFWorldDatabaseUpdate_UserGuildData624_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdate_UserGuildData624_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, unsigned int, char))&CRFWorldDatabase::Update_UserGuildData)
            },
            _hook_record {
                (LPVOID)0x1404c7100L,
                (LPVOID *)&CRFWorldDatabaseUpdatet_Account_Vote_Available626_user,
                (LPVOID *)&CRFWorldDatabaseUpdatet_Account_Vote_Available626_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseUpdatet_Account_Vote_Available626_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, char*))&CRFWorldDatabase::Updatet_Account_Vote_Available)
            },
            _hook_record {
                (LPVOID)0x1404a9d10L,
                (LPVOID *)&CRFWorldDatabasecreate_amine_personal631_user,
                (LPVOID *)&CRFWorldDatabasecreate_amine_personal631_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabasecreate_amine_personal631_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::create_amine_personal)
            },
            _hook_record {
                (LPVOID)0x1404a8760L,
                (LPVOID *)&CRFWorldDatabasecreate_automine_table633_user,
                (LPVOID *)&CRFWorldDatabasecreate_automine_table633_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabasecreate_automine_table633_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::create_automine_table)
            },
            _hook_record {
                (LPVOID)0x1404a98a0L,
                (LPVOID *)&CRFWorldDatabasecreate_sumtotal_dungeon635_user,
                (LPVOID *)&CRFWorldDatabasecreate_sumtotal_dungeon635_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabasecreate_sumtotal_dungeon635_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(int, char**))&CRFWorldDatabase::create_sumtotal_dungeon)
            },
            _hook_record {
                (LPVOID)0x1404a8140L,
                (LPVOID *)&CRFWorldDatabasecreate_table_atrade_taxrate637_user,
                (LPVOID *)&CRFWorldDatabasecreate_table_atrade_taxrate637_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabasecreate_table_atrade_taxrate637_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)())&CRFWorldDatabase::create_table_atrade_taxrate)
            },
            _hook_record {
                (LPVOID)0x1404a9dc0L,
                (LPVOID *)&CRFWorldDatabaseexist_aminpersonal_inven639_user,
                (LPVOID *)&CRFWorldDatabaseexist_aminpersonal_inven639_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseexist_aminpersonal_inven639_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::exist_aminpersonal_inven)
            },
            _hook_record {
                (LPVOID)0x1404a87c0L,
                (LPVOID *)&CRFWorldDatabaseexist_automine641_user,
                (LPVOID *)&CRFWorldDatabaseexist_automine641_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseexist_automine641_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, char))&CRFWorldDatabase::exist_automine)
            },
            _hook_record {
                (LPVOID)0x1404a9280L,
                (LPVOID *)&CRFWorldDatabaseinsert_amine_newowner643_user,
                (LPVOID *)&CRFWorldDatabaseinsert_amine_newowner643_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseinsert_amine_newowner643_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int))&CRFWorldDatabase::insert_amine_newowner)
            },
            _hook_record {
                (LPVOID)0x1404aa7e0L,
                (LPVOID *)&CRFWorldDatabaseinsert_amine_personal645_user,
                (LPVOID *)&CRFWorldDatabaseinsert_amine_personal645_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseinsert_amine_personal645_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::insert_amine_personal)
            },
            _hook_record {
                (LPVOID)0x1404a8650L,
                (LPVOID *)&CRFWorldDatabaseinsert_atrade_taxrate647_user,
                (LPVOID *)&CRFWorldDatabaseinsert_atrade_taxrate647_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseinsert_atrade_taxrate647_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, unsigned int, char*, unsigned int, char*, char, unsigned int))&CRFWorldDatabase::insert_atrade_taxrate)
            },
            _hook_record {
                (LPVOID)0x1404aa090L,
                (LPVOID *)&CRFWorldDatabaseselect_amine_personal649_user,
                (LPVOID *)&CRFWorldDatabaseselect_amine_personal649_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseselect_amine_personal649_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int))&CRFWorldDatabase::select_amine_personal)
            },
            _hook_record {
                (LPVOID)0x1404aa360L,
                (LPVOID *)&CRFWorldDatabaseselect_amine_personal651_user,
                (LPVOID *)&CRFWorldDatabaseselect_amine_personal651_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseselect_amine_personal651_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(unsigned int, struct _personal_amine_inven*))&CRFWorldDatabase::select_amine_personal)
            },
            _hook_record {
                (LPVOID)0x1404a8210L,
                (LPVOID *)&CRFWorldDatabaseselect_atrade_taxrate653_user,
                (LPVOID *)&CRFWorldDatabaseselect_atrade_taxrate653_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseselect_atrade_taxrate653_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(char, char*, char*, char*))&CRFWorldDatabase::select_atrade_taxrate)
            },
            _hook_record {
                (LPVOID)0x1404a8ab0L,
                (LPVOID *)&CRFWorldDatabaseselect_automine655_user,
                (LPVOID *)&CRFWorldDatabaseselect_automine655_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseselect_automine655_wrapper),
                (LPVOID)cast_pointer_function((int(CRFWorldDatabase::*)(struct _DB_LOAD_AUTOMINE_MACHINE*))&CRFWorldDatabase::select_automine)
            },
            _hook_record {
                (LPVOID)0x1404a9360L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_battery657_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_battery657_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_battery657_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int, unsigned int))&CRFWorldDatabase::update_amine_battery)
            },
            _hook_record {
                (LPVOID)0x1404a91a0L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_dck659_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_dck659_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_dck659_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int))&CRFWorldDatabase::update_amine_dck)
            },
            _hook_record {
                (LPVOID)0x1404a9450L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_mineore661_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_mineore661_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_mineore661_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int, char, unsigned int, char, unsigned int))&CRFWorldDatabase::update_amine_mineore)
            },
            _hook_record {
                (LPVOID)0x1404a9570L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_moveore663_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_moveore663_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_moveore663_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int, char, unsigned int, char, char, unsigned int, char))&CRFWorldDatabase::update_amine_moveore)
            },
            _hook_record {
                (LPVOID)0x1404aa8a0L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_personal665_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_personal665_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_personal665_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char*))&CRFWorldDatabase::update_amine_personal)
            },
            _hook_record {
                (LPVOID)0x1404a97b0L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_selore667_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_selore667_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_selore667_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int, char))&CRFWorldDatabase::update_amine_selore)
            },
            _hook_record {
                (LPVOID)0x1404a96c0L,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_workstate669_user,
                (LPVOID *)&CRFWorldDatabaseupdate_amine_workstate669_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_amine_workstate669_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(char, char, unsigned int, bool))&CRFWorldDatabase::update_amine_workstate)
            },
            _hook_record {
                (LPVOID)0x1404c5160L,
                (LPVOID *)&CRFWorldDatabaseupdate_cristalbattle_date671_user,
                (LPVOID *)&CRFWorldDatabaseupdate_cristalbattle_date671_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabaseupdate_cristalbattle_date671_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFWorldDatabase::*)(unsigned int, char))&CRFWorldDatabase::update_cristalbattle_date)
            },
            _hook_record {
                (LPVOID)0x1404896d0L,
                (LPVOID *)&CRFWorldDatabasedtor_CRFWorldDatabase673_user,
                (LPVOID *)&CRFWorldDatabasedtor_CRFWorldDatabase673_next,
                (LPVOID)cast_pointer_function(CRFWorldDatabasedtor_CRFWorldDatabase673_wrapper),
                (LPVOID)cast_pointer_function((void(CRFWorldDatabase::*)())&CRFWorldDatabase::dtor_CRFWorldDatabase)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
