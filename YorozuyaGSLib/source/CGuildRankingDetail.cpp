#include <CGuildRankingDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGuildRankingApplyGuildGrade2_ptr CGuildRankingApplyGuildGrade2_next(nullptr);
        Info::CGuildRankingApplyGuildGrade2_clbk CGuildRankingApplyGuildGrade2_user(nullptr);
        
        Info::CGuildRankingApplyRankInGuild4_ptr CGuildRankingApplyRankInGuild4_next(nullptr);
        Info::CGuildRankingApplyRankInGuild4_clbk CGuildRankingApplyRankInGuild4_user(nullptr);
        
        
        Info::CGuildRankingctor_CGuildRanking6_ptr CGuildRankingctor_CGuildRanking6_next(nullptr);
        Info::CGuildRankingctor_CGuildRanking6_clbk CGuildRankingctor_CGuildRanking6_user(nullptr);
        
        Info::CGuildRankingCheckAndCreateTodayGuildRankTable8_ptr CGuildRankingCheckAndCreateTodayGuildRankTable8_next(nullptr);
        Info::CGuildRankingCheckAndCreateTodayGuildRankTable8_clbk CGuildRankingCheckAndCreateTodayGuildRankTable8_user(nullptr);
        
        Info::CGuildRankingCheckGuildCheckSum10_ptr CGuildRankingCheckGuildCheckSum10_next(nullptr);
        Info::CGuildRankingCheckGuildCheckSum10_clbk CGuildRankingCheckGuildCheckSum10_user(nullptr);
        
        Info::CGuildRankingCheckMaxGuildMoney12_ptr CGuildRankingCheckMaxGuildMoney12_next(nullptr);
        Info::CGuildRankingCheckMaxGuildMoney12_clbk CGuildRankingCheckMaxGuildMoney12_user(nullptr);
        
        Info::CGuildRankingClearApplyRankInGuildJobOffset14_ptr CGuildRankingClearApplyRankInGuildJobOffset14_next(nullptr);
        Info::CGuildRankingClearApplyRankInGuildJobOffset14_clbk CGuildRankingClearApplyRankInGuildJobOffset14_user(nullptr);
        
        Info::CGuildRankingClearGuildGrade16_ptr CGuildRankingClearGuildGrade16_next(nullptr);
        Info::CGuildRankingClearGuildGrade16_clbk CGuildRankingClearGuildGrade16_user(nullptr);
        
        Info::CGuildRankingClearGuildSerial18_ptr CGuildRankingClearGuildSerial18_next(nullptr);
        Info::CGuildRankingClearGuildSerial18_clbk CGuildRankingClearGuildSerial18_user(nullptr);
        
        Info::CGuildRankingClearRefreshData20_ptr CGuildRankingClearRefreshData20_next(nullptr);
        Info::CGuildRankingClearRefreshData20_clbk CGuildRankingClearRefreshData20_user(nullptr);
        
        Info::CGuildRankingGetNextGuildSerial22_ptr CGuildRankingGetNextGuildSerial22_next(nullptr);
        Info::CGuildRankingGetNextGuildSerial22_clbk CGuildRankingGetNextGuildSerial22_user(nullptr);
        
        Info::CGuildRankingGetRankInGuildJobOffset24_ptr CGuildRankingGetRankInGuildJobOffset24_next(nullptr);
        Info::CGuildRankingGetRankInGuildJobOffset24_clbk CGuildRankingGetRankInGuildJobOffset24_user(nullptr);
        
        Info::CGuildRankingInit26_ptr CGuildRankingInit26_next(nullptr);
        Info::CGuildRankingInit26_clbk CGuildRankingInit26_user(nullptr);
        
        Info::CGuildRankingLoad28_ptr CGuildRankingLoad28_next(nullptr);
        Info::CGuildRankingLoad28_clbk CGuildRankingLoad28_user(nullptr);
        
        Info::CGuildRankingLoadAllGuildData30_ptr CGuildRankingLoadAllGuildData30_next(nullptr);
        Info::CGuildRankingLoadAllGuildData30_clbk CGuildRankingLoadAllGuildData30_user(nullptr);
        
        Info::CGuildRankingLoadGuildMoneyIOInfo32_ptr CGuildRankingLoadGuildMoneyIOInfo32_next(nullptr);
        Info::CGuildRankingLoadGuildMoneyIOInfo32_clbk CGuildRankingLoadGuildMoneyIOInfo32_user(nullptr);
        
        Info::CGuildRankingLoadMemberInfo34_ptr CGuildRankingLoadMemberInfo34_next(nullptr);
        Info::CGuildRankingLoadMemberInfo34_clbk CGuildRankingLoadMemberInfo34_user(nullptr);
        
        Info::CGuildRankingSetLoadAllGuildInfo36_ptr CGuildRankingSetLoadAllGuildInfo36_next(nullptr);
        Info::CGuildRankingSetLoadAllGuildInfo36_clbk CGuildRankingSetLoadAllGuildInfo36_user(nullptr);
        
        Info::CGuildRankingSetLogger38_ptr CGuildRankingSetLogger38_next(nullptr);
        Info::CGuildRankingSetLogger38_clbk CGuildRankingSetLogger38_user(nullptr);
        
        Info::CGuildRankingUpdateAndSelectGuildGrade40_ptr CGuildRankingUpdateAndSelectGuildGrade40_next(nullptr);
        Info::CGuildRankingUpdateAndSelectGuildGrade40_clbk CGuildRankingUpdateAndSelectGuildGrade40_user(nullptr);
        
        Info::CGuildRankingUpdateGuildRankStep142_ptr CGuildRankingUpdateGuildRankStep142_next(nullptr);
        Info::CGuildRankingUpdateGuildRankStep142_clbk CGuildRankingUpdateGuildRankStep142_user(nullptr);
        
        Info::CGuildRankingUpdateGuildRankStep244_ptr CGuildRankingUpdateGuildRankStep244_next(nullptr);
        Info::CGuildRankingUpdateGuildRankStep244_clbk CGuildRankingUpdateGuildRankStep244_user(nullptr);
        
        Info::CGuildRankingUpdateGuildRankStep346_ptr CGuildRankingUpdateGuildRankStep346_next(nullptr);
        Info::CGuildRankingUpdateGuildRankStep346_clbk CGuildRankingUpdateGuildRankStep346_user(nullptr);
        
        Info::CGuildRankingUpdateGuildRankStep448_ptr CGuildRankingUpdateGuildRankStep448_next(nullptr);
        Info::CGuildRankingUpdateGuildRankStep448_clbk CGuildRankingUpdateGuildRankStep448_user(nullptr);
        
        Info::CGuildRankingUpdateRankAndGrade50_ptr CGuildRankingUpdateRankAndGrade50_next(nullptr);
        Info::CGuildRankingUpdateRankAndGrade50_clbk CGuildRankingUpdateRankAndGrade50_user(nullptr);
        
        Info::CGuildRankingUpdateRankinGuildStep152_ptr CGuildRankingUpdateRankinGuildStep152_next(nullptr);
        Info::CGuildRankingUpdateRankinGuildStep152_clbk CGuildRankingUpdateRankinGuildStep152_user(nullptr);
        
        Info::CGuildRankingUpdateRankinGuildStep254_ptr CGuildRankingUpdateRankinGuildStep254_next(nullptr);
        Info::CGuildRankingUpdateRankinGuildStep254_clbk CGuildRankingUpdateRankinGuildStep254_user(nullptr);
        
        Info::CGuildRankingUpdateRankinGuildStep356_ptr CGuildRankingUpdateRankinGuildStep356_next(nullptr);
        Info::CGuildRankingUpdateRankinGuildStep356_clbk CGuildRankingUpdateRankinGuildStep356_user(nullptr);
        
        Info::CGuildRankingUpdateRankinGuildStep458_ptr CGuildRankingUpdateRankinGuildStep458_next(nullptr);
        Info::CGuildRankingUpdateRankinGuildStep458_clbk CGuildRankingUpdateRankinGuildStep458_user(nullptr);
        
        Info::CGuildRankingUpdateRankinGuildStep560_ptr CGuildRankingUpdateRankinGuildStep560_next(nullptr);
        Info::CGuildRankingUpdateRankinGuildStep560_clbk CGuildRankingUpdateRankinGuildStep560_user(nullptr);
        
        Info::CGuildRankingUpdateRankinGuildStep662_ptr CGuildRankingUpdateRankinGuildStep662_next(nullptr);
        Info::CGuildRankingUpdateRankinGuildStep662_clbk CGuildRankingUpdateRankinGuildStep662_user(nullptr);
        
        
        Info::CGuildRankingdtor_CGuildRanking64_ptr CGuildRankingdtor_CGuildRanking64_next(nullptr);
        Info::CGuildRankingdtor_CGuildRanking64_clbk CGuildRankingdtor_CGuildRanking64_user(nullptr);
        
        void CGuildRankingApplyGuildGrade2_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingApplyGuildGrade2_user(_this, CGuildRankingApplyGuildGrade2_next);
        };
        bool CGuildRankingApplyRankInGuild4_wrapper(struct CGuildRanking* _this)
        {
           return CGuildRankingApplyRankInGuild4_user(_this, CGuildRankingApplyRankInGuild4_next);
        };
        
        void CGuildRankingctor_CGuildRanking6_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingctor_CGuildRanking6_user(_this, CGuildRankingctor_CGuildRanking6_next);
        };
        bool CGuildRankingCheckAndCreateTodayGuildRankTable8_wrapper(struct CGuildRanking* _this, char* szDate)
        {
           return CGuildRankingCheckAndCreateTodayGuildRankTable8_user(_this, szDate, CGuildRankingCheckAndCreateTodayGuildRankTable8_next);
        };
        bool CGuildRankingCheckGuildCheckSum10_wrapper(struct CGuildRanking* _this, unsigned int dwSerial, char* wszGuildName, long double* dDalant, long double* dGold)
        {
           return CGuildRankingCheckGuildCheckSum10_user(_this, dwSerial, wszGuildName, dDalant, dGold, CGuildRankingCheckGuildCheckSum10_next);
        };
        void CGuildRankingCheckMaxGuildMoney12_wrapper(struct CGuildRanking* _this, unsigned int dwGuildSerial, char* wszGuildName, long double* pdDalant, long double* pdGold)
        {
           CGuildRankingCheckMaxGuildMoney12_user(_this, dwGuildSerial, wszGuildName, pdDalant, pdGold, CGuildRankingCheckMaxGuildMoney12_next);
        };
        void CGuildRankingClearApplyRankInGuildJobOffset14_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingClearApplyRankInGuildJobOffset14_user(_this, CGuildRankingClearApplyRankInGuildJobOffset14_next);
        };
        void CGuildRankingClearGuildGrade16_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingClearGuildGrade16_user(_this, CGuildRankingClearGuildGrade16_next);
        };
        void CGuildRankingClearGuildSerial18_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingClearGuildSerial18_user(_this, CGuildRankingClearGuildSerial18_next);
        };
        void CGuildRankingClearRefreshData20_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingClearRefreshData20_user(_this, CGuildRankingClearRefreshData20_next);
        };
        unsigned int CGuildRankingGetNextGuildSerial22_wrapper(struct CGuildRanking* _this)
        {
           return CGuildRankingGetNextGuildSerial22_user(_this, CGuildRankingGetNextGuildSerial22_next);
        };
        int CGuildRankingGetRankInGuildJobOffset24_wrapper(struct CGuildRanking* _this)
        {
           return CGuildRankingGetRankInGuildJobOffset24_user(_this, CGuildRankingGetRankInGuildJobOffset24_next);
        };
        bool CGuildRankingInit26_wrapper(struct CGuildRanking* _this)
        {
           return CGuildRankingInit26_user(_this, CGuildRankingInit26_next);
        };
        bool CGuildRankingLoad28_wrapper(struct CGuildRanking* _this)
        {
           return CGuildRankingLoad28_user(_this, CGuildRankingLoad28_next);
        };
        bool CGuildRankingLoadAllGuildData30_wrapper(struct CGuildRanking* _this, struct _worlddb_guild_info* pkInfo)
        {
           return CGuildRankingLoadAllGuildData30_user(_this, pkInfo, CGuildRankingLoadAllGuildData30_next);
        };
        bool CGuildRankingLoadGuildMoneyIOInfo32_wrapper(struct CGuildRanking* _this, unsigned int dwGuildSerial, struct _io_money_data* pkIOInfo, int* pnIOMonHisNum)
        {
           return CGuildRankingLoadGuildMoneyIOInfo32_user(_this, dwGuildSerial, pkIOInfo, pnIOMonHisNum, CGuildRankingLoadGuildMoneyIOInfo32_next);
        };
        bool CGuildRankingLoadMemberInfo34_wrapper(struct CGuildRanking* _this, unsigned int dwMasterSerial, unsigned int dwGuildSerial, struct _guild_member_info* pkMemberInfo, uint16_t* pwMemberCnt)
        {
           return CGuildRankingLoadMemberInfo34_user(_this, dwMasterSerial, dwGuildSerial, pkMemberInfo, pwMemberCnt, CGuildRankingLoadMemberInfo34_next);
        };
        bool CGuildRankingSetLoadAllGuildInfo36_wrapper(struct CGuildRanking* _this, struct _worlddb_guild_info* pkInfo)
        {
           return CGuildRankingSetLoadAllGuildInfo36_user(_this, pkInfo, CGuildRankingSetLoadAllGuildInfo36_next);
        };
        void CGuildRankingSetLogger38_wrapper(struct CGuildRanking* _this, struct CLogFile* pkLogger)
        {
           CGuildRankingSetLogger38_user(_this, pkLogger, CGuildRankingSetLogger38_next);
        };
        char CGuildRankingUpdateAndSelectGuildGrade40_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateAndSelectGuildGrade40_user(_this, szData, CGuildRankingUpdateAndSelectGuildGrade40_next);
        };
        char CGuildRankingUpdateGuildRankStep142_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateGuildRankStep142_user(_this, szData, CGuildRankingUpdateGuildRankStep142_next);
        };
        char CGuildRankingUpdateGuildRankStep244_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateGuildRankStep244_user(_this, szData, CGuildRankingUpdateGuildRankStep244_next);
        };
        char CGuildRankingUpdateGuildRankStep346_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateGuildRankStep346_user(_this, szData, CGuildRankingUpdateGuildRankStep346_next);
        };
        char CGuildRankingUpdateGuildRankStep448_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateGuildRankStep448_user(_this, szData, CGuildRankingUpdateGuildRankStep448_next);
        };
        bool CGuildRankingUpdateRankAndGrade50_wrapper(struct CGuildRanking* _this)
        {
           return CGuildRankingUpdateRankAndGrade50_user(_this, CGuildRankingUpdateRankAndGrade50_next);
        };
        char CGuildRankingUpdateRankinGuildStep152_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateRankinGuildStep152_user(_this, szData, CGuildRankingUpdateRankinGuildStep152_next);
        };
        char CGuildRankingUpdateRankinGuildStep254_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateRankinGuildStep254_user(_this, szData, CGuildRankingUpdateRankinGuildStep254_next);
        };
        char CGuildRankingUpdateRankinGuildStep356_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateRankinGuildStep356_user(_this, szData, CGuildRankingUpdateRankinGuildStep356_next);
        };
        char CGuildRankingUpdateRankinGuildStep458_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateRankinGuildStep458_user(_this, szData, CGuildRankingUpdateRankinGuildStep458_next);
        };
        char CGuildRankingUpdateRankinGuildStep560_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateRankinGuildStep560_user(_this, szData, CGuildRankingUpdateRankinGuildStep560_next);
        };
        char CGuildRankingUpdateRankinGuildStep662_wrapper(struct CGuildRanking* _this, char* szData)
        {
           return CGuildRankingUpdateRankinGuildStep662_user(_this, szData, CGuildRankingUpdateRankinGuildStep662_next);
        };
        
        void CGuildRankingdtor_CGuildRanking64_wrapper(struct CGuildRanking* _this)
        {
           CGuildRankingdtor_CGuildRanking64_user(_this, CGuildRankingdtor_CGuildRanking64_next);
        };
        
        ::std::array<hook_record, 32> CGuildRanking_functions = 
        {
            _hook_record {
                (LPVOID)0x140339500L,
                (LPVOID *)&CGuildRankingApplyGuildGrade2_user,
                (LPVOID *)&CGuildRankingApplyGuildGrade2_next,
                (LPVOID)cast_pointer_function(CGuildRankingApplyGuildGrade2_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::ApplyGuildGrade)
            },
            _hook_record {
                (LPVOID)0x140339600L,
                (LPVOID *)&CGuildRankingApplyRankInGuild4_user,
                (LPVOID *)&CGuildRankingApplyRankInGuild4_next,
                (LPVOID)cast_pointer_function(CGuildRankingApplyRankInGuild4_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)())&CGuildRanking::ApplyRankInGuild)
            },
            _hook_record {
                (LPVOID)0x1403442b0L,
                (LPVOID *)&CGuildRankingctor_CGuildRanking6_user,
                (LPVOID *)&CGuildRankingctor_CGuildRanking6_next,
                (LPVOID)cast_pointer_function(CGuildRankingctor_CGuildRanking6_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::ctor_CGuildRanking)
            },
            _hook_record {
                (LPVOID)0x140339fc0L,
                (LPVOID *)&CGuildRankingCheckAndCreateTodayGuildRankTable8_user,
                (LPVOID *)&CGuildRankingCheckAndCreateTodayGuildRankTable8_next,
                (LPVOID)cast_pointer_function(CGuildRankingCheckAndCreateTodayGuildRankTable8_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)(char*))&CGuildRanking::CheckAndCreateTodayGuildRankTable)
            },
            _hook_record {
                (LPVOID)0x14033a100L,
                (LPVOID *)&CGuildRankingCheckGuildCheckSum10_user,
                (LPVOID *)&CGuildRankingCheckGuildCheckSum10_next,
                (LPVOID)cast_pointer_function(CGuildRankingCheckGuildCheckSum10_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)(unsigned int, char*, long double*, long double*))&CGuildRanking::CheckGuildCheckSum)
            },
            _hook_record {
                (LPVOID)0x14033b300L,
                (LPVOID *)&CGuildRankingCheckMaxGuildMoney12_user,
                (LPVOID *)&CGuildRankingCheckMaxGuildMoney12_next,
                (LPVOID)cast_pointer_function(CGuildRankingCheckMaxGuildMoney12_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)(unsigned int, char*, long double*, long double*))&CGuildRanking::CheckMaxGuildMoney)
            },
            _hook_record {
                (LPVOID)0x140344950L,
                (LPVOID *)&CGuildRankingClearApplyRankInGuildJobOffset14_user,
                (LPVOID *)&CGuildRankingClearApplyRankInGuildJobOffset14_next,
                (LPVOID)cast_pointer_function(CGuildRankingClearApplyRankInGuildJobOffset14_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::ClearApplyRankInGuildJobOffset)
            },
            _hook_record {
                (LPVOID)0x140344830L,
                (LPVOID *)&CGuildRankingClearGuildGrade16_user,
                (LPVOID *)&CGuildRankingClearGuildGrade16_next,
                (LPVOID)cast_pointer_function(CGuildRankingClearGuildGrade16_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::ClearGuildGrade)
            },
            _hook_record {
                (LPVOID)0x140344430L,
                (LPVOID *)&CGuildRankingClearGuildSerial18_user,
                (LPVOID *)&CGuildRankingClearGuildSerial18_next,
                (LPVOID)cast_pointer_function(CGuildRankingClearGuildSerial18_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::ClearGuildSerial)
            },
            _hook_record {
                (LPVOID)0x140339450L,
                (LPVOID *)&CGuildRankingClearRefreshData20_user,
                (LPVOID *)&CGuildRankingClearRefreshData20_next,
                (LPVOID)cast_pointer_function(CGuildRankingClearRefreshData20_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::ClearRefreshData)
            },
            _hook_record {
                (LPVOID)0x140344590L,
                (LPVOID *)&CGuildRankingGetNextGuildSerial22_user,
                (LPVOID *)&CGuildRankingGetNextGuildSerial22_next,
                (LPVOID)cast_pointer_function(CGuildRankingGetNextGuildSerial22_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CGuildRanking::*)())&CGuildRanking::GetNextGuildSerial)
            },
            _hook_record {
                (LPVOID)0x140344970L,
                (LPVOID *)&CGuildRankingGetRankInGuildJobOffset24_user,
                (LPVOID *)&CGuildRankingGetRankInGuildJobOffset24_next,
                (LPVOID)cast_pointer_function(CGuildRankingGetRankInGuildJobOffset24_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildRanking::*)())&CGuildRanking::GetRankInGuildJobOffset)
            },
            _hook_record {
                (LPVOID)0x140339210L,
                (LPVOID *)&CGuildRankingInit26_user,
                (LPVOID *)&CGuildRankingInit26_next,
                (LPVOID)cast_pointer_function(CGuildRankingInit26_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)())&CGuildRanking::Init)
            },
            _hook_record {
                (LPVOID)0x140339320L,
                (LPVOID *)&CGuildRankingLoad28_user,
                (LPVOID *)&CGuildRankingLoad28_next,
                (LPVOID)cast_pointer_function(CGuildRankingLoad28_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)())&CGuildRanking::Load)
            },
            _hook_record {
                (LPVOID)0x14033a5d0L,
                (LPVOID *)&CGuildRankingLoadAllGuildData30_user,
                (LPVOID *)&CGuildRankingLoadAllGuildData30_next,
                (LPVOID)cast_pointer_function(CGuildRankingLoadAllGuildData30_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)(struct _worlddb_guild_info*))&CGuildRanking::LoadAllGuildData)
            },
            _hook_record {
                (LPVOID)0x14033b0a0L,
                (LPVOID *)&CGuildRankingLoadGuildMoneyIOInfo32_user,
                (LPVOID *)&CGuildRankingLoadGuildMoneyIOInfo32_next,
                (LPVOID)cast_pointer_function(CGuildRankingLoadGuildMoneyIOInfo32_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)(unsigned int, struct _io_money_data*, int*))&CGuildRanking::LoadGuildMoneyIOInfo)
            },
            _hook_record {
                (LPVOID)0x14033acb0L,
                (LPVOID *)&CGuildRankingLoadMemberInfo34_user,
                (LPVOID *)&CGuildRankingLoadMemberInfo34_next,
                (LPVOID)cast_pointer_function(CGuildRankingLoadMemberInfo34_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)(unsigned int, unsigned int, struct _guild_member_info*, uint16_t*))&CGuildRanking::LoadMemberInfo)
            },
            _hook_record {
                (LPVOID)0x14033a720L,
                (LPVOID *)&CGuildRankingSetLoadAllGuildInfo36_user,
                (LPVOID *)&CGuildRankingSetLoadAllGuildInfo36_next,
                (LPVOID)cast_pointer_function(CGuildRankingSetLoadAllGuildInfo36_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)(struct _worlddb_guild_info*))&CGuildRanking::SetLoadAllGuildInfo)
            },
            _hook_record {
                (LPVOID)0x14032b7b0L,
                (LPVOID *)&CGuildRankingSetLogger38_user,
                (LPVOID *)&CGuildRankingSetLogger38_next,
                (LPVOID)cast_pointer_function(CGuildRankingSetLogger38_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)(struct CLogFile*))&CGuildRanking::SetLogger)
            },
            _hook_record {
                (LPVOID)0x140339e90L,
                (LPVOID *)&CGuildRankingUpdateAndSelectGuildGrade40_user,
                (LPVOID *)&CGuildRankingUpdateAndSelectGuildGrade40_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateAndSelectGuildGrade40_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateAndSelectGuildGrade)
            },
            _hook_record {
                (LPVOID)0x140339780L,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep142_user,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep142_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateGuildRankStep142_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateGuildRankStep1)
            },
            _hook_record {
                (LPVOID)0x1403397e0L,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep244_user,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep244_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateGuildRankStep244_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateGuildRankStep2)
            },
            _hook_record {
                (LPVOID)0x140339840L,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep346_user,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep346_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateGuildRankStep346_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateGuildRankStep3)
            },
            _hook_record {
                (LPVOID)0x1403398a0L,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep448_user,
                (LPVOID *)&CGuildRankingUpdateGuildRankStep448_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateGuildRankStep448_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateGuildRankStep4)
            },
            _hook_record {
                (LPVOID)0x14033a460L,
                (LPVOID *)&CGuildRankingUpdateRankAndGrade50_user,
                (LPVOID *)&CGuildRankingUpdateRankAndGrade50_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankAndGrade50_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildRanking::*)())&CGuildRanking::UpdateRankAndGrade)
            },
            _hook_record {
                (LPVOID)0x140339940L,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep152_user,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep152_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankinGuildStep152_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateRankinGuildStep1)
            },
            _hook_record {
                (LPVOID)0x1403399c0L,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep254_user,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep254_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankinGuildStep254_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateRankinGuildStep2)
            },
            _hook_record {
                (LPVOID)0x140339a20L,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep356_user,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep356_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankinGuildStep356_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateRankinGuildStep3)
            },
            _hook_record {
                (LPVOID)0x140339a80L,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep458_user,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep458_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankinGuildStep458_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateRankinGuildStep4)
            },
            _hook_record {
                (LPVOID)0x140339ae0L,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep560_user,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep560_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankinGuildStep560_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateRankinGuildStep5)
            },
            _hook_record {
                (LPVOID)0x140339e40L,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep662_user,
                (LPVOID *)&CGuildRankingUpdateRankinGuildStep662_next,
                (LPVOID)cast_pointer_function(CGuildRankingUpdateRankinGuildStep662_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildRanking::*)(char*))&CGuildRanking::UpdateRankinGuildStep6)
            },
            _hook_record {
                (LPVOID)0x140338f20L,
                (LPVOID *)&CGuildRankingdtor_CGuildRanking64_user,
                (LPVOID *)&CGuildRankingdtor_CGuildRanking64_next,
                (LPVOID)cast_pointer_function(CGuildRankingdtor_CGuildRanking64_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildRanking::*)())&CGuildRanking::dtor_CGuildRanking)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
