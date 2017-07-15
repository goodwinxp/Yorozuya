#include <CUserRankingProcessDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CUserRankingProcessAllocObject2_ptr CUserRankingProcessAllocObject2_next(nullptr);
        Info::CUserRankingProcessAllocObject2_clbk CUserRankingProcessAllocObject2_user(nullptr);
        
        
        Info::CUserRankingProcessctor_CUserRankingProcess4_ptr CUserRankingProcessctor_CUserRankingProcess4_next(nullptr);
        Info::CUserRankingProcessctor_CUserRankingProcess4_clbk CUserRankingProcessctor_CUserRankingProcess4_user(nullptr);
        
        Info::CUserRankingProcessCheckAndCreateTodayPvpRankTable6_ptr CUserRankingProcessCheckAndCreateTodayPvpRankTable6_next(nullptr);
        Info::CUserRankingProcessCheckAndCreateTodayPvpRankTable6_clbk CUserRankingProcessCheckAndCreateTodayPvpRankTable6_user(nullptr);
        
        Info::CUserRankingProcessCheckTomorrowPvpRankDate8_ptr CUserRankingProcessCheckTomorrowPvpRankDate8_next(nullptr);
        Info::CUserRankingProcessCheckTomorrowPvpRankDate8_clbk CUserRankingProcessCheckTomorrowPvpRankDate8_user(nullptr);
        
        Info::CUserRankingProcessCompleteGuildRankStep110_ptr CUserRankingProcessCompleteGuildRankStep110_next(nullptr);
        Info::CUserRankingProcessCompleteGuildRankStep110_clbk CUserRankingProcessCompleteGuildRankStep110_user(nullptr);
        
        Info::CUserRankingProcessCompleteGuildRankStep212_ptr CUserRankingProcessCompleteGuildRankStep212_next(nullptr);
        Info::CUserRankingProcessCompleteGuildRankStep212_clbk CUserRankingProcessCompleteGuildRankStep212_user(nullptr);
        
        Info::CUserRankingProcessCompleteGuildRankStep314_ptr CUserRankingProcessCompleteGuildRankStep314_next(nullptr);
        Info::CUserRankingProcessCompleteGuildRankStep314_clbk CUserRankingProcessCompleteGuildRankStep314_user(nullptr);
        
        Info::CUserRankingProcessCompleteGuildRankStep416_ptr CUserRankingProcessCompleteGuildRankStep416_next(nullptr);
        Info::CUserRankingProcessCompleteGuildRankStep416_clbk CUserRankingProcessCompleteGuildRankStep416_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep118_ptr CUserRankingProcessCompleteRaceRankStep118_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep118_clbk CUserRankingProcessCompleteRaceRankStep118_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep1020_ptr CUserRankingProcessCompleteRaceRankStep1020_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep1020_clbk CUserRankingProcessCompleteRaceRankStep1020_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep1122_ptr CUserRankingProcessCompleteRaceRankStep1122_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep1122_clbk CUserRankingProcessCompleteRaceRankStep1122_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep224_ptr CUserRankingProcessCompleteRaceRankStep224_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep224_clbk CUserRankingProcessCompleteRaceRankStep224_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep326_ptr CUserRankingProcessCompleteRaceRankStep326_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep326_clbk CUserRankingProcessCompleteRaceRankStep326_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep428_ptr CUserRankingProcessCompleteRaceRankStep428_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep428_clbk CUserRankingProcessCompleteRaceRankStep428_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep530_ptr CUserRankingProcessCompleteRaceRankStep530_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep530_clbk CUserRankingProcessCompleteRaceRankStep530_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep632_ptr CUserRankingProcessCompleteRaceRankStep632_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep632_clbk CUserRankingProcessCompleteRaceRankStep632_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep734_ptr CUserRankingProcessCompleteRaceRankStep734_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep734_clbk CUserRankingProcessCompleteRaceRankStep734_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep836_ptr CUserRankingProcessCompleteRaceRankStep836_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep836_clbk CUserRankingProcessCompleteRaceRankStep836_user(nullptr);
        
        Info::CUserRankingProcessCompleteRaceRankStep938_ptr CUserRankingProcessCompleteRaceRankStep938_next(nullptr);
        Info::CUserRankingProcessCompleteRaceRankStep938_clbk CUserRankingProcessCompleteRaceRankStep938_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankInGuildStep140_ptr CUserRankingProcessCompleteRankInGuildStep140_next(nullptr);
        Info::CUserRankingProcessCompleteRankInGuildStep140_clbk CUserRankingProcessCompleteRankInGuildStep140_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankInGuildStep242_ptr CUserRankingProcessCompleteRankInGuildStep242_next(nullptr);
        Info::CUserRankingProcessCompleteRankInGuildStep242_clbk CUserRankingProcessCompleteRankInGuildStep242_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankInGuildStep344_ptr CUserRankingProcessCompleteRankInGuildStep344_next(nullptr);
        Info::CUserRankingProcessCompleteRankInGuildStep344_clbk CUserRankingProcessCompleteRankInGuildStep344_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankInGuildStep446_ptr CUserRankingProcessCompleteRankInGuildStep446_next(nullptr);
        Info::CUserRankingProcessCompleteRankInGuildStep446_clbk CUserRankingProcessCompleteRankInGuildStep446_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankInGuildStep548_ptr CUserRankingProcessCompleteRankInGuildStep548_next(nullptr);
        Info::CUserRankingProcessCompleteRankInGuildStep548_clbk CUserRankingProcessCompleteRankInGuildStep548_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankInGuildStep650_ptr CUserRankingProcessCompleteRankInGuildStep650_next(nullptr);
        Info::CUserRankingProcessCompleteRankInGuildStep650_clbk CUserRankingProcessCompleteRankInGuildStep650_user(nullptr);
        
        Info::CUserRankingProcessCompleteRankUpdateAndSelectGarde52_ptr CUserRankingProcessCompleteRankUpdateAndSelectGarde52_next(nullptr);
        Info::CUserRankingProcessCompleteRankUpdateAndSelectGarde52_clbk CUserRankingProcessCompleteRankUpdateAndSelectGarde52_user(nullptr);
        
        Info::CUserRankingProcessFindRank54_ptr CUserRankingProcessFindRank54_next(nullptr);
        Info::CUserRankingProcessFindRank54_clbk CUserRankingProcessFindRank54_user(nullptr);
        
        Info::CUserRankingProcessFlipPvPRankTop56_ptr CUserRankingProcessFlipPvPRankTop56_next(nullptr);
        Info::CUserRankingProcessFlipPvPRankTop56_clbk CUserRankingProcessFlipPvPRankTop56_user(nullptr);
        
        Info::CUserRankingProcessGetBossType58_ptr CUserRankingProcessGetBossType58_next(nullptr);
        Info::CUserRankingProcessGetBossType58_clbk CUserRankingProcessGetBossType58_user(nullptr);
        
        Info::CUserRankingProcessGetCurrentPvpRankData60_ptr CUserRankingProcessGetCurrentPvpRankData60_next(nullptr);
        Info::CUserRankingProcessGetCurrentPvpRankData60_clbk CUserRankingProcessGetCurrentPvpRankData60_user(nullptr);
        
        Info::CUserRankingProcessGetCurrentRaceBossSerial62_ptr CUserRankingProcessGetCurrentRaceBossSerial62_next(nullptr);
        Info::CUserRankingProcessGetCurrentRaceBossSerial62_clbk CUserRankingProcessGetCurrentRaceBossSerial62_user(nullptr);
        
        Info::CUserRankingProcessGetRankDateStr64_ptr CUserRankingProcessGetRankDateStr64_next(nullptr);
        Info::CUserRankingProcessGetRankDateStr64_clbk CUserRankingProcessGetRankDateStr64_user(nullptr);
        
        Info::CUserRankingProcessGetTommorrowStr66_ptr CUserRankingProcessGetTommorrowStr66_next(nullptr);
        Info::CUserRankingProcessGetTommorrowStr66_clbk CUserRankingProcessGetTommorrowStr66_user(nullptr);
        
        Info::CUserRankingProcessIncreaseVesion68_ptr CUserRankingProcessIncreaseVesion68_next(nullptr);
        Info::CUserRankingProcessIncreaseVesion68_clbk CUserRankingProcessIncreaseVesion68_user(nullptr);
        
        Info::CUserRankingProcessInit70_ptr CUserRankingProcessInit70_next(nullptr);
        Info::CUserRankingProcessInit70_clbk CUserRankingProcessInit70_user(nullptr);
        
        Info::CUserRankingProcessInitProcFunc72_ptr CUserRankingProcessInitProcFunc72_next(nullptr);
        Info::CUserRankingProcessInitProcFunc72_clbk CUserRankingProcessInitProcFunc72_user(nullptr);
        
        Info::CUserRankingProcessIsCurrentRaceBossGroup74_ptr CUserRankingProcessIsCurrentRaceBossGroup74_next(nullptr);
        Info::CUserRankingProcessIsCurrentRaceBossGroup74_clbk CUserRankingProcessIsCurrentRaceBossGroup74_user(nullptr);
        
        Info::CUserRankingProcessIsRaceViceBoss76_ptr CUserRankingProcessIsRaceViceBoss76_next(nullptr);
        Info::CUserRankingProcessIsRaceViceBoss76_clbk CUserRankingProcessIsRaceViceBoss76_user(nullptr);
        
        Info::CUserRankingProcessLoad78_ptr CUserRankingProcessLoad78_next(nullptr);
        Info::CUserRankingProcessLoad78_clbk CUserRankingProcessLoad78_user(nullptr);
        
        Info::CUserRankingProcessLoadINI80_ptr CUserRankingProcessLoadINI80_next(nullptr);
        Info::CUserRankingProcessLoadINI80_clbk CUserRankingProcessLoadINI80_user(nullptr);
        
        Info::CUserRankingProcessLoop82_ptr CUserRankingProcessLoop82_next(nullptr);
        Info::CUserRankingProcessLoop82_clbk CUserRankingProcessLoop82_user(nullptr);
        
        Info::CUserRankingProcessProcApplyGuildGrade84_ptr CUserRankingProcessProcApplyGuildGrade84_next(nullptr);
        Info::CUserRankingProcessProcApplyGuildGrade84_clbk CUserRankingProcessProcApplyGuildGrade84_user(nullptr);
        
        Info::CUserRankingProcessProcApplyRankInGuild86_ptr CUserRankingProcessProcApplyRankInGuild86_next(nullptr);
        Info::CUserRankingProcessProcApplyRankInGuild86_clbk CUserRankingProcessProcApplyRankInGuild86_user(nullptr);
        
        Info::CUserRankingProcessProcFailedWait88_ptr CUserRankingProcessProcFailedWait88_next(nullptr);
        Info::CUserRankingProcessProcFailedWait88_clbk CUserRankingProcessProcFailedWait88_user(nullptr);
        
        Info::CUserRankingProcessProcNotifyVersionUp90_ptr CUserRankingProcessProcNotifyVersionUp90_next(nullptr);
        Info::CUserRankingProcessProcNotifyVersionUp90_clbk CUserRankingProcessProcNotifyVersionUp90_user(nullptr);
        
        Info::CUserRankingProcessProcRankComplete92_ptr CUserRankingProcessProcRankComplete92_next(nullptr);
        Info::CUserRankingProcessProcRankComplete92_clbk CUserRankingProcessProcRankComplete92_user(nullptr);
        
        Info::CUserRankingProcessProcRankStart94_ptr CUserRankingProcessProcRankStart94_next(nullptr);
        Info::CUserRankingProcessProcRankStart94_clbk CUserRankingProcessProcRankStart94_user(nullptr);
        
        Info::CUserRankingProcessProcRankSuccess96_ptr CUserRankingProcessProcRankSuccess96_next(nullptr);
        Info::CUserRankingProcessProcRankSuccess96_clbk CUserRankingProcessProcRankSuccess96_user(nullptr);
        
        Info::CUserRankingProcessProcSaveTargetList98_ptr CUserRankingProcessProcSaveTargetList98_next(nullptr);
        Info::CUserRankingProcessProcSaveTargetList98_clbk CUserRankingProcessProcSaveTargetList98_user(nullptr);
        
        Info::CUserRankingProcessProcWait100_ptr CUserRankingProcessProcWait100_next(nullptr);
        Info::CUserRankingProcessProcWait100_clbk CUserRankingProcessProcWait100_user(nullptr);
        
        Info::CUserRankingProcessProcWaitDayChanged102_ptr CUserRankingProcessProcWaitDayChanged102_next(nullptr);
        Info::CUserRankingProcessProcWaitDayChanged102_clbk CUserRankingProcessProcWaitDayChanged102_user(nullptr);
        
        Info::CUserRankingProcessPvpRankDataPacking104_ptr CUserRankingProcessPvpRankDataPacking104_next(nullptr);
        Info::CUserRankingProcessPvpRankDataPacking104_clbk CUserRankingProcessPvpRankDataPacking104_user(nullptr);
        
        Info::CUserRankingProcessPvpRankListRequest106_ptr CUserRankingProcessPvpRankListRequest106_next(nullptr);
        Info::CUserRankingProcessPvpRankListRequest106_clbk CUserRankingProcessPvpRankListRequest106_user(nullptr);
        
        Info::CUserRankingProcessSetCurrentRaceBossSerial108_ptr CUserRankingProcessSetCurrentRaceBossSerial108_next(nullptr);
        Info::CUserRankingProcessSetCurrentRaceBossSerial108_clbk CUserRankingProcessSetCurrentRaceBossSerial108_user(nullptr);
        
        Info::CUserRankingProcessSetLogger110_ptr CUserRankingProcessSetLogger110_next(nullptr);
        Info::CUserRankingProcessSetLogger110_clbk CUserRankingProcessSetLogger110_user(nullptr);
        
        Info::CUserRankingProcessSetRankingStartTime112_ptr CUserRankingProcessSetRankingStartTime112_next(nullptr);
        Info::CUserRankingProcessSetRankingStartTime112_clbk CUserRankingProcessSetRankingStartTime112_user(nullptr);
        
        Info::CUserRankingProcessSetUpdateRaceBossSerial114_ptr CUserRankingProcessSetUpdateRaceBossSerial114_next(nullptr);
        Info::CUserRankingProcessSetUpdateRaceBossSerial114_clbk CUserRankingProcessSetUpdateRaceBossSerial114_user(nullptr);
        
        Info::CUserRankingProcessUpdateAndSelectGuildGrade116_ptr CUserRankingProcessUpdateAndSelectGuildGrade116_next(nullptr);
        Info::CUserRankingProcessUpdateAndSelectGuildGrade116_clbk CUserRankingProcessUpdateAndSelectGuildGrade116_user(nullptr);
        
        Info::CUserRankingProcessUpdateGuildRankStep1118_ptr CUserRankingProcessUpdateGuildRankStep1118_next(nullptr);
        Info::CUserRankingProcessUpdateGuildRankStep1118_clbk CUserRankingProcessUpdateGuildRankStep1118_user(nullptr);
        
        Info::CUserRankingProcessUpdateGuildRankStep2120_ptr CUserRankingProcessUpdateGuildRankStep2120_next(nullptr);
        Info::CUserRankingProcessUpdateGuildRankStep2120_clbk CUserRankingProcessUpdateGuildRankStep2120_user(nullptr);
        
        Info::CUserRankingProcessUpdateGuildRankStep3122_ptr CUserRankingProcessUpdateGuildRankStep3122_next(nullptr);
        Info::CUserRankingProcessUpdateGuildRankStep3122_clbk CUserRankingProcessUpdateGuildRankStep3122_user(nullptr);
        
        Info::CUserRankingProcessUpdateGuildRankStep4124_ptr CUserRankingProcessUpdateGuildRankStep4124_next(nullptr);
        Info::CUserRankingProcessUpdateGuildRankStep4124_clbk CUserRankingProcessUpdateGuildRankStep4124_user(nullptr);
        
        Info::CUserRankingProcessUpdateNextRankingStartTime126_ptr CUserRankingProcessUpdateNextRankingStartTime126_next(nullptr);
        Info::CUserRankingProcessUpdateNextRankingStartTime126_clbk CUserRankingProcessUpdateNextRankingStartTime126_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep1128_ptr CUserRankingProcessUpdateRaceRankStep1128_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep1128_clbk CUserRankingProcessUpdateRaceRankStep1128_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep10130_ptr CUserRankingProcessUpdateRaceRankStep10130_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep10130_clbk CUserRankingProcessUpdateRaceRankStep10130_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep11132_ptr CUserRankingProcessUpdateRaceRankStep11132_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep11132_clbk CUserRankingProcessUpdateRaceRankStep11132_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep2134_ptr CUserRankingProcessUpdateRaceRankStep2134_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep2134_clbk CUserRankingProcessUpdateRaceRankStep2134_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep3136_ptr CUserRankingProcessUpdateRaceRankStep3136_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep3136_clbk CUserRankingProcessUpdateRaceRankStep3136_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep4138_ptr CUserRankingProcessUpdateRaceRankStep4138_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep4138_clbk CUserRankingProcessUpdateRaceRankStep4138_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep5140_ptr CUserRankingProcessUpdateRaceRankStep5140_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep5140_clbk CUserRankingProcessUpdateRaceRankStep5140_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep6142_ptr CUserRankingProcessUpdateRaceRankStep6142_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep6142_clbk CUserRankingProcessUpdateRaceRankStep6142_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep7144_ptr CUserRankingProcessUpdateRaceRankStep7144_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep7144_clbk CUserRankingProcessUpdateRaceRankStep7144_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep8146_ptr CUserRankingProcessUpdateRaceRankStep8146_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep8146_clbk CUserRankingProcessUpdateRaceRankStep8146_user(nullptr);
        
        Info::CUserRankingProcessUpdateRaceRankStep9148_ptr CUserRankingProcessUpdateRaceRankStep9148_next(nullptr);
        Info::CUserRankingProcessUpdateRaceRankStep9148_clbk CUserRankingProcessUpdateRaceRankStep9148_user(nullptr);
        
        Info::CUserRankingProcessUpdateRankinGuildStep1150_ptr CUserRankingProcessUpdateRankinGuildStep1150_next(nullptr);
        Info::CUserRankingProcessUpdateRankinGuildStep1150_clbk CUserRankingProcessUpdateRankinGuildStep1150_user(nullptr);
        
        Info::CUserRankingProcessUpdateRankinGuildStep2152_ptr CUserRankingProcessUpdateRankinGuildStep2152_next(nullptr);
        Info::CUserRankingProcessUpdateRankinGuildStep2152_clbk CUserRankingProcessUpdateRankinGuildStep2152_user(nullptr);
        
        Info::CUserRankingProcessUpdateRankinGuildStep3154_ptr CUserRankingProcessUpdateRankinGuildStep3154_next(nullptr);
        Info::CUserRankingProcessUpdateRankinGuildStep3154_clbk CUserRankingProcessUpdateRankinGuildStep3154_user(nullptr);
        
        Info::CUserRankingProcessUpdateRankinGuildStep4156_ptr CUserRankingProcessUpdateRankinGuildStep4156_next(nullptr);
        Info::CUserRankingProcessUpdateRankinGuildStep4156_clbk CUserRankingProcessUpdateRankinGuildStep4156_user(nullptr);
        
        Info::CUserRankingProcessUpdateRankinGuildStep5158_ptr CUserRankingProcessUpdateRankinGuildStep5158_next(nullptr);
        Info::CUserRankingProcessUpdateRankinGuildStep5158_clbk CUserRankingProcessUpdateRankinGuildStep5158_user(nullptr);
        
        Info::CUserRankingProcessUpdateRankinGuildStep6160_ptr CUserRankingProcessUpdateRankinGuildStep6160_next(nullptr);
        Info::CUserRankingProcessUpdateRankinGuildStep6160_clbk CUserRankingProcessUpdateRankinGuildStep6160_user(nullptr);
        
        
        Info::CUserRankingProcessdtor_CUserRankingProcess162_ptr CUserRankingProcessdtor_CUserRankingProcess162_next(nullptr);
        Info::CUserRankingProcessdtor_CUserRankingProcess162_clbk CUserRankingProcessdtor_CUserRankingProcess162_user(nullptr);
        
        bool CUserRankingProcessAllocObject2_wrapper(struct CUserRankingProcess* _this)
        {
           return CUserRankingProcessAllocObject2_user(_this, CUserRankingProcessAllocObject2_next);
        };
        
        void CUserRankingProcessctor_CUserRankingProcess4_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessctor_CUserRankingProcess4_user(_this, CUserRankingProcessctor_CUserRankingProcess4_next);
        };
        bool CUserRankingProcessCheckAndCreateTodayPvpRankTable6_wrapper(struct CUserRankingProcess* _this, char* szDate)
        {
           return CUserRankingProcessCheckAndCreateTodayPvpRankTable6_user(_this, szDate, CUserRankingProcessCheckAndCreateTodayPvpRankTable6_next);
        };
        void CUserRankingProcessCheckTomorrowPvpRankDate8_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessCheckTomorrowPvpRankDate8_user(_this, CUserRankingProcessCheckTomorrowPvpRankDate8_next);
        };
        void CUserRankingProcessCompleteGuildRankStep110_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteGuildRankStep110_user(_this, byRet, szData, CUserRankingProcessCompleteGuildRankStep110_next);
        };
        void CUserRankingProcessCompleteGuildRankStep212_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteGuildRankStep212_user(_this, byRet, szData, CUserRankingProcessCompleteGuildRankStep212_next);
        };
        void CUserRankingProcessCompleteGuildRankStep314_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteGuildRankStep314_user(_this, byRet, szData, CUserRankingProcessCompleteGuildRankStep314_next);
        };
        void CUserRankingProcessCompleteGuildRankStep416_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteGuildRankStep416_user(_this, byRet, szData, CUserRankingProcessCompleteGuildRankStep416_next);
        };
        void CUserRankingProcessCompleteRaceRankStep118_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep118_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep118_next);
        };
        void CUserRankingProcessCompleteRaceRankStep1020_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep1020_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep1020_next);
        };
        void CUserRankingProcessCompleteRaceRankStep1122_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep1122_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep1122_next);
        };
        void CUserRankingProcessCompleteRaceRankStep224_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep224_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep224_next);
        };
        void CUserRankingProcessCompleteRaceRankStep326_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep326_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep326_next);
        };
        void CUserRankingProcessCompleteRaceRankStep428_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep428_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep428_next);
        };
        void CUserRankingProcessCompleteRaceRankStep530_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep530_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep530_next);
        };
        void CUserRankingProcessCompleteRaceRankStep632_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep632_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep632_next);
        };
        void CUserRankingProcessCompleteRaceRankStep734_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep734_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep734_next);
        };
        void CUserRankingProcessCompleteRaceRankStep836_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep836_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep836_next);
        };
        void CUserRankingProcessCompleteRaceRankStep938_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRaceRankStep938_user(_this, byRet, szData, CUserRankingProcessCompleteRaceRankStep938_next);
        };
        void CUserRankingProcessCompleteRankInGuildStep140_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankInGuildStep140_user(_this, byRet, szData, CUserRankingProcessCompleteRankInGuildStep140_next);
        };
        void CUserRankingProcessCompleteRankInGuildStep242_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankInGuildStep242_user(_this, byRet, szData, CUserRankingProcessCompleteRankInGuildStep242_next);
        };
        void CUserRankingProcessCompleteRankInGuildStep344_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankInGuildStep344_user(_this, byRet, szData, CUserRankingProcessCompleteRankInGuildStep344_next);
        };
        void CUserRankingProcessCompleteRankInGuildStep446_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankInGuildStep446_user(_this, byRet, szData, CUserRankingProcessCompleteRankInGuildStep446_next);
        };
        void CUserRankingProcessCompleteRankInGuildStep548_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankInGuildStep548_user(_this, byRet, szData, CUserRankingProcessCompleteRankInGuildStep548_next);
        };
        void CUserRankingProcessCompleteRankInGuildStep650_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankInGuildStep650_user(_this, byRet, szData, CUserRankingProcessCompleteRankInGuildStep650_next);
        };
        void CUserRankingProcessCompleteRankUpdateAndSelectGarde52_wrapper(struct CUserRankingProcess* _this, char byRet, char* szData)
        {
           CUserRankingProcessCompleteRankUpdateAndSelectGarde52_user(_this, byRet, szData, CUserRankingProcessCompleteRankUpdateAndSelectGarde52_next);
        };
        unsigned int CUserRankingProcessFindRank54_wrapper(struct CUserRankingProcess* _this, char byRaceCode, unsigned int dwAvatorSerial)
        {
           return CUserRankingProcessFindRank54_user(_this, byRaceCode, dwAvatorSerial, CUserRankingProcessFindRank54_next);
        };
        void CUserRankingProcessFlipPvPRankTop56_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessFlipPvPRankTop56_user(_this, CUserRankingProcessFlipPvPRankTop56_next);
        };
        char CUserRankingProcessGetBossType58_wrapper(struct CUserRankingProcess* _this, char byRace, unsigned int dwSerial)
        {
           return CUserRankingProcessGetBossType58_user(_this, byRace, dwSerial, CUserRankingProcessGetBossType58_next);
        };
        struct _PVP_RANK_DATA* CUserRankingProcessGetCurrentPvpRankData60_wrapper(struct CUserRankingProcess* _this, char byRace, char byNth)
        {
           return CUserRankingProcessGetCurrentPvpRankData60_user(_this, byRace, byNth, CUserRankingProcessGetCurrentPvpRankData60_next);
        };
        unsigned int CUserRankingProcessGetCurrentRaceBossSerial62_wrapper(struct CUserRankingProcess* _this, char byRace, char byNth)
        {
           return CUserRankingProcessGetCurrentRaceBossSerial62_user(_this, byRace, byNth, CUserRankingProcessGetCurrentRaceBossSerial62_next);
        };
        void CUserRankingProcessGetRankDateStr64_wrapper(struct CUserRankingProcess* _this, char* szDate, uint64_t tDateStrSize)
        {
           CUserRankingProcessGetRankDateStr64_user(_this, szDate, tDateStrSize, CUserRankingProcessGetRankDateStr64_next);
        };
        void CUserRankingProcessGetTommorrowStr66_wrapper(struct CUserRankingProcess* _this, char* szTommorrow)
        {
           CUserRankingProcessGetTommorrowStr66_user(_this, szTommorrow, CUserRankingProcessGetTommorrowStr66_next);
        };
        void CUserRankingProcessIncreaseVesion68_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessIncreaseVesion68_user(_this, CUserRankingProcessIncreaseVesion68_next);
        };
        bool CUserRankingProcessInit70_wrapper(struct CUserRankingProcess* _this)
        {
           return CUserRankingProcessInit70_user(_this, CUserRankingProcessInit70_next);
        };
        bool CUserRankingProcessInitProcFunc72_wrapper(struct CUserRankingProcess* _this)
        {
           return CUserRankingProcessInitProcFunc72_user(_this, CUserRankingProcessInitProcFunc72_next);
        };
        bool CUserRankingProcessIsCurrentRaceBossGroup74_wrapper(struct CUserRankingProcess* _this, char byRace, unsigned int dwSerial)
        {
           return CUserRankingProcessIsCurrentRaceBossGroup74_user(_this, byRace, dwSerial, CUserRankingProcessIsCurrentRaceBossGroup74_next);
        };
        bool CUserRankingProcessIsRaceViceBoss76_wrapper(struct CUserRankingProcess* _this, char byRace, unsigned int dwSerial)
        {
           return CUserRankingProcessIsRaceViceBoss76_user(_this, byRace, dwSerial, CUserRankingProcessIsRaceViceBoss76_next);
        };
        bool CUserRankingProcessLoad78_wrapper(struct CUserRankingProcess* _this)
        {
           return CUserRankingProcessLoad78_user(_this, CUserRankingProcessLoad78_next);
        };
        void CUserRankingProcessLoadINI80_wrapper(struct CUserRankingProcess* _this, int* piHour, int* piMin)
        {
           CUserRankingProcessLoadINI80_user(_this, piHour, piMin, CUserRankingProcessLoadINI80_next);
        };
        void CUserRankingProcessLoop82_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessLoop82_user(_this, CUserRankingProcessLoop82_next);
        };
        void CUserRankingProcessProcApplyGuildGrade84_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcApplyGuildGrade84_user(_this, CUserRankingProcessProcApplyGuildGrade84_next);
        };
        void CUserRankingProcessProcApplyRankInGuild86_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcApplyRankInGuild86_user(_this, CUserRankingProcessProcApplyRankInGuild86_next);
        };
        void CUserRankingProcessProcFailedWait88_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcFailedWait88_user(_this, CUserRankingProcessProcFailedWait88_next);
        };
        void CUserRankingProcessProcNotifyVersionUp90_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcNotifyVersionUp90_user(_this, CUserRankingProcessProcNotifyVersionUp90_next);
        };
        void CUserRankingProcessProcRankComplete92_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcRankComplete92_user(_this, CUserRankingProcessProcRankComplete92_next);
        };
        void CUserRankingProcessProcRankStart94_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcRankStart94_user(_this, CUserRankingProcessProcRankStart94_next);
        };
        void CUserRankingProcessProcRankSuccess96_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcRankSuccess96_user(_this, CUserRankingProcessProcRankSuccess96_next);
        };
        void CUserRankingProcessProcSaveTargetList98_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcSaveTargetList98_user(_this, CUserRankingProcessProcSaveTargetList98_next);
        };
        void CUserRankingProcessProcWait100_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcWait100_user(_this, CUserRankingProcessProcWait100_next);
        };
        void CUserRankingProcessProcWaitDayChanged102_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessProcWaitDayChanged102_user(_this, CUserRankingProcessProcWaitDayChanged102_next);
        };
        void CUserRankingProcessPvpRankDataPacking104_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessPvpRankDataPacking104_user(_this, CUserRankingProcessPvpRankDataPacking104_next);
        };
        void CUserRankingProcessPvpRankListRequest106_wrapper(struct CUserRankingProcess* _this, uint16_t wIndex, char byRace, char byVersion, char byPage)
        {
           CUserRankingProcessPvpRankListRequest106_user(_this, wIndex, byRace, byVersion, byPage, CUserRankingProcessPvpRankListRequest106_next);
        };
        void CUserRankingProcessSetCurrentRaceBossSerial108_wrapper(struct CUserRankingProcess* _this, char byRace, char byNth, unsigned int dwSerial)
        {
           CUserRankingProcessSetCurrentRaceBossSerial108_user(_this, byRace, byNth, dwSerial, CUserRankingProcessSetCurrentRaceBossSerial108_next);
        };
        void CUserRankingProcessSetLogger110_wrapper(struct CUserRankingProcess* _this, struct CLogFile* pkLogger)
        {
           CUserRankingProcessSetLogger110_user(_this, pkLogger, CUserRankingProcessSetLogger110_next);
        };
        bool CUserRankingProcessSetRankingStartTime112_wrapper(struct CUserRankingProcess* _this, int iHour, int iMin)
        {
           return CUserRankingProcessSetRankingStartTime112_user(_this, iHour, iMin, CUserRankingProcessSetRankingStartTime112_next);
        };
        void CUserRankingProcessSetUpdateRaceBossSerial114_wrapper(struct CUserRankingProcess* _this, char byRace, char byNth, unsigned int dwSerial)
        {
           CUserRankingProcessSetUpdateRaceBossSerial114_user(_this, byRace, byNth, dwSerial, CUserRankingProcessSetUpdateRaceBossSerial114_next);
        };
        char CUserRankingProcessUpdateAndSelectGuildGrade116_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateAndSelectGuildGrade116_user(_this, szData, CUserRankingProcessUpdateAndSelectGuildGrade116_next);
        };
        char CUserRankingProcessUpdateGuildRankStep1118_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateGuildRankStep1118_user(_this, szData, CUserRankingProcessUpdateGuildRankStep1118_next);
        };
        char CUserRankingProcessUpdateGuildRankStep2120_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateGuildRankStep2120_user(_this, szData, CUserRankingProcessUpdateGuildRankStep2120_next);
        };
        char CUserRankingProcessUpdateGuildRankStep3122_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateGuildRankStep3122_user(_this, szData, CUserRankingProcessUpdateGuildRankStep3122_next);
        };
        char CUserRankingProcessUpdateGuildRankStep4124_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateGuildRankStep4124_user(_this, szData, CUserRankingProcessUpdateGuildRankStep4124_next);
        };
        void CUserRankingProcessUpdateNextRankingStartTime126_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessUpdateNextRankingStartTime126_user(_this, CUserRankingProcessUpdateNextRankingStartTime126_next);
        };
        char CUserRankingProcessUpdateRaceRankStep1128_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep1128_user(_this, szData, CUserRankingProcessUpdateRaceRankStep1128_next);
        };
        char CUserRankingProcessUpdateRaceRankStep10130_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep10130_user(_this, szData, CUserRankingProcessUpdateRaceRankStep10130_next);
        };
        char CUserRankingProcessUpdateRaceRankStep11132_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep11132_user(_this, szData, CUserRankingProcessUpdateRaceRankStep11132_next);
        };
        char CUserRankingProcessUpdateRaceRankStep2134_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep2134_user(_this, szData, CUserRankingProcessUpdateRaceRankStep2134_next);
        };
        char CUserRankingProcessUpdateRaceRankStep3136_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep3136_user(_this, szData, CUserRankingProcessUpdateRaceRankStep3136_next);
        };
        char CUserRankingProcessUpdateRaceRankStep4138_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep4138_user(_this, szData, CUserRankingProcessUpdateRaceRankStep4138_next);
        };
        char CUserRankingProcessUpdateRaceRankStep5140_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep5140_user(_this, szData, CUserRankingProcessUpdateRaceRankStep5140_next);
        };
        char CUserRankingProcessUpdateRaceRankStep6142_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep6142_user(_this, szData, CUserRankingProcessUpdateRaceRankStep6142_next);
        };
        char CUserRankingProcessUpdateRaceRankStep7144_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep7144_user(_this, szData, CUserRankingProcessUpdateRaceRankStep7144_next);
        };
        char CUserRankingProcessUpdateRaceRankStep8146_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep8146_user(_this, szData, CUserRankingProcessUpdateRaceRankStep8146_next);
        };
        char CUserRankingProcessUpdateRaceRankStep9148_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRaceRankStep9148_user(_this, szData, CUserRankingProcessUpdateRaceRankStep9148_next);
        };
        char CUserRankingProcessUpdateRankinGuildStep1150_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRankinGuildStep1150_user(_this, szData, CUserRankingProcessUpdateRankinGuildStep1150_next);
        };
        char CUserRankingProcessUpdateRankinGuildStep2152_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRankinGuildStep2152_user(_this, szData, CUserRankingProcessUpdateRankinGuildStep2152_next);
        };
        char CUserRankingProcessUpdateRankinGuildStep3154_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRankinGuildStep3154_user(_this, szData, CUserRankingProcessUpdateRankinGuildStep3154_next);
        };
        char CUserRankingProcessUpdateRankinGuildStep4156_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRankinGuildStep4156_user(_this, szData, CUserRankingProcessUpdateRankinGuildStep4156_next);
        };
        char CUserRankingProcessUpdateRankinGuildStep5158_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRankinGuildStep5158_user(_this, szData, CUserRankingProcessUpdateRankinGuildStep5158_next);
        };
        char CUserRankingProcessUpdateRankinGuildStep6160_wrapper(struct CUserRankingProcess* _this, char* szData)
        {
           return CUserRankingProcessUpdateRankinGuildStep6160_user(_this, szData, CUserRankingProcessUpdateRankinGuildStep6160_next);
        };
        
        void CUserRankingProcessdtor_CUserRankingProcess162_wrapper(struct CUserRankingProcess* _this)
        {
           CUserRankingProcessdtor_CUserRankingProcess162_user(_this, CUserRankingProcessdtor_CUserRankingProcess162_next);
        };
        
        ::std::array<hook_record, 81> CUserRankingProcess_functions = 
        {
            _hook_record {
                (LPVOID)0x140342480L,
                (LPVOID *)&CUserRankingProcessAllocObject2_user,
                (LPVOID *)&CUserRankingProcessAllocObject2_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessAllocObject2_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)())&CUserRankingProcess::AllocObject)
            },
            _hook_record {
                (LPVOID)0x140340470L,
                (LPVOID *)&CUserRankingProcessctor_CUserRankingProcess4_user,
                (LPVOID *)&CUserRankingProcessctor_CUserRankingProcess4_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessctor_CUserRankingProcess4_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ctor_CUserRankingProcess)
            },
            _hook_record {
                (LPVOID)0x1403426f0L,
                (LPVOID *)&CUserRankingProcessCheckAndCreateTodayPvpRankTable6_user,
                (LPVOID *)&CUserRankingProcessCheckAndCreateTodayPvpRankTable6_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCheckAndCreateTodayPvpRankTable6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)(char*))&CUserRankingProcess::CheckAndCreateTodayPvpRankTable)
            },
            _hook_record {
                (LPVOID)0x1403429c0L,
                (LPVOID *)&CUserRankingProcessCheckTomorrowPvpRankDate8_user,
                (LPVOID *)&CUserRankingProcessCheckTomorrowPvpRankDate8_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCheckTomorrowPvpRankDate8_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::CheckTomorrowPvpRankDate)
            },
            _hook_record {
                (LPVOID)0x140341430L,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep110_user,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep110_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteGuildRankStep110_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteGuildRankStep1)
            },
            _hook_record {
                (LPVOID)0x140341530L,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep212_user,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep212_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteGuildRankStep212_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteGuildRankStep2)
            },
            _hook_record {
                (LPVOID)0x140341630L,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep314_user,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep314_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteGuildRankStep314_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteGuildRankStep3)
            },
            _hook_record {
                (LPVOID)0x140341740L,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep416_user,
                (LPVOID *)&CUserRankingProcessCompleteGuildRankStep416_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteGuildRankStep416_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteGuildRankStep4)
            },
            _hook_record {
                (LPVOID)0x140340930L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep118_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep118_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep118_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep1)
            },
            _hook_record {
                (LPVOID)0x140341220L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep1020_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep1020_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep1020_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep10)
            },
            _hook_record {
                (LPVOID)0x140341320L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep1122_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep1122_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep1122_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep11)
            },
            _hook_record {
                (LPVOID)0x140340a30L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep224_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep224_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep224_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep2)
            },
            _hook_record {
                (LPVOID)0x140340b30L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep326_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep326_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep326_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep3)
            },
            _hook_record {
                (LPVOID)0x140340c30L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep428_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep428_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep428_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep4)
            },
            _hook_record {
                (LPVOID)0x140340d30L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep530_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep530_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep530_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep5)
            },
            _hook_record {
                (LPVOID)0x140340e30L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep632_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep632_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep632_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep6)
            },
            _hook_record {
                (LPVOID)0x140340f30L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep734_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep734_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep734_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep7)
            },
            _hook_record {
                (LPVOID)0x140341030L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep836_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep836_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep836_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep8)
            },
            _hook_record {
                (LPVOID)0x140341120L,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep938_user,
                (LPVOID *)&CUserRankingProcessCompleteRaceRankStep938_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRaceRankStep938_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRaceRankStep9)
            },
            _hook_record {
                (LPVOID)0x1403418a0L,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep140_user,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep140_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankInGuildStep140_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankInGuildStep1)
            },
            _hook_record {
                (LPVOID)0x140341a20L,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep242_user,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep242_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankInGuildStep242_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankInGuildStep2)
            },
            _hook_record {
                (LPVOID)0x140341ba0L,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep344_user,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep344_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankInGuildStep344_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankInGuildStep3)
            },
            _hook_record {
                (LPVOID)0x140341d20L,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep446_user,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep446_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankInGuildStep446_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankInGuildStep4)
            },
            _hook_record {
                (LPVOID)0x140341ea0L,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep548_user,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep548_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankInGuildStep548_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankInGuildStep5)
            },
            _hook_record {
                (LPVOID)0x140342020L,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep650_user,
                (LPVOID *)&CUserRankingProcessCompleteRankInGuildStep650_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankInGuildStep650_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankInGuildStep6)
            },
            _hook_record {
                (LPVOID)0x140342170L,
                (LPVOID *)&CUserRankingProcessCompleteRankUpdateAndSelectGarde52_user,
                (LPVOID *)&CUserRankingProcessCompleteRankUpdateAndSelectGarde52_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessCompleteRankUpdateAndSelectGarde52_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char*))&CUserRankingProcess::CompleteRankUpdateAndSelectGarde)
            },
            _hook_record {
                (LPVOID)0x1402b7fb0L,
                (LPVOID *)&CUserRankingProcessFindRank54_user,
                (LPVOID *)&CUserRankingProcessFindRank54_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessFindRank54_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUserRankingProcess::*)(char, unsigned int))&CUserRankingProcess::FindRank)
            },
            _hook_record {
                (LPVOID)0x1402b9aa0L,
                (LPVOID *)&CUserRankingProcessFlipPvPRankTop56_user,
                (LPVOID *)&CUserRankingProcessFlipPvPRankTop56_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessFlipPvPRankTop56_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::FlipPvPRankTop)
            },
            _hook_record {
                (LPVOID)0x140079c70L,
                (LPVOID *)&CUserRankingProcessGetBossType58_user,
                (LPVOID *)&CUserRankingProcessGetBossType58_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessGetBossType58_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char, unsigned int))&CUserRankingProcess::GetBossType)
            },
            _hook_record {
                (LPVOID)0x140284c40L,
                (LPVOID *)&CUserRankingProcessGetCurrentPvpRankData60_user,
                (LPVOID *)&CUserRankingProcessGetCurrentPvpRankData60_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessGetCurrentPvpRankData60_wrapper),
                (LPVOID)cast_pointer_function((struct _PVP_RANK_DATA*(CUserRankingProcess::*)(char, char))&CUserRankingProcess::GetCurrentPvpRankData)
            },
            _hook_record {
                (LPVOID)0x140079b30L,
                (LPVOID *)&CUserRankingProcessGetCurrentRaceBossSerial62_user,
                (LPVOID *)&CUserRankingProcessGetCurrentRaceBossSerial62_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessGetCurrentRaceBossSerial62_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUserRankingProcess::*)(char, char))&CUserRankingProcess::GetCurrentRaceBossSerial)
            },
            _hook_record {
                (LPVOID)0x1403426a0L,
                (LPVOID *)&CUserRankingProcessGetRankDateStr64_user,
                (LPVOID *)&CUserRankingProcessGetRankDateStr64_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessGetRankDateStr64_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char*, uint64_t))&CUserRankingProcess::GetRankDateStr)
            },
            _hook_record {
                (LPVOID)0x140342800L,
                (LPVOID *)&CUserRankingProcessGetTommorrowStr66_user,
                (LPVOID *)&CUserRankingProcessGetTommorrowStr66_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessGetTommorrowStr66_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char*))&CUserRankingProcess::GetTommorrowStr)
            },
            _hook_record {
                (LPVOID)0x1402b9af0L,
                (LPVOID *)&CUserRankingProcessIncreaseVesion68_user,
                (LPVOID *)&CUserRankingProcessIncreaseVesion68_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessIncreaseVesion68_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::IncreaseVesion)
            },
            _hook_record {
                (LPVOID)0x1403405e0L,
                (LPVOID *)&CUserRankingProcessInit70_user,
                (LPVOID *)&CUserRankingProcessInit70_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessInit70_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)())&CUserRankingProcess::Init)
            },
            _hook_record {
                (LPVOID)0x1403424f0L,
                (LPVOID *)&CUserRankingProcessInitProcFunc72_user,
                (LPVOID *)&CUserRankingProcessInitProcFunc72_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessInitProcFunc72_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)())&CUserRankingProcess::InitProcFunc)
            },
            _hook_record {
                (LPVOID)0x140079d30L,
                (LPVOID *)&CUserRankingProcessIsCurrentRaceBossGroup74_user,
                (LPVOID *)&CUserRankingProcessIsCurrentRaceBossGroup74_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessIsCurrentRaceBossGroup74_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)(char, unsigned int))&CUserRankingProcess::IsCurrentRaceBossGroup)
            },
            _hook_record {
                (LPVOID)0x14007dbd0L,
                (LPVOID *)&CUserRankingProcessIsRaceViceBoss76_user,
                (LPVOID *)&CUserRankingProcessIsRaceViceBoss76_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessIsRaceViceBoss76_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)(char, unsigned int))&CUserRankingProcess::IsRaceViceBoss)
            },
            _hook_record {
                (LPVOID)0x140340730L,
                (LPVOID *)&CUserRankingProcessLoad78_user,
                (LPVOID *)&CUserRankingProcessLoad78_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessLoad78_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)())&CUserRankingProcess::Load)
            },
            _hook_record {
                (LPVOID)0x140342230L,
                (LPVOID *)&CUserRankingProcessLoadINI80_user,
                (LPVOID *)&CUserRankingProcessLoadINI80_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessLoadINI80_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(int*, int*))&CUserRankingProcess::LoadINI)
            },
            _hook_record {
                (LPVOID)0x140340880L,
                (LPVOID *)&CUserRankingProcessLoop82_user,
                (LPVOID *)&CUserRankingProcessLoop82_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessLoop82_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::Loop)
            },
            _hook_record {
                (LPVOID)0x1403431b0L,
                (LPVOID *)&CUserRankingProcessProcApplyGuildGrade84_user,
                (LPVOID *)&CUserRankingProcessProcApplyGuildGrade84_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcApplyGuildGrade84_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcApplyGuildGrade)
            },
            _hook_record {
                (LPVOID)0x140343240L,
                (LPVOID *)&CUserRankingProcessProcApplyRankInGuild86_user,
                (LPVOID *)&CUserRankingProcessProcApplyRankInGuild86_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcApplyRankInGuild86_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcApplyRankInGuild)
            },
            _hook_record {
                (LPVOID)0x1403432f0L,
                (LPVOID *)&CUserRankingProcessProcFailedWait88_user,
                (LPVOID *)&CUserRankingProcessProcFailedWait88_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcFailedWait88_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcFailedWait)
            },
            _hook_record {
                (LPVOID)0x140342fc0L,
                (LPVOID *)&CUserRankingProcessProcNotifyVersionUp90_user,
                (LPVOID *)&CUserRankingProcessProcNotifyVersionUp90_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcNotifyVersionUp90_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcNotifyVersionUp)
            },
            _hook_record {
                (LPVOID)0x140342eb0L,
                (LPVOID *)&CUserRankingProcessProcRankComplete92_user,
                (LPVOID *)&CUserRankingProcessProcRankComplete92_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcRankComplete92_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcRankComplete)
            },
            _hook_record {
                (LPVOID)0x140342d30L,
                (LPVOID *)&CUserRankingProcessProcRankStart94_user,
                (LPVOID *)&CUserRankingProcessProcRankStart94_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcRankStart94_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcRankStart)
            },
            _hook_record {
                (LPVOID)0x1403433c0L,
                (LPVOID *)&CUserRankingProcessProcRankSuccess96_user,
                (LPVOID *)&CUserRankingProcessProcRankSuccess96_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcRankSuccess96_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcRankSuccess)
            },
            _hook_record {
                (LPVOID)0x140342bf0L,
                (LPVOID *)&CUserRankingProcessProcSaveTargetList98_user,
                (LPVOID *)&CUserRankingProcessProcSaveTargetList98_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcSaveTargetList98_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcSaveTargetList)
            },
            _hook_record {
                (LPVOID)0x140342b30L,
                (LPVOID *)&CUserRankingProcessProcWait100_user,
                (LPVOID *)&CUserRankingProcessProcWait100_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcWait100_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcWait)
            },
            _hook_record {
                (LPVOID)0x140342f00L,
                (LPVOID *)&CUserRankingProcessProcWaitDayChanged102_user,
                (LPVOID *)&CUserRankingProcessProcWaitDayChanged102_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessProcWaitDayChanged102_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::ProcWaitDayChanged)
            },
            _hook_record {
                (LPVOID)0x1402b9a40L,
                (LPVOID *)&CUserRankingProcessPvpRankDataPacking104_user,
                (LPVOID *)&CUserRankingProcessPvpRankDataPacking104_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessPvpRankDataPacking104_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::PvpRankDataPacking)
            },
            _hook_record {
                (LPVOID)0x1401d9490L,
                (LPVOID *)&CUserRankingProcessPvpRankListRequest106_user,
                (LPVOID *)&CUserRankingProcessPvpRankListRequest106_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessPvpRankListRequest106_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(uint16_t, char, char, char))&CUserRankingProcess::PvpRankListRequest)
            },
            _hook_record {
                (LPVOID)0x1402bd5a0L,
                (LPVOID *)&CUserRankingProcessSetCurrentRaceBossSerial108_user,
                (LPVOID *)&CUserRankingProcessSetCurrentRaceBossSerial108_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessSetCurrentRaceBossSerial108_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char, unsigned int))&CUserRankingProcess::SetCurrentRaceBossSerial)
            },
            _hook_record {
                (LPVOID)0x14032b740L,
                (LPVOID *)&CUserRankingProcessSetLogger110_user,
                (LPVOID *)&CUserRankingProcessSetLogger110_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessSetLogger110_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(struct CLogFile*))&CUserRankingProcess::SetLogger)
            },
            _hook_record {
                (LPVOID)0x1403422c0L,
                (LPVOID *)&CUserRankingProcessSetRankingStartTime112_user,
                (LPVOID *)&CUserRankingProcessSetRankingStartTime112_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessSetRankingStartTime112_wrapper),
                (LPVOID)cast_pointer_function((bool(CUserRankingProcess::*)(int, int))&CUserRankingProcess::SetRankingStartTime)
            },
            _hook_record {
                (LPVOID)0x1402b9be0L,
                (LPVOID *)&CUserRankingProcessSetUpdateRaceBossSerial114_user,
                (LPVOID *)&CUserRankingProcessSetUpdateRaceBossSerial114_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessSetUpdateRaceBossSerial114_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)(char, char, unsigned int))&CUserRankingProcess::SetUpdateRaceBossSerial)
            },
            _hook_record {
                (LPVOID)0x140206a30L,
                (LPVOID *)&CUserRankingProcessUpdateAndSelectGuildGrade116_user,
                (LPVOID *)&CUserRankingProcessUpdateAndSelectGuildGrade116_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateAndSelectGuildGrade116_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateAndSelectGuildGrade)
            },
            _hook_record {
                (LPVOID)0x1402062b0L,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep1118_user,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep1118_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateGuildRankStep1118_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateGuildRankStep1)
            },
            _hook_record {
                (LPVOID)0x140206370L,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep2120_user,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep2120_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateGuildRankStep2120_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateGuildRankStep2)
            },
            _hook_record {
                (LPVOID)0x140206430L,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep3122_user,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep3122_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateGuildRankStep3122_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateGuildRankStep3)
            },
            _hook_record {
                (LPVOID)0x1402064f0L,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep4124_user,
                (LPVOID *)&CUserRankingProcessUpdateGuildRankStep4124_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateGuildRankStep4124_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateGuildRankStep4)
            },
            _hook_record {
                (LPVOID)0x140342b00L,
                (LPVOID *)&CUserRankingProcessUpdateNextRankingStartTime126_user,
                (LPVOID *)&CUserRankingProcessUpdateNextRankingStartTime126_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateNextRankingStartTime126_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::UpdateNextRankingStartTime)
            },
            _hook_record {
                (LPVOID)0x140205a70L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep1128_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep1128_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep1128_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep1)
            },
            _hook_record {
                (LPVOID)0x140206130L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep10130_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep10130_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep10130_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep10)
            },
            _hook_record {
                (LPVOID)0x1402061f0L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep11132_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep11132_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep11132_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep11)
            },
            _hook_record {
                (LPVOID)0x140205b30L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep2134_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep2134_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep2134_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep2)
            },
            _hook_record {
                (LPVOID)0x140205bf0L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep3136_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep3136_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep3136_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep3)
            },
            _hook_record {
                (LPVOID)0x140205cb0L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep4138_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep4138_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep4138_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep4)
            },
            _hook_record {
                (LPVOID)0x140205d70L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep5140_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep5140_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep5140_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep5)
            },
            _hook_record {
                (LPVOID)0x140205e30L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep6142_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep6142_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep6142_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep6)
            },
            _hook_record {
                (LPVOID)0x140205ef0L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep7144_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep7144_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep7144_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep7)
            },
            _hook_record {
                (LPVOID)0x140205fb0L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep8146_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep8146_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep8146_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep8)
            },
            _hook_record {
                (LPVOID)0x140206070L,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep9148_user,
                (LPVOID *)&CUserRankingProcessUpdateRaceRankStep9148_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRaceRankStep9148_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRaceRankStep9)
            },
            _hook_record {
                (LPVOID)0x1402065b0L,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep1150_user,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep1150_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRankinGuildStep1150_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRankinGuildStep1)
            },
            _hook_record {
                (LPVOID)0x140206670L,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep2152_user,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep2152_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRankinGuildStep2152_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRankinGuildStep2)
            },
            _hook_record {
                (LPVOID)0x140206730L,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep3154_user,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep3154_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRankinGuildStep3154_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRankinGuildStep3)
            },
            _hook_record {
                (LPVOID)0x1402067f0L,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep4156_user,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep4156_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRankinGuildStep4156_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRankinGuildStep4)
            },
            _hook_record {
                (LPVOID)0x1402068b0L,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep5158_user,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep5158_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRankinGuildStep5158_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRankinGuildStep5)
            },
            _hook_record {
                (LPVOID)0x140206970L,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep6160_user,
                (LPVOID *)&CUserRankingProcessUpdateRankinGuildStep6160_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessUpdateRankinGuildStep6160_wrapper),
                (LPVOID)cast_pointer_function((char(CUserRankingProcess::*)(char*))&CUserRankingProcess::UpdateRankinGuildStep6)
            },
            _hook_record {
                (LPVOID)0x14032b580L,
                (LPVOID *)&CUserRankingProcessdtor_CUserRankingProcess162_user,
                (LPVOID *)&CUserRankingProcessdtor_CUserRankingProcess162_next,
                (LPVOID)cast_pointer_function(CUserRankingProcessdtor_CUserRankingProcess162_wrapper),
                (LPVOID)cast_pointer_function((void(CUserRankingProcess::*)())&CUserRankingProcess::dtor_CUserRankingProcess)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
