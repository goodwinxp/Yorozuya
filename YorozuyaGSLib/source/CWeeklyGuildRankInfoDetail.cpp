#include <CWeeklyGuildRankInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_ptr CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_next(nullptr);
        Info::CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_clbk CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_user(nullptr);
        
        Info::CWeeklyGuildRankInfoCheckEmpty4_ptr CWeeklyGuildRankInfoCheckEmpty4_next(nullptr);
        Info::CWeeklyGuildRankInfoCheckEmpty4_clbk CWeeklyGuildRankInfoCheckEmpty4_user(nullptr);
        
        Info::CWeeklyGuildRankInfoClear6_ptr CWeeklyGuildRankInfoClear6_next(nullptr);
        Info::CWeeklyGuildRankInfoClear6_clbk CWeeklyGuildRankInfoClear6_user(nullptr);
        
        Info::CWeeklyGuildRankInfoClearOwner8_ptr CWeeklyGuildRankInfoClearOwner8_next(nullptr);
        Info::CWeeklyGuildRankInfoClearOwner8_clbk CWeeklyGuildRankInfoClearOwner8_user(nullptr);
        
        Info::CWeeklyGuildRankInfoClearRank10_ptr CWeeklyGuildRankInfoClearRank10_next(nullptr);
        Info::CWeeklyGuildRankInfoClearRank10_clbk CWeeklyGuildRankInfoClearRank10_user(nullptr);
        
        Info::CWeeklyGuildRankInfoFind12_ptr CWeeklyGuildRankInfoFind12_next(nullptr);
        Info::CWeeklyGuildRankInfoFind12_clbk CWeeklyGuildRankInfoFind12_user(nullptr);
        
        Info::CWeeklyGuildRankInfoGetCurOwnerGuild14_ptr CWeeklyGuildRankInfoGetCurOwnerGuild14_next(nullptr);
        Info::CWeeklyGuildRankInfoGetCurOwnerGuild14_clbk CWeeklyGuildRankInfoGetCurOwnerGuild14_user(nullptr);
        
        Info::CWeeklyGuildRankInfoGetOwnerGuild16_ptr CWeeklyGuildRankInfoGetOwnerGuild16_next(nullptr);
        Info::CWeeklyGuildRankInfoGetOwnerGuild16_clbk CWeeklyGuildRankInfoGetOwnerGuild16_user(nullptr);
        
        Info::CWeeklyGuildRankInfoGetPrevOwnerGuild18_ptr CWeeklyGuildRankInfoGetPrevOwnerGuild18_next(nullptr);
        Info::CWeeklyGuildRankInfoGetPrevOwnerGuild18_clbk CWeeklyGuildRankInfoGetPrevOwnerGuild18_user(nullptr);
        
        Info::CWeeklyGuildRankInfoInit20_ptr CWeeklyGuildRankInfoInit20_next(nullptr);
        Info::CWeeklyGuildRankInfoInit20_clbk CWeeklyGuildRankInfoInit20_user(nullptr);
        
        Info::CWeeklyGuildRankInfoIsNoDataPrev22_ptr CWeeklyGuildRankInfoIsNoDataPrev22_next(nullptr);
        Info::CWeeklyGuildRankInfoIsNoDataPrev22_clbk CWeeklyGuildRankInfoIsNoDataPrev22_user(nullptr);
        
        Info::CWeeklyGuildRankInfoIsNoDataToday24_ptr CWeeklyGuildRankInfoIsNoDataToday24_next(nullptr);
        Info::CWeeklyGuildRankInfoIsNoDataToday24_clbk CWeeklyGuildRankInfoIsNoDataToday24_user(nullptr);
        
        Info::CWeeklyGuildRankInfoLoad26_ptr CWeeklyGuildRankInfoLoad26_next(nullptr);
        Info::CWeeklyGuildRankInfoLoad26_clbk CWeeklyGuildRankInfoLoad26_user(nullptr);
        
        Info::CWeeklyGuildRankInfoLoadOwner28_ptr CWeeklyGuildRankInfoLoadOwner28_next(nullptr);
        Info::CWeeklyGuildRankInfoLoadOwner28_clbk CWeeklyGuildRankInfoLoadOwner28_user(nullptr);
        
        Info::CWeeklyGuildRankInfoLoadPrev30_ptr CWeeklyGuildRankInfoLoadPrev30_next(nullptr);
        Info::CWeeklyGuildRankInfoLoadPrev30_clbk CWeeklyGuildRankInfoLoadPrev30_user(nullptr);
        
        Info::CWeeklyGuildRankInfoLoadToday32_ptr CWeeklyGuildRankInfoLoadToday32_next(nullptr);
        Info::CWeeklyGuildRankInfoLoadToday32_clbk CWeeklyGuildRankInfoLoadToday32_user(nullptr);
        
        Info::CWeeklyGuildRankInfoSend34_ptr CWeeklyGuildRankInfoSend34_next(nullptr);
        Info::CWeeklyGuildRankInfoSend34_clbk CWeeklyGuildRankInfoSend34_user(nullptr);
        
        Info::CWeeklyGuildRankInfoSetNoDataFlagToday36_ptr CWeeklyGuildRankInfoSetNoDataFlagToday36_next(nullptr);
        Info::CWeeklyGuildRankInfoSetNoDataFlagToday36_clbk CWeeklyGuildRankInfoSetNoDataFlagToday36_user(nullptr);
        
        Info::CWeeklyGuildRankInfoUpdate38_ptr CWeeklyGuildRankInfoUpdate38_next(nullptr);
        Info::CWeeklyGuildRankInfoUpdate38_clbk CWeeklyGuildRankInfoUpdate38_user(nullptr);
        
        Info::CWeeklyGuildRankInfoUpdateOwner40_ptr CWeeklyGuildRankInfoUpdateOwner40_next(nullptr);
        Info::CWeeklyGuildRankInfoUpdateOwner40_clbk CWeeklyGuildRankInfoUpdateOwner40_user(nullptr);
        
        
        Info::CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_ptr CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_next(nullptr);
        Info::CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_clbk CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_user(nullptr);
        
        
        void CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_user(_this, CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_next);
        };
        bool CWeeklyGuildRankInfoCheckEmpty4_wrapper(struct CWeeklyGuildRankInfo* _this, struct _pvppoint_guild_rank_info* pkInfo)
        {
           return CWeeklyGuildRankInfoCheckEmpty4_user(_this, pkInfo, CWeeklyGuildRankInfoCheckEmpty4_next);
        };
        void CWeeklyGuildRankInfoClear6_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           CWeeklyGuildRankInfoClear6_user(_this, CWeeklyGuildRankInfoClear6_next);
        };
        void CWeeklyGuildRankInfoClearOwner8_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           CWeeklyGuildRankInfoClearOwner8_user(_this, CWeeklyGuildRankInfoClearOwner8_next);
        };
        void CWeeklyGuildRankInfoClearRank10_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           CWeeklyGuildRankInfoClearRank10_user(_this, CWeeklyGuildRankInfoClearRank10_next);
        };
        int CWeeklyGuildRankInfoFind12_wrapper(struct CWeeklyGuildRankInfo* _this, char byRace, unsigned int dwGuildSerial)
        {
           return CWeeklyGuildRankInfoFind12_user(_this, byRace, dwGuildSerial, CWeeklyGuildRankInfoFind12_next);
        };
        struct CGuild* CWeeklyGuildRankInfoGetCurOwnerGuild14_wrapper(struct CWeeklyGuildRankInfo* _this, char byRace, char byNth)
        {
           return CWeeklyGuildRankInfoGetCurOwnerGuild14_user(_this, byRace, byNth, CWeeklyGuildRankInfoGetCurOwnerGuild14_next);
        };
        struct CGuild* CWeeklyGuildRankInfoGetOwnerGuild16_wrapper(struct CWeeklyGuildRankInfo* _this, char byRace, char byNth)
        {
           return CWeeklyGuildRankInfoGetOwnerGuild16_user(_this, byRace, byNth, CWeeklyGuildRankInfoGetOwnerGuild16_next);
        };
        struct CGuild* CWeeklyGuildRankInfoGetPrevOwnerGuild18_wrapper(struct CWeeklyGuildRankInfo* _this, char byRace, char byNth)
        {
           return CWeeklyGuildRankInfoGetPrevOwnerGuild18_user(_this, byRace, byNth, CWeeklyGuildRankInfoGetPrevOwnerGuild18_next);
        };
        bool CWeeklyGuildRankInfoInit20_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           return CWeeklyGuildRankInfoInit20_user(_this, CWeeklyGuildRankInfoInit20_next);
        };
        bool CWeeklyGuildRankInfoIsNoDataPrev22_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           return CWeeklyGuildRankInfoIsNoDataPrev22_user(_this, CWeeklyGuildRankInfoIsNoDataPrev22_next);
        };
        bool CWeeklyGuildRankInfoIsNoDataToday24_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           return CWeeklyGuildRankInfoIsNoDataToday24_user(_this, CWeeklyGuildRankInfoIsNoDataToday24_next);
        };
        bool CWeeklyGuildRankInfoLoad26_wrapper(struct CWeeklyGuildRankInfo* _this, struct _pvppoint_guild_rank_info* pkInfo, bool* bNoData)
        {
           return CWeeklyGuildRankInfoLoad26_user(_this, pkInfo, bNoData, CWeeklyGuildRankInfoLoad26_next);
        };
        bool CWeeklyGuildRankInfoLoadOwner28_wrapper(struct CWeeklyGuildRankInfo* _this, struct _weeklyguildrank_owner_info* pkInfo)
        {
           return CWeeklyGuildRankInfoLoadOwner28_user(_this, pkInfo, CWeeklyGuildRankInfoLoadOwner28_next);
        };
        bool CWeeklyGuildRankInfoLoadPrev30_wrapper(struct CWeeklyGuildRankInfo* _this, struct _pvppoint_guild_rank_info* pkInfo)
        {
           return CWeeklyGuildRankInfoLoadPrev30_user(_this, pkInfo, CWeeklyGuildRankInfoLoadPrev30_next);
        };
        bool CWeeklyGuildRankInfoLoadToday32_wrapper(struct CWeeklyGuildRankInfo* _this, struct _pvppoint_guild_rank_info* pkInfo)
        {
           return CWeeklyGuildRankInfoLoadToday32_user(_this, pkInfo, CWeeklyGuildRankInfoLoadToday32_next);
        };
        void CWeeklyGuildRankInfoSend34_wrapper(struct CWeeklyGuildRankInfo* _this, unsigned int dwVer, int n, char byTabRace, char bySelfRace, unsigned int dwGuildSerial)
        {
           CWeeklyGuildRankInfoSend34_user(_this, dwVer, n, byTabRace, bySelfRace, dwGuildSerial, CWeeklyGuildRankInfoSend34_next);
        };
        void CWeeklyGuildRankInfoSetNoDataFlagToday36_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           CWeeklyGuildRankInfoSetNoDataFlagToday36_user(_this, CWeeklyGuildRankInfoSetNoDataFlagToday36_next);
        };
        bool CWeeklyGuildRankInfoUpdate38_wrapper(struct CWeeklyGuildRankInfo* _this, struct _pvppoint_guild_rank_info* pkInfo)
        {
           return CWeeklyGuildRankInfoUpdate38_user(_this, pkInfo, CWeeklyGuildRankInfoUpdate38_next);
        };
        bool CWeeklyGuildRankInfoUpdateOwner40_wrapper(struct CWeeklyGuildRankInfo* _this, struct _weeklyguildrank_owner_info* pkInfo)
        {
           return CWeeklyGuildRankInfoUpdateOwner40_user(_this, pkInfo, CWeeklyGuildRankInfoUpdateOwner40_next);
        };
        
        void CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_wrapper(struct CWeeklyGuildRankInfo* _this)
        {
           CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_user(_this, CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_next);
        };
        
        ::std::array<hook_record, 21> CWeeklyGuildRankInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1402ca640L,
                (LPVOID *)&CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_user,
                (LPVOID *)&CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoctor_CWeeklyGuildRankInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::ctor_CWeeklyGuildRankInfo)
            },
            _hook_record {
                (LPVOID)0x1402cb7d0L,
                (LPVOID *)&CWeeklyGuildRankInfoCheckEmpty4_user,
                (LPVOID *)&CWeeklyGuildRankInfoCheckEmpty4_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoCheckEmpty4_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _pvppoint_guild_rank_info*))&CWeeklyGuildRankInfo::CheckEmpty)
            },
            _hook_record {
                (LPVOID)0x1402cf820L,
                (LPVOID *)&CWeeklyGuildRankInfoClear6_user,
                (LPVOID *)&CWeeklyGuildRankInfoClear6_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoClear6_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::Clear)
            },
            _hook_record {
                (LPVOID)0x1402caf30L,
                (LPVOID *)&CWeeklyGuildRankInfoClearOwner8_user,
                (LPVOID *)&CWeeklyGuildRankInfoClearOwner8_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoClearOwner8_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::ClearOwner)
            },
            _hook_record {
                (LPVOID)0x1402caac0L,
                (LPVOID *)&CWeeklyGuildRankInfoClearRank10_user,
                (LPVOID *)&CWeeklyGuildRankInfoClearRank10_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoClearRank10_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::ClearRank)
            },
            _hook_record {
                (LPVOID)0x1402cb700L,
                (LPVOID *)&CWeeklyGuildRankInfoFind12_user,
                (LPVOID *)&CWeeklyGuildRankInfoFind12_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoFind12_wrapper),
                (LPVOID)cast_pointer_function((int(CWeeklyGuildRankInfo::*)(char, unsigned int))&CWeeklyGuildRankInfo::Find)
            },
            _hook_record {
                (LPVOID)0x1402cb630L,
                (LPVOID *)&CWeeklyGuildRankInfoGetCurOwnerGuild14_user,
                (LPVOID *)&CWeeklyGuildRankInfoGetCurOwnerGuild14_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoGetCurOwnerGuild14_wrapper),
                (LPVOID)cast_pointer_function((struct CGuild*(CWeeklyGuildRankInfo::*)(char, char))&CWeeklyGuildRankInfo::GetCurOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x1402cbd80L,
                (LPVOID *)&CWeeklyGuildRankInfoGetOwnerGuild16_user,
                (LPVOID *)&CWeeklyGuildRankInfoGetOwnerGuild16_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoGetOwnerGuild16_wrapper),
                (LPVOID)cast_pointer_function((struct CGuild*(CWeeklyGuildRankInfo::*)(char, char))&CWeeklyGuildRankInfo::GetOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x1402cb560L,
                (LPVOID *)&CWeeklyGuildRankInfoGetPrevOwnerGuild18_user,
                (LPVOID *)&CWeeklyGuildRankInfoGetPrevOwnerGuild18_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoGetPrevOwnerGuild18_wrapper),
                (LPVOID)cast_pointer_function((struct CGuild*(CWeeklyGuildRankInfo::*)(char, char))&CWeeklyGuildRankInfo::GetPrevOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x1402ca8e0L,
                (LPVOID *)&CWeeklyGuildRankInfoInit20_user,
                (LPVOID *)&CWeeklyGuildRankInfoInit20_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoInit20_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::Init)
            },
            _hook_record {
                (LPVOID)0x1402cfd60L,
                (LPVOID *)&CWeeklyGuildRankInfoIsNoDataPrev22_user,
                (LPVOID *)&CWeeklyGuildRankInfoIsNoDataPrev22_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoIsNoDataPrev22_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::IsNoDataPrev)
            },
            _hook_record {
                (LPVOID)0x1402cfb90L,
                (LPVOID *)&CWeeklyGuildRankInfoIsNoDataToday24_user,
                (LPVOID *)&CWeeklyGuildRankInfoIsNoDataToday24_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoIsNoDataToday24_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::IsNoDataToday)
            },
            _hook_record {
                (LPVOID)0x1402cb890L,
                (LPVOID *)&CWeeklyGuildRankInfoLoad26_user,
                (LPVOID *)&CWeeklyGuildRankInfoLoad26_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoLoad26_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _pvppoint_guild_rank_info*, bool*))&CWeeklyGuildRankInfo::Load)
            },
            _hook_record {
                (LPVOID)0x1402cac50L,
                (LPVOID *)&CWeeklyGuildRankInfoLoadOwner28_user,
                (LPVOID *)&CWeeklyGuildRankInfoLoadOwner28_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoLoadOwner28_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _weeklyguildrank_owner_info*))&CWeeklyGuildRankInfo::LoadOwner)
            },
            _hook_record {
                (LPVOID)0x1402cfd80L,
                (LPVOID *)&CWeeklyGuildRankInfoLoadPrev30_user,
                (LPVOID *)&CWeeklyGuildRankInfoLoadPrev30_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoLoadPrev30_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _pvppoint_guild_rank_info*))&CWeeklyGuildRankInfo::LoadPrev)
            },
            _hook_record {
                (LPVOID)0x1402cfb30L,
                (LPVOID *)&CWeeklyGuildRankInfoLoadToday32_user,
                (LPVOID *)&CWeeklyGuildRankInfoLoadToday32_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoLoadToday32_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _pvppoint_guild_rank_info*))&CWeeklyGuildRankInfo::LoadToday)
            },
            _hook_record {
                (LPVOID)0x1402cafd0L,
                (LPVOID *)&CWeeklyGuildRankInfoSend34_user,
                (LPVOID *)&CWeeklyGuildRankInfoSend34_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoSend34_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)(unsigned int, int, char, char, unsigned int))&CWeeklyGuildRankInfo::Send)
            },
            _hook_record {
                (LPVOID)0x1402cfb10L,
                (LPVOID *)&CWeeklyGuildRankInfoSetNoDataFlagToday36_user,
                (LPVOID *)&CWeeklyGuildRankInfoSetNoDataFlagToday36_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoSetNoDataFlagToday36_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::SetNoDataFlagToday)
            },
            _hook_record {
                (LPVOID)0x1402cfbb0L,
                (LPVOID *)&CWeeklyGuildRankInfoUpdate38_user,
                (LPVOID *)&CWeeklyGuildRankInfoUpdate38_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoUpdate38_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _pvppoint_guild_rank_info*))&CWeeklyGuildRankInfo::Update)
            },
            _hook_record {
                (LPVOID)0x1402cfcf0L,
                (LPVOID *)&CWeeklyGuildRankInfoUpdateOwner40_user,
                (LPVOID *)&CWeeklyGuildRankInfoUpdateOwner40_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfoUpdateOwner40_wrapper),
                (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankInfo::*)(struct _weeklyguildrank_owner_info*))&CWeeklyGuildRankInfo::UpdateOwner)
            },
            _hook_record {
                (LPVOID)0x1402ca720L,
                (LPVOID *)&CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_user,
                (LPVOID *)&CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankInfodtor_CWeeklyGuildRankInfo42_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankInfo::*)())&CWeeklyGuildRankInfo::dtor_CWeeklyGuildRankInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
